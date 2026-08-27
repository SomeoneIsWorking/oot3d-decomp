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

The same decompile fixes the live layout used by the paired harness: the
hole-form actor reads its `Boss_Fd` parent pointer at `+0x124`, then reads and
clears the handoff byte at parent `+0x940`. Harness command
`force bossfd2_ground` writes only the recovered `0x64` signal to that verified
parent field on the oracle and invokes the shipping typed control on SoH; the
real action function performs the transition in both engines on their next
update.

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

## Rendered roots and hole-form mane solver (2026-08-28)

The post-limb callback `FUN_001EC5B8` establishes the rendered roots directly.
It acts only on CMB limb 14 and transforms five literal local points through
that limb's evaluated matrix with `FUN_003735AC`:

| actor destination | local limb-14 point | meaning |
|---:|---:|---|
| `+0x03C` | `(4500, 0, 0)` | focus point |
| `+0x328` | `(4000, 0, 0)` | rendered head |
| `+0x4CC` | `(4000, -2900, 2000)` | center-mane head |
| `+0x668` | `(4000, -1600, 0)` | right-mane head |
| `+0x804` | `(4000, -1600, -2000)` | left-mane head |

The callback body is at `0x001EC5B8..0x001EC79C`; its literal pool is
`0x001EC7A0..0x001EC7E0`. Live reads of the four non-focus point buffers at
`0x00569DD0..0x00569DFF` reproduced those values exactly. These are posed CMB
anchors. N64 limb 35 or an actor-origin approximation must not drive the 3DS
head and mane roots.

`FUN_0020A3B0` passes those three mane heads to `FUN_00335904` with three
independent ten-element dynamic groups:

| chain | rotation | position | pull | scale | head |
|---|---:|---:|---:|---:|---:|
| center | `+0x33C` | `+0x3B4` | `+0x42C` | `+0x4A4` | `+0x4CC` |
| right | `+0x4D8` | `+0x550` | `+0x5C8` | `+0x640` | `+0x668` |
| left | `+0x674` | `+0x6EC` | `+0x764` | `+0x7DC` | `+0x804` |

The three ten-float tables are byte-exact ROM data: Y acceleration at
`0x004D74AC` is `{0,100,50,0,0,0,0,0,0,0}`, the per-segment upper Y limit at
`0x004D74D4` is `{0,5,-10,500,500,500,500,500,500,500}`, and segment-length
scale at `0x004D74FC` is `{0.4,0.6,0.8,1,1,1,1,1,1,1}`. The solver constants
at `0x00335D0C..0x00335D44` resolve to `1`, `0`, `2`, `110`, `25`, `88`,
`30`, `-30`, `0.01`, `-910`, `110`, `30`, `-30`, `0.0009`, and `pi/2`.
Consequently the recovered operation is not a fitted approximation: it pins
position zero to the posed head, computes `Ry * Rx` segment directions of
`25 * lengthScale`, damps the displacement by `88 * 0.01`, clamps pull to
`[-30,30]`, and applies the `headY >= -910 && nextY < 110` floor branch.

One subtle rate conversion lives inside the helper called for pull decay.
`FUN_00335904` requests target/fraction/max-step `(0,1,1)`, but
`FUN_00373500` at `0x00373500..0x00373588` multiplies both fraction and maximum
step by `s16(global+0x110) * 1/3`. The live global value is 2, so one 30 Hz
OoT3D solver call approaches zero with effective fraction and maximum step
`2/3`, not `1`. Literal `0x3EAAAAAB` at `0x00373590` is the one-third scale;
literal `0x3727C5AC` at `0x00373594` is the `1e-5` snap threshold. A 30 Hz
host substep port must retain those semantics; repeating the N64 20 Hz helper
with literal `(1,1)` is not an exact reproduction.

