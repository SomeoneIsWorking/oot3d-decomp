# Boss_Fd2 (Volvagia hole form)

## Static anchor (2026-08-13)

OoT3D keeps the hole form in the main Volvagia object archive instead of
providing an `object_fd2` equivalent.  The actor profile at `0x00514D3C`
(overlay-table entry `0x00A2`) has:

| field | value |
|---|---:|
| category | 9 (boss) |
| objectId | 156 (`0x009C`, `zelda_fd.zar`) |
| init | `0x001D08AC` |
| destroy | `0x001D0B88` |
| update | `0x0020A668` |
| draw | `0x0020A3B0` |

This identification is corroborated by the matching boss category, the
Volvagia object slot, and its `0x00A2` position alongside the N64
`ACTOR_BOSS_FD2` profile.  Do not infer that all OoT3D actor IDs equal their
N64 counterparts: `actor_layout.md` records that the spaces differ in general.

`0x001D08AC` initializes a live skeleton/animation controller at actor
`+0x1A4` from the object-context slot and allocates the accompanying render
state.  `0x0020A3B0` first submits that skeleton and then dispatches three
additional animated mane chains. Its helper `0x00335904` computes and submits
nine segment transforms per chain, matching the N64 center/right/left
ten-segment mane groups. The N64 counterpart's skeleton has limbs through
index 36 (it is not a three-bone head rig). Therefore a single forced CMB route
would be a regression: it would replace the complete draw and omit geometry
which the original actor still draws.

## Model slots (static, confirmed)

`FUN_00358EF8` indexes the archive's CMB model list (zero-based). Its main
Volvagia control case is actor `0x0096`: `FUN_001A62C4` selects index `1`,
which is `valbasiabody.cmb`, before constructing the main skeleton. The
hole-form initializer `FUN_001D08AC` selects index `2`, therefore its skeleton
CMB is **`valbasiagnd.cmb`**. It also constructs thirty instances from index
`6`, **`valbasia_firehair.cmb`**. That count matches the three ten-segment
mane chains.

## Material-animation slots (static, confirmed)

`FUN_00372F0C` indexes the archive's material-animation resource array
(zero-based); `FUN_00372D94` binds the selected resource to a model instance.
The CMAB order in `zelda_fd.zar` makes every initializer binding self-consistent:

| resource index | CMAB | binding in `FUN_001D08AC` |
|---:|---|---|
| 3 | `valbasia_firehair.cmab` | each of the thirty fire-hair instances |
| 5 | `valbasiagnd.cmab` | hole-form skeleton model |
| 10 | `valbasia_eye.cmab` | auxiliary eye material context |
| 11 | `valbasiagnd2.cmab` | auxiliary hole-form material context |

This also cross-checks the model-slot result: model index 6 and material index 3
independently select the fire-hair CMB/CMAB pair, while model index 2 and
material index 5 independently select the hole-form CMB/CMAB pair.

## Skeletal-animation slots (static, confirmed)

