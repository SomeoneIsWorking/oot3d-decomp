# OoT3D CMB fixed-function fragment lighting

## Scope

CMB materials declare two independent lighting capabilities:

- byte `+0x01` selects the software vertex-lighting branch in `CmbVShader.shbin`;
- byte `+0x00` is consumed by the recovered *candidate* PICA fixed-function-lighting method, whose
  outputs would reach TEV as `FRAGMENT_PRIMARY_COLOR_DMP` (`0x6210`) and
  `FRAGMENT_SECONDARY_COLOR_DMP` (`0x6211`).

The retail renderer's activation of byte `+0x00` is a separate question. This document tracks that
RE frontier without conflating an authored asset flag with a live PICA state.

## Candidate CPU light/material setup — `FUN_003fa5d0`

OoT3D VA `0x003fa5d0`, 1,608 bytes, is decompiled at
`build/decomp/003fa5d0.c`. It returns immediately when material byte `+0x00` is clear. When set,
it reads five authored RGBA8 material colors:

| CMB material offset | role |
|---|---|
| `+0xA0` | emission |
| `+0xA4` | ambient |
| `+0xA8` | diffuse |
| `+0xAC` | specular 0 |
| `+0xB0` | specular 1 |

It then visits exactly three `0x60`-byte runtime light records. A slot participates only when its
enable field at effective light-record offset `+0xE4` is float `1.0`. For each enabled slot the
function emits a PICA light record with:

- float16-packed negated direction;
- `material.diffuse * light.diffuse`;
- `material.ambient * light.ambient`;
- `material.specular0 * light.specular0`;
- `material.specular1 * light.specular1`.

The RGB products clamp to `[0,1]` and are quantized to the PICA light-color payload before
`FUN_004093f8` appends the three records to the GX command list. This identifies the material
transport and per-light products exactly. Lighting configuration, LUT input/scale registers, LUT
contents, global ambient/emission handling, and the normal-quaternion/view varyings remain the
enabled-path frontier.

## Exact disabled branch

When fixed-function lighting is disabled, PICA supplies zero for both fragment colors. Azahar's
oracle implementation initializes `primary_fragment_color` and `secondary_fragment_color` to
`(0,0,0,0)` and only replaces them through `ComputeFragmentsColors` when
`regs.lighting.disable == false` (`renderer_software/sw_rasterizer.cpp`). This is materially
different from vertex `PRIMARY`; the three names are separate TEV inputs.

The host generic TEV evaluator previously aliased `FRAGMENT_PRIMARY` to vertex `PRIMARY` and used
opaque black for `FRAGMENT_SECONDARY`. The port now carries material byte `+0x00` through the draw
group and UBO, passes fragment sources separately into the shared TEV evaluator, and supplies the
exact zero/zero result when the flag is clear. The enabled branch deliberately retains its old
primary approximation until a live fixed-function caller is grounded.

## Retail corpus inventory (offline, 2026-08-30)

`tools/cmb_fragment_lighting_survey.py` joins the material flag/colors with only the TEV source
slots consumed by each operation. Cached output is
`scratch/cmb_fragment_lighting_corpus.txt`; the scan never starts the oracle.

The companion raw-texture oracle probe caches only completed source-identity observations, including
their reproducible no-match diagnostics. Harness build, boot, and protocol failures are deliberately
not cache results: they contain no oracle data and must be repaired before the same observation is
attempted.

Across 1,997 CMBs / 11,172 materials, with zero parse failures:

- 205 materials set `IsFragmentLighting`;
- 197 enabled materials consume `FRAGMENT_PRIMARY`;
- 69 enabled materials consume `FRAGMENT_SECONDARY`;
- eight enabled materials do not consume either result;
- five materials consume a fragment source while deliberately leaving lighting disabled.

The five disabled consumers are Goron rock, Spirit Temple lift, Dark Link, Dinolfos material 1,
and one `spot10_2` scene material. Dark Link is the retail close-test: material 0 has byte `+0x00`
clear and stage 0 consumes `FRAGMENT_PRIMARY`, proving that source identity cannot be inferred from
TEV use or replaced by vertex color.

## Candidate-class reachability and cache-owned negative control (2026-08-31)

`FUN_003fa5d0` belongs to the `CmbRenderer.cpp` vtable at `0x004EBD98`:

| vtable offset | target |
|---:|---|
| `+0x10` | `FUN_003f9b5c` material setup, which dispatches software vertex lighting at `+0x18` |
| `+0x14` | `FUN_003fa5d0`, the candidate fixed-function-light setup |
| `+0x18` | `FUN_003fa34c`, the configuration-template path |

Static checks found no direct ARM or Thumb branch into the constructor or candidate method, and the
only literal references to this vtable are the class's own constructor/destructor pools. RomFS has
no CRO/CRS module that could supply an external caller. This library class is therefore an
**unproven candidate**, not proof that every CMB byte `+0x00` reaches live PICA state.

The cache-owned `kokiri-save-overlay` control is stored through
`tools/cmb_fragment_lighting_oracle_probe.py`. Its 99 retail draws all reported `picaLit=0`. The
first cached run watched `FUN_003fa5d0` and recorded zero hits; the independently keyed v8 capture
watched the earlier `FUN_003f9b5c` material-setup slot and also recorded zero hits. Therefore this
fixture does not invoke the `+0x10` material-setup route or its optional fixed-function branch. It
does not test the independent `+0x18` configuration-template route. Its screenshot proves the fixture is the Start-button Save overlay, not the
pause-menu Link model, so this is a bounded negative for that frame only. The PICA logger is trusted:
each cached run executes its one-shot self-test first, logging `picaLit=1` for exactly one diagnostic
draw and restoring the register before the next draw. Both raw logs are cache artifacts under the
complete ROM/savestate/patch/texture-pack key.

This falsifies the earlier claim that the Lon Lon/Navi fixture established a globally enabled path.
It does **not** prove PICA lighting is absent from every retail scene or authorize changing host
fragment colors to zero for enabled materials.

The same cache-owned PICA probe now has no-input gameplay fixtures, selected from the entrance table
rather than by input scripting. Ordinary Kokiri gameplay (`0x00EE`) scanned 106 retail draws and
Fire Temple's normal entrance (`0x0165`) scanned 74; both recorded zero `picaLit=1` draws and zero
`FUN_003f9b5c` hits after the logger's enabled self-test passed. Each result has an immutable
fixture screenshot and discovery log in its cache identity; its immediate repeat reads the cached
failure without launching the oracle. These are separate scene-scoped negatives. They do not attach
a logged PICA draw to a particular CMB source asset, so they cannot yet prove all 205 authored
`IsFragmentLighting` flags are inert.

## Enabled wood/grass source identity is not present in the Kokiri fixture (2026-08-31)

The offline corpus identifies seven enabled fragment-primary CMBs under
`/actor/zelda_wood02.zar`: `grass02_modelT`, `grass04_modelT`, `tree01_modelT`,
`tree02_modelT`, `tree04_modelT`, `tree05_modelT`, and `tree06_modelT`. Their source textures use
only PICA format 7 at either `32x64` (2 KiB) or `32x128` (4 KiB). The cache-owned
`tools/cmb_texture_draw_identity_oracle_probe.py` captures the same deterministic Kokiri frame,
then reads physical GPU bytes through the harness's existing `dumpphys` interface; `tex0` is a PICA
physical address, so a virtual `mem` read is invalid and its version-1 failure is retained in cache.

The version-2 physical capture scanned 107 `tex0` descriptors. Eight shared the wood source
descriptor, but they all referred to one physical 4 KiB texture; its raw payload matched none of the
seven source payloads. Both the PICA draw log and raw byte record are cached, and an immediate repeat
returns the cached failure without launching Azahar.

The same capture was then queried through the `any` source mode against `/actor/zelda_keep.zar` as a
positive control. It made exact source matches for Navi's `elf_fly_mdl_info.cmb` feather texture at
draws 74--81, plus the foot-shadow, general shadow, heart, and rupee source textures. That validates
the physical-byte identity method for this fixture and makes the wood/grass negative meaningful: this
frame's matching `32x64/f7` descriptor is Navi, not an enabled wood/grass material. It still does not
identify the shipping CMB renderer class, so do not use the draw number alone to infer that class.

The archive's two enabled fragment-primary `elf/model/light_model.cmb` materials are not that visible
Navi feather draw either. The independently keyed enabled-only archive capture scanned 106 descriptors,
found eight compatible descriptors sharing one physical texture, and made zero exact source matches.
Its immediate repeat returned the cached failure. Thus ordinary Kokiri still has no identified visible
enabled fragment-lighting CMB, even though it has a validated visible CMB identity control.