The embedded frontend itself is 60 Hz, while OoT3D executes this draw and
solver once per two `retro_run()` calls. Thus `run 10` versus `soh_step 10`
compares five oracle solver calls with ten host calls and is not evidence of a
solver difference. The deterministic comparator now uses `run 20` versus
`soh_step 10` for ten calls on each side. Its control initialization writes
every position in a chain to that chain's current posed head and zeros rotation
and pull; the immediate head-relative comparison is exactly `mean=0`,
`max=0`, proving that the readback, offsets, and normalization can report the
other answer.

After ten equal calls from that deliberately collapsed-chain stress state, the
current port reports `mean=6.411`, `max=28.281`. An earlier absolute-zero
history run after correcting the `2/3` decay reported `mean=0.830`,
`max=3.732`, but its initial oracle and host head frames were not equal, so it
is supporting diagnostic evidence rather than a parity result. These numbers
do not close the solver: natural emergence must still be compared with matched
30 Hz intermediate posed heads across the live controller sequence.

Paired camera control also separated live camera state from captured output.
Writes to each engine's Camera/View eye, at, and FOV fields take effect in the
live state immediately, while the libretro framebuffer trails that state. Ten
completed paired frames were sufficient for both captured framebuffers to
contain the forced rendered-head view. A pre-settlement image is therefore not
evidence that the camera transform failed.

Remaining ground-form work is a like-for-like live emergence/attack/damage
sequence, including intermediate head motion, plus paired rendered-image proof
for body and fire-hair material appearance from the settled camera. The
deterministic solver and camera controls isolate those questions, but neither
the controlled chain metrics nor one settled capture establishes full
live-sequence or material parity. This item remains open.

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

The four ten-read tables used by that loop are exact from `0x004D73D4`,
`0x004D73F8`, `0x004D741C`, and `0x004D7444` respectively:

- center height: `{0, 6.6666665, 11.333333, 13.333333, 13, 12, 11.333333, 10, 10, 0}`;
- side offset: `{0, 6.6666665, 11.333333, 13.333333, 14, 14, 14, 14, 14, 0.30909714}`;
- side yaw: `{0.30909714, 0.22440863, 0.099197425, 0.03330017, 0, 0, 0, 0, 0, 0}`;
- pitch: `{-0.30909714, -0.22440863, -0.099197425, 0.016618125, 0.049854375,
  0.03330017, 0.06640859, 0, 0, 0}`.

There is no constant `1.5` in the function. Every position/rotation table value
is multiplied by the live actor field at `+0x2264`; the side modes additionally
apply the literal `0.7` where shown in the decompile. Baking another `1.5` into
the tables double-scales the authored mane shape and is not equivalent.

The producer is the tail of flying action `FUN_003C724C`. Once movement has
updated the actor, it advances the body cursor modulo 150 and records the
actor's world position plus XYZ world rotation at `+0x104C/+0x944`. It then
advances the mane cursor modulo 45, records all three current mane anchors and
the same world rotation, and writes independent scale waves using frequencies
5596, 5496, and 5696 with amplitude 0.3. These are the 3DS-owned procedural
rings consumed above; the N64 actor's 100/30-entry rings are not equivalent
animation data and are not inputs to the port.

The movement immediately before those writes is now resolved through both
helpers rather than inferred from the N64 twin. `FUN_00365860` converts world
X/Y rotation (`actor+0x34/+0x36`) and speed (`+0x6C`) into XYZ velocity
(`+0x60/+0x64/+0x68`). `FUN_0036B96C` then integrates world position from that
velocity, the actor's additive velocity, and the engine update-rate term. The
producer calls those helpers only while stop flag `actor+0x8AC` is clear; its
three live auxiliary controllers are advanced before that gate. Combined with
the established 30 Hz actor update and 2/3 authored-controller delta, this is
why a 20 Hz host cannot faithfully populate the 150/45-entry rings by copying
one host transform per update: the ring itself has 30 Hz temporal density.

