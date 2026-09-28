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

Static checks found no direct ARM or Thumb branch into the candidate method. A raw image scan finds
the vtable value only in `FUN_003fb2a8`'s destructor and its data-pool copy; Ghidra's reference
database reports zero references to either location. RomFS has no CRO/CRS module that could supply
an external caller. The constructor/writer is therefore not statically recoverable through the
vtable value, and this library class remains an
**unproven candidate**, not proof that every CMB byte `+0x00` reaches live PICA state.

The adjacent static lead is closed. `FUN_003fc2f8` calls the recovered
`FUN_003f95c8`, which only refreshes a transform matrix. `FUN_003f9a30` queues a draw record, and
`FUN_003f9b24` resets a 0x200-entry queue. None accesses the `renderer + 0x10 + light * 0x60`
records or the `+0xe4` enable field. These functions rule out that nearby queue/transform setup as
the missing per-light record owner; the next valid discriminator is a cacheable runtime watchpoint
on the record allocation or write, not another static vtable sweep.

`tools/cmb_light_record_writer_oracle_probe.py` is that discriminator. It refuses before starting
Azahar unless the current render-contract gameplay state exists, then watches the active
`FUN_003fa34c` entry, requires `r0` to carry vtable `0x004ebd98`, resolves `*(r0 + 0x10)`, and
watches exactly the resulting three `0x60`-byte records for their writer PCs. A result at the
128-record watch-buffer cap is rejected as truncated. Completed raw observations and their schema
are cache-keyed; no old-contract state or untyped renderer address is replayed.

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
is grounded for the Hut draw only.

### The configuration builder is now executed, not just described (2026-09-27)

The remaining RE task named above was the *transport* that decides when the no-LUT form, or a
LUT-enabled form, is selected. The **builder** half of that is now closed: `FUN_0040cdd8`
(`build/decomp/0040cdd8.c`, 592 bytes) was transcribed to
`tools/pica_lighting_config.py::build_lighting_config` and checked against the oracle's own recorded
words. It reproduces **all three** of the fixture's observed values from the decompiled source plus
the fixture's recorded input bytes:

| observed in the oracle's live registers | recomputed from `FUN_0040cdd8` |
| --- | --- |
| `config0 = 0x80000400` | `0x80000400` |
| `config1 = 0xff7fffff` | `0xff7fffff` |
| `light_enable = 0x00000010` | `0x00000010` |

and the two-slot count agrees with the recorded slot mapping. Three independent values predicted from
source, so the builder is understood well enough to port rather than merely described.
`tests/test_pica_lighting_config.py` (13 cases) runs that check on every invocation, and each output
was mutation-verified: dropping the unconditional `0x400` from `config0`, replacing the slot index with
a constant in the light-enable mask, and moving the LUT-select shift into the top byte each make it
fail.

Three things this reading corrected, all of which had been written down wrongly or not at all:

* **The LUT-select shift is `0x13` (bit 19), not `0x19`.** Bit 25 is already set in the `0xff04ffff`
  base, so the wrong shift ORs a no-op and costs only bit 19 -- it yields a *plausible* `config1`
  (`0xff77ffff`) rather than an obviously broken one. That was the real bug in the first transcription.
* **`light_enable` is the loop's `uVar13` (packet word 0xC), not the slot map.** `param_2[2]` is the
  slot map and comes from the object's own first three bytes (`p[0] | p[1]<<10 | p[2]<<20`). For the Hut
  both outputs are small, so conflating them still reproduced `0x10`.
* **The loop shifts by the count BEFORE incrementing it**, so the first occupied slot lands in bit 0.

#### The feed is now mapped, and it is ONE BYTE from complete (2026-09-27, later)

The producer question above is closed to a single byte. Three recovered functions between the
descriptor and the builder type the object:

* **`FUN_004c6264` (252 bytes) is the CONSTRUCTOR.** It zeroes four 8-byte light-slot planes at
  `+0x160`/`+0x168`/`+0x170`/`+0x178` — covering the whole `+0x160..+0x17F` block the builder indexes —
  zeroes the mode block `+0x180..+0x19C`, and sets exactly two mode bytes: `+0x18A = 1` and `+0x18D = 1`.
* **`FUN_003fa5d0` (1,608 bytes) and `FUN_003fa34c` (672 bytes) set the eight slot-enable bytes** at
  `+0x164..+0x16B` for occupied slots — the `+0x164 = 1` the fixture shows.
* **`FUN_004c6364` (224 bytes) is the DESCRIPTOR FEED.** Given the nested descriptor the shipping
  parser already retains, it writes `+0x189` from `enum_1c`, `+0x18B` from `enum_12`, **`+0x191` from
  `flag_14`**, `+0x192` from `flag_1e`, `+0x193` from `flag_1f`, `+0x195` from `flag_23`, `+0x199` from
  the enable byte at descriptor `+0x24`, plus four enum-helper outputs (`enum_10`, `enum_18`,
  `enum_26`, `scale`). **Every descriptor field it consumes is already parsed by `cmb.cpp`**
  (`CmbMaterial::FragmentLightingDescriptor`) — the feed needs no new asset data at all.

Two results follow, and the second is the important one:

1. **The constructor's defaults alone reproduce `config1 = 0xff7fffff`** — the fixture's observed
   value — with no descriptor applied at all. That is a second, independent path to the same word
   (the object's initialiser rather than the fixture's recorded input bytes), which is much stronger
   than either alone.
2. **`config0` comes out `0x80020400` against the observed `0x80000400`: a difference of exactly bit
   `0x11` and nothing else.** That bit is `param_1[0x18A] << 0x11`, and the constructor sets `+0x18A =
   1`. So the Hut's path **clears `+0x18A` somewhere between construction and the builder**, and no
   recovered function writes it (`FUN_004c6364` covers only `+0x189`/`+0x18B`/`+0x191`/`+0x192`/
   `+0x193`/`+0x195`). This is asserted in
   `tests/test_pica_lighting_config.py::ConstructorDefaultsReproduceConfig1::test_config0_differs_from_the_fixture_by_exactly_one_bit`,
   so the gap is a standing red-to-green test rather than a sentence that can rot.

The same tests also record that `flag_14` is the authored switch between the no-LUT and LUT forms: it
drives `+0x191`, which is the builder's LUT-enable mode byte, so a material with `flag_14` set gets a
different `config1` than one without. And the four `func_0x004c7xxx` enum conversions are deliberately
**not** transcribed -- their tables live in the 3DS material compiler and are not recovered -- so
those outputs keep the constructor's value rather than being invented.

#### `+0x18A` narrowed to "outside the recovered chain" (2026-09-27, later still)

The chain is `FUN_004c6264` (construct) -> `FUN_004c6364` (descriptor feed) -> `FUN_003fa34c` (slot
enables) -> `FUN_00308498` -> `FUN_0040d040` -> `FUN_0040cdd8` (builder). Two things were checked
rather than assumed:

