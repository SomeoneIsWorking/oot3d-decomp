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
| `+0x18` | `FUN_003fa34c`, the software vertex-light sibling |

Static checks found no direct ARM or Thumb branch into the constructor or candidate method, and the
only literal references to this vtable are the class's own constructor/destructor pools. RomFS has
no CRO/CRS module that could supply an external caller. This library class is therefore an
**unproven candidate**, not proof that every CMB byte `+0x00` reaches live PICA state.

The cache-owned `kokiri-save-overlay` control is stored through
`tools/cmb_fragment_lighting_oracle_probe.py`. Its 99 retail draws all reported `picaLit=0`. The
first cached run watched `FUN_003fa5d0` and recorded zero hits; the independently keyed v8 capture
watched the earlier `FUN_003f9b5c` material-setup slot and also recorded zero hits. Therefore this
fixture does not invoke the candidate `CmbRenderer` at all, rather than merely skipping its optional
fixed-function branch. Its screenshot proves the fixture is the Start-button Save overlay, not the
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
cached failure. The candidate is therefore not the active configuration transport even where the known
enabled material and `picaLit=1` draw are present.

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

## Next RE step

Start from the grounded Gravekeeper's Hut draw 4, not the unreachable `CmbRenderer.cpp` candidate.
Decode its no-LUT `config0/config1`, slot mapping, and light-register payload into the active material
class's calculation, then trace the shipping dispatch that submits that material. Keep the raw
material-to-draw association intact while extending to a LUT-enabled fixture; do not substitute an
unrelated candidate path or invent LUT terms for the known no-LUT configuration.
