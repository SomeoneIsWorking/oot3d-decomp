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

Recover the *active* CMB renderer that owns byte `+0x00` before choosing another oracle fixture.
Start from shipping model-draw dispatch, not the unreachable `CmbRenderer.cpp` candidate, and trace
the material-class gate to a concrete function/asset. The raw-byte source identity now has a cached
positive control, so use it to find an actually visible enabled material rather than the Kokiri
wood/grass negative. Then capture that grounded draw's
`config0/config1`, enabled-slot mapping, global ambient, LUT selectors/scales, and selected LUTs
through the cache-owned probe. Only that capture can justify porting the enabled equations.
