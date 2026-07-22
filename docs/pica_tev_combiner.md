# PICA200 TEV combiner — full per-stage semantics as OoT3D uses them

2026-07-22, render.multi-stage-tev. Ground truth from two independent sides that AGREE
byte-for-byte at Zora's Domain: (a) the CMB material tables of every file in the ROM
(`tools/tev_corpus_survey.py`, all 1997 CMBs / 11172 materials), and (b) the live oracle's
per-draw TEV register log (Azahar Patch 5/7 `vsuni_log`: `tev0=...`, `tev1..5=...`).

## 1. CMB combiner-entry layout (0x28 bytes) — validated corpus-wide

Entries live in a shared settings table right after the material structs
(`matsPtr + 0x0C + nMats*stride`); each material holds a stage count at mat+0x120 and up
to six u16 entry indices at mat+0x124.

| off | type | field | legal domain (every value observed in the ROM) |
|---|---|---|---|
| +0x00 | u16 | combineRGB | 0x1E01 REPLACE, 0x2100 MODULATE, 0x0104 ADD, 0x8574 ADD_SIGNED, 0x8575 INTERPOLATE, 0x84E7 SUBTRACT, 0x6401 MULT_ADD, 0x6402 ADD_MULT |
| +0x02 | u16 | combineAlpha | same domain |
| +0x04 | u16 | scaleRGB | literal 1 / 2 / 4 |
| +0x06 | u16 | scaleAlpha | literal 1 / 2 / 4 |
| +0x08 | u16 | bufferInputRGB | 0x8579 in ALL 11172 materials (see §4) |
| +0x0A | u16 | bufferInputAlpha | 0x8579 in ALL materials |
| +0x0C | u16[3] | srcRGB | 0x8577 PRIMARY, 0x8578 PREVIOUS, 0x8579 PREVIOUS_BUFFER, 0x8576 CONSTANT, 0x84C0..3 TEXTURE0..3, 0x6210 FRAGMENT_PRIMARY, 0x6211 FRAGMENT_SECONDARY |
| +0x12 | u16[3] | operandRGB | 0x0300 C, 0x0301 1-C, 0x0302 A, 0x0303 1-A, 0x8580 R (0x8581..0x8585 = 1-R/G/1-G/B/1-B by pattern; only R observed) |
| +0x18 | u16[3] | srcAlpha | same domain as srcRGB |
| +0x1E | u16[3] | operandAlpha | alpha-channel selects (A / 1-A / R ...) |
| +0x24 | u32 | constantIndex | 0..5, PER STAGE (selects matConstColor slot; NOT +0x14 as noclip suggests) |

Running the domain check over the full corpus produces ZERO violations — this is the
whole layout, not a partial guess. Two enum-name corrections vs older notes in
`Shipwright/cmb3d/asset/cmb.cpp`: 0x8574 is ADD_SIGNED and 0x8575 INTERPOLATE (standard
GL values; they were swapped), and SUBTRACT is 0x84E7 (the old `case 0x8506` never
matched anything).

Texture bindings are 3 x 0x18 entries at mat+0x10 (tex0/1/2 index, wrap at +8/+0xA);
coordinators are 3 x 0x18 entries at mat+0x58 (mapping byte[2], source-UV byte[1],
scale/trans floats). **Every coordinator in the ROM sources texcoord0** (byte[1]==0,
all 11172 materials) — multi-texture materials reuse the one baked UV set through
per-coordinator scale/translate (and CameraSphereEnvMap for mapping 3).

## 2. Stage semantics (matches Azahar's TevStageConfig, the oracle's own core)

Per stage: up to three sources are fetched, each passed through its operand modifier,
combined by the op, scaled x1/x2/x4, and CLAMPED ON REGISTER WRITE (the same
clamp-the-product rule as the vertex-lit o1 register). Ops:

    REPLACE     a
    MODULATE    a*b
    ADD         a+b
    ADD_SIGNED  a+b-0.5
    INTERPOLATE a*c + b*(1-c)
    SUBTRACT    a-b
    MULT_ADD    a*b + c
    ADD_MULT    clamp(a+b) * c
    DOT3_RGB(A) 4*dot(a-0.5, b-0.5)   (zero uses in the ROM)

PRIMARY is the vertex-lit output color (o1 = clamp(Σ matAmb*lightAmb_i +
max(0,N.-L_i)*matDif*lightDif_i) * vColor, per_draw_light_setup.md). CONSTANT reads the
STAGE's own constantIndex slot of matConstColor[0..5] (8-bit registers). PREVIOUS is the
prior stage's output; stage 0's PREVIOUS reads as 0.

## 3. What OoT3D actually uses (corpus counts)

- stage counts: 1: 8680 · 2: 1871 · 3: 507 · 4: 103 · 5: 10 · 6: 1
- 8232 materials are exactly `MODULATE(C(PRIMARY), C(TEX0)) x{1,2,4}` with alpha
  `MODULATE(A(PRIMARY), A(TEX0)) x1` — the single-stage fast-path shape.
- texture1 consumed by 1622 materials, texture2 by 250, texture3 by 1 (a stray).
- Fragment-lighting sources (0x6210/0x6211): 199+69 materials (Ganon effects, lightbox...).
- PREVIOUS_BUFFER as a source: 14 materials.

## 4. Zora's Domain water — static CMB == live oracle registers

`/scene/spot07_1_info.zsi` (Zora's Domain interior, room 1) mat0/1/2 bind tex0+tex1+tex2
(tex1 = `s07_uvwater_01` ETC1 64x64, tex2 = `s07_uvwater_02`) and run:

    stage0: MODULATE (C(PRIMARY), C(TEX0)) x2 / alpha MODULATE(A(PRIMARY), A(TEX0))
    stage1: MULT_ADD (C(PRIMARY), C(TEX1), C(PREVIOUS)) / alpha REPLACE(A(PREVIOUS))
    stage2: MULT_ADD (C(PRIMARY), C(TEX2 or TEX1), C(PREVIOUS)) / alpha REPLACE(A(PREVIOUS))

The oracle's per-draw register log at the same scene decodes to exactly this
(`tev1..5=e1f0f40:8:1,e1f0f50:8:1` = sources {Primary, Texture1/2, Previous},
color_op 8 MultiplyThenAdd) — the game uploads the CMB combiner verbatim; there is no
runtime rewrite of the water chain.

## 5. PREVIOUS_BUFFER (open corner)

The buffer-input selector is 0x8579 in every material, i.e. the combiner buffer never
latches PREVIOUS — a PREVBUF source reads the INITIAL combiner-buffer color, which is a
runtime register (tev_combiner_buffer_color) this doc has not yet captured. 14 materials
in the ROM use it. The soh3d port currently evaluates PREVBUF as 0 (documented in-shader).
