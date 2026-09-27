# `CmbVShader.shbin` — texture-coordinator mapping methods and the two shader bodies

## Scope

Every CMB material carries three texture coordinators, each with a `mappingMethod` byte. This
document recovers, from the retail `/CmbVShader.shbin` program itself, (1) which of the shader's two
vertex bodies a draw executes, and (2) what each coordinator computes for mapping method
`0/1/2`, `3` (CameraSphereEnvMap) and `4` (ProjectionMap).

It exists because the port previously treated mapping method as "3 = sphere, everything else =
plain UV". That is half right: method 3 was implemented, method 4 was documented as "not
emulated and falls back to plain UV", and nothing recorded that the mapping switch only exists in
ONE of the shader's two bodies, nor which draws reach it. All of that is below, cited by code-word
index, with §8 recording what the oracle measured about it.

Reproduce (the extractor lives in the Zelda3D repo, not here):

```
python3 -c "import sys; sys.path.insert(0,'tools'); from ctr_romfs import CtrRom; \
  open('scratch/CmbVShader.shbin','wb').write(CtrRom(ROM).read(CtrRom(ROM).get('/CmbVShader.shbin')))"
python3 tools/shbin_disasm.py scratch/CmbVShader.shbin --range 0 310
```

## 0. The instrument had to be fixed first

`tools/shbin_disasm.py` decoded PICA opcode `0x2E/0x2F` (`cmp`) as a two-argument arithmetic
op, and printed flow control as raw `num= / dest_off= / refx= / refy=` fields with no branch
ranges. Both were wrong, and both hid the structure that matters here:

* `cmp` is Compare-form arithmetic. It writes `conditional_code[0]` and `[1]` — a per-component
  comparison with its own opcodes — and never writes a destination register. Decoding it as
  `add`/`mul`-shaped turned the mapping switch into three meaningless lines.
* A flow-control instruction has **two sibling blocks**, not one: `then` is
  `[pc+1, dest_offset)` and `else` is `[dest_offset, dest_offset + num_instructions)`, and both
  fall through to `dest_offset + num_instructions`. (The `refx`/`refy` bits are *equality*
  operands compared against `conditional_code`, not "this component participates" flags.)

Both facts are confirmed twice, independently of this tool, in Azahar's two PICA vertex
engines: `Azahar/src/video_core/shader/shader_interpreter.cpp` (`do_if` at line 54,
`evaluate_condition` at line 85) and `Azahar/src/video_core/shader/shader_jit_x64_compiler.cpp`
(`Compile_IF` at line 778, `Compile_EvaluateCondition` at line 401).

**`ifc` never reads a bool uniform.** `evaluate_condition` / `Compile_EvaluateCondition` combine
`conditional_code[0..1]` with `op` and `refx`/`refy` only; the `bool_uniform_id` field is
consumed by `ifu` (`Compile_UniformCondition`) and by `callu`/`jmpu` alone. Several `ifc`s in this
program carry a plausible-looking `bool=` field (`b10 IsFragmentLighting`, `b7 HasTexcoord1`,
`b14`, `b5`, `b9`) that is **dead**, and the `ifc` at word 2 is the clearest case: it looks like
`ShaderMode.w == 0 && IsFragmentLighting` and is really just `ShaderMode.w == 0`. Attributing a
branch to a named uniform because that field is populated is the second way this shader was
misread; only `ifu` lines carry a live bool.

The tool now prints `cmp` as its two comparisons and prints the two block ranges. §6 records the
one conclusion the old decode got wrong, because it is a trap for the next reader.

## 1. Constants and registers used here

| register | value / name |
| --- | --- |
| `c93` | `(0, 1, 2, 3)` — mapping-method constants AND the coordinator-slot selector values |
| `c94` | `(0.125, 0.00390625, 0.5, 0.01)` — only `.z` = 0.5 is used here |
| `c95` | `(3, 4, 5, 32)` — `xy` = the two interesting mapping methods, `.w` = the ±32 step |
| `c89` | `TexCoordSlot.xyz` (0/1/2 → `aTexCoord0/1/2`), `ShaderMode.w` |
| `c90` / `c91` | `VertexAttributeScale0` (position/normal) / `VertexAttributeScale1` (texcoords) |
| `c10..c13`, `c14..c16`, `c17..c19` | `TexMtx0`, `TexMtx1`, `TexMtx2` — rows 0,1,2 of each 4x3 matrix |
| `c76..c79` | `uInvView` |
| `b1..b10` | `IsTexture`, `IsSkinning`, `IsSmoothSkinning`, `IsOrthoStereo`, `HasColor`, `HasTexcoord0`, `HasTexcoord1`, `HasTexcoord2`, `IsVertexLighting`, `IsFragmentLighting` |