* **No function on that chain writes `+0x18A`.** All 21 decompiled functions that reference the offset
  were enumerated; the chain members that touch the mode block at all are `FUN_0040d040` (which READS
  `+0x195`, `+0x199`, `+0x19d` and pre-computes the builder's output pointer) and `FUN_004c6364`
  (which writes `+0x189`/`+0x18B`/`+0x191`/`+0x192`/`+0x193`/`+0x195`). `FUN_003fa34c` and
  `FUN_00308498` do not touch `0x180..0x19C` at all. So the clearing is not on the recovered path.
* **The delivery mechanism is a bulk copy, and reading it settles what kind of question is left.**
  `FUN_00371758` (92 bytes) is a **pure 32-byte block copy** -- `*param_1 = unaff_r7; param_1[1] =
  unaff_r8; ...` with no field logic, no branches on offsets, and no per-byte handling. So it cannot
  selectively clear `+0x18A`; whatever the source holds at that position is what lands there. The
  missing write is therefore a **provenance question about the source bytes**, not an absent writer.
  (This corrects the previous revision of this note, which named the bulk copy as the leading
  candidate *writer*. It is the mechanism; the source is the question.)
* **And the source is not the CMB material, by arithmetic rather than inference.** The copy needs
  `0x4C8` bytes; the material stride leaves only `0x90` bytes (OoT3D, stride `0x15C`) or `0xA0`
  (MM3D, stride `0x16C`) after the nested descriptor at `+0xCC`, and the descriptor the parser reads is
  just `0x2C` bytes long. A 0x4C8-byte source cannot live inside a material entry in either game. So
  the copy's source is a **separate 0x4C8-byte object**, authored per material by the 3DS toolchain
  and held in game data -- consistent with the recorded "template word `0x005b31b4`" being one *word
  value* carried by a template far larger than the CMB's descriptor.

#### FOUND: the object is live runtime state at `CmbRenderer + 0x400 + index * 0x4C8` (2026-09-27, latest)

The chain bottoms out in the ARM image. `FUN_003f9b5c` -- the top of the confirmed chain, whose
`arg1` IS the 0x4C8-byte object -- has **zero ARM `BL` callers** (validated
`tools/callers_bl.py`). So the object is not constructed anywhere in the ARM code image; it arrives
from outside as an argument. That closes the static route and makes the runtime route the only one
left, which is what this record asked for.

`tools/lit_object_dump.py` does it with the harness's bulk `dumprange <va> <size> <path>`, at the
**title screen** -- no gameplay save needed, because the title demo renders the world through the same
fragment path. The address is not guessed: the record already maps CMB `+0x00` to
`CmbRenderer + 0x400` and names the live `CmbRenderer` as `0x081d3aa0`, so the object base is
`0x081d3ea0` and 0x4C8 is both the copied length and the stride. Dumping four consecutive slots:

| slot | address | nonzero | `+0x18A` | first words |
| --- | --- | --- | --- | --- |
| 0 | `0x081d3ea0` | 296/1224 (24.2%) | **0x80** | `3f800000` x2, `43200000` (150.0f), `41c00000` (24.0f) |
| 1 | `0x081d4368` | 187/1224 (15.3%) | 0x00 | all zero |
| 2 | `0x081d4830` | 177/1224 (14.5%) | 0x00 | `3f333333` (0.7f), `3e99999a` (0.3f) x3 |
| 3 | `0x081d4cf8` | 360/1224 (29.4%) | 0x00 | mostly zero, `08a0f2ac` tail pointer |

Consecutive slots have *different* densities and different leading floats, so this is per-material
authored data, not one repeating blob. Slot 2's `0.7` / `0.3` pair is a recognisable material blend.

**`+0x18A` is `0x80` on slot 0** -- authored, non-zero, per-material. So the framing "no function on the
chain writes `+0x18A`" was never the problem: the byte is *source data* in the object, exactly as the
"provenance question about the source bytes" note argued, and the source is now readable on demand.

**And the builder is validated end to end for the first time against live data.** Feeding the live
bytes through `tools/pica_lighting_config.py`:

| slot | `config0` | `config1` | `light_enable` |
| --- | --- | --- | --- |
| 0 | `0xd90a0400` | `0x3f7e3f3f` | `0x00000076` |
| **1** | **`0x80000400`** | **`0xff7fffff`** | `0x00000000` |
| 2 | `0xd1000400` | `0xff7fffff` | `0x00000000` |
| 3 | `0xd0000400` | `0xf37fffff` | `0x00007632` |

Slot 1 returns **exactly** the `config0`/`config1` pair the oracle's own registers were recorded at
(`0x80000400` / `0xff7fffff`). Its `light_enable` is 0 where the recorded fixture says `0x00000010`,
and that is **not** a contradiction: the recorded fixture is a ONE-light material (Gravekeeper's Hut)
and slot 1 is an unlit title material. Feeding an all-zero 0x4C8 object gives the same
`0x80000400`/`0xff7fffff` baseline, which is now a standing test
(`test_an_all_zero_object_reproduces_the_oracle_baseline`) written against live-derived values without
capturing any data or needing a ROM.

What this closes and what it does not: the object is located, its size and stride are measured, its
per-material authorship is visible, and the recovered builder reproduces observed oracle registers
from live bytes.

### The lit-material ground truth is NOT obtainable at the title (2026-09-27, latest)

With the object located, the obvious next step was a ground-truth triple for one **lit** material: the
object's bytes, the registers the 3DS actually programmed, and what `pica_lighting_config.py` predicts
from those bytes. The oracle exposes exactly that -- `vsuni_log <path>` for per-draw discovery and
`lighting_capture <draw> <path>` for one draw's raw `config0`/`config1`, light-slot map and activated
LUTs -- and `tools/lit_pica_capture.py` drives both directly, bypassing
`tools/cmb_fragment_lighting_oracle_probe.py`, which starts from the absent `GAMEPLAY_STATE`.

**The title demo never enables PICA fragment lighting.** Two independent samples at different points in
the demo:

| sample | draws | `picaLit=1` | `vLit=1` | `hasCol=0` |
| --- | --- | --- | --- | --- |
| A | 138 | **0** | 106 | - |
| B | 69 | **0** | 53 | 34 |

**207 draws, zero PICA-lit, 159 vertex-lit.** `picaLit` is the authoritative
`regs.lighting.disable` register, not the independent CmbVShader boolean, so this is the real state and
not a logging artefact.

That is the explanation for this project's entire run of fragment-lighting negatives -- the committed
probe's own `kokiri-save-overlay` fixture is labelled a PICA-disabled negative control, and so is every
capture derived from it. It is not that the capture path is broken; **the reachable scenes are
vertex-lit.**

Consequence, stated plainly: the two remaining questions -- the `+0x18A` byte's contribution to
`config0` bit `0x11`, and the per-slot enable bytes for a lit material -- **require a gameplay scene**,
and every gameplay scene is behind the blocked cold title route
(`docs/issues/0023-embedded-oot3d-oracle-cannot-reach-its-boot-hand.md`: no `0004000e` system title, a
corrupt 34-byte save index, and a NAND with no `title/` directory). The object-location work stands on
its own and is not blocked; the lit-material *ground truth* is. Do not spend further title-side effort
on it.

One more trap, now pinned by `tools/test_lit_pica_capture.py` (8 cases, mutation-verified): the log's
draw id lives in `n=`, not `draw=`. Matching the wrong token parses a log full of draws as **empty**,
and the tool then reports "no draw has fragment lighting enabled" -- a confident wrong negative that
looks exactly like the finding above. It was the wrong token first; the corrected parser produced the
207-draw measurement. Where the two open questions used to be stated: the `+0x18A` byte's contribution
to `config0` (bit `0x11`), and the per-slot enable bytes for a lit material, where title slot 0
(`light_enable=0x76`, five slots) and slot 3 (`0x7632`) are the live objects to dump once a lit scene
is reachable.

#### DEAD END: the template is not findable by signature in `code.bin` (2026-09-27, later still)

The obvious attack -- search the code image for a material's slot-enable/mode shape -- was tried and
**does not work**, with numbers rather than an assertion. `build/code.bin` is 4.36 MiB and 18.5% zero
bytes. A 2-light lighting object predicts a 61-byte shape at `+0x160`: `01 01 00*6`, then 24 zero
flag-plane bytes, then 19 zero mode bytes. Searching for it and for its 1-, 3- and 4-light variants:

| shape | hits | 4-byte-aligned |
| --- | --- | --- |
| 1 light | 34 | 22 |
| 2 lights | 4 | 2 |
| 3 lights | 2 | 1 |
| 4 lights | 2 | 1 |

27 distinct aligned hits across all variants -- and **not one repeated delta between consecutive
hits**, so there is no table and no stride. The baselines say why the count means nothing: **473**
8-byte windows in the image are shaped like a 1..8-light enable plane on their own, and **484**
61-byte windows are entirely zero. 27 is what the intersection of two weak constraints yields.

**Do not treat any of those 27 offsets as the template.** The consequence for the next step is that the
template is not in the code image under this layout, which is consistent with it being a
data-container object (the 3DS toolchain emits compiled C materials into game data, not into the code
section) or with its slot-enable region not being shaped as assumed. The next search has to be a
different one: the game's data archives, or a runtime capture of the copy's source pointer. Neither has
been done.

Incidentally, reading the builder's trailing rodata confirms `offset == VA` for `code.bin`: its five
constant words sit exactly where `FUN_0040cdd8` ends (`0x0040cdd8` + 592 = `0x0040d028`). Four of the
five are zero; `0x0040d038` holds `0x005288dc`.


`FUN_0040d040` also earns its place in the record: it is a pre-pass over the same object that reads
`+0x195`/`+0x199`/`+0x19d` and produces the buffer the builder then fills, so the object is consumed by
two functions, not one. Anyone implementing the host side needs both, and the four `func_0x004c7xxx`
enum conversions still gate the `config0` bits they feed.

#### A call-graph tool, and a challenge to the "bulk copy" identification (2026-09-27, later still)

The next search named above ("the game's data archives, or a runtime capture of the copy's source
pointer") needs a caller search, and there wasn't a usable one: `build/decomp/*.c` are per-function
Ghidra dumps with **no call edges**, so `tools/codequery.py callers` finds nothing there.
`tools/callers_bl.py` walks the code image's `BL` instructions instead, exactly, with no symbol table.

**The addressing is the whole trap, and it produces a result indistinguishable from a real negative.**
`disasm.py` establishes `byte offset = vaddr - 0x00100000`. Computing a `BL` target in *offset* space
and searching for a function's VA returns **zero callers for every function** -- including
`FUN_0040cdd8`, the builder, which is provably called. I made exactly that mistake first and it read
as "nothing calls the whole chain". The tool therefore self-validates on every run: a correct ARM scan
sends most targets back inside the code image (measured **70.6%**, 5163 of 7315), because real code
calls code, and a decoder that scatters targets outside the image is refused rather than reported.
`tests/test_callers_bl.py` (14 cases) pins the PC+8 arithmetic, sign extension in both directions,
that only `BL` is recognised, and the refusal.

With that, the recorded chain is **independently confirmed from the binary**, not just asserted:

| function | ARM callers | call site |
| --- | --- | --- |
| `FUN_00308498` | 1 | `0x003fa5a8` |
| `FUN_0040d040` (pre-pass) | 1 | `0x003084b4` |
| `FUN_0040cdd8` (builder) | 1 | `0x003084c4` |
| `FUN_004c6264` (construct) | 1 | `0x004c3528` |
| `FUN_004c6364` (feed) | 1 | `0x004c3644` |

**And one load-bearing claim does not survive: the recorded edge into `FUN_00371758` does not exist
in the binary.** The frontier row for this step records an "exact template-word chain
`FUN_00466e0c` -> `FUN_00371758` (`r9`, `0x005b31b4`)". Checked three ways:

* **No ARM `BL` caller.** Zero call sites for `0x00371758` and for `0x00471758`, on the validated
  scanner. The control matters: `FUN_00466e0c` and `FUN_00308498` each have exactly one, so the scan
  does find callers where they exist.
* **No function-pointer table entry.** Neither `0x00371758` nor its Thumb-bit form `0x00371759` (nor
  the `0x0047xxxx` variants) occurs as a 32-bit literal anywhere in the image, so it is not reached
  through a data table either. (A literal search is *not* evidence about ARM `BL` -- ARM encodes the
  offset inline, and the control `0x00308498` also has zero literals despite having a caller -- but it
  is valid evidence against an indirect call through a table.)
* **`FUN_00466e0c` demonstrably does not call it.** Disassembled in full: it is an 8-bytes-per-
  iteration list copier whose only calls are `0x2f9ca0` and `0x2f9c88`. The recorded edge is a
  co-occurrence of register values at one sampled moment, not a call.

So the note above's "the delivery mechanism is a bulk copy" -- and the whole "provenance question about
the source bytes" framing built on it -- is **refuted for the ARM image**. Only a Thumb-1 `BL`/`BLX`
caller remains unexcluded: the Thumb decoder I wrote produced a 1:1 target ratio with 2.2% of targets
in-image, which is garbage, so no Thumb negative is claimed. **Re-derive the delivery step from
`FUN_00308498`, which is on the confirmed chain.**

That function is now readable and it changes the shape of the question. It is nine instructions:

```
mov  r4, r0            ; r4 = arg0
ldr  r0, [r0]          ; arg0->f0
ldr  r0, [r0, #8]      ; arg0->f0->f8
mov  r1, r0
mov  r0, r5            ; r5 = arg1
bl   0x40d040          ; pre-pass(arg1, arg0->f0->f8)
mov  r1, r0
mov  r2, #1
mov  r0, r5
bl   0x40cdd8          ; builder(arg1, <pre-pass result>, 1)
ldr  r2, [r4]
mov  r1, r0
mov  r0, r2
str  r1, [r0, #8]      ; arg0->f0->f8 = builder result
```

**`arg1` is passed straight through to both the pre-pass and the builder as the builder's `param_1`.**
So the 0x4C8-byte object is not loaded from a table inside this chain at all -- it arrives as an
argument. Its only writer-side preparation is three byte stores at offsets 0, 1 and 2 of the object
(`strb r0, [r6]`, `[r6,#1]`, `[r6,#2]` at `0x003fa528`/`0x003fa564`/`0x003fa5a0`), i.e. the leading
three bytes are set and the builder fills the rest.

The call site is `add r0, r4, #0x24` / `bl 0x308498`, so the object pointer arrives in `r1` from a
function at `0x003f9f68` whose prologue is `push {...}` then `mov r6, r1` -- **`r6` is that function's
own second argument**. That function has exactly one ARM caller, at `0x003f9d58`, which sets
`r1 = r6` from its own `r6`. So the object pointer is threaded down at least three frames without ever
being computed from a table in this chain, which is why an address-table search over `code.bin` (the
"27 hits, no stride" dead end above) could not have found it: **there is no address table here to find.**
The next step is to keep walking up until the frame where `r6` is *produced* rather than forwarded.

#### The obvious candidate for the producer is REFUTED (2026-09-27)

The nested descriptor `FUN_004c6364` consumes at material-entry `+0x0cc` is the natural suspect, and
the recovered copy is a straight `0x4c8`-byte `FUN_00371758` loop — so if `param_1 + 0x164` were the
descriptor's first byte, the builder would be reading the descriptor directly. **Measured over every
fragment-lighting-flagged material in both retail corpora (205 OoT3D, 6,428 MM3D), that is false, for
two independent reasons:**

* **The slot bytes are uniformly zero.** `descriptor + 0x00..0x07` is all zeros for **205 of 205**
  OoT3D and **6,428 of 6,428** MM3D flagged materials. Under the hypothesis those are the eight
  light-slot enables, which would mean *no material in either game ever has a lit fragment-light
  slot* — flatly contradicted by the Hut fixture, which has slots 0 and 1 occupied (`+0x164` is
  `0x00000101`).
* **The mode-byte region holds floats, not mode bytes.** `descriptor + 0x20..+0x2D` is dominated by
  `(0,0,0,0, 1,255,160,98, 0,0,128,63, 1,255)` — `0x3F800000` (1.0f) and `0x62A0A000` — i.e. the
  descriptor's float fields (the parser's `scale` at `+0x28` is 1.0, which is exactly that pattern).
  Reading a mode flag out of a float is not a transport, it is a coincidence waiting to happen.

So the builder's input is a *runtime* lighting object, not the authored descriptor — consistent with
`FUN_003fa5d0` emitting light records from three 0x60-byte runtime slots. The producer is therefore
somewhere between the descriptor and the builder, and neither end constrains the middle yet. Do not
re-derive the zero-offset alignment: it is measured, twice, and wrong.

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

## Descriptor-dependent PICA configuration bits (2026-08-31)

The persisted Ghidra C now gives a bounded static counterfactual before another oracle observation.
`FUN_004c6364` maps the nested descriptor into the input object consumed by `FUN_0040cdd8`, and the
builder directly packs the latter's `+0x184..+0x191` fields into the observed `config0` command word.
For the descriptor-controlled subset, the chain is:

| CMB descriptor member | bounded runtime value | `config0` contribution in `FUN_0040cdd8` |
| --- | --- | --- |
| `+0x10` (`0x84c0..0x84c3`) | `0..3` at `+0x18c` | nonzero sets bit 18 |
| `+0x12` (`0x62c8..0x62ca`) | `0..2` at `+0x18b` | nonzero sets bit 19; also participates in the builder's separate packed record |
| `+0x18` (`0x62b0..0x62b7`) | `0,1..6,8` at `+0x188` | packed verbatim beginning at bit 22 |
| `+0x1c` (`0x62c0..0x62c3`) | `0..3` at `+0x189` | nonzero sets bit 16 and contributes to bit 0's aggregate |

The other descriptor fields are still real inputs but have a different immediate destination:
`+0x14` writes runtime `+0x191`; `+0x1e/+0x1f/+0x20/+0x23` write
`+0x192/+0x193/+0x194/+0x195`; `+0x24` is the enable at `+0x199`; and `+0x26/+0x28` map to
`+0x198/+0x19a`. `FUN_0040d040` serializes the `+0x194..+0x1ae` family before
`FUN_0040cdd8`; no register assignment is claimed here without the packet-template association.

The builder's next template word is the observed `config1` record. `FUN_0040cdd8` starts it at
`0xff04ffff`, then conditionally clears bit `i`, `i+8`, or `i+24` for each selected one of eight
light slots (`input+0x164[i]`) when the corresponding `input+0x17c[i]`, `+0x16c[i]`, or
`+0x174[i]` mask byte is nonzero. It also packs the inverse predicates of `input+0x18f`, `+0x190`,
and `+0x185` into bits 16, 17, and 19 respectively, and writes `7 << 20` when `input+0x191` is
zero. This is an exact builder equation, not a CMB-field mapping: the current descriptor binder
does not initialize `+0x18d..+0x190`. The active CmbRenderer `+0x18` finalizer (`FUN_003fa34c`)
does initialize the first three `+0x164` slot bytes: for each `renderer+0x10 + i*0x60`, it writes
slot `i` when the float at `+0xe4` equals `1.0f`. The remaining five slots and all three mask arrays
still arrive through an unrecovered renderer input path. Do not assign those bits or masks in the
host until that owner is recovered.

The finalizer's preceding `FUN_00409390` call is not that per-light producer: recovered C shows it
only copies four fixed global words into a local 16-byte record and submits that record through the
generic writer. It supplies a separate packet vector before slot selection, not the `renderer+0x10`
records or the transient slot/mask arrays.

Its argument helper `FUN_0040f74c` is likewise not the producer: it returns
`*(arg0 + 8) + arg1 * 0x800`, selecting the fixed-vector record consumed by `FUN_00409390`.
It has no writes and no relationship to the CmbRenderer's `0x60`-stride light records.

The adjacent CmbRenderer `+0x14` method `FUN_003fa5d0` establishes the role of those records. For
each of the same first three `renderer+0x10 + i*0x60` entries with `+0xe4 == 1.0f`, it serializes
the negated direction at `+0xd8..+0xe0`, color terms at `+0x88..+0xc0`, and the selected slot into
the renderer input before calling `FUN_004093f8` to emit the PICA light packets. This grounds the
records as per-light source data shared with the configuration finalizer; it does not identify their
allocation or the still-unrecovered slots and masks.

The downstream packet layout is now exact. `FUN_004093f8` only advances the command-stream cursor
through `FUN_0040d15c`; that function visits all eight slot bytes at input `+0x164` and emits a
record only when a slot is enabled. `FUN_0040d1a8` serializes one 0x2c-byte transient record into
fourteen command words, with the command header selecting PICA light register block
`0x140 + slot*0x10`. It packs the direction, color, attenuation, and feature bytes from the record
at offsets `+0x00..+0x28`; this is the packet boundary underlying the cached Hut light writes.
It does not change the ownership gap for the record's remaining slots or configuration masks.

`FUN_0040d040` is likewise a serializer, not that owner: it writes three preceding template values
from the repeated input records `+0x194..+0x1ae`, packing seven four-bit selectors per word and
their enable inverses at bit positions `1,5,9,…,25`. It receives the same transient input before
`FUN_0040cdd8`, but neither it nor the descriptor binder establishes the remaining light-slot arrays
or `+0x18d..+0x190`. This separates the CMB-controlled descriptor subset from the still-unrecovered
renderer light/configuration transport.

This makes the existing candidates meaningful without declaring a formula. Hut's default
`+0x10/+0x12/+0x18/+0x1c` values map to zero, so those fields cannot explain its forced
`0x80000400` baseline. Morpha's `0x84c2`/`0x62c9` values map to nonzero and therefore change at
least bits 18 and 19 if its descriptor reaches an active draw. A Morpha identity capture is the
right next counterfactual; do not synthesize those bits in the host or assume that every material
with that descriptor uses PICA fixed-function lighting.

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

---

## FOUND: the transport is the material entry, and the "separate 0x4C8 authored object" is refuted (2026-09-28)

Three claims above are load-bearing and two of them are wrong. `FUN_004c34ac` (408 bytes, one caller of
`FUN_004c6264` at `0x004c3528`) is the function that builds the per-material lighting state, and it
settles the "provenance question about the source bytes" by showing there is no separate authored
object to find.

### What `FUN_004c34ac` actually does

```c
puVar6 = *(undefined4 **)(param_3 + 8);
*(undefined4 **)(param_3 + 8) = puVar6 + *(int *)(param_2 + 8) * 0x73;   // count * 0x73 WORDS
puVar7 = puVar6;
do {
  *puVar7 = 0; puVar7[1] = 0; puVar7[2] = 0; puVar7[3] = 0;
  FUN_004c6264(puVar7 + 4);              // the lighting object is at record + 0x10
  puVar7 = puVar7 + 0x73;                // stride 0x73 words = 0x1CC bytes
} while (++i < *(int *)(*param_1 + 8));
```

then, per material, with `iVar3 = param_2 + 0xC + i * 0x15C` (the same base and stride the host's
`cmb.cpp` uses):

```c
*piVar8      = iVar3;                     // record word 0 = the material entry
piVar8[1]    = param_1[2];
piVar8[2]    = param_2 + 0xC + iVar5 * 0x15C;
if (*(char *)(iVar3 + 0x138) == 1) { ...blend block, 0x138..0x158... } else { *(u8*)(piVar8+0x70) = 0; }
FUN_004c6364(piVar8 + 3, *piVar8 + 0xcc);   // the DESCRIPTOR FEED, from material + 0xCC
```

So the per-material runtime record is **0x1CC bytes at stride 0x1CC**, the lighting object is its word
3, and the object is **constructed then fed from the material entry** — not copied from a
0x4C8-byte authored blob. Three earlier claims fall:

* **"The copy's source is a separate 0x4C8-byte object, authored per material by the 3DS toolchain and
  held in game data."** Refuted. There is no separate object: the record stride is 0x1CC, the object is
  built by `FUN_004c6264` and fed by `FUN_004c6364` at construction time, and both are called from
  `FUN_004c34ac`. The note's own arithmetic ("a 0x4C8-byte source cannot live inside a material entry")
  was correct and was the tell: the source is not 0x4C8 bytes at all.
* **"`FUN_00371758` is the delivery mechanism, a pure 32-byte block copy."** Already refuted above for
  the ARM image. A correct Thumb `BL`/`BLX` scanner (`tools/callers_thumb.py`, 15 cases against
  hand-computed encodings) finds **zero** Thumb branches in the image whose target is a known function
  entry out of 22,223 matches, so it cannot establish a Thumb caller either -- the image's Thumb
  branches are not reaching code at all. The decoder also had to fix one real bug: `BLX`'s second
  halfword is `11 J1 0 J2 H imm10H`, so the offset field is 10 bits and bit 0 is the H flag; reading 11
  bits folds H into the offset and is wrong for every `BLX`. Either way `FUN_00371758` is not on this
  path, and `FUN_00308498` is the entry that is.
* **"The fragment-lighting mode bytes come from material `+0x138`/`+0x13C..`."** Wrong, and this one
  would have produced a plausible-looking wrong port. Measured over both corpora at the SAME base
  (`mats + 0x0C`, stride 0x15C/0x16C):

  | field | OoT3D distinct values | MM3D distinct values | reading |
  |---|---|---|---|
  | `+0x138` | 2 (0: 9661, 1: 1511) | 3 (0: 5697, 1: 1093, 2: 1) | the **blend** gate |
  | `+0x13C` | 4, all in the GL blend set | 4, all in the GL blend set | `blendSrcRGB` (0x0302 x10781) |
  | `+0x13E` | 6, 90.3% in the GL blend set | 3, 89.3% | `blendDstRGB` (0x0303 x9970) |
  | `+0x140` | 2, 100% (0x8006 x11166) | 2, 100% | `blendEqRGB` (FUNC_ADD) |
  | `+0x144` | 1, all <= 8 (0x0001) | 2, all <= 8 | `blendSrcA` (ONE) |
  | `+0x146` | 1 (0x0000) | 1 (0x0000) | `blendDstA` (ZERO) |
  | `+0x148` | 1 (0x8006) | 2 | `blendEqA` (FUNC_ADD) |
  | `+0x00` | 205 of 11172 set | **6428 of 6791 set** | the **fragment-lighting** gate |

  Six GL blend enums with 1-4 distinct values each cannot be bounded enum indices, and `+0x138` is
  0-or-1 for 9661/1511 and 0/1/2 for 5697/1093/1 -- the shape of a blend enable, not of the
  fragment-lighting gate. The `+0x00` count is the independent check: 205 and **6428** reproduce the
  two figures this note already recorded from a different direction (the combiner-side
  `cmb_fragment_lighting_survey.py` populations), so `+0x00` is the gate and `0x138` is the blend gate.
  The host's names in `cmb.cpp:276-284` are correct and the decomp's block is a **blend-state** build.

### What the transport therefore is, and it is complete

`FUN_004c6364(param_1, param_2)` stores `*param_1 = param_2` and then reads, through that stored
pointer, `param_2 + {0x10, 0x12, 0x14, 0x18, 0x1C, 0x1E, 0x1F, 0x20, 0x23, 0x24, 0x26, 0x28}` -- and
`param_2` is `*piVar8 + 0xcc`, i.e. **material + 0xCC**. Those twelve offsets are exactly
`CmbMaterial::fragment_lighting_descriptor`'s twelve field names in the shipping parser
(`enum_10, enum_12, flag_14, enum_18, enum_1c, flag_1e, flag_1f, flag_20, flag_23, enabled, enum_26,
scale`), and the `+0x199/+0x19A/+0x66/+0x63/+0x18B/+0x191/+0x62/+0x189/+0x192/+0x193/+0x195/+0x65`
destinations are the mode bytes the builder reads. So:

* **the descriptor feed is confirmed, and its input is data the host already retains** -- no new asset
  bytes are needed, which is what the "producer of the builder's input object" question was asking;
* the gate is `material + 0x00`, which the host already parses as `CmbMaterial::fragment_lighting`;
* the object is constructed per material at record stride **0x1CC**, so the earlier live measurement of
  a 0x4C8 stride at `CmbRenderer + 0x400` is a DIFFERENT array and must not be read as this one. That
  discrepancy is unresolved and is the next thing to settle, not something to assume away.

### What is still missing, and it is now a short list

1. **The eight slot-enable bytes** (`+0x164..+0x16B`), set by `FUN_003fa5d0` (1608 B) and
   `FUN_003fa34c` (672 B) in the CMB renderer rather than by this chain. The host models two enabled
   slots per draw (`uLitDif1`/`uLitDif2` plus `uAmbient.w` as the enabled-slot multiplicity), so the
   question is whether PICA's `lights_num` is that same 2 for every material -- recoverable by
   reading those two functions, not by inference.
2. **The reconciliation above** (0x1CC vs 0x4C8).
3. The **configuration counterfactual** still required by the conclusion above: a real port needs an
   observed lit material's `config0`/`config1` to compare the builder's prediction against, and the
   title demo never enables fragment lighting (0 of 207 draws, `picaLit` register), so this remains
   gated on issue #23.

So the transport gap is closed for the mode bytes and the gate, and what is left is the renderer's
slot-enable rule plus one live lit material to check the prediction against.

---

## The per-draw path is now fully read, and the host's two-slot model is a constant where a predicate belongs (2026-09-28)

`FUN_003fa34c` (672 B) is the per-draw writer, and it is short enough to state completely. `param_2` is
the 0x1CC-byte per-material record from `FUN_004c34ac`, so `param_2 + 0x10` is the lighting object and
`*param_2` is the material entry.

```c
if (*(char *)*param_2 == '\0') { ... return; }              // (1) the gate
...
piVar7 = param_2 + 4;                                       // == object, at +0x10
for (iVar4 = 0; iVar4 < 3; iVar4++) {                       // (2) THREE slots
  iVar6 = *(int *)(param_1 + 0x10) + iVar4 * 0x60;          //     light record, stride 0x60
  uStack_2c = *(undefined4 *)(iVar6 + 0xd8);                //     direction x,y,z at +0xD8..+0xE0
  uStack_28 = *(undefined4 *)(iVar6 + 0xdc);
  uStack_24 = *(undefined4 *)(iVar6 + 0xe0);
  if (*(int *)(iVar6 + 0xe4) == 0x3f800000) {               //     enable test: +0xE4 == 1.0f
    *(undefined1 *)((int)piVar7 + iVar4 + 0x164) = 1;       //     object +0x164 + i = 1
  }
}
*(char *)piVar7       = scale_clamp(material + 0xA4);       // (3) object +0x10..+0x12
*(char *)(param_2+1)  = scale_clamp(material + 0xA0);
*(char *)(param_2+2)  = scale_clamp(material + 0xA6);
FUN_00308498(param_1 + 0x24, piVar7);                       // (4) the confirmed chain
```

`FUN_003fa5d0` (1608 B) is the same routine with the full per-slot parameter pack: inside the same
`+0xE4 == 1.0f` test it negates the slot direction (`-*(float *)(iVar6 + 0xd8)` and so on), so the
direction it submits is light-TRAVEL, and it writes the slot's colour/attenuation bytes.

### The four inputs, and where the host already has them

| # | input | source | host status |
|---|---|---|---|
| 1 | the gate | `material[+0x00] != 0` | **have it** -- `CmbMaterial::fragment_lighting`, 205/11172 OoT3D and 6428/6791 MM3D |
| 2 | slot enables | `light[i].+0xE4 == 1.0f`, **i in 0..2** | **constant where a predicate belongs** (see below) |
| 3 | object `+0x10..+0x12` (the builder's `slot_map`) | a clamp+scale of the material's own `+0xA0/+0xA4/+0xA6` | **have it** -- `mat_ambient` / `mat_diffuse` |
| 4 | the mode bytes | `material + 0xCC` via `FUN_004c6364` | **have it** -- `fragment_lighting_descriptor` |

So three of the four are already in the host's parsed data and the fourth is a three-iteration loop
over a field the host does not carry. The builder (`FUN_0040cdd8`) is already transcribed and
mutation-tested, and the PICA200 fixed-function fragment-lighting math itself is the oracle's own
(`Azahar`'s software rasterizer), not a recovered unknown. **The fragment-lighting port no longer has
an RE blocker; it has one missing input.**

### Three slots, and the host's `2` is standing in for the predicate

`per_draw_light_setup.md` records the ACTOR configuration as two opposed directional terms
(`dir0 = +D, dif0 = light2Color, amb0 = sceneAmbient; dir1 = -D, dif1 = light1Color, amb1 = 0`) and
concludes the rig is "the standard N64 two-light rig". That conclusion is about the two configurations
that were *observed*, and the oracle's per-draw log agrees (two occupied slots in every sample) -- but
the rig is a **three-slot array at stride 0x60**, and the third slot is enabled by the same predicate
as the first two. Nothing in the observed data distinguishes "the rig has two slots" from "the rig has
three slots and the third was disabled in every sample", and the enabling field's producer is not in
the decompiled set (1,321 of the image's functions), so the third slot's value cannot be read out
statically.

The host encodes the observation rather than the predicate: `Zelda3D_GL_SetLightParams(ambient,
light1Color, light2Direction, light2Color, 2)` passes a literal `2`, which becomes the enabled-slot
count the vertex shader and `uAmbient.w` use. That is correct for every configuration measured and
**silently drops a third slot** if one is ever enabled. The fix is to carry the per-slot predicate
rather than the count, which is a change to the light-bank UBO contract and to
`Zelda3D_GL_SetLightParams`'s last argument, not to the lighting maths. It is recorded rather than
attempted here, because the honest scope of the claim is "the rig has three slots and we observe two",
and widening the UBO on an unverified third slot would be exactly the kind of speculative change that
the `+0x138` misreading above would have been.

### What this does NOT license

* The host still must not alias `FRAGMENT_PRIMARY` to the vertex `PRIMARY` for the 197 OoT3D / 5,993
  MM3D enabled consumers. This section supplies the inputs; it does not supply the counterfactual that
  a port needs to be checked against, and the title demo never enables fragment lighting (0 of 207
  draws on the authoritative `regs.lighting.disable` register), so that check is still behind issue
  #23.
* `+0xE4`'s producer is unidentified. The *rule* is read from the consumer, which is enough to
  evaluate the predicate once the producer is found, but "which field is +0xE4" is not answered here.
* The 0x1CC-vs-0x4C8 stride conflict above is unchanged and still unresolved.

---

## The counterfactual is blocked for three independent reasons, and one of them is content (2026-09-28)

The title demo was already recorded as unable to supply a lit-material ground truth: 0 of 207 draws
on the authoritative `regs.lighting.disable` register, with `picaLit` (not the CmbVShader `fLit`
boolean) as the state that counts. That is a *state* argument. There are now two more, and the second
is a content fact that no amount of title-side work can change.

### 1. The title's content contains no fragment-lit material at all

`material + 0x00` is the fragment-lighting gate (205 of 11,172 OoT3D materials; 6,428 of 6,791 MM3D),
and the 205 OoT3D materials live in **150 files**, none of them the title:

| count | archive | materials |
|---|---|---|
| 15 | `/misc/menu_link.zar:menu_link_ura.cmb` | 0..14 |
| 15 | `/misc/menu_link.zar:menu_link_omote.cmb` | 0..14 |
| 6 | `zelda_gi_grass.zar:gi_grass_model.cmb` | 0..5 |
| 6 | `zelda_ganon.zar:gn1_handR2_xx_model.cmb` | 0..5 |
| 5 | `zelda_gi_ocarina_0.zar:gi_ocarina_0_model.cmb` | 0..4 |
| 4 | `dk_spia.zar:spia5m_model.cmb` | 0..3 |

`/scene/spot99_info.zsi` — the title's own scene — has **none**. So even a perfect title route, with
every draw captured, could not produce a fragment-lit fixture: there is no material in that scene
that asks for one. That is stronger than "the register was never enabled", and it is a property of the
retail content rather than of the route.

### 2. The two largest fragment-lit populations are the equipment screen, and the title does not enter a menu

`menu_link_ura.cmb` and `menu_link_omote.cmb` are 30 of the 205 — the equipment screen's Link model,
and the only large fragment-lit population reachable without gameplay. Reaching it needs the menu,
and the title does not get there:

* pressing START mid-title does nothing and the script keeps advancing — the title is a **scripted
  playback** (`title.oot3d-not-play`), so input is ignored until the script ends;
* running the host title to `cs=2401` (past `end=2400`) and pressing START there leaves the same
  scene: 65 draws, one model, `fragLit=0` on all of them, and a static camera, with the cursor
  continuing to advance past the script's end.

So the host never transitions out of the title presentation, which matches the recorded oracle-side
behaviour ("Start at the logo -> 200 frames black -> sky-only screen, stuck 2400+ frames"). The
instrument that made this measurable is `fragLit=` on the per-draw `[Zelda3D_SG] draw N` list: the
corpus says which materials carry the flag and the draw list says which of them were actually drawn,
so "no fragment-lit draw" is now a per-frame number rather than an inference from the register.

### 3. ~~MM3D cannot supply one either~~ — WITHDRAWN, see the section below this list

**This item was wrong and is withdrawn, not merely superseded.** The reasoning it recorded — "MM needs
any MM scene at all, and MM3D has no oracle capture whatsoever (no visual evidence of any kind)" — is
refuted: MM3D boots in the Azahar oracle, and its counterfactual was measured. MM3D's opening is
fragment-lit on **116–143 of 131–161 draws per frame**, and `lighting_capture` gives
`max_light_index=1`/`slot_mapping=[0,1,...]` 12 of 12, `config0=0x80000400` 12 of 12 and `config1`
`0xff7fffff` 11 of 12 against `0xff7effff` 1 of 12. See "FOUND: the configuration counterfactual,
measured in MM3D" below. The heading is struck through rather than deleted so the withdrawal is visible
in a heading scan, which is how most readers meet this file.

What survives from it: the *separation* was right even though the conclusion was wrong. OoT3D and MM3D
were, and still are, blocked on different things, and must not be folded together.

### What would actually open it

* **OoT3D:** a state that already has a menu, so the equipment screen can be walked to. The
  equipment screen is the highest-value single target in the corpus by a wide margin (30 of 205
  materials, all in one place, all reachable without combat), and `menu_link_omote`/`ura` are already
  named in this note as "grounded counterfactual candidates" for exactly this reason.
* **MM3D:** any MM3D frame at all. Until then no MM3D fragment-lighting claim is checkable, and the
  honest status stays "implemented-but-unverified" rather than "verified".

Do not re-attempt this from the title screen. The three reasons above are measurements, not obstacles
to try harder against.

## FOUND: the configuration counterfactual, measured in MM3D (2026-09-28)

The previous section is half-wrong and is corrected here rather than annotated. Its reason (c) — "MM3D
needs no rare fixture but has no oracle capture at all" — is **refuted**: MM3D has an oracle, and the
counterfactual was in it the whole time. Reasons (a) and (b) are about **OoT3D's content** and stand
untouched, because no MM3D evidence can speak to them. The title's own scene
`/scene/spot99_info.zsi` contains none of the 205 fragment-lit materials (a content fact no route
changes), and the equipment screen's Link model is 30 of them but the title never enters a menu.

**The measurement.** On the authoritative `picaLit` field (`regs.lighting.disable`, not the CmbVShader
boolean), MM3D's opening is fragment-lit on **116–143 of 131–161 draws per frame** across frames
1200–3800. `lighting_capture` at frame 2000, 12 captures from 24 armed — the misses are draw indices
that stop being submitted when the scene advances between the arming frame and the next one, reported
here rather than dropped:

| register | value | draws |
| --- | --- | --- |
| `max_light_index` | `1` | 12/12 |
| `slot_mapping` | `[0, 1, 0, 0, 0, 0, 0, 0]` | 12/12 |
| `config0` | `0x80000400` | 12/12 |
| `config1` | `0xff7fffff` | 11/12 |
| `config1` | `0xff7effff` | 1/12 |
| `light_enable` | `0x00000010` | 12/12 |
| `luts` | *(empty)* | 12/12 |

Four things follow, and only the first was open.

**1. The host's slot count of 2 is now measured instead of assumed.** This is the project's first
**two-light** fragment-lit fixture. Gravekeeper's Hut is a ONE-light material, so the OoT3D fixture
could never discriminate a 2-slot host from a 3-slot one; `Zelda3D_GL_SetLightParams`'s literal `2` is
consistent with 12 of 12 captures, with a denominator. It is still an *observation* rather than the
predicate — `FUN_003fa34c` decides per material — but the constant is no longer a guess.

**2. `config0 = 0x80000400` is the platform baseline, not a fixture coincidence.** MM3D and OoT3D have
separate material compilers and different asset pipelines, and both land on the same word. That
**strengthens the one open bit in the builder**: `pica_lighting_config.py`'s constructor default
predicts `0x80020400` — the observed word plus exactly bit `0x11`, which comes solely from the
constructor's `+0x18A = 1`, a byte `FUN_004c6364` covers but does not write. MM3D shows that bit clear
on 12 of 12 draws in a *different title*, so "the ordinary lit path clears `+0x18A`" is now a
cross-title fact rather than a single observation. **Which code clears it remains unknown and is not
guessed** — the code-image search for its 0x4C8-byte source is already a recorded dead end.

**3. `config1` is NOT a constant.** `0xff7effff` differs from `0xff7fffff` at bit `0x11`, which the
builder names `MODE_SPOT_INDEX` (object `+0x190`). So a host that hardcodes `config1` is wrong for the
materials that differ, and this is a real per-material input the transport has to carry — not a
platform constant. Note the shape of the disagreement: `config0` is invariant across all 12 while
`config1` varies, so the two words are not authored by the same rule and must not be carried as one.

**4. No LUTs are in play.** `luts` is empty on 12/12, so these are the no-LUT form — the same form as
the Gravekeeper fixture. The LUT-enabled half of this row still has no fixture in either title.

### Two traps this measurement walked into, recorded so they are not walked into again

* **`light_enable` is not a bitmask of enabled slots.** Azahar reads it as a per-slot **light index**
  (`Azahar/src/video_core/pica/pica_core.cpp:100`, `regs.light_enable.GetNum(slot)`), and the
  capture's `slot_mapping` array *is* that index per slot. A slot count derived by popcounting the word,
  or by reading `0x10` as "slot 4 is enabled", produces a confident wrong answer — this one produced
  exactly that before being caught. `max_light_index` and `slot_mapping` are the authority.
* **`lighting_capture` only *arms* the request.** The PICA hook fills the file when that draw index is
  actually submitted, so arming and reading immediately yields a **0-byte file** that looks like a
  silent failure. Frames must run between the two. This is the same shape as reading `az_fog` before a
  frame, and as matching `draw=` instead of `n=` in a `vsuni_log` — a confident false negative.

## The per-light transport contract, MEASURED on MM3D's registers (2026-09-28)

Until now the per-slot transport was described in prose — "the host collapses ambient to
`sceneAmbient * materialAmbient` plus an enabled-light count, so it lacks independent PICA per-light
ambient products and fragment configuration/LUT selection" — and prose is what let the slot count stay
hardcoded at `2` for this long. With MM3D booting, the registers are readable, so the contract's shape
can be measured instead of asserted.

### The decoder is transcribed from the emulator, and that mattered

A first attempt used the widely-repeated "4 bits per channel plus an enable bit" colour layout and
12.4 fixed point for the light position. Both are wrong. The authoritative layout is
`Pica::LightSrc` in `Azahar/src/video_core/pica/regs_lighting.h:136-170`:

| field | layout |
| --- | --- |
| `specular_0`, `specular_1`, `diffuse`, `ambient` | **10 bits per channel**, 255 == 1.0f, **no enable bit** |
| `x`, `y`, `z` | **16-bit floating point** (not fixed point) |
| `spot_x`, `spot_y`, `spot_z` | fixed 1.1.11, signed |
| `config` | bit0 `directional`, bit1 `two_sided_diffuse`, bit2/3 `geometric_factor_0/1` |
| `dist_atten_bias`, `dist_atten_scale` | 20 bits each |

The 4-bit decode made both of MM3D's lit lights look near-black and invented an enable bit that does
not exist. Corrected, the values are ordinary light colours. **Three separate wrong-element reads in
one session, all producing clean-looking output, is the pattern worth recording.**

### What the two lit slots actually contain

Three `lighting_capture` reads at MM3D frame 2000, identical across all three (the scene is static,
which is the control that these are scene constants and not per-frame noise):

| | slot 0 | slot 1 |
| --- | --- | --- |
| `diffuse` | **(41, 31, 26)** | **(96, 82, 72)** |
| `specular_0` | (83, 63, 53) | (193, 165, 146) |
| `ambient` | (0, 0, 0) | (0, 0, 0) |
| `x`, `y`, `z` | **-0.9365**, 0, 0 | **+0.9365**, 0, 0 |
| `config` | `directional` | `directional` |
| `dist_bias`, `dist_scale` | 0, 0 | 0, 0 |

### What that decides about the transport

Comparing each draw's own lit slots against each other, 3 draws / 6 slots:

* **demonstrably PER-SLOT** (differs between a draw's own slots, so it needs its own slot in the
  transport): **`diffuse`, `specular_0`, and the light direction `xy`**.
* **not observed to vary** (equal in all 3 captures, which is NOT the same as constant):
  `specular_1`, `ambient`, `z`, `spot_xy`, `spot_z`, `config`, `dist_bias`, `dist_scale`.

The distinction is load-bearing: a field equal in three reads of one static scene is not evidence that
it is constant, and the table says "not observed to vary" rather than "constant" for exactly that
reason.

**Both lights are `directional` and exactly antiparallel in x, but their COLOURS are not equal** —
(41,31,26) against (96,82,72), a factor of ~2.3 on the same hue. The antiparallel geometry matches the
N64 `EnvLightSettings` convention that the ZSI records follow (`light2Dir == -light1Dir`: 16 of 40
emitted MM3D table slots are exactly antiparallel, 81.6% of records by the earlier measurement). So a
host that derives light 2 by **negating light 1** would get the direction right and the colour wrong,
and a host that copies the colour would get the direction wrong. Neither reduction works, which is the
concrete reason the transport needs a genuine per-slot record.

### Still open, and the reason is specific

MM3D's dir scale measures ~119.5 where OoT3D's is ~124.7, and the natural hypothesis is a plain x127
s8 scale — the live register's `x = 0.9365` gives `0.9365 * 127 = 118.9`, which is close. **This is
consistent with, and does NOT confirm, the x127 scale**: the opening's palette is not in the recovered
table at all, because the opening is not a scene ZSI, so the two sides cannot be joined. The scale stays
open with that reason attached rather than being closed by a plausible multiplication.