The update-rate term is `s16(global+0x110) * 0.5 = 2 * 0.5 = 1.0` per 30 Hz
actor tick. An earlier live calculation incorrectly reported `0.5` by dividing
distance over 60 Hz emulator frames; only every second emulator frame runs this
actor. A forced three-tick discriminator settles it directly: from the same
seed, the oracle moved from Y `-200` to `-190.0826`, while a host producer that
multiplied by `0.5` reached only `-195.0406`. Collision displacement was zero on
both sides. The integration owner must not apply another half-rate scale.

The steering target at `FUN_003C724C` `0x003C728C..0x003C73C4` is also resolved
at instruction level. It computes target-minus-world XYZ, then adds one wobble
term per axis. Each term converts the signed move timer to float, multiplies it
by `wobbleRate + {2096,1096,1796}`, truncates to signed 32-bit, wraps through
`sxth`, and calls `FUN_002CFCA0`. Yaw is
`s16(FUN_003696EC(dx,dz) * 0x4622F983)`; pitch is
`s16(FUN_003696EC(dy,sqrt(dx*dx+dz*dz)) * 0x4622F983)`. The constant is the
exact float result of `32768/pi`; both conversions truncate toward zero before
the signed-16 wrap. The decompiler's apparent one-argument pitch call is wrong:
raw ARM sets `s1` to the horizontal square root at `0x003C7384` before the call.

`FUN_002CFCA0` is not the N64 integer sine lookup. It takes the unsigned angle,
uses the upper byte as an index into the 256-entry table at `0x004DF42C`, and
linearly interpolates with `(angle & 0xFF) * 1/256`. Each 16-byte entry holds
`{sin, cos, sinDelta, cosDelta}`; the sine result is `sin + sinDelta*fraction`.
For example, angle 1 is already nonzero, whereas the N64 `sins(angle >> 4)`
path remains zero. `FUN_00338F60`, consumed with the sine helper by
`FUN_00365860`'s velocity derivation, performs the equivalent interpolation over
the cosine columns. The authored flight port must therefore use this table for
both wobble targets and XYZ velocity rather than SoH `Math_SinS`/`Math_CosS`;
changing the wobble constants or adding an angle offset would hide the missing
math mechanism rather than port it.

A first 2026-08-26 substitution appeared to regress to `meanRot=2.421264`
radians and `meanPos=90.0512`, but that A/B was confounded by an independently
wrong half-rate integration step. The three-tick discriminator above falsified
the integration premise; it did not falsify the trig port. With dt corrected,
the N64 trig path stays close initially but crosses the strict comparator
tolerance by tick 90 (`dPos=0.0393`, `dRot=0.001250`) and reaches
`dPos=0.1079` by tick 135, which is the expected scale of this remaining math
semantic rather than the earlier half-rate trajectory split.

`FUN_003696EC` is also title-owned math rather than the host C library's
`atan2f`. The ARM body at `0x003696EC..0x003698FC` performs explicit quadrant
reduction, an optional `atan(0.5)` reduction, and a five-coefficient float
polynomial. Its split constants at `0x00369918..0x0036995C` preserve the VFP
single-precision operation order. Porting that routine together with the
interpolated sine/cosine table removes the residual one-bin yaw error; changing
turn tolerances would only conceal the missing math implementation.

The paired embedded-oracle run on 2026-08-26 verifies the complete forced
flight producer, not just its individual helpers. After 270 authored ticks the
shipping and oracle producer position, XYZ rotation, XYZ velocity, speed,
turn rate, move timer, and the sampled 150-entry ring are exact zero-delta.
The comparator's positive control changed one oracle history X value by 1000,
which produced `DIVERGED` with `meanPos=50` and `maxPos=1000`; restoration
returned exact `MATCH`. This verification is deliberately scoped to the fixed
action-0 profile. General action/death sequencing and paired rendered-image
parity remain separate work.