Hyrule Field is a distinct, actor-grounded negative rather than another title or Kokiri assumption.
The retail scene table maps entrance `0x00cd` to `spot00`; its ZSI actor list contains 27
`ACTOR_EN_WOOD02` entries, so it is a real Wood02-bearing fixture. The enabled-only Wood02 identity
capture scanned 90 texture descriptors, found one source-compatible descriptor, read its physical GPU
bytes, and made zero exact matches to the seven enabled wood/grass CMB source textures. Its immediate
repeat returned that cached failure without launching the oracle. Thus the field frame still does not
make a visible enabled Wood02 material available for dispatch tracing; do not infer it from actor
presence alone.

## Gravekeeper's Hut provides the first grounded enabled draw (2026-08-31)

The direct scene CMB `/scene/hut_0_info.zsi` (model `rm_danpei_00`) has one enabled
fragment-primary material: material 5 on mesh 3, with TEX0 slot 5 (`rm_dp_kusari_01`). The retail
entrance table maps Gravekeeper's Hut to `0x030d`. Its cache-owned raw texture capture made an exact
payload match for that texture at PICA draw 4 (`tex0=0x1808dd00/32x64/f13`). The same cached draw log
records `vLit=0`, `fLit=1`, and `picaLit=1`, so this is the required material-to-live-enabled-draw
association rather than a source-CMB or actor-presence inference.

The cache-owned `lighting_capture` state for draw 4 has `disable=0`, `config0=0x80000400`,
`config1=0xff7fffff`, slot mapping `[0,1,0,0,0,0,0,0]`, `light_enable=0x00000010`, and
`max_light_index=1`; its raw PICA light records are retained under the complete fixture cache key.
The capture has an empty active-LUT list. That is a real no-LUT enabled configuration, not a missing
artifact: the probe now persists raw state before checking LUT policy, and its cached failure cites the
raw JSON. Decode this exact configuration before selecting a host fixed-function calculation; do not
invent a LUT contribution because other PICA lighting configurations may use one.

The cache-owned exact-template capture (writer probe v16) records the live input to the recovered
`FUN_0040cdd8` at its direct `0x0040cfe4` store of template word `0x005b31b4`. The function's
decomp-grounded input base is `0x081d1538` (`r10 - 0x100` at that store). Its `+0x184..+0x190` words,
which contain every byte used to form output word 6, are all zero; only the independent loop field
`+0x164` is `0x00000101`. Nevertheless word 6 is `0x80000400`, exactly as the recovered C requires
from its unconditional OR. This rules out treating either set bit as evidence that the active CMB
owner-mask `0x400` was converted into PICA `config0`; it does not yet type the transient input object
or identify its constructor/caller.

Azahar's PICA register definitions make the no-LUT branch concrete. `config1=0xff7fffff` disables
shadow, spot, distance, and every supported LUT feature; the two active slots are directional lights
0 and 1, both with zero diffuse/specular and identical ambient product `0x05a2208d` =
`(90,136,141)/255`. The material's ambient is white and global ambient is zero. Therefore the oracle
computes `FRAGMENT_PRIMARY.rgb = clamp(light0.ambient + light1.ambient, 0, 1)` =
`(0.705882,1,1)` and leaves its primary alpha at 1; `FRAGMENT_SECONDARY.rgb` is zero. This equation
is grounded for the Hut draw only. The remaining RE task is the live renderer's configuration transport
that decides when this no-LUT form, or a LUT-enabled form, is selected.

An independent cache-owned PC watch on the candidate `CmbRenderer` material-setup entry
`FUN_003f9b5c` recorded no entry in this *positive* Hut fixture; its immediate repeat returned that
cached failure. It rules out that particular `+0x10` material-setup route; it does not rule out every
CmbRenderer virtual slot.

The previously mapped generic PICA light-command boundary `FUN_0030ed80` is also inactive in this
fixture. A cache-owned watch on that function recorded no entry, and its immediate repeat returned the
cached failure. This does not contradict its known role for another light-command path; it rules out
using that path to recover the active Hut configuration transport.

The cache-owned command-list provenance probe then captured the active draw's raw PICA command list.
Its offline decoder grounds the live no-LUT state in packet writes, not just an end-of-draw register
snapshot: light records 0 and 1 are grouped writes beginning at words 1444 and 1458, while
`config0=0x80000400`, `config1=0xff7fffff`, and `light_enable=0x10` are direct writes at words 1622,
1624, and 1628 before draw 4's cursor at word 1764. The raw list and draw log are cache artifacts;
the immediate repeat is a cache hit.

