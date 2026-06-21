# Porting OoT3D Link's player code into SoH3D — plan & journal

Goal (user directive 2026-06-21): **SoH3D Link should BE 3DS Link** — port OoT3D's actual player
behaviors, not just swap the model/CSAB onto N64 `z_player.c`. The N64 logic mismatching the 3DS
assets is what produces the long tail of Link bugs (walk-stop torso snap, run-off-edge jump, weird
yawn, sword-on-back before owning it, pickup snapping to torso then above head, door-exit slide,
higher-surface climb teleport). User chose **literal decompile of `z_player.cpp`** as the approach.

## Two parallel tracks (decoupled — work them independently)
The global **`decomp-port`** skill (`<decomp-port-skill>`, reusable for any game) is the
"porting machine." The work splits into two tracks that share only an artifact contract, so they
run in parallel without stepping on each other:
- **Track A — decomp/RE OoT3D** (this repo, `oot3d-decomp`): Ghidra-decompile player functions →
  align to N64 twin → diff → commit the decompiled C (`build/decomp/<vaddr>.c`, gitignored) and the
  durable **addr ↔ N64-name behavior map** + per-behavior notes here. No SoH3D build needed.
- **Track B — integrate into SoH3D** (`soh3d`/Shipwright): consume Track A's behavior maps to port
  each behavior into the Player path; build + live-verify in real gameplay.
The **contract** between them is this doc's bug→function map + the behavior notes (which OoT3D fn,
its N64 twin, what Grezzo changed, the ported pseudo-C). Keep that current and committed so either
track can advance alone.

## The accelerator: N64 `z_player.c` is the Rosetta stone
OoT3D `z_player.cpp` (source path `z_player.cpp`) is
Grezzo's 3DS port of the SAME player code SoH already has fully decompiled and readable at
`Shipwright/soh/src/overlays/actors/ovl_player_actor/z_player.c` (939 functions, 16.8k lines).
So we do NOT decompile blind ARM: for each OoT3D function we (1) Ghidra-decompile the ARM to C,
(2) align it to its N64 twin by structure/call-graph, (3) diff to isolate Grezzo's CHANGES, and
(4) port the OoT3D behavior into SoH3D's Player path. The divergences ARE the fixes.

## Tooling (the decompilation surface)
- **Ghidra 11.0.3** (`/opt/ghidra_11.0.3_PUBLIC`) — headless project at `build/ghidra/oot3d`
  (gitignored). Import: `code.bin`, `ARM:LE:32:Cortex`, base `0x00100000`. This is the only
  reliable function-boundary + C decompiler for this mixed ARM/Thumb-2 image (capstone linear
  sweeps desync — see static_decomp.md).
  - Re-run analysis: `analyzeHeadless build/ghidra oot3d -import build/code.bin -processor ARM:LE:32:Cortex -loader BinaryLoader -loader-baseAddr 0x100000`
  - Decompile: `OOT3D_REPO=$PWD analyzeHeadless build/ghidra oot3d -process code.bin -noanalysis -scriptPath tools/ghidra_scripts -postScript DecompDump.py`
    (no DECOMP_TARGETS → writes `build/decomp/functions.csv` inventory; with a targets file of hex
    vaddrs → writes `build/decomp/<vaddr>.c`).
- Live oracle (Azahar) to verify each ported behavior frame-accurately (`tools/link_*`).
- N64 reference: `Shipwright/soh/src/overlays/actors/ovl_player_actor/z_player.c`.

## Known anchors (verified live / RE'd this project)
- **Player actor**: id 0, instance ~0x098f4010; `gPlayState @ 0x0050AF34`.
- **Player_Update** ≈ `0x001e1b54` (actor `update` fn ptr @ instance+0x13C — confirm vs Ghidra).
- **Player struct (partial, verified live):** pos@+0x08 (Vec3f), rot@+0x14 (Vec3s), params@+0x1C;
  embedded skeleton obj @+0x25c (vtable 0x4ec030) → anim-player @+0x20 (vtable 0x4ec018);
  **base-anim controller IN instance:** morphWeight@+0x288, morphRate@+0x28c (=1/morphFrames),
  curFrame@+0x290, playSpeed@+0x294 (see anim_system.md). Bone map: link_bone_map.md.