Controller ownership is exact from `FUN_001A62C4`, `FUN_003C724C`, and
`FUN_003B4308`. Body controller `+0x1A4` (`vb_FWDtest`) remains on its initialized
frame zero; live head `+0x228`, right arm `+0x2AC`, and left arm `+0x330` advance
by 2/3 authored frame per 30 Hz actor update, before and independently of the
stop gate; death head `+0x3B4` remains on frame zero. The procedural callback on
body nodes 19..36, not a moving body-CSAB cursor, produces the articulated
flight shape.

The current anchor values are produced by `FUN_003B4308`, not guessed from the
N64 actor. After selecting the current lead sample (offset-table entry zero),
the draw composes world Y, negative world X, shape Z, and a literal local
`+25.0` Z translation. It then
applies body controller joint zero and actor scale `* 0.1`. The three vectors
transformed through that matrix are byte-exact data at `0x003B4FC0`:
`(0,2500,3000)`, `(-1000,2500,3000)`, and `(1000,2500,3000)`. The prior N64
speed/action-dependent `-10..-20` head offset is not present in the 3DS draw
and must not drive either the 3DS head model or its independently-authored mane
history.

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

### Flying particle-group renderer

`FUN_0014690C(parentMatrix, effects, play)` renders the complete flying-effect
pool. It makes five passes, in type order `4, 2, 1, 3, 5`, and each pass scans
exactly 110 records of size `0x4C`. A live record has its model-instance pointer
at `+0x00`, uniform float scale at `+0x04`, integer X/Y rotation fields at
`+0x08/+0x0C`, float position at `+0x10..+0x18`, type byte at `+0x34`,
signed-short alpha at `+0x36`, and RGB bytes at `+0x3C..+0x3E`. Alpha is clamped
to `0..255`; RGBA is divided by 255 and written to material constant slot 4
before every submission. Literal-pool reads resolve the conversion constants as
`0x3B808081 = 1/255`, `0x4222F983 = 128/pi`, and `0x3CC90FDB = pi/128`.

The model is `vb_particle_group.cmb`, whose five mesh IDs and producer-selected
types are exact:

| 3DS type | enabled mesh | material / texture | transform | producer evidence |
|---:|---:|---|---|---|
| 4 | 0 | mat 4 / `vb_fire1` | billboard | fire-breath producer binds archive handle `+0x868` |
| 5 | 1 | mat 2 / `vb_hinokoTX1` | billboard | `FUN_0036FDE0` binds `+0x864` and enables mesh 1 |
| 2 | 2 | mat 1 / `vb_hit_kakera` | Y then X rotation | `FUN_001F285C` enables mesh 2 |
| 1 | 3 | mat 0 / `vb_kakera` | Y then X rotation | `FUN_00335814` enables mesh 3 |
| 3 | 4 | mat 3 / `vb_smoke` | billboard | producers in `FUN_001EC834`/`FUN_003C724C` bind `+0x86C` and enable mesh 4 |

Types 4, 3, and 5 multiply the position matrix by `play+0x2FC`, the billboard
matrix. Types 1 and 2 construct Y and X rotations from their two integer angle
fields before uniform scale. The three material animations loaded by
`FUN_001A62C4` are also resolved directly from the archive: `vb_hinoko.cmab`
scrolls material 2 coordinator 1 V by 1 over 30 frames; `vb_fire.cmab` animates
material 4 (constant slot 0 plus coordinator 1 V and coordinator 0 UV tracks)
over 40 frames; `vb_smoke.cmab` animates material 3's coordinator-0 atlas and
constant slot 0 over 32 frames. The renderer never submits an N64 display list
for these records.

### En_Vb_Ball attack stones and detached bones