The first same-run writer-PC probe must not be interpreted as a writer identity. It correctly detected
that command-list storage rotates between frames, so an address discovered on one frame was not reused
while watched. Both its original and alternate-buffer failures are cached. The required next instrument
is therefore an allocation-lifetime or write-history capture that binds a command-list physical range to
the guest PC before PICA consumes it; do not watch a stale linear-buffer address or guess from the packet
constant.

The follow-up page-watch capture armed the measured rotating command-list arena before the deterministic
frame, then queried the exact packet address after the draw was identified. It too recorded no writer;
the immediate repeat returned the cached failure. Thus neither `MemorySystem::Write` nor the emulator's
page-watch write path sees the active command-list population. The remaining boundary is a lower-level
guest fast-memory/direct-map store path, not a reason to attribute the packet to an unrelated known
renderer function.

The cache-owned `tools/pica_command_submitter_oracle_probe.py` joins the raw PICA draw record to the
same-run GSP submission by **both** physical command-list address and byte size. For Hut draw 4 this
is `0x2058fa80` / 69648 bytes (17412 words), submitted from guest VA `0x1458fa80` at PC
`0x004a0814`, LR `0x002c1970`. It persists both raw logs before accepting or rejecting the join, and
the identical repeat is a cache hit; a temporary literal-`\\n` logger defect was recovered from those
saved artifacts offline rather than re-running the oracle.

Ghidra decompilation bounds that PC precisely: `FUN_004a07f8` is a 40-byte kernel-service wrapper
which loads the current thread/process context, issues `SVC 0x32`, and returns its service result.
`FUN_002c1970`, the captured LR, is an eight-byte return stub. The committed decomp dumps are
`build/decomp/004a07f8.c` and `build/decomp/002c1970.c`. This proves the active packet reaches the
GSP transport, but it does **not** identify the material renderer or the list builder; do not port the
SVC wrapper or treat its PC as a material-dispatch address.

The follow-up cache-owned submission capture includes 17 non-faulting stack words. For the same exact
Hut packet it records `s7=0x00493b88`, the epilogue (`add sp,#0x24; pop {...,pc}`) immediately before
the catalogued `FUN_00493b94`, but the higher candidate saved-return words are zero. This is not a
valid caller frame and must not be promoted to a renderer identity. The result rules out assuming a
fixed `sp+offset` return chain at the GSP wrapper; the next instrument needs callback-frame-aware
unwinding or a list-builder allocation/copy trace.

The cache-owned direct-pointer trace armed the full measured list arena `0x14480000:0x145a0000` and
joined against the exact Hut list VA `0x1458fa80`. It recorded **zero** `MemorySystem::GetPointer`
acquisitions for that address; its raw empty log and matching PICA/GSP captures are retained under the
complete cache key. Together with the existing page-watch, `MemorySystem::Write`, and disabled-fastmem
negatives, this rules out attributing list construction to the ordinary virtual-memory access APIs. The
producer remains an unresolved lower direct-map/copy path; do not turn this negative into a guessed
host fragment-lighting implementation.

The same deterministic Hut capture records every overlapping page chunk entering
`MemorySystem::WriteBlockImpl`, including `CopyBlock` destinations, before its host `memcpy`. Its v7
cache entry `c57f33c936bb6002_6510135ae6c38599_p44-dc879780_tpoff` preserves the production log before
any test action: it contains **zero** writes overlapping `[0x1458fa80, 0x145a0a90)` (69,648 bytes).
The separately cached positive control then writes 16 unchanged bytes at `0x1458fa80` through the
production `WriteBlock` API and records exactly that one `MB` entry. Thus the empty production artifact
is a validated negative, not an inactive logger, and the active command list was not populated through
`WriteBlock`/`CopyBlock`. Combined with the page-watch, scalar-write, direct-pointer, and
disabled-fastmem negatives, the remaining producer boundary is a direct mapped-store path below the
regular `MemorySystem` APIs. This is only a transport finding; it neither names the renderer nor derives
a host lighting formula.

## Water Temple authored flag is not live PICA lighting (2026-08-31)

The direct scene CMB `/scene/mizusin_20_info.zsi` has enabled material 0 on mesh 9, with TEX0 slot 0
(`wtr_0_yuka_01_2`). Its cache-owned raw texture identity capture at entrance `0x0010` made an exact
physical-byte match at PICA draw 27 (`tex0=0x1811c200/64x64/f12`); an immediate identical invocation
returned that result from cache. The draw log records `vLit=1`, `fLit=0`, and `picaLit=0`.

