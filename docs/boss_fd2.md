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

## Idle/attack controller chain (static, port in progress)

`FUN_0012827C` is the post-emergence idle/turn controller. It advances the
OoT3D animation controller, smooths the actor yaw toward the player, and uses
the previous/current yaw error to select authored clips directly:

- crossing from `abs(error) <= 1000` to `> 1000` selects slot 10,
  `vba_search`;
- crossing back to `<= 1000` selects slot 14, `vba_wait`;
- when its timer expires, distance `< 200.0` selects slot 11,
  `vba_tyokkai`, and action `FUN_0011B624`;
- otherwise it selects slot 4, `vba_atack`, and action `FUN_00106334`.

The literal pool at `0x001283CC..0x001283DC` supplies `-5.0`, `1000.0`,
`200.0`, and the two action pointers above. Both outgoing selectors pass the
same `-5.0` transition argument as the idle/turn switches, so this is a
five-authored-frame OoT3D crossfade. The port owns that outgoing pose and
weight independently; it does not read SoH's N64 morph state.

`FUN_0011B624` completes `vba_tyokkai` and selects slot 7 (`vba_down`) with
another `-5.0` transition before entering `FUN_003D713C`. `FUN_00106334`
does the same after `vba_atack`, while also implementing the authored fire
window and head tracking. `FUN_003D713C` completes `vba_down`, holds the
burrow timer, then either hands control back to the flying parent or selects
slot 12 (`vba_up`) for another ground cycle.

## Hit, damage, and death controller chain

The collision controller `FUN_0020A668` owns the initial clip selection; the
action functions own subsequent transitions:

- A knockout hit selects slot 8 (`vba_hit`) and action `FUN_00120B20`.
  That action plays the clip once, waits through its first substate, then
  selects slot 7 (`vba_down`) when recovery ends. Its N64 Rosetta counterpart
  exposes the intermediate semantic action state: state 0 completes the
  knockout clip, then state 1 loops slot 9 (`vba_pikupiku`) during the
  vulnerable window before burrowing.
- Nonlethal damage selects slot 5 (`vba_beforedamage`) and action
  `FUN_00137D74`. On completion, that action selects slot 6 (`vba_damage`),
  then returns to the wait action after its post-animation timer.
- Lethal damage selects slot 6 (`vba_damage`) and action `FUN_001386D4`
  directly. The long death action does not select another body CSAB.

Literal-pool resolution establishes the action pointers: collision writes
`0x00120B20` for knockout, `0x00137D74` for nonlethal damage, and
`0x001386D4` for death. `FUN_00120B20` later writes `0x003D713C` (burrow),
while `FUN_00137D74` later writes `0x003E4790` (wait). The port follows these
authored-slot transitions from action/substate semantics and never samples an
N64 animation pointer, cursor, joint table, or morph weight.

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
the formerly exposed vertical body. The full ground-form controller chain is
now decompiled and ported. `Boss_Fd` remains a distinct flying multipart actor.

## Flying Boss_Fd profile and multipart draw (2026-08-14)

The flying parent is actor `0x0096`, profile `0x00514944`, category 9,
object `0x009C`. Its entry points are init `FUN_001A62C4`, destroy
`FUN_001A6C58`, update `FUN_001EC834`, and draw `FUN_001EC7E4`.
The draw is a dispatcher: unless action `FUN_003E41F0` is active it calls
`FUN_003B4308`, the complete flying multipart body renderer, then submits the
effect array through `FUN_0014690C`.

`FUN_001A62C4` establishes the render inventory directly from archive indices:

| model index | CMB | use |
|---:|---|---|
| 1 | `valbasiabody.cmb` | main flying body skeleton |
| 3 | `valbasiahead.cmb` | alternate/head skeleton |
| 4 | `valbasialarm.cmb` | left arm skeleton |
| 5 | `valbasiararm.cmb` | right arm skeleton |
| 6 | `valbasia_firehair.cmb` | thirty mane instances |
| 8 | `valbasia_death_body.cmb` | eighteen rigid instances used by the segment/death path |
| 9 | `valbasia_death_head.cmb` | alternate/death-head skeleton |
| 10 | `vb_particle_group.cmb` | 110 effect instances |