The actor spawned by the flying death/rock paths is overlay-table entry
`0x00AD`, profile `0x0052FDB4`: category 9, object `0x009C`
(`zelda_fd.zar`), instance size `0x228`, init `FUN_00212F94`, update
`FUN_0024E700`, and draw `FUN_0024E4E8`. The initializer passes model indices
8 and 7 to the two-instance loader. Against the archive's exact model order,
these are `valbasia_death_body.cmb` at actor `+0x21C` and
`valbasia_attack_stone.cmb` at `+0x220`.

The draw selection is parameter-driven and contains no skeleton or animation:

- `params >= 200`: submit `valbasia_death_body` at the actor matrix;
- `params < 200`: submit `valbasia_attack_stone` at the actor matrix;
- `params == 100`: additionally submit gameplay-keep model index `0x53`,
  `/actor/zelda_keep.zar|shadow/model/shadow_model.cmb`.

The shadow instance is a separate 3DS model, not the N64 circle-shadow display
list. Its matrix translates to `(actor.x, 100, actor.z)` with no actor rotation
and scales uniformly by `actorScale * 68 * fade`; `fade` starts at 0.1 and
advances by 0.025 per draw to 1.0. Before submission the draw writes
`(0,0,0, 1 - shadowValue/255)` to material 0 constant slot 4. The literal
constants are resolved directly as `68`, `0.1`, `0.025`, `1`, `1/255`, and
fixed world Y `100`. Thus rocks, detached ribs, and the large-rock shadow all
have fully identified 3DS graphics resources and transforms.

### En_Vb_Ball collision graphics (update @ `0x0024E700`)

The first decompile hid most of the params-100/101 collision branch as “unreachable” because Ghidra
had incorrectly treated the ordinary `Actor_Kill`-shaped call at `0x00374428` as terminating the
function. Direct ARM disassembly across the inline literal pool recovers the complete branch. The
3DS update keeps the N64 child-rock split but authors different particle counts, ranges, and shadow /
rib motion:

- every stone approaches shadow field `+0x1BC` to `255` at `40/frame` (scale `1`). The draw uses
  `1 - field/255`, so the params-100 keep shadow fades completely; N64 targets `175` and leaves a
  permanent remnant;
- ordinary params below 100/above 101 spawn exactly **2** type-1 debris records: velocity
  `(centered 10, zero 3 + 3, centered 10)`, acceleration `(0,-1,0)`, position centered 5 around the
  actor, scale `zero 12 + 15`;
- params 100/101 keep the exact two-child split already present in N64 (100 offsets
  `centered 13 / zero 5 + 6`; 101 offsets `centered 10 / zero 3 + 4`) and then spawn exactly **6**
  type-1 debris records with velocity X/Z centered 12, Y `zero 5 + 8`, position centered 10, and
  scale `zero 30 + 15`; plus exactly **4** type-3 smoke records with velocity
  `(centered 8, zero 1, centered 8)`, acceleration `(0,.5,0)`, position centered 30, and scale
  `zero 200 + 600`;
- detached ribs (`params >= 200`) set both post-bounce angular-velocity floats from centered range
  **50** (N64 uses `0x4000`), retain the radial horizontal speed 10 and Y bounce `*=-.5`, then spawn
  exactly **4** type-3 smoke records. Those use the same velocity triple, acceleration `(0,.3,0)`,
  X/Z position centered 20 with fixed Y `floorHeight+10`, and scale `zero 200 + 400`.

`FUN_00335814` is the type-1 `vb_kakera` producer (scale conversion `1/1000`);
newly-decompiled `FUN_0036442C` is the type-3 `vb_smoke` producer (scale conversion `1/400`, smoke
CMAB handle at parent `+0x86C`). The params-100-only `FUN_0036FCA8(actor, play, 5, 10)` is camera
quake setup under `play+0x364`, not graphics. Therefore the collision appearance is fully covered by
the same `vb_particle_group.cmb` renderer documented above; the missing work was producer state, not
another model or animation. No skeleton, CSAB, N64 joint table, or procedural animation history is
involved.