This grounds an authored enabled material to a live draw while falsifying it as an enabled
fixed-function-lighting fixture. It is a scene/material-specific negative only: the byte `+0x00` flag
does not itself select live PICA lighting, and Water Temple entrance `0x0010` must not be used to
derive the enabled fragment calculation or to infer the active configuration transport.

## Fire Temple scene CMB identity (2026-08-31)

The deterministic Fire Temple entrance (`0x0165`) provides a stronger source identity. Its
enabled-only `/scene/hidan_21_info.zsi` capture made exact raw matches for scene textures
`dg05_kabe_01`, `dg05_ten_01`, `dg05_gate_01`, and `dg05_yuka_01` at oracle draws 1--4; the repeat
was a cache hit. Offline material parsing identifies material 5 as the scene CMB's only enabled
fragment-primary consumer (one `FRAG_PRIMARY` use, no secondary use, three-stage TEV chain).

Do **not** collapse those facts into “draws 1--4 are material 5.” Source identity proves the CMB,
not its mesh/material submission index, and the cached PICA records for those draws still have
`picaLit=0`. Trace that CMB's active material dispatch and associate material 5 with a PICA draw
before treating the candidate fixed-function method as reached or changing the host's enabled branch.

The CMB's own mesh/material order resolves the current fixture further: material 5 binds texture slot
6, while the cached exact identities are slots 0--3. Therefore material 5 is not visible in this
frame; the source-CMB match is a valid identity control but not an enabled-light fixture. This
falsifies using Fire Temple entrance `0x0165` for the enabled branch and prevents a false association
from its superficially promising scene identity.

The reusable cache-owned guest-PC probe also watched the candidate command-list append helper
`FUN_004093f8` in this same Fire Temple fixture. It recorded no entry, and its immediate rerun read
the cached failure. Because `FUN_003fa5d0` reaches that helper when its candidate lighting records
are emitted, this independently rules out that lower candidate boundary for this real scene-CMB frame;
it does not identify the distinct command path the active scene renderer uses.

The same fixture also has two cached boundaries outside the active scene-CMB route: the independently
recovered PICA command-`0x19` helper `FUN_0030ed80` and the direct CMB material-state virtual entry
`FUN_003fbba8` both recorded no entry, with immediate cache-hit failures. These negatives are limited
to entrance `0x0165`; they rule out three concrete candidate paths for this known scene CMB but do not
make a claim about all renderers or all lighting-enabled materials.

The cached PICA records for the four exact scene-texture draws instead carry `vLit=1`, `fLit=0`, and
`picaLit=0`. The observed renderer therefore uses the shared CmbVShader software vertex-lighting path
for these scene materials while not enabling PICA fragment lighting; it is distinct from every rejected
fixed-function candidate above.

The separately cache-owned `tools/cmb_model_dispatch_oracle_probe.py` also watched
`FUN_004C7AB0`, a recovered model-submission helper that reads the model object from `r1+0x28` and
calls its vtable `+0x08` draw slot. The deterministic Kokiri gameplay frame recorded zero entries
at that function. This is another bounded negative: do not use `FUN_004C7AB0` to identify the
active CMB draw class for that fixture or rerun the same observation.

## Direct PICA material-state route is also inactive in the Kokiri fixture (2026-08-31)

`FUN_003fbba8` is a distinct virtual material-state method in the table rooted at `0x004EBE04`
(its method entry is at `0x004EBE08`). It requires runtime material state `+0x174 >= 3`, prepares
PICA state, and calls `FUN_003fb5ec`. That submitter in turn calls `FUN_003fb9ac`, which emits the
same PICA texture/TEV-state helper interface as the rejected candidate route. There is no direct
branch caller of `FUN_003fbba8`; the table reference explains why the class must be selected through
an unresolved virtual dispatch rather than through a direct static call chain.

The cache-owned `tools/cmb_material_state_oracle_probe.py` watches that virtual method without
assuming the unrelated `FUN_004C7AB0` model-pointer layout. The deterministic Kokiri gameplay
capture recorded zero entries and stored the failure under the complete cache key. Its immediate
repeat reads that failure from cache and does not launch the oracle. This is a bounded negative for
this direct PICA material-state class in this fixture, not evidence that the class is never used or
that an enabled byte `+0x00` calculation may be approximated.