`r14` is the normalized **view-space** normal (`uModelView` rows 0-2 applied to the model normal,
words 44-54/59-61) and `r15` the view-space position (words 47-58). These two are the inputs the
non-plain mapping methods consume.

## 2. Entry: which of the two bodies a draw runs

The DVLE is `main=0 endmain=14`, so words 0-13 are the entry point (it ends at the `end` on word
12) and everything from word 14 is a **subroutine library reached by `call`**. Words 0-13:

```
0  mov    r0.xy, c89.wwww                 ; r0 = ShaderMode.w
1  cmp    cc[0] = (c93.x == r0.x); cc[1] = (c93.y == r0.y)
2  ifc    (cc[0]==1)                      -> then 3..4  | else 5..10 -> 11
3    call  dest=14  num=199                ; body@14, words 14..212
5  ifc    (cc[1]==1)                      -> then 6..7  | else 8..9  -> 10
6    call  dest=14  num=199                ; body@14 again
8    call  dest=214 num=51                 ; body@214, words 214..264
12 end
```

So exactly one body runs per vertex, and the selection is the single `ShaderMode.w` uniform:

| `ShaderMode.w` | body | texture-coordinate code |
| --- | --- | --- |
| 0 | `body@14` (14..212) | **mapping switch** at 122-202 |
| 1 | `body@14` (14..212) | **mapping switch** at 122-202 |
| anything else | `body@214` (214..264) | plain only, at 243-254 |

(`c93` is `(0,1,2,3)`, so the two `cmp` components are literally "mode is 0" and "mode is 1";
modes 0 and 1 share the mapping-capable body, which suggests the mode distinguishes the *fragment*
side and the vertex side only needs "not the plain path". That the two `ifc`s at words 2 and 5
carry dead `b10`/`b7` fields — `IsFragmentLighting` and `HasTexcoord1` — is what makes them look
like a two-condition test; see §0.)

`body@214` writes `o2/o3/o4` with `o2.w = 0`; `body@14` writes them with `o2.w = 1` (words
206-212 vs 258-264). The two bodies are **mutually exclusive** — they are two `call` targets from
the same entry point, not two fall-through blocks.

**The mapping switch only exists for `ShaderMode.w` 0 and 1.** A material with a non-plain
mapping method that takes `body@214` gets a plain UV regardless.

## 3. Subroutines

`sub@266` (`call num=9`, words 266-274) — per-bone skinning accumulate. Bone index in `r1.xy`,
bone weight in `r1.w`; `uMatrixPallet` `c20..c22` transforms `r15` (position, `dp4`) and `r14`
(normal, `dp3`), accumulated into `r8`/`r11`.

`sub@276` (`call num=18`, words 276-293) — coordinator source select and scale. The two
`ifc`s are Compare-form and carry no bool; the `ifu`s inside them are the live `HasTexcoord*`
tests:

```
276 cmp  cc = (c93.xy == r1.xy)          ; r1.xy = TexCoordSlot[slot]
277 mov  r10, r15                        ; default: r10 = view position (unused by the plain path)
278 ifc  (cc[0]==1 && cc[1]==0)          -> 279..282 | else 283..292 -> 293
279   ifu b6 (HasTexcoord0) -> 280: r10.xy = c91.x * v3.xy ; r10.zw = (0,1)
283 ifc  (cc[0]==0 && cc[1]==1)          -> 284..287 | else 288..291 -> 292
284   ifu b7 (HasTexcoord1) -> 285: r10.xy = c91.y * v4.xy ; r10.zw = (0,1)
288 ifu  b8 (HasTexcoord2)            -> 289: r10.xy = c91.z * v5.xy ; r10.zw = (0,1)
```

