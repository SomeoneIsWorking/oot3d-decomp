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

The separately cache-owned `tools/cmb_model_dispatch_oracle_probe.py` also watched
`FUN_004C7AB0`, a recovered model-submission helper that reads the model object from `r1+0x28` and
calls its vtable `+0x08` draw slot. The deterministic Kokiri gameplay frame recorded zero entries
at that function. This is another bounded negative: do not use `FUN_004C7AB0` to identify the
active CMB draw class for that fixture or rerun the same observation.

## Next RE step

Recover the *active* CMB renderer that owns byte `+0x00` before choosing another oracle fixture.
Start from shipping model-draw dispatch, not the unreachable `CmbRenderer.cpp` candidate, and trace
the material-class gate to a concrete function/asset. Then capture that grounded draw's
`config0/config1`, enabled-slot mapping, global ambient, LUT selectors/scales, and selected LUTs
through the cache-owned probe. Only that capture can justify porting the enabled equations.