`FUN_003fcc70` is a separate generic virtual bridge: it obtains a target object from context `+0x04`
and a method table from context `+0x08`, then invokes the table's `+0x04` and `+0x08` methods. The
same probe has an independently keyed `virtual-dispatch` target that records that runtime table and
both methods only if this bridge is reached. Its cache-owned Kokiri capture has zero entries, so it
does not identify a material class for this fixture and must not be assumed to dispatch to the
`0x004EBE04` table above. This makes the indirect edge explicit and preserves the negative result
without rerunning the oracle.

## Grounded Hut command-list construction (2026-08-31)

The cache-owned interpreter capture for the same Hut draw 4 now joins the selected
`config0=0x80000400` packet at list VA `0x144b0cb8` to its actual guest writer and material
dispatcher. The result is stored under
`c57f33c936bb6002_6510135ae6c38599_p44-6bc8e697_tpoff` (capture version 11); repeating the
same probe must read this entry rather than launching another oracle.

`FUN_00466e0c` (derived C: `build/decomp/00466e60.c`) reserves an output range, then copies its
prepared packet stream in word pairs. The exact `config0` store is its loop instruction
`0x00466e60`, with `lr=0x00466e20`. This is transport only: it is not the fragment formula and
must not be ported into the host renderer.

Its sole direct caller is `FUN_004527e8` (derived C: `build/decomp/004527e8.c`). That dispatcher
iterates visible material passes, invokes three table slots, then submits the completed packet
descriptor to `FUN_00466e0c`. At the exact enabled Hut store, the saved caller object is
`0x081d3aa0`; its dispatch table is `0x004ebd98`, its descriptor array is `0x081d3f44`, and the
active descriptor is `0x081d3f8c` (source pointer `0x0821e710`, byte count `0x4c8`). The combined
static/dynamic join resolves the invoked slots in execution order:

| Slot | Target | Grounded role |
| --- | --- | --- |
| `+0x24` | `FUN_003fad68` (`build/decomp/003fad68.c`) | material/PICA state-record setup |
| `+0x20` | `FUN_003f9d9c` (`build/decomp/003f9d9c.c`) | up-to-six light color setup |
| `+0x14` | `FUN_003fa5d0` (`build/decomp/003fa5d0.c`) | fixed-function light-vector and intensity setup |

This confirms that the Hut enabled draw uses the `0x004ebd98` CMB renderer table; it does **not**
yet derive a general enabled-host shader.

The cache-owned source-range trace falsifies the presumed per-slot `config0` writer. The copied source
word is `0x0821e968` (not `r0+4`: ARM `stmia r0!` has advanced the logged cursor); it is written as
`0x80000400` by `FUN_00371758`, the generic 32-byte copy loop, with `lr=0x0030f5a8`. The ARM caller
at `0x0030f5a4` is `FUN_0030f4d0` (derived C: `build/decomp/0030f4d0.c`): before it dispatches any
material slots, it allocates each packet descriptor and calls `FUN_00454760` (derived C:
`build/decomp/00454760.c`) to copy a prepared template into it. `FUN_00454760` allocates aligned
storage, records the byte count, then tail-calls the copy loop. Therefore `config0` originates in a
prepared renderer template, not in `FUN_003fad68`, `FUN_003f9d9c`, or `FUN_003fa5d0`.

At the exact copy store the template-source register is `r1=0x005b31bc`. ARM disassembly corrects
the tempting direct interpretation: `FUN_00371758` has already executed two `ldmia r1!` loads, so
the second four-word group it stores came from `[0x005b31ac, 0x005b31bc)`, not from the post-increment
value itself. A second exact four-byte cache-owned watch of the staging word `0x0821e968` records the
selected value in `r9`, deriving its template address as `0x005b31b4`.

The next exact cache-owned watch of `0x005b31b4` records `PC=0x0040cfe4` storing
`0x80000400` directly. Ghidra had incorrectly split the ARM body at that store; the persistent
analysis project now restores the enclosing `FUN_0040cdd8` body (`0x0040cdd8..0x0040d028`, 592 bytes),
and the regenerated derived C is `build/decomp/0040cdd8.c`. That builder emits a 14-word renderer
configuration and constructs word 6 as its input-byte mask plus the unconditional literal
`0x80000400`. Thus this capture proves the transport and producer of the observed PICA word, but it
also disproves treating its `0x400` bit as a direct encoding of the CMB owner bit: this builder forces
that literal independently of the as-yet-unmapped input fields. Do not turn the resulting fixed state
into a host lighting mode until the builder input object and enabled fragment calculation are grounded.