`sub@295` (`call num=4`, words 295-298) — the CameraSphereEnvMap source:

```
r10 = viewNormal * (0.5, 0.5, 0, 0) + (0.5, 0.5, 0, 0);  r10.zw = (1, 1)
```

i.e. `uv = 0.5 * n.xy + 0.5` with `n` the normalized **view-space** normal. This is the
`title_logo_actor.md` §6.7 "helper words 295-296" observation, now with its exact form.

`sub@300` (`call num=9`, words 300-308) — a branch-free signed→unsigned component step,
reached only from coordinator 1's mapping-4 arm (words 169 and 173):

```
r4.x = (r4.x == 0) ? r4.x - 32 : r4.x + 32
r4.y = (r4.y == 0) ? r4.y - 32 : r4.y + 32
```

## 4. The mapping switch (words 122-202), per coordinator

One copy per coordinator `k` (0 at 122-144, 1 at 145-179, 2 at 180-202). Writing `m` for
`TexMappingMethod[k]` (c92 `.xyz`):

```
mov   r0.xy = c92[k].xxxx
cmp   cc[0] = (3 == m);  cc[1] = (4 == m)          ; c95.xy = (3, 4)
ifc   (cc[0]==0 && cc[1]==0)                        ; m not in {3,4}
        coord = sub@276(TexCoordSlot[k])
        uv    = (TexMtx_k row0 . coord, TexMtx_k row1 . coord);  z = w = 0
else    ifc (cc[0]==1 && cc[1]==0)                 ; m == 3
        coord = sub@295()
        uv    = (TexMtx_k row0 . coord, TexMtx_k row1 . coord);  z = w = 0
      else                                        ; m == 4
        p = (uInvView c76..c78 . r15, 1)           ; view position back out to world space
        t = (TexMtx_k row0 . p, row1 . p, row2 . p)
```

`row2` exists only in the mapping-4 arm: the plain and sphere arms compute rows 0 and 1 and leave
`z = w = 0`. The three coordinators then differ in how `t.z` is consumed:

| coordinator | mapping-4 arm | sampled UV | `o` output |
| --- | --- | --- | --- |
| 0 | 135-143 | `t.xy + 0.5 * t.z`, with `o2.z = t.z` | `o2 = (uv, t.z, 1)` |
| 1 | 156-177 | `t.xy + 0.5`, after the `sub@300` step below | `o3 = (uv, 1, 1)` |
| 2 | 191-200 | `t.xy * rcp(t.z) + 0.5` | `o4 = (uv, 1, 1)` |

Coordinator 0 is the only one that carries `t.z` out of the vertex stage: the DVLE declares
`o2` as `TEXCOORD0.xy` plus a third unnamed component, and that third component is the only
consumer-visible `w` for a texture coordinate (Azahar reads it as `texcoord0_w` and uses it for
`textureProj` when the PICA texture type is projective). `+0.5 * t.z` is exactly the
"bias-then-divide" form of that: a downstream `uv / w` yields `t.xy / t.z + 0.5`. Coordinators 1
and 2 have no `w` output, so the same author emitted `+0.5` (coordinator 1) or an explicit
`rcp` + `+0.5` (coordinator 2) instead. The three arms are the same projective formula written
three ways, each in the form its own output slot allows.

Coordinator 1's extra step (words 156-175). Both `ifc`s here are Compare-form; the `bool14` and
`IsFragmentLighting` fields they carry are dead (§0), so the step is gated on sign only:

```
s    = dp3(uInvView, viewNormal)
zPre = dp3(TexMtx1 row2, s)
p    = (uInvView . viewPos, 1);  t = TexMtx1 rows 0,1,2 . p
if   (0 >= zPre)              -> sub@300
else if (0 < t.z)             -> sub@300
t.xy += 0.5
```

So the step runs for every vertex except those where `zPre > 0` and `t.z <= 0` simultaneously.
**The host cannot express it at all** — it is a per-vertex component transform, not a matrix, and
it is applied to the *already transformed* coordinate, not to the source attribute. For
coordinator 1 the honest current target is `t.xy + 0.5` with the step omitted, recorded as an
approximation, not as parity.

## 5. Retail reach (OoT3D, 1,997 CMBs / 11,172 materials)