- **The MORPH** (already RE'd): OoT3D cross-fades transitions linearly via morphWeight 1.0→0 over
  morphFrames — same model as N64 SkelAnime; the SoH3D 3d3 path just never applies it.

## Player update chain + action-func dispatch (DECOMPILED, verified vs N64 structure)
- **Player_Update = `FUN_001e1b54`** (0x1e1b54, 628B). Nulls a despawned held/interact actor
  (heldActor-ish @+0x12b0; interactRangeActor-ish @+0x1224 → `FUN_0036b02c` cleanup @0x36b02c),
  copies controller input from `play+0x14`, calls Player_UpdateCommon, writes player world pos to a
  global (camera/audio listener) at the end.
- **Player_UpdateCommon = `FUN_00250ad0`** (0x250ad0, 10020B / 59KB C). Decrements the player timers
  (the `if(x)x--` block at top), then **dispatches the action function**:
  ```
  if ((*(byte*)(this + 0x172a) & 4) == 0)        // i.e. !(stateFlags2 & ...)
      (**(code**)(this + 0x1708))(this, play);   // this->actionFunc(this, play)
  ```
- **KEY Player struct offsets (this TU):**
  - **+0x1708 = `actionFunc`** (the action-state function pointer — every behavior is a function
    stored here; finding the per-behavior function = finding +0x1708's value in that state).
  - **+0x1710 = `stateFlags1`** (u32, flag-tested pervasively: 0x2000000, 0x20000000, 0x20000, ...).
  - **+0x172a = sf2-call-gate byte** (byte; bit 4 gates the action call; bit 0x80 used too). NOTE:
    the real `stateFlags2` is the **u32 @ +0x1714** — see VERIFIED Rosetta map below (this +0x172a
    was mislabeled "stateFlags2" in the prior session).
  - pos/world @+0x08 (live-verified), morph controller @+0x288 (anim_system.md).
- **Action funcs special-cased in Player_UpdateCommon** (compared against `this->actionFunc`), all
  confirmed function entry points in the action-func block ~0x4b9000–0x4bf000:
  `0x4b9920` (1176B), `0x4ba378` (420B), `0x4bf18c` (528B), and `0x183634`. Name via N64 twin.

## VERIFIED Rosetta map — confirmed helpers + Player offsets (2026-06-21, static)
Confirmed by decompiling each OoT3D fn and matching it 1:1 to its N64 twin in
`Shipwright/.../z_player.c` (structure + flag bits + field offsets all agree). These are the
**keys**: every action func is now readable because its called helpers are named.

**Player struct offsets (this TU) — CONFIRMED via N64 twin, not guessed:**
| OoT3D off | N64 field | proof |
|---|---|---|
| +0x90  | `actor.bgCheckFlags` | `&1`=on-ground, `&2`=wall — same bit tests as N64 |
| +0xbe  | `actor.shape.rot.y`  | `Player_UpdateHostileLockOn` sets `yaw = shape.rot.y` |
| +0x16f8| `focusActor`         | `Player_UpdateHostileLockOn`: `focusActor && (flags & (ATTENTION|HOSTILE=0x5))` |
| +0x1708| `actionFunc`         | (prior session) dispatched in Player_UpdateCommon |
| +0x1710| `stateFlags1` (u32)  | bit 0x10 = `PLAYER_STATE1_HOSTILE_LOCK_ON` (set/cleared in HostileLockOn) |
| +0x1714| `stateFlags2` (u32)  | `|=0x20`=`DISABLE_ROTATION_Z_TARGET`(b5), `|=0x60`=+`DISABLE_ROTATION_ALWAYS`(b6) |
| +0x221c| `linearVelocity` (f32, =N64 speedXZ) | stepped by Math_StepToF in every locomotion func; `==0` ⇒ idle |
| +0x2220| `yaw` (s16, world move yaw) | distinct from shape.rot.y; angle-diff `>0x6000` decel-then-turn |

NOTE the prior `+0x172a = stateFlags2` guess was WRONG — **stateFlags2 is the u32 at +0x1714**
(proven by the `|= DISABLE_ROTATION_*` bits). +0x172a is a different byte flag (gates the action call
in Player_UpdateCommon); leave it as "sf2-call-gate byte" until separately confirmed.

**Confirmed helper functions (OoT3D addr → N64 name):**
| OoT3D | N64 twin | signature / notes |
|---|---|---|
| `FUN_0036b3f4` | **Player_GetMovementSpeedAndYaw** | `(speedMode_f32, this, f32* outSpeed, s16* outYaw, play)` — ARM passes the f32 `speedMode` in VFP s0 so Ghidra lists it first |
| `FUN_002c3d18` | **Player_TryActionHandlerList** | `(play, this, s8* list, flag)` → returns nonzero if a handler took over; guards every action body as `if(!...){ }` |
| `FUN_00349574` | **Player_UpdateHostileLockOn** | `(this)` → sets/clears STATE1_HOSTILE_LOCK_ON; on release w/ speed 0, `yaw=shape.rot.y` |
| `FUN_002dd714` | **Math step-to-f32** (frame-scaled) | `(target, step, decel/min, f32* val)` — steps linearVelocity |
| `FUN_003705a0` | **Math_StepToF** (frame-scaled) | `(target, step, f32* val)` → returns reached |
| `FUN_00370378` | **Math_ScaledStepToS** (frame-scaled) | `(s16* val, target, step)` → returns reached; for yaw |

### ⚠ KEY GREZZO CHANGE — variable-framerate step scaling
Every OoT3D step/lerp helper above multiplies its step by a **shared per-frame scalar**:
`VectorSignedToFloat(*(s16*)(*g + 0x110))` (g = a global game-struct pointer; same `*g+0x110`
short appears in GetMovementSpeedAndYaw and all three Math step funcs). N64 logic runs fixed-rate
(20 Hz) with constant steps; Grezzo's 3DS port scales each step by this `[g+0x110]` factor — i.e.
the player physics/anim stepping is **delta-time / update-rate scaled**. This is a prime suspect for
the locomotion "feel" bugs (walk-stop snap, run-off-edge) where SoH3D's N64-rate stepping won't
match. *Interpretation pending one live read of `[g+0x110]`; the consume-pattern is verified.*

## Player_UpdateCommon special-cased action funcs — RESOLVED addresses (static)
Player_UpdateCommon (`FUN_00250ad0`) gates several behaviors on `this->actionFunc` (+0x1708) ==/!=
specific function pointers, exactly like N64 (`Player_Action_X != this->actionFunc`). Those pointers
live in the literal pool; reading their u32 values from `code.bin` resolves the **exact OoT3D
addresses** without any live run:

| literal-pool DAT | actionFunc value | Common context (line in 00250ad0.c) | role |
|---|---|---|---|
| DAT_00251cf0 | **0x4b9920** | `==` @1166 | slope/slippery-floor velocity ×factor |
| DAT_00251cd8 | **0x4ba378** | `==` @1201 | **= run/locomotion (LIVE-confirmed #86)**; paired w/ speed threshold |
| DAT_00251cd4 | **0x4ba538** | @767/770 | **= Player_Action_Idle (LIVE-confirmed #88)**; floor/landing branch |
| DAT_00252944 | **0x4bc22c** | `!=` @1140 | EXCLUDED from slope-slide (floorType 4/7/0xc) |
| DAT_00252930 | **0x4bcccc** | `!=` @1120 | now decoded (ARM); gap func |
| DAT_00253408 | **0x4bf18c** | `==` @1379 | in-air/land branch (see special funcs above) |
| DAT_0025214c | **0x4bf3bc** | @920/960 | grouped near 0x4bf5cc |
| DAT_00252150 | **0x4bf5cc** | `!=` @946 | tiny: floor-check + FUN_0034ad70(speed,yaw) |
| DAT_0025211c | **0x183634** | `==` @1413 (+many) | now decoded (ARM); **climb/ledge candidate** (#79): anim-id-gated (+0x284 vs 0xe6/0x3a), height compare +0x2270, ledge timer +0x2238 |
| DAT_00251ce4 | **0x488b40** | `!=` @585 | big (1604B) locomotion action (uses GetMovementSpeedAndYaw + step funcs) |
| DAT_00251314 | **0x4886d4** | `!=` @112 | now decoded (ARM); gap func |

**RESOLVED (was a tooling artifact, not Thumb):** 0x4bcccc / 0x4886d4 / 0x183634 sit in unanalyzed
gaps; the first force-create attempts produced garbage (`halt_baddata`, `coprocessor_store`) because
a wrong-mode disassembly context got persisted in the Ghidra project. Their raw bytes are clean ARM
prologues (e.g. 0x183634 = `e92d47f0` = `push {r4-r10,lr}`). Fix: DecompDump.py now (a) force-creates
a function at pointer-only targets, (b) pins the decode mode via the TMode register + an explicit
`ArmDisassembleCommand` (env `DECOMP_THUMB=all|<hexlist>` for Thumb), and (c) with `DECOMP_RECREATE=1`
removes+clears a stale function and rebuilds it cleanly. All 11 special-cased funcs now decompile.

## Idle / yawn fidget machinery (#88) — N64 side mapped, OoT3D addr TBD
The yawn is a **fidget idle anim**. N64 path (to find the OoT3D twin of, via call-graph from the
idle action func):
- **`Player_Action_Idle`** (z_player.c:8434) runs while standing; calls `Player_CheckForIdleAnim`
  and, on a timer, **`Player_ChooseNextIdleAnim`** (z_player.c:8347) — the picker.
- Picker logic: if `focusActor != NULL` OR (`!critHealth && ((idleType=(idleType+1)&1)!=0)`) → plain
  idle (no fidget). Else set `PLAYER_STATE2_IDLE_FIDGET`; if carrying actor → plain idle anim; else
  `fidgetType = play->roomCtx.curRoom.behaviorType2` by default, and `commonType = Rand_ZeroOne()*5`
  gives a 4/5 chance to override with a common fidget (sword/shield/tunic/feet) subject to equipment
  checks. The chosen `sFidgetAnimations[fidgetType][modelAnimType!=1?1:0]` is `LinkAnimation_Change`'d
  with a **−6.0f morph** (so the fidget blends in, not hard-cut).
- ⇒ The "weird yawn" is most likely (a) OoT3D picking a different `fidgetType` (room `behaviorType2`
  differs / `idleType` toggle) or (b) the fidget anim played without the −6.0f morph blend on the
  SoH3D side. To pin the OoT3D address: live-read `actionFunc` while standing idle, then align that
  fn → Player_Action_Idle and its called picker.

## Special-cased action funcs — decompiled behavior (twins narrowed; confirm via live read)
All three guard their body with `if(!Player_TryActionHandlerList(...))` and use the confirmed
helpers above. They are locomotion/physics action funcs in block 0x4b9000–0x4bf000:
- **`FUN_004ba378`** (420B): `stateFlags2 |= DISABLE_ROTATION_Z_TARGET`; GetMovementSpeedAndYaw →
  if `|yaw−target|>0x6000` step speed→0 first, else AsymStep speed + ScaledStep yaw; on stop
  (`linearVelocity==0 && target==0` or sf2&4) → setup-idle pair `FUN_002c2658`+`FUN_002be4c4`.
  ⇒ a **ground turn/run-to-idle locomotion** action (N64 Player_Action_Run/turn family).
- **`FUN_004bf18c`** (528B): `stateFlags2 |= 0x60` (disable ALL rotation); clamps a per-frame char
  counter from control input; restores stored yaw/speed from `+0x2291/+0x2292/+0x2294`; drives a
  `+0x2238` countdown; tests `bgCheckFlags & 1/& 2`; plays floor/landing SFX; end-branch on wall
  (`bgCheckFlags&2`). ⇒ an **in-air / land / stepping** action (suspect for run-off-edge jump #86);
  NOT knockback (ruled out vs Player_Action_8084377C/80843954, which use knockbackType/down anims).
- **`FUN_004b9920`** (1176B): heavy control-stick driven (many VectorSignedToFloat of control reads),
  GetMovementSpeedAndYaw + the `>0x6000` turn logic + StepToF on yaw/speed; a **complex ground
  locomotion** (run/turn-in-place family).

## LIVE-CONFIRMED action funcs (oracle, Azahar, scene 52 Link's House, 2026-06-21)
Read straight from `playerInstance+0x1708` while driving Link (tools/link_action_probe.py). These are
GROUND TRUTH — they pin the bug→address mapping the static work narrowed:

| state | actionFunc | anim (+0x284) | notes |
|---|---|---|---|
| **idle / yawn (#88)** | **0x4ba538** | default 0x1c/0x1b; **fidget/yawn = 0x50** | = N64 Player_Action_Idle. Picker alternates default↔fidget (idleType toggle); yawn is anim 0x50 |
| **run (#86)** | **0x4ba378** | 0x47 | = the run/turn locomotion func (matches static decomp of FUN_004ba378) |
| **walk/turn-start** | **0x4a34d0** | 0xe4 | transition into movement (decompile next) |

### ✅ #86 walk-stop torso snap — ROOT CAUSE CONFIRMED LIVE
On run→stop, OoT3D switches actionFunc `0x4ba378`(run) → `0x4ba538`(idle) and the base-anim
**morphWeight (+0x288) jumps to 1.000 then decays 1.0 → 0.5 → 0.167 → 0.0 over ~5 frames**
(curFrame +0x290 advancing 0→4.7), i.e. it **cross-fades** the run→idle pose. This is exactly the
MORPH the SoH3D 3d3 path hard-cuts. **Fix for #86 = apply this morphWeight 1→0 blend (morphRate
≈0.33/frame, ~3–5 frames) on Player action/anim transitions**, per docs/anim_system.md. Verified by
live frame sampling, not inference.

### Boot-to-gameplay recipe (oracle, no savestate mod)
Title → `tap('start')`×3 → `tap('a')` (select save file 1 "Link") → `tap('a')`×2. Lands in scene 52
(Link's House), Link controllable, playerInstance 0x098f4010. (Savestate RPC mod is NOT loaded —
savestate() returns False; re-navigate the title each boot, it's ~6 taps.)

## ⇒ Fastest next step: oracle-read `actionFunc` per behavior
Now that **actionFunc is at Player+0x1708**, the exact OoT3D function for any behavior is one RAM
read away: in the live oracle (Azahar), drive Link into state X (idle/yawn, carrying an object,
wall-climbing, in a door, walk-stop) and read `read32(playerInstance + 0x1708)` — that value IS the
action function to decompile + align to N64 + port. (playerInstance via gPlayState→actorCtx→PLAYER
head, see link_skel_live.py.) Do this for each bug below to get its precise target address.

## Bug → behavior → N64 function (decompile these OoT3D twins first)
| reported bug | N64 function family (start here) |
|---|---|
| walk-stop torso snap (#86) | **CONFIRMED**: run 0x4ba378 → idle 0x4ba538 applies morphWeight 1→0 blend (~5 frames); soh3d hard-cuts. Fix = apply the morph |
| run-off-edge jump (#86) | in-air/land 0x4bf18c family (see special-case table) |
| weird yawn (idle fidget #88) | **CONFIRMED**: idle action func 0x4ba538 (Player_Action_Idle); yawn = anim 0x50; picker = Player_ChooseNextIdleAnim twin |
| sword on back before owning it | equipment draw / `Player_OverrideLimbDraw`, equip flags, sheath visibility |
| pickup snaps to torso → above head | `Player_UpperAction_CarryActor` + carried-actor placement in `Player_DrawImpl` |
| door-exit slide | door action func (sDoorAction / Player door state) |
| higher-surface climb teleport | wall-climb action func (climb mount/advance) |

## Phased plan
0. **Pipeline up** (this session): Ghidra analyzed; DecompDump.py; function inventory; decompile
   Player_Update + the action dispatch; confirm the OoT3D player state machine layout.
1. **Map** the OoT3D player functions ↔ N64 names (call-graph + structure align). Durable table.
2. **Port behavior-by-behavior**, each: decompile OoT3D twin → diff vs N64 → port into SoH3D Player
   path → verify in real gameplay (user playtests) + oracle frame-compare. Faithful first.
3. Only after faithful: any enhancement.

## Log
- 2026-06-21: pipeline stood up; Ghidra headless analysis launched on code.bin. (this entry)
- 2026-06-21 (cont.): decompiled the whole action-func block (0x4b9000–0x4bf500, 65 fns) + key
  helpers. **VERIFIED via N64 Rosetta**: helpers (GetMovementSpeedAndYaw=FUN_0036b3f4,
  TryActionHandlerList=FUN_002c3d18, UpdateHostileLockOn=FUN_00349574, frame-scaled Math step
  funcs FUN_002dd714/003705a0/00370378) and Player offsets (focusActor+0x16f8, stateFlags1+0x1710
  w/ HOSTILE_LOCK_ON=0x10, **stateFlags2 = u32 @ +0x1714** [corrected from +0x172a], linearVelocity
  +0x221c, yaw+0x2220, shape.rot.y+0xbe, bgCheckFlags+0x90). Found the **variable-framerate step
  scaling** (`[g+0x110]` factor) — Grezzo change, suspect for locomotion bugs. Mapped the N64
  idle/yawn picker (Player_ChooseNextIdleAnim). 3 special funcs decompiled, twins narrowed.
  Decompiled .c are in build/decomp/ (gitignored). NEXT: live-read actionFunc per bug to pin addrs.
- 2026-06-21 (cont.2): **RESOLVED the Player_UpdateCommon special-cased action funcs to exact
  addresses** by reading their function-pointer values straight out of code.bin's literal pool
  (no live run): 0x4b9920, 0x4ba378, 0x4ba538, 0x4bc22c, 0x4bf18c, 0x4bf3bc, 0x4bf5cc, 0x488b40
  (clean ARM) + 0x4bcccc, 0x4886d4, 0x183634 (Thumb/gap — garbage as ARM, TODO TMode decode).
  Extended tools/ghidra_scripts/DecompDump.py to force-create functions at pointer-only targets.
  See the "special-cased action funcs — RESOLVED addresses" table.
- 2026-06-21 (cont.3): made DecompDump.py robust (TMode/ARM-Thumb pinning + DECOMP_RECREATE) and
  **decompiled all 3 remaining special-cased funcs cleanly** (they were ARM, not Thumb — earlier
  garbage was a persisted wrong-mode context). 0x183634 looks like the **climb/ledge action (#79)**:
  sets DISABLE_ROTATION_Z_TARGET, gates on anim id +0x284 (0xe6/0x3a), compares anim height to
  +0x2270, sets ledge timer +0x2238. All 11 UpdateCommon special-cased funcs now in build/decomp/.
- 2026-06-21 (cont.4): **LIVE oracle run** (Azahar, scene 52). Added tools/link_action_probe.py.
  Confirmed actionFuncs by reading +0x1708 while driving Link: idle=0x4ba538 (Player_Action_Idle,
  yawn=anim 0x50), run=0x4ba378, walk-start=0x4a34d0. **#86 ROOT CAUSE CONFIRMED**: run→idle applies
  morphWeight (+0x288) 1.0→0 over ~5 frames (cross-fade) — soh3d hard-cuts; fix = apply the morph.
  Documented the boot-to-gameplay tap recipe (no savestate mod). NEXT (live): carry/pickup
  (#6/#85/#9 — needs a liftable pot/Cucco scene), climb (#79 — confirm 0x183634 on a ladder),
  door-exit slide. Then decompile 0x4a34d0 + align 0x4ba538/0x4ba378 to N64 Idle/run twins.