The next synchronous input-state watch completes the ownership bridge. The persisted Ghidra function
boundary `FUN_00308498` (`0x00308498..0x003084e3`, derived C
`build/decomp/00308498.c`) calls `FUN_0040d040` and then `FUN_0040cdd8`; Ghidra finds its sole direct
caller at `FUN_003fa34c+0x25c`. That function is the `+0x18` slot of the `0x004ebd98` CmbRenderer
vtable. The exact Hut watch at builder input `0x081d1538` records three writes; the decisive final
one is `PC=0x003fa528`, the byte store inside `FUN_003fa34c`, with saved `r4=0x081d3aa0`. `r4` is the
method's first argument from its ARM prologue, and `0x081d3aa0` is the same active renderer whose
`+0x478` owner word received `0x402` from `FUN_003fac2c`. This proves the enabled Hut packet's
configuration template is built through the active CmbRenderer `+0x18` route. It does not identify
the two earlier state-initialization PCs (`0x004c6270`, `0x004c6374`) or yet derive a general
fragment-light formula.

Those two initialization PCs are now recovered in persistent Ghidra C. `FUN_004c6264`
(`build/decomp/004c6264.c`) starts the input state's lifetime: its observed `0x004c6270` byte clear
is followed by the fixed defaults and eight-entry zeroed tables which `FUN_0040cdd8` later reads.
`FUN_004c6364` (`build/decomp/004c6364.c`) writes the same input at observed PC `0x004c6374`, binds
its material pointer, and derives the state flags consumed by `FUN_0040d040` / `FUN_0040cdd8` from
that material. Thus the live chain is initialization (`0x004c6264`), material binding (`0x004c6364`),
active CmbRenderer finalization (`0x003fa34c`), and template construction (`0x00308498` →
`0x0040d040` → `0x0040cdd8`). The material input is still not fully typed, so its raw offsets remain
decomp evidence rather than host port constants.

`FUN_004c34ac` (`0x004c34ac..0x004c3663`, derived C: `build/decomp/004c34ac.c`) establishes the
material record boundary that was missing from that statement. It allocates one `0x1cc`-byte runtime
state per source entry, where the entries start at its second argument `+0x0c` and have stride
`0x15c`. For each entry it initializes the runtime state with `FUN_004c6264`, then calls
`FUN_004c6364(runtime + 0x0c, source_entry + 0x0cc)`. The descriptor consumed by the live binder is
therefore a nested record at `+0x0cc` of a `0x15c`-byte source material entry, rather than an
unproven offset into the host CMB representation. This is the exact call at `0x004c3644` recovered
from the cache watch's link register. The binder's conversion helpers are now derived as well:
`FUN_004c7ce8` maps DMP values `0x62a0..0x62a5` to `0..5`; `FUN_004c7d60` maps scale values
`1, 2, 4, 8, 0.25, 0.5` to `0, 1, 2, 3, 6, 7`; and `FUN_004c7ddc`, `FUN_004c7e18`,
`FUN_004c7eb8`, and `FUN_004c7f08` map the remaining bounded PICA enums. These establish the
descriptor as PICA material state, but do not yet identify its serialized CMB schema or authorize
host constants.

The sole direct caller is now derived as `FUN_0031ff64` (call `0x00320370`, derived C:
`build/decomp/0031ff64.c`). Its first argument is the loaded CMB container: it resolves the material
chunk with the relative pointer at container `+0x28`, and passes that chunk directly to
`FUN_004c34ac`. The descriptor chain is therefore CMB-container → material chunk → `0x15c` material
entry → nested `+0x0cc` PICA descriptor; it is not built from the port's C++ `CmbMaterial` object.
The current v6 parser's `mats + 0x0c`, `0x15c` material stride matches this independently recovered
runtime walk, but individual descriptor members still need their own binary-to-PICA proof.

The host now preserves this nested record as `CmbMaterial::FragmentLightingDescriptor` rather than
discarding it. Its bounded enum, flag, enable, and scale fields retain the serialized values without
assigning unproven host semantics; the ROM-backed Morpha close-test pins the divergent descriptor.
This is descriptor transport only, not an enabled fragment-light implementation.