`python3 tools/tev_corpus_survey.py`, whose "texture units consumed by combiners" section counts
the coordinator mapping byte (material `+0x58 + 0x18*t + 2`) of every texture unit a combiner
actually samples. That is the population that can be observed, so it is the population tabulated
here; counting all 11,172 materials instead (including units no combiner samples) adds 2 to
`tex1 coordmap=4` (368) and 8 to `tex1 coordmap=3` (474).

| coordinator | method 0 | method 1 (UV) | method 3 (sphere) | method 4 (projection) |
| --- | --- | --- | --- | --- |
| 0 | 1 | 10,960 | 31 | 0 |
| 1 | 0 | 790 | 466 | 366 |
| 2 | 0 | 229 | 21 | 0 |

A unit that no combiner samples is not counted at all, so a zero here means "no consumed unit
declares this method", not "no material has it". Method 4 appears **only** on coordinator 1.
Method 3 appears on all three, 518 times over the consumed population. Combined with §2, a
mapping-4 or mapping-3 material is only actually mapped when it also takes `body@14`; otherwise it
is plain.

### Majora's Mask corroborates the same structure

MM3D ships its models in a different container (`/actors/*.gar[.lzs]`, GAR2 with on-demand LzS
inflation) but the same CMB material layout, so the same survey runs over it
(`tools/cmb_corpus.py` owns which container each game uses).

**RE-MEASURED 2026-09-27 on the corrected population.** These figures were originally taken over
MM3D's 1,448 *actor* CMBs / 2,968 materials, because `cmb_corpus` asserted MM3D shipped no scene
CMBs. That assertion was half-true and the conclusion was wrong: MM3D ships 424 `/scenes/*.zsi` files
of which **241 carry a valid inline CMB** (183 do not, as 114 of OoT3D's 724 do not). `iter_mm3d_cmbs`
now walks `/scenes/*.gar` members and the inline scene CMBs, so both games share one population shape
and every number below is on the full set. Over MM3D's **1,704 files / 6,791 materials**, counting
only the methods that reach a pixel:

| coordinator / method | consumed | declared-only |
| --- | --- | --- |
| tex0 CameraSphereEnvMap | 44 | 0 |
| tex1 CameraSphereEnvMap | 1121 | 23 |
| tex1 ProjectionMap | 163 | 3 |
| tex2 CameraSphereEnvMap | 105 | 0 |

Two corrections fall out of the re-measurement, and both matter:

- **Method 4 is on coordinator 1 and nowhere else — still true, and now larger.** 163 MM3D materials
  rather than 70; 366 in OoT3D; **529 total** unimplemented ProjectionMap materials across the two
  games.
- **Coordinator-2 mapping exists in BOTH games** (105 MM3D, 21 OoT3D), which the actor-only population
  showed as zero. The host already implements it: `uTevCtl[2] = coord2Mapping`
  (`zelda3d_sdl3gpu_pass.cpp:804`) and the `uTevCtl.z == 3` sphere-mapped branch
  (`zelda3d_sdl3gpu_shaders.cpp:227`). That is newly measured reach of an existing mechanism, not a
  new gap — the same check run on the corrected OoT3D population agrees.
| tex2 CameraSphereEnvMap | 84 | 0 |

A second, independent retail population puts method 4 on coordinator 1 and nowhere else, exactly as
OoT3D does. That is what makes §9's "no retail material uses method 4 on coordinator 0" a fact
about these games rather than an accident of one ROM, and it is why the projective arm's missing
`w` divide is not a gap anyone is missing pixels over.

The lighting split is the notable difference between the games. OoT3D's mapped materials are almost
entirely **vertex**-lit (409 of 423 for the tex1 sphere family, 354 of 354 for tex1 projection, and
zero fragment-only in either); MM3D's are almost entirely **fragment**-lit (488 of 508 and 57 of
60). A host rule that infers "mapped" from "vertex-lit" would therefore work on OoT3D and break on
MM3D, which is a second reason the lit-gate in §8 must stay dropped.

## 6. The conclusion the old instrument produced, and why it is wrong