The skeleton initializer passes CSAB index `0xE` (14), which is
`vba_wait.csab`. The remaining hole-form clips occupy the contiguous range
4--14. Their mapping is mechanically identified by the N64 AnimationHeader
frame counts in `oot.o2r` versus the CSAB durations in `zelda_fd.zar`: every
pair differs by exactly one frame (the formats' endpoint convention), and the
action names resolve the only equal-duration idle/down alternatives.

| index | OoT3D CSAB (duration) | N64 animation (frame count) |
|---:|---|---|
| 4 | `vba_atack` (86) | `gHoleVolvagiaBreatheFireAnim` (85) |
| 5 | `vba_beforedamage` (17) | `gHoleVolvagiaHitAnim` (16) |
| 6 | `vba_damage` (46) | `gHoleVolvagiaDamagedAnim` (45) |
| 7 | `vba_down` (21) | `gHoleVolvagiaBurrowAnim` (20) |
| 8 | `vba_hit` (45) | `gHoleVolvagiaKnockoutAnim` (44) |
| 9 | `vba_pikupiku` (16) | `gHoleVolvagiaVulnerableAnim` (15) |
| 10 | `vba_search` (17) | `gHoleVolvagiaTurnAnim` (16) |
| 11 | `vba_tyokkai` (24) | `gHoleVolvagiaClawSwipeAnim` (23) |
| 12 | `vba_up` (27) | `gHoleVolvagiaEmergeAnim` (26) |
| 13 | `vba_wait02` (21) | `gHoleVolvagiaAnim_00CDAC` (20) |
| 14 | `vba_wait` (21) | `gHoleVolvagiaIdleAnim` (20) |

The update decomp corroborates the table: its state transitions request CSAB
indices 5--8 at the corresponding damage/down transitions, rather than naming
or guessing clips on the port side.

## Emergence controller and draw transform (dynamic + static, confirmed)

The waiting action `FUN_003E4790` consumes parent signal `0x64`, calls setup
`FUN_0033E37C`, and enters action `FUN_003B9814`. The setup selects CSAB slot
12 (`vba_up`) and freezes it at frame zero. A 281-sample embedded-oracle trace
then established the controller timeline directly:

- phase 0 holds `vba_up@0` for 30 OoT3D 30 Hz update ticks;
- phase 1 holds `vba_up@0` for 45 OoT3D 30 Hz ticks at parent health 24;
- phase 2 advances the authored CSAB from frame 0 through frame 26;
- completion changes action to `FUN_0012827C` and CSAB slot 10
  (`vba_search`) at frame zero.

The live animation controller fields were read from actor `+0x1A4`; no N64
animation header, joint table, clip phase, or morph state participates. The
SoH3D port therefore owns an explicit OoT3D controller and samples only the
authored CSABs. The controller ticks from actor post-update rather than draw,
so batched headless `step N` runs cannot skip a short-lived action transition.
The trace also proves the timebases differ: timers decrement at 30 Hz while the
CSAB cursor advances `0.667` frame per 30 Hz update (20 authored frames/sec).
SoH logic is 20 Hz, so the port consumes timer ticks through an exact 3:2
integer accumulator and advances the CSAB by one authored frame per SoH tick.

The vertical-body defect was not a skeleton or CSAB failure. At live
`vba_up` frame 8, actor position was `(240,150,-240)`, while the matrix passed
to the skeleton draw was:

```
 0.00213499  0           0.00666595   240
 0           0.007       0            -430
-0.00666595  0           0.00213499  -240
```

Thus the draw has the authored world-Y lift `-580`. This is independently
present in the N64 actor as `shape.yOffset * scale.y` (`BossFd2_Init` sets
`shape.yOffset = -580 / scale.y`), so the port now applies the live typed
field rather than a fitted offset. Sampling `valbasiagnd.cmb` plus
`vba_up@8` with that matrix predicts head origins at Y 105--143; the oracle's
post-limb head anchor is Y 126.23.

The skeleton callback `FUN_001D0C3C` is also decompiled. It post-concatenates
`RotateZ(head.x) * RotateY(-head.y)` on bone 10, `RotateZ(jaw)` on bone 13,
and `RotateZ(-jaw*0.1)` on bones 14/15. The port applies these exact OoT3D
bone numbers and axes through the CSAB skinner's post-rotation channel.

## Port and live status (2026-08-13)

The SoH side now has the required dedicated `behaviors/actor/boss_fd2.*`
module. It submits `valbasiagnd` through the live SkelAnime choke point and
replaces all 27 active mane instances at the transforms produced by the actor's
native three-chain simulation. A typed `fd2ground` diagnostic drives the real
`Boss_Fd::handoffSignal = FD2_SIGNAL_GROUND` path and refuses any selection
which is not actor `0x00A2` with a live `Boss_Fd` parent.

The headless positive run measured `n64sum=202701.3`,
`oot3dsum=202701.3`, ratio `1.000`, actor scale `0.00700`; the live N64
`gHoleVolvagiaEmergeAnim` resolved to `vba_up`, and later action transitions
resolved `vba_search`, `vba_atack`, and `vba_down` rather than falling back.
It also exposed and fixed a shared resolver defect: an explicit model key is
`/actor/zelda_fd.zar|valbasiagnd`, so ZAR-qualified animation mappings must
compare the archive prefix before the forced-CMB selector.

The four CMABs were parsed directly from `zelda_fd.zar`:

- `valbasia_firehair.cmab`: material 0 const-color slots 1 and 2, duration 30;
- `valbasiagnd.cmab`: U translation on channel 1 of materials 0, 1, and 5,
  duration 120, `0 -> 4`;
- `valbasia_eye.cmab`: material 3 texture-palette indices `0,1,2`;
- `valbasiagnd2.cmab`: material 4 const-color slot 4 alpha pulse
  `0 -> 1 -> 0`, duration 12.

The fire-hair constants are now bound and visibly produce the authored
orange/red flame gradient. The earlier attribution of tall white strips to the
mane was falsified by stable model isolation: all 27 `valbasia_firehair`
submissions have finite 14--91-unit world extents, while the strips survive
with every Zelda3D model filtered out and even with `Boss_Fd2` hidden. They are
an unrelated HUD/framebuffer artifact in this diagnostic scene, not boss
geometry. A typed `fd2idle` hold now establishes a coherent paired state
(`Boss_Fd2_Idle` plus parent `BossFd_Wait`) and `aaim` frames the submitted
model bounds; that live frame shows the body and orange mane without stretched
segments.

The body U scroll, eye palette, and body alpha pulse now execute in the live shipping
path (the diagnostic measured 3/3 UV targets and eye palette 0/1/2 resolving to
three distinct textures). A fresh decompile of `0x00335904`
confirms the 3DS helper uses the same nonuniform segment-scale construction as
the N64 helper, including the post-scale X rotation; the defect is not evidence
for a guessed scale correction. The embedded oracle and SoH3D now both have a
visible emergence capture: the natural-camera SoH3D frame uses `vba_up@10`,
the authored `-580` draw lift, and a compact ground-form silhouette rather than
the formerly exposed vertical body. The remaining Boss_Fd2 RE is the complete
set of non-emergence action controllers; those states currently use independent
authored-CSAB playheads but are explicitly marked STOPGAP until their OoT3D
action functions are decompiled. `Boss_Fd`
(actor `0x0096`) is a separate multipart render; the invalid generic
largest-CMB replacement is disabled so it retains the N64 draw until its own
dedicated port exists.