The ordinary flying draw `FUN_003B4308` is procedural, not a single actor
matrix. It submits the right and left arm skeletons at controllers `+0x2AC`
and `+0x330`; iterates exactly 18 segment transforms from the 150-entry
position/rotation history at `+0x104C`; submits the main skeleton at `+0x1A4`;
then selects the live head or death-head controller and finally submits three
mane chains. `actor+0x886` is initialized to 18 and controls how many leading
segments use stored matrices; later segments use the `valbasia_death_body`
instance path. Therefore replacing Boss_Fd with only `valbasiabody.cmb` cannot be
faithful even if its skeleton animates: arms, segment instances, head/death
variant, and all three mane chains are separate submissions with transforms
owned by the actor's procedural history.

The body callback is now resolved, rather than inferred from the N64 twin.
`FUN_00209588` receives `(nodeIndex, matrix, actor)` and, only for node indices
`19..36`, copies one of the eighteen actor matrices at `actor+0x43C` over the
renderer matrix verbatim. The draw builds those matrices from the history ring
using the signed-short offset table at `0x004D73AC`:
`{0,141,135,126,120,111,105,96,90,81,75,66,60,51,45,36,30,21,15,6}`.
This establishes that `valbasiabody` first evaluates its authored
`vb_FWDtest` CSAB and then replaces the eighteen body-bone world transforms
with procedural flight-history matrices. It does **not** consume an N64
animation identity, phase, joint table, or morph state.

`FUN_00316DC0` is the three-chain mane submission. It clamps visible length to
ten, samples a 45-entry position/rotation history at
`(leadMane - 3*i + 45) % 45`, applies the authored center/left/right offsets,
and submits one `valbasia_firehair` instance per visible segment. The CMAB is
bound by the instance renderer initialized in `FUN_001A62C4`; mane motion is
procedural actor history, independent of skeletal animation.

The producer is the tail of flying action `FUN_003C724C`. Once movement has
updated the actor, it advances the body cursor modulo 150 and records the
actor's world position plus XYZ shape rotation at `+0x104C/+0x944`. It then
advances the mane cursor modulo 45, records all three current mane anchors and
the same shape rotation, and writes independent scale waves using frequencies
5596, 5496, and 5696 with amplitude 0.3. These are the 3DS-owned procedural
rings consumed above; the N64 actor's 100/30-entry rings are not equivalent
animation data and are not inputs to the port.

### Flying skin-to-bone draw transition

The segment split inside `FUN_003B4308` is now resolved down to the cooked
assets and the visibility helper. `valbasiabody.cmb` has exactly eighteen
meshes whose mesh IDs are the consecutive range `0..17`. For every segment
index greater than or equal to `actor+0x886` (`skinSegments`), the draw calls
`FUN_0036932C(bodyModel, segmentIndex)`. That 32-byte helper bounds-checks the
mesh index and writes zero to the model's mesh-visibility byte. The skinned
body therefore retains exactly the leading `skinSegments` mesh IDs; this is
not an animation or joint-table operation.

For each hidden segment whose two-byte fall-apart state is below 2, the same
draw submits one of the eighteen instances of model index 8,
`valbasia_death_body.cmb`. Its matrix starts at the segment's 150-entry
history transform, translates along local negative Z by the measured distance
to the preceding segment history sample, rotates Y by `-pi`, and scales by
`0.1`. Segments 14..17 additionally taper X/Y by
`1 - (segmentIndex - 14) * 0.2`. When the action state reaches 204, the head
controller switches from model index 3 (`valbasiahead.cmb`) to model index 9
(`valbasia_death_head.cmb`). Both paths remain 3DS CMB draws.

The flying material bindings are also exact from the init indices and parsed
CMAB payloads: body material 0, head material 2, and both arm material 0 each
scroll channel 1 U from 0 to 4 over 120 frames; fire hair animates material 0
constant-color slots 1 and 2 over 30 frames; `valbasiahead_eye.cmab` selects
material 0 palette frames 0/1/2; and the exposed-face context
`valbasiahead2.cmab` pulses material 1 constant-color slot 4 alpha over 12
frames. The death body and death head use their static CMB materials.