Decoding `body@14` and `body@214` as straight-line code makes the mapping switch look dead: for
`IsTexture`, the `ifu` on word 121 runs 122-202, `o2/o3/o4` are written at 206-212, and a second
`ifu` on word 242 then runs 243-254 and overwrites `o2/o3/o4` at 258-264. That reading says
"the mapping switch is discarded, every coordinator is plain, and the ported sphere path is
wrong".

It is wrong, and the `endmain` field is what shows it: `main=0 endmain=14` means words 0-13 are
the entry point ending in the `end` on word 12, and words 14 and 214 are `call` targets, not
fall-through continuations. Nothing reaches 214 except the `call` on word 8.

A second trap sits next to it: several `ifc`s in this program carry a populated but **dead**
`bool=` field (`b10`, `b7`, `b14`, `b5`, `b9`). The entry-point test at word 2 and
coordinator 1's `sub@300` gate at word 168 both read as a named-uniform test and are not. Only
`ifu` reads a bool. See §0.

## 7. What this does and does not establish

Established, from the retail program:

* the two-body structure and the exact `ShaderMode.w` selection between them;
* the mapping-method branch table for all three coordinators, including the sphere source
  (`0.5 * viewNormal.xy + 0.5`) and the three projective forms;
* that `o2`'s third component is the `w` that turns coordinator 0's `+0.5 * t.z` into a divide;
* that the mapping switch does not exist at all for `ShaderMode.w >= 2`.

Not established here, and each needs its own evidence:

* **Which retail materials actually carry `ShaderMode.w` 0 or 1.** See §8 for what one real
  capture already answers and what it leaves open.
* **The PICA texture-0 type on a method-4 draw.** §9 gives the register, the field map, and the
  one case the title can already answer; the method-4 value needs a gameplay draw.
* **Whether `TexCoordSlot` is ever non-zero per coordinator in retail data** — the host already
  carries `coord*_source` through the same `sub@276` path, but the corpus has not been checked for
  a coordinator whose slot differs from its index.

## 8. What the oracle says: `ShaderMode.w` is NOT "lit"

The shader suggests a tempting shortcut: `body@14` is the only body with an `IsVertexLighting`
(b9) and an `IsFragmentLighting` (b10) block, while `body@214` has neither and seeds `PRIMARY`
from the flat `c8 MatDiffuseColor`. So `ShaderMode.w ∈ {0,1}` "looks like" *lit*, and gating the
host's mapping on the two lighting bytes the host already parses would then need no new transport.

**A real capture refutes that.** The oracle's `vsuni_log` prints `ShaderMode.w` as
`texSlotMap.w` on the same line as `vLit`/`fLit`; `tools/cmb_shader_mode_correlation.py` reads the
correlation off a capture. From the cached title frame (cs 1093, oracle frame 2010, 102 draws):

| `ShaderMode.w` | draws | lit | unlit |
| --- | --- | --- | --- |
| 0 | 89 | 85 | **4** |
| 2 | 13 | 0 | 13 |

and:

* all 38 draws sampling a coordinator with mapping method 3 or 4 are at `ShaderMode.w = 0`, so
  every mapped draw really did reach the mapping switch;
* the 13 mode-2 draws bind no lights at all (`dif0 = amb0 = 0`, `dir0 = dir1 = dir2 = (0,0,-1,0)`,
  all light colours zero) and draw 0 carries an orthographic projection — they are the 2D overlay
  layer, which the host already renders through its own quad path rather than the model path;
* `TexCoordSlot.xyz` is `(0,0,0)` for all 102 title draws.

So mode 0 is a superset of lit, and the mode-0 population is the model/CMB draw path while mode 2
is the 2D overlay path. The host's rule — apply the mapping unconditionally on the model path,
and never on the overlay path — is what the oracle actually does. **Do not add a lit-ness gate**;
it was written, measured against this capture, and dropped. The test that keeps it dropped is
`tools/test_cmb_shader_mode_correlation.py::test_real_title_capture_refutes_the_lit_gate`.

Blast radius if it ever were needed, from `tools/cmb_texcoord_mapping_survey.py` (units a combiner
actually samples, 1,997 CMBs / 11,172 materials):

| coordinator / method | lit | unlit |
| --- | --- | --- |
| tex0 CameraSphereEnvMap | 15 | 16 |
| tex1 CameraSphereEnvMap | 423 | 43 |
| tex1 ProjectionMap | 354 | 12 |
| tex2 CameraSphereEnvMap | 21 | 0 |