The cache-owned Hut state watch now records the descriptor synchronously at the exact binder store
`PC=0x004c6374`; this is schema-version 2 of that bounded watch, not a rerun of an existing result.
The saved `r1=0x08eec8d8` words decode as `+0x10=0x84c0`, `+0x12=0x62c8`, `+0x14=0`,
`+0x18=0x62b0`, `+0x1c=0x62c0`, `+0x20..+0x23=0`, `+0x24=1`, `+0x26=0x62a0`, and
`+0x28=1.0`. Therefore every enum conversion in `FUN_004c6364` takes its zero/default branch for
the enabled Hut draw, while the `+0x24` boolean alone initializes state byte `+0x199`. This is an
exact descriptor-to-runtime-state observation, not yet a general fragment-lighting formula or a host
mode: the PICA template builder still forces its `0x80000400` literal.

`tools/cmb_fragment_lighting_survey.py --details` now reports the seven raw descriptor words for every
relevant retail material without launching the oracle. Its 210-record survey has seven distinct
signatures: the Hut/default signature accounts for 139 records, while 54 records change the descriptor
at `+0x1f` / `+0x26`, 12 change both `+0x10..+0x12` to `0x84c1` / `0x62c9` and `+0x26` to `0x62a2`,
and four rarer signatures vary additional fields. `menu_link_omote.cmb` and `menu_link_ura.cmb` use the
12-record signature; Morpha has the most divergent record. These are grounded counterfactual candidates
for the next *new* cache probe. The static conversion proves they differ at the binder; it does not by
itself prove the final PICA configuration, so no host mode follows until an exact draw is captured.

The first title-side counterfactual capture is now retained as raw evidence rather than treated as a
host-renderer result: fixture cursor `1093`, draw `77` has a 9,788-word command list at `0x200123f0`
with the selected draw ending at word `1432`. Its cached packet decode contains 1,077 writes to 125
registers and no write to fragment register `0x1c3` before that cursor (only `0x1c6=1` in the
`0x1b0..0x1ff` range). This falsifies that selected title draw as an observation of the CMB fragment
configuration; the command list and provenance remain cached for offline comparison, and no CMB/host
conclusion follows from it.

## CMB lighting bits reach the active renderer state (2026-08-31)

`FUN_003fac2c` (derived C: `build/decomp/003fac2c.c`) is the active CMB material-state builder. It
starts renderer-owner field `+0x478` at `0x2`, then maps material byte `+0x01` to `0x200` and byte
`+0x00` to `0x400`. Its remaining source halfword bits `0x4/0x8/0x10/0x20` map to
`0x20/0x40/0x80/0x100`; it then emits the associated PICA state record through
`FUN_003142dc` (`build/decomp/003142dc.c`). The generic packet writer beneath that helper is
`FUN_00307ccc` (`build/decomp/00307ccc.c`).

The cache-owned Hut object-field watch (`pica-command-writer_190_53bcc935cd.json`) proves this is
the live owner from the earlier dispatcher trace: at `0x081d3aa0 + 0x478 = 0x081d3f18`, exact guest
PC `0x003facd8` writes `0x402` once (`r1=0x402`, `r2=0x20`). Thus the selected material's CMB
fragment-lighting byte is not merely authored metadata: it contributes the real `0x400` renderer bit
for this enabled draw. The packet's final PICA `config0=0x80000400` is separately observed, but its
newly recovered template builder forces PICA bit `0x400`; therefore the two equal-valued bits are not
yet a proven conversion. The remaining gap is the builder-input mapping and the resulting enabled
fragment calculation; neither is inferred here.

## Host transport boundary (2026-08-31)

The current SDL3-GPU UBO cannot express the grounded Hut fixed-function input without a new,
separately verified transport path. `DrawModel` in
`Shipwright/libultraship/src/fast/zelda3d_sdl3gpu_pass.cpp` reduces the scene value to
`uAmbient.xyz = gZelda3dAmbient * materialAmbient` and supplies only the enabled-light count in
`uAmbient.w`. The vertex shader consumes that reduced value as
`uAmbient.xyz * uAmbient.w`; the fragment TEV path consequently has neither the two independent
per-light ambient products nor a PICA fragment-configuration/LUT selection.

That representation can reproduce the established vertex-lighting contract, but it cannot prove or
implement the Hut result of `clamp(ambientProduct0 + ambientProduct1)` as a fragment-light mode. Do
not alias `FRAGMENT_PRIMARY` to the vertex `PRIMARY` more broadly, or add a Hut-specific formula. A
real port must first recover the enabled fragment formula and a configuration counterfactual, then
add a cohesive raw PICA-light/configuration UBO contract from CMB descriptor and scene-light owners
to both renderer backends.