## 9. Reading the PICA texture-0 type, for the method-4 divide

Whether coordinator 0's `t.xy + 0.5 * t.z` is a real projective divide depends on the PICA
texture-0 type, which the game writes and the shader does not. This is measurable from a cached
command list with no new instrumentation, because `TextureConfig` is a plain register block:

| PICA register | field |
| --- | --- |
| `0x080` | `texturing.main_config` — `texture{0,1,2}_enable`, `texture2_use_coord1` |
| `0x081..0x085` | `TextureConfig` unit 0: border colour, height/width, **filter/wrap/type**, LOD, address |
| `0x083` bits 28-30 | `type` — `0 Texture2D`, `1 TextureCube`, `2 Shadow2D`, **`3 Projection2D`**, `4 ShadowCube`, `5 Disabled` |
| `0x08f` | `fragment_lighting_enable` |
| `0x091`, `0x096` | `TextureConfig` unit 1, its format |

(`Azahar/src/video_core/pica/regs_internal.h`'s `ASSERT_REG_POSITION` lines fix these; the field
order inside `TextureConfig` is `regs_texturing.h`. `tools/pica_texturing_registers.py` owns the
map and `tools/test_pica_texturing_registers.py` checks it against the capture.)

The title's mapped draws already answer their own case: for title draw 77 (wordmark,
`CameraSphereEnvMap` on coordinator 0) register `0x083` is `0x00002206`, so `type = 0`
(`Texture2D`), `mag = min = Linear`, `wrapS = wrapT = Repeat`. That is the only self-consistent
answer, since the sphere arm leaves `o2.z = 0` and a `Projection2D` divide would be by zero.

**Still open**: the same read on a method-4 draw, and the value of `uInvView` (c76..c78) that the
mapping-4 arms multiply the view position by. The title contains no method-4 material — every one of
them (`zelda_bw` torch, `zelda_bb` bubble, the `l_j_*` Jabu set, `dk_trap`, …) is a gameplay actor, and
MM3D's 70 are too — so both need a gameplay capture or the game's material-state builder. Note the
arms are **not** interchangeable: coordinator 1 has no `w` output, so it never divides regardless of
the type; only coordinator 0 would, and §5's second retail population confirms no material uses
method 4 there.

## 10. The whole uniform array is now readable offline

`uInvView` (c76..c78) was the last input the mapping-4 arms needed, and it is not in the oracle's
`vsuni_log` line. It turns out no new instrumentation is needed at all: the uniform writes are
*register writes* inside the command list, and `tools/pica_shader_uniforms.py` replays them the way
`ShaderSetup::WriteUniformFloatReg` does — `0x2c0` sets the target index (bits 0-6) and the transfer
format (bit 31), `0x2c1..0x2c8` append to a queue that decodes into `uniforms.f[index]` when full
(3 words in float24 mode, 4 in float32) and then auto-increments, with an incomplete tail discarded
because `PackedAttribute::Get` resets rather than pads.

Validated against the oracle's own logged uniform state for one cached title draw, all 15 overlapping
uniforms agreeing (`matDif` c8, `matAmb` c9, `uModelView` c4..c7, `TexMtx0/1` rows, `TexCoordSlot`/
`ShaderMode` c89, `VertexAttributeScale0` c90, `TexMappingMethod` c92). Two unrelated capture paths,
so agreement is evidence about the decode. `tools/test_pica_shader_uniforms.py` is that check.

What the title draw then shows, for the mapping arms specifically:

* `uInvView` (c76..c78) is the **identity** for every title draw, while `uModelView` (c4..c7) is
  identity in its first three rows and carries the title overlay's translation in row 3. That is
  consistent with `uInvView` being the inverse of the view part, which would make the shader's
  `p = uInvView . viewPos` the *model*-space position — the host's own `aPosition`, so the mapping-4
  arm would need no new uniform. One identity-matrix draw cannot prove the rule, so this is the next
  measurement, and the decoder is what makes it one command away.
* `TexMtx` row 2 is `(0, 0, 1, 0)` for all three coordinators in the capture, so the row the host has
  never carried is a constant rather than authored data.
