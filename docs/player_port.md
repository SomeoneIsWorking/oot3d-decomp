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
- **Ghidra** (`analyzeHeadless` on `$PATH`) — headless project at `build/ghidra/oot3d`
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
| +0x64  | `actor.velocity.y`   | knockback land (0x4bf18c): `if(velocity.y<0){gravity=0;velocity.y=0}` matches N64 8084377C |
| +0x70  | `actor.gravity`      | same clamp (zeroed with velocity.y) |
| +0x90  | `actor.bgCheckFlags` | `&1`=on-ground, `&2`=wall — same bit tests as N64 |
| +0xbe  | `actor.shape.rot.y`  | `Player_UpdateHostileLockOn` sets `yaw = shape.rot.y` |
| +0xc4  | `actor.shape.yOffset` | climb step-up (0x183634): `Math_StepToF(&yOffset, 0, 150)` settle lerp |
| +0x1321| `cylinder.base.acFlags` | `&2`=`AC_HIT` (knockback land gates wake on `!AC_HIT && knockbackType==0`) |
| +0x1a7 | `currentBoots` (u8) | slope-slide HOVER/IRON branches |
| +0x16f8| `focusActor`         | `Player_UpdateHostileLockOn`: `focusActor && (flags & (ATTENTION|HOSTILE=0x5))` |
| +0x170c| `ageProperties*`     | knockback land reads `+0xf4` for per-age landing SFX |
| +0x1708| `actionFunc`         | (prior session) dispatched in Player_UpdateCommon |
| +0x1710| `stateFlags1` (u32)  | bit 0x10=`HOSTILE_LOCK_ON`; **0x4000000=`DAMAGED`**, **0x20000000=`IN_CUTSCENE`** (knockback land) |
| +0x1714| `stateFlags2` (u32)  | `|=0x20`=`DISABLE_ROTATION_Z_TARGET`(b5), `|=0x60`=+`DISABLE_ROTATION_ALWAYS`(b6) |
| +0x1760| `unk_6C4` (f32, slope-slide accumulator) | UpdateCommon-inlined `func_8083CF5C`: `gravity -= unk_6C4*0.004f` on floorType 4/7/0xc |
| +0x221c| `linearVelocity` (f32, =N64 speedXZ) | stepped by Math_StepToF in every locomotion func; `==0` ⇒ idle |
| +0x2220| `yaw` (s16, world move yaw) | distinct from shape.rot.y; angle-diff `>0x6000` decel-then-turn |
| +0x2238| `av2.actionVar2` (s16) | generic per-action counter (knockback down-countdown; climb 0x183634 ledge timer) |
| +0x2270| `yDistToLedge` (f32) | climb step-up clamps mount launch to `min(yDistToLedge, ageProperties->unk_0C)` |
| +0x228c| `floorSfxOffset`     | added to base SFX id for floor/landing SFX |
| +0x2291| `knockbackType` (u8) | knockback land (8084377C): `+0x2292`=`knockbackRot`(s16), `+0x2294`=`knockbackSpeed`(f32) — byte-exact N64 layout |
| +0x2488| `invincibilityTimer` (s8) | clamped to ~20 frames at top of knockback land |

NOTE the prior `+0x172a = stateFlags2` guess was WRONG — **stateFlags2 is the u32 at +0x1714**
(proven by the `|= DISABLE_ROTATION_*` bits). +0x172a is a different byte flag (gates the action call
in Player_UpdateCommon); leave it as "sf2-call-gate byte" until separately confirmed.

**Confirmed helper functions (OoT3D addr → N64 name):**
| OoT3D | N64 twin | signature / notes |
|---|---|---|
| `FUN_0036b3f4` | **Player_GetMovementSpeedAndYaw** | `(speedMode_f32, this, f32* outSpeed, s16* outYaw, play)` — ARM passes the f32 `speedMode` in VFP s0 so Ghidra lists it first |
| `FUN_002c3d18` | **Player_TryActionHandlerList** | `(play, this, s8* list, flag)` → returns nonzero if a handler took over; guards every action body as `if(!...){ }` |
| `FUN_00349574` | **Player_UpdateHostileLockOn** | `(this)` → sets/clears STATE1_HOSTILE_LOCK_ON; on release w/ speed 0, `yaw=shape.rot.y` |
| `FUN_002dd714` | **Math_AsymStepToF** (frame-scaled) | `(target, step, decel/min, f32* val)` — steps linearVelocity |
| `FUN_003705a0` | **Math_StepToF** (frame-scaled) | `(target, step, f32* val)` → returns reached |
| `FUN_00370378` | **Math_ScaledStepToS** (frame-scaled) | `(s16* val, target, step)` → returns reached; for yaw |
| `FUN_0036b4ec` | **LinkAnimation_Update** | `(skelAnime=this+0x254, play)` → returns anim-done flag |
| `FUN_0036055c` | **Player_SetupAction** | `(play, this, actionFunc, flag)` — sets +0x1708 + plays anim once |
| `FUN_003604f0` | **Player_AnimPlayOnce** (AnimChangeOnceMorph) | `(skelAnime, play, animHeader)` |
| `FUN_0034d628` | **Player_GetIdleAnim** | `(this)` |
| `FUN_0035d260` | **Player_HoldsTwoHandedWeapon** | `(this)` — gates upper-body idle-copy in TurnInPlace |
| `FUN_002bdd54` | ⚠ **MISLABEL** — 0x2bdd54 is a 12-line 1-arg stub, NOT the idle-anim resolver. Resolver is on a different (TBD) address | re-pin needed |
| `FUN_004ba304` | **AnimationContext_SetLoadFrame** | `(play, anim, frame, limbCount, morphTable)` |
| `FUN_0035e9fc` | **AnimationContext_SetCopyTrue** | `(play, vecCount, jointTable, morphTable, sUpperBodyLimbCopyMap)` |
| `FUN_0036f59c` | **Player_PlaySfx** | `(this, sfxId)` |
| `FUN_002c2658`+`FUN_002be4c4` | **setup-idle pair** (`func_80839FFC`+`func_8083BF50`) | run→idle transition |
| `FUN_002bcd38` | **func_8083FD78** (movement-direction tri-state classifier) | back-walk/side-walk |
| `FUN_0033100c` | **Player_GetMeleeWeaponHeld** | `(this)` |
| `FUN_0032c408` | ⚠ **MISLABEL** — NOT LinkAnimation_BlendToJoint; it's a **3DS stereo (L/R) limb-draw helper** (2 draw entries + FUN_0030f900) | re-pinned by ring-1 sweep |
| `FUN_0034ad70` | **func_8084AEEC** (swim velocity/yaw setter) | surfacing 0x4bf5cc |
| `FUN_0036b02c` | **Player_DetachHeldActor** | cleanup (cont.0; refined by cutscene 0x4bcccc) |

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

**ALL 11 now aligned to N64 twins (2026-06-22).** Twin column is CONFIRMED (structural evidence in
`scratch/align/<addr>.md`). ⚠ The old "Common context role" guesses were several times WRONG — trust
the twin, not the prior role label.

| literal-pool DAT | actionFunc | N64 twin (CONFIRMED) | what it is / status |
|---|---|---|---|
| DAT_00251cf0 | **0x4b9920** | `Player_Action_808414F8` | Z-target **back-walk** locomotion. ⚠ prior "slope/slippery-floor" role label was WRONG — recheck what the `==`@1166 gate actually does |
| DAT_00251cd8 | **0x4ba378** | `Player_Action_80842180` | **run/free-move walk** (LIVE #86). Grezzo: +0x29b8&4 force-idle; tunable decel/accel/turn |
| DAT_00251cd4 | **0x4ba538** | `Player_Action_Idle` | **idle/yawn** (LIVE #88). Grezzo: +0x4c37→FIDGET_HOT override |
| DAT_00252944 | **0x4bc22c** | `Player_Action_8084E6D4` | **get-item** receive/presentation (Player_StartTalking inlined) — correctly excluded from slope-slide. Grezzo: ICE_TRAP arm removed; get-item dispatch → data tables |
| DAT_00252930 | **0x4bcccc** | `Player_Action_CsAction` | **cutscene-action dispatcher** (DEMO MODE) — FAITHFUL; one morph-table data-layout restructure |
| DAT_00253408 | **0x4bf18c** | `Player_Action_8084377C` | **knockback/damage bounce-LAND** — NOT in-air. **FALSE suspect for #86** (correction below) |
| DAT_0025214c | **0x4bf3bc** | `Player_Action_8084193C` | Z-target **side-walk/strafe**. Grezzo: anim layer reimplemented (5 discrete ids vs continuous blend); decel-turn threshold 0x4000→0x6000; added pre-check |
| DAT_00252150 | **0x4bf5cc** | `Player_Action_8084E30C` | **surfacing → swim-wait** transition — FAITHFUL |
| DAT_0025211c | **0x183634** | `Player_Action_80845668` | **ledge step-up / vault** (#79) — FAITHFUL. anim +0x284 ∈ {0xe6 high,0x3a water,0xe7 150,0xe8 100}; mount clamped `min(+0x2270 yDistToLedge, ageProps+0xc)` |
| DAT_00251ce4 | **0x488b40** | `Player_Action_80840450` | Z-target **standing-aim** locomotion — NOT idle/wait. Grezzo: ADDED 90-frame look-around fidget timer (+0x24ba) + region anim variants (same 3DS field family as #88) |
| DAT_00251314 | **0x4886d4** | `Player_Action_8084E3C4` | **ocarina-playing** incl warp-song teleport — FAITHFUL; MODE_02 cleanup guarded by Player_TryCsAction |

### Batch-2 alignment notes (2026-06-22) — the 7 remaining special-cased funcs
Per-func full diffs in `scratch/align/{4b9920,488b40,4bc22c,4886d4,4bf3bc,4bf5cc,4bcccc}.md`. Highlights:
- **0x4b9920 `Player_Action_808414F8` (back-walk):** Z-target back-pedal. Grezzo divergences: the
  shared `+0x29b8 & 4` force-idle branch (same unknown bit as run 0x4ba378); directional side_walkR/L
  start by target-yaw sign (N64 always side_walkR); DAT/settings-driven brake/step gates. New helper:
  `FUN_002bcd38 = func_8083FD78` (movement-direction tri-state classifier). ✅ **RESOLVED the `@1166`
  gate** (read 00250ad0.c directly): there is **no separate slope action func** — the slope-slide is
  the N64 floor-physics helper **`func_8083CF5C`** (z_player.c:6752, the `func_8083816C(sFloorType)`∈
  {4,7,0xc} block) **inlined into OoT3D's Player_UpdateCommon**. `+0x1760` = `this->unk_6C4` (the
  slide accumulator that subtracts from gravity, `gravity -= unk_6C4*0.004f`), `+0x1a7` =
  `this->currentBoots` (HOVER/IRON branches). The `@1166` line `if(actionFunc==0x4b9920[back-walk])
  slideSpeed *= factor` is a **Grezzo-added** back-walk-on-slope scaling (no N64 counterpart); the
  `actionFunc != 0x4bc22c[get-item]` guard correctly excludes get-item from sliding.
- **0x488b40 `Player_Action_80840450` (standing-aim, Z-target/hold-item):** NOT idle. Grezzo divergences:
  **ADDED a 90-frame look-around fidget** (new field +0x24ba, Rand_ZeroOne coin-flip gaze offset) and
  **ADDED region/environment anim variants** (4 slots, gated on 3DS-only +0x174e / +0x29b8 bits /
  `DAT>='Q'` — SAME field family as the #88 `+0x4c37→FIDGET_HOT` override). Helpers:
  `FUN_0033100c=Player_GetMeleeWeaponHeld`, `FUN_0032c408=LinkAnimation_BlendToJoint`. Offsets:
  +0x2254/+0x225c/+0x2260 = aim blend state (unk_868/870/874), +0x24ba = the added 90-timer,
  +0x172a bit 8 ≈ STATE3_FINISHED_ATTACKING *(tentative)*.
- **0x4bc22c `Player_Action_8084E6D4` (get-item receive):** Player_StartTalking inlined; correctly
  excluded from slope-slide. Grezzo: **GI_ICE_TRAP arm removed**; get-item/gesture dispatch refactored
  into per-anim data tables. Offsets: +0x116=textId, +0x1724=naviActor, +0x172c=talkActor, +0x2238=av2.
- **0x4886d4 `Player_Action_8084E3C4` (ocarina):** FAITHFUL incl the warp-song branch (respawn[RETURN]
  params=0x5FF + sWarpSongEntrances[lastPlayedSong], spawn DEMO_KANKYO). The `!=`@112 special-case is
  corroborated by N64 source (UpdateCommon tests this twin at z_player.c:3305/11102). Only divergence:
  MODE_02 cleanup guarded behind `Player_TryCsAction(...,8)==0`.
- **0x4bf3bc `Player_Action_8084193C` (side-walk/strafe):** Grezzo **reimplemented the anim layer** —
  stays in-action picking 5 discrete anim ids (0x3b/0x3c/0x3d/0x3f, 0x34 turn-around) via
  LinkAnimation_Change, vs N64's continuous L↔R blend + handoff; decel-turn threshold widened
  0x4000→0x6000; added pre-check FUN_00358bf4; force-idle via +0x1a7==1.
- **0x4bf5cc `Player_Action_8084E30C` (surfacing→swim-wait):** FAITHFUL (no divergence beyond dt-scaling).
  `FUN_0034ad70 = func_8084AEEC` (swim velocity/yaw setter), DAT_004bf614=0.0f.
- **0x4bcccc `Player_Action_CsAction` (cutscene/DEMO dispatcher):** FAITHFUL; the two N64 callees
  (func_80852C0C + func_80852B4C) are inlined. Offsets: +0x12bc=csAction(s8), +0x12bd=prevCsAction(s8),
  +0x2a6=skelAnime.movementFlags. ONE data-layout change: morphTable restructured to a pointer-to-0x34B
  -float-Vec3 (`*(this+0x2d0)` indexed by +0x2c9) vs N64 embedded Vec3s[0].

⚠ **Inter-agent CONFLICTS to resolve (sub-helper N64 names only — twins are solid):** `FUN_0034b17c`
(swim pre-update `func_8084B000`? vs part of side-walk `func_80841860`?) and `FUN_002c3c7c`
(`func_8083C858` vs `func_8083C8DC` — adjacent run-setup variants) got different names from different
agents. Left OUT of the confirmed helper map until disambiguated by reading the actual call targets.

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

## ✅ N64-TWIN ALIGNMENTS (2026-06-21, full statement-level diff; notes in scratch/align/<addr>.md)
Each OoT3D action func aligned 1:1 to its N64 twin in `Shipwright/.../z_player.c`, diffed for
Grezzo's changes. The divergences ARE the port payload. Full per-func notes: `scratch/align/`.

### `FUN_004ba378` (run) == N64 **`Player_Action_80842180`** — free-movement walk/run (non-Z-target)
- Pinned by: `stateFlags2|=0x20` only; `func_80841EE4` pre-update; `sActionHandlerList8`; Z-target
  handoff via `Player_IsZTargetingWithHostileUpdate`; **SPEED_MODE_CURVED**; `func_8083C484` (the
  `>0x6000` turn block) inlined verbatim; step pair `func_8083DF68` = `AsymStepToF(&linearVelocity)`
  + `ScaledStepToS(&yaw)`; stop→idle `func_8083C0B8` = the setup-idle pair. (Sibling 8084227C ruled
  out: LINEAR + inverse handoff sense + no setup-idle.)
- **Grezzo divergences (port these):**
  1. **Added stop trigger `(this+0x29b8 & 4)`** OR'd with `speed==0` to force run→idle. No N64
     counterpart — an OoT3D-only "force-idle" flag/bit (field unresolved). Port as an extra OR'd
     idle-stop condition.
  2. **Decel uses `Math_StepToF(0, <step>, &linearVelocity)`** (step from settings field `+0x6a`)
     instead of N64 `Player_DecelerateToZero` (REG(43)/100). Same shape, tunable-driven.
  3. **Accel/turn-rate are data-driven**: AsymStepToF step from settings `+0x3a`, ScaledStepToS step
     from `+0x4a`, replacing N64 `REG(19)`/`REG(27)`.

### `FUN_004a34d0` (turn-in-place) == N64 **`Player_Action_TurnInPlace`** (ESS) — FAITHFUL
- Pinned by: `LinkAnimation_Update` → `if(Player_HoldsTwoHandedWeapon)` upper-body idle-copy preamble
  (`SetLoadFrame`+`SetCopyTrue` w/ `sUpperBodyLimbCopyMap`) → `GetMovementSpeedAndYaw(CURVED)` →
  `sActionHandlerListTurnInPlace`(HANDLER_7) → speed==0: `ScaledStepToS(&shape.rot.y, turnRate)`
  reach→Idle; else snap rot.y + walk handoff (`func_8083C858`). Anim 0xe4. **No behavioral
  divergence** — only if/else order swap (compiler) + inlined `func_8083C0E8` idle-entry. SoH3D's
  existing `Player_Action_TurnInPlace` is already correct modulo engine frame-rate scaling.

### ⚠ CORRECTION: `FUN_004bf18c` == N64 **`Player_Action_8084377C`** — knockback/damage bounce-LAND
**The prior note ("in-air/land, suspect for #86, NOT knockback") was BACKWARDS — it IS the knockback
action.** Verified statement-for-statement against N64 8084377C (z_player.c:9491):
- `stateFlags2|=0x60`; `func_808382BC` invincibilityTimer clamp; knockback restore (`+0x2291`
  knockbackType / `+0x2292` knockbackRot / `+0x2294` knockbackSpeed, byte-exact N64 layout); the
  `ABS(temp)>0x4000 → rot.y=knockbackRot+0x8000` yaw flip; `velocity.y<0 → gravity=0,velocity.y=0`;
  on land (`LinkAnimation_Update && bgCheckFlags&1`) the `av2.actionVar2`(+0x2238) countdown → wake
  action + `STATE1_DAMAGED` + down-anim + voice SFX; `bgCheckFlags&2 → PlayFloorSfx(NA_SE_PL_BOUND)`.
- **FALSE suspect for #86** (run-off-edge jump): reachable only via `knockbackType != NONE` (enemy
  hit / bomb), not a plain ledge run-off. Floor/edge geometry test (`bgCheckFlags&1/&2`) is unchanged
  from N64. The real run-off-edge in-air/freefall action is a DIFFERENT, still-unidentified func.
- Grezzo divergences worth a harness check if a knockback-off-edge repro exists: (1) landing/down-anim
  collapsed to a single fixed anim `DAT_004bf3b4` (N64 picks front/back by facing) — resolve the DAT;
  (2) wake-action handoff moved onto the `+0x2238` countdown (1-per-frame, NOT dt-scaled → expires at
  a different wall-clock duration on variable 3DS framerate).
- **The original FUN_004ba378/FUN_004bf18c characterizations below are superseded by these alignments.**

### `FUN_00183634` (climb step-up) == N64 **`Player_Action_80845668`** (ledge vault) — FAITHFUL (#79)
- Pinned by: `stateFlags2|=0x20`; anim gate `+0x284==0xe6` = `250jump_start` (high-ledge mount); the
  height clamp `min(+0x2270 yDistToLedge, ageProperties->unk_0C(+0xc))` byte-exact; IN_WATER
  (`stateFlags1 & 0x8000000`) 0.085/0.072 multiplier split; child `+1.0`; mount launch via
  `FUN_0034b3dc` = `func_80838940` (= the #86 jump-setter, 0x34b3dc); `av2 = -1`. Else-branch anims:
  `0x3a`=swim_15step_up (water-exit, inlines `func_8083D0A8`), `0xe7`=150step_up, `0xe8`=100step_up.
  Final `stateFlags1 &= 0xfffbbfff` clears JUMPING(0x40000)+CLIMBING_LEDGE(0x4000).
- **#79 vertical handling is FAITHFUL — NO teleport inside this function.** The high-ledge mount is a
  **clamped velocity launch** (not `pos.y = target`), with the `ageProperties->unk_0C` clamp + water/
  land multipliers + child offset all matching N64. The step-up settle `+0xc4` is
  `Math_StepToF(&actor.shape.yOffset, 0.0f, 150.0f)` — a real lerp+snap, not an instant set. Only the
  documented framerate step-scaling touches the yOffset settle *speed* (not position).
- **⇒ #79 root cause traced to the CALLER `Player_ActionHandler_12` = OoT3D `FUN_0023c7ac`** (848B,
  ledge-grab handler that sets up the step-up action). Pinned: of all 145 `Player_SetupAction`
  (FUN_0036055c) call sites, **exactly one** loads `0x00183634` — the call at `0x0023c918` inside this
  func. **Also FAITHFUL:** Grezzo keeps the #79-critical pre-offset pair byte-exact (N64 z_player.c:
  4975-4978 ↔ OoT3D L148-150): `world.pos.y(+0x2c) += yDistToLedge` and the compensating
  `shape.yOffset(+0xc4) -= sp34 * 100.0f` (same per-anim 60/59/41×unk_08 decrements, same 100.0f). All
  literals match N64. Only the framerate scaling touches the `ledgeClimbDelayTimer` arm thresholds, not
  position math.
- **⇒ #79 IS A SoH3D INTEGRATION BUG, not a Grezzo change** (handler AND action both faithful). The
  handler hides the one-frame `pos.y += yDistToLedge` jump behind a large negative `shape.yOffset`
  that the step-up action lerps back to 0 over the climb. If SoH3D doesn't set/carry/decay
  `shape.yOffset` the same way, that pos.y jump shows as a **teleport**. **Fix on the SoH3D side =
  replicate the `shape.yOffset` set (in FUN_0023c7ac) + the `Math_StepToF(&yOffset,0,150)` decay (in
  0x183634)** — do NOT touch the (already-correct) position math. New helpers: `FUN_0023c7ac` =
  Player_ActionHandler_12, `FUN_00358dfc` = LinkAnimation_PlayOnceSetSpeed, `FUN_00330ed8` =
  AnimationContext_DisableQueue. Full diff: scratch/align/79_handler.md.
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
| **walk/turn-start** | **0x4a34d0** | 0xe4 | = **turn-in-place** (N64 Player_Action turn family): when stick tilt gives ~0 speed it steps shape.rot.y(+0xbe) toward stick yaw via Math_ScaledStepToS, uses Player_GetIdleAnim + the TurnInPlace handler list; else hands off (FUN_002c3c7c) into walk |

### ✅ #86 walk-stop torso snap — ROOT CAUSE CONFIRMED LIVE
On run→stop, OoT3D switches actionFunc `0x4ba378`(run) → `0x4ba538`(idle) and the base-anim
**morphWeight (+0x288) jumps to 1.000 then decays 1.0 → 0.5 → 0.167 → 0.0 over ~5 frames**
(curFrame +0x290 advancing 0→4.7), i.e. it **cross-fades** the run→idle pose. This is exactly the
MORPH the SoH3D 3d3 path hard-cuts. **Fix for #86 = apply this morphWeight 1→0 blend (morphRate
≈0.33/frame, ~3–5 frames) on Player action/anim transitions**, per docs/anim_system.md. Verified by
live frame sampling, not inference.

### #88 idle/yawn — STATIC + LIVE both confirm 0x4ba538 = Player_Action_Idle
0x4ba538 inlines N64 `Player_CheckForIdleAnim` verbatim: `if (Player_GetIdleAnim(this) != curAnim)`
then a loop over the **30-entry fidget table** (`do{...}while(i<0x1e)`) returning index+1, else
IDLE_ANIM_DEFAULT/NONE. New confirmed helpers/data from it:
- `FUN_0034d628` = **Player_GetIdleAnim**
- `FUN_003759d0` = **Rand_ZeroOne** (the `commonType = Rand_ZeroOne()*5` fidget roll)
- `DAT_004ba948` = **sFidgetAnimations** (30 entries) — the yawn (live anim 0x50) is one of these
⇒ Port #88 = port 0x4ba538's inlined `Player_ChooseNextIdleAnim` (idleType toggle + Rand_ZeroOne
fidget roll + room behaviorType2) and its `LinkAnimation_Change(... -6.0f)` morph onto the SoH3D
idle path. The yawn picking "wrong" = idleType/Rand/behaviorType2 mismatch or missing morph blend.

#### ✅ #88 picker ALIGNED — `Player_ChooseNextIdleAnim` (2026-06-21, static, 0x4ba538 mid-block)
The big middle block of 0x4ba538 (the `FUN_0049f28c`/`FUN_003759d0` selection) IS N64
`Player_ChooseNextIdleAnim` (z_player.c:8347) inlined. Aligned statement-for-statement — **largely
FAITHFUL** with ONE Grezzo-added override (the prime #88 suspect). New confirmations:
- **`FUN_0049f28c` = `HealthMeter_IsCritical`** (`heathIsCritical`).
- **+0x1748 = `idleType` (s8)** — toggled `(idleType+1)&1`; `<0` ⇒ `PLAYER_IDLE_CRIT_HEALTH`(-1).
- **0x10000000 = `PLAYER_STATE2_IDLE_FIDGET`** — CONFIRMED `(1<<28)` matches N64 `z64player.h:731`.
  (Plain-idle branch `&= ~0x10000000` + `GetIdleAnim`; fidget branch `|= 0x10000000`.)
- Default `fidgetType = roomCtx.curRoom.behaviorType2` (read as `play+0x4c32` byte).
- crit-health → `FIDGET_CRIT_HEALTH_START`(7)/`LOOP`(8) per `idleType`; matches N64.
- `commonType = Rand_ZeroOne()*5`; `if(<4)` accept w/ sword/shield model-type gating →
  `fidgetType = FIDGET_SWORD_SWING(9) + commonType`; matches N64 (the N64 `GameInteractor_Should`
  hook is `true` in vanilla, so the equipment predicate is the real gate).
- The chosen anim is `sFidgetAnimations[fidgetType][modelAnimType!=1 ? 1 : 0]`, played via
  `FUN_00360190(...)` with the **−6.0f morph** (= N64 `LinkAnimation_Change(... ANIMMODE_ONCE, -6.0f)`).
- **✅ #88 ROOT PINNED (2026-06-22, region-field deep-dive — scratch/align/region_field_system.md):**
  the override `if (*(s8*)(play + 0x4c37) != 0) fidgetType = 3 (FIDGET_HOT);` is real, and `+0x4c37` =
  **room-header behavior-command bit 9 ("HOT room")** — an AUTHORED-PER-ROOM flag set from the ROM room
  header by `SCENE_CMD_ROOM_BEHAVIOR` (OoT3D 0x2344c4), Grezzo's replacement for N64
  `behaviorType2 == TYPE2_3`. SEPARATELY, `Player_GetIdleAnim` (0x34d628) returns the **default idle
  table @0x53a5f8 `{0x50=yawn,0x58,0x58,0x119}`** OR the **ALT table @+0x4f8 `{0x1f9,0x1f8,0x1f8,0x1fa}`**
  depending on the **build-version gate** `(player+0x174e!=1 || *0x54ac55 < 'Q') || (player+0x29b8 &
  0x400)` — where `0x54ac55` is the baked build region/version byte. So the "weird yawn" = the HOT-room
  bit + which idle table the version gate selects. **Port #88 = (a) extract the room-header HOT bit per
  room from the ROM, (b) capture `0x54ac55` from the oracle, (c) replicate the alt-table path per the
  faithful-3DS decision (see docs/divergence_map.md OPEN DECISIONS).** `+0x4c32` = behaviorType2 (confirmed),
  `+0x4c30` = curRoom.num (NOT a region index — prior guess corrected).
- **Open:** OoT3D's `Player_CheckForIdleAnim` loop bound is `0x1e` (30 = **15** table entries) vs N64's
  28 (**14** entries) — OoT3D may have ONE extra `sFidgetAnimations` entry. Verify against `DAT_004ba948`.

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
| run-off-edge jump (#86) | **RESOLVED & FAITHFUL** (scratch/align/86_freefall.md): freefall action `Player_Action_8084411C` = **0x004bba4c**; "left-ground" handler `func_8083AA10` = **0x001cf9ac** (inlines auto-jump `func_8083A4A8` + ledge-on-runoff `func_8083A6AC`); jump-setter `func_80838940` = **0x0034b3dc**. Auto-jump trigger/anim/height/gravity are **bit-identical to N64** (3.0/4.0/20.0/0x2000/0x1000/6.0, IREG 66-69, gravity -1.2/0). ⇒ #86 run-off jump is a SoH3D **integration** bug (framerate of the gating reads `linearVelocity`/`sYDistToFloor`/`bgCheckFlags&4`), NOT a Grezzo change — nothing to port here. (0x4bf18c remains the knockback land = N64 8084377C, false suspect.) |
| weird yawn (idle fidget #88) | **CONFIRMED**: idle action func 0x4ba538 (Player_Action_Idle); yawn = anim 0x50; picker = Player_ChooseNextIdleAnim twin |
| sword on back before owning it | equipment draw / `Player_OverrideLimbDraw`, equip flags, sheath visibility |
| pickup snaps to torso → above head (#6/#85/#9) | **RESOLVED & FAITHFUL** — placement is `Player_PostLimbDrawGameplay` = **0x004c1c90**; held-actor offset vec `{100,1640,0}`, R_HAND anchor, get-item torso↔hand midpoint all byte-exact to N64. SoH3D **integration** bug: must (1) invoke this post-limb callback with the LIVE R_HAND bone matrix, (2) keep heldActor/unk_862/exchangeItemId/GETTING_ITEM state consistent, (3) populate leftHandPos(+0x1228) + bodyPartsPos[15](+0x23e8) per-frame BEFORE draw |
| door-exit slide | door action func (sDoorAction / Player door state) |
| higher-surface climb teleport (#79) | **RESOLVED & FAITHFUL** — step-up action 0x183634 (`Player_Action_80845668`) AND its caller `Player_ActionHandler_12` = **0x0023c7ac** both byte-exact to N64. #79 is a SoH3D **integration** bug: handler does `pos.y += yDistToLedge` hidden behind a negative `shape.yOffset(+0xc4)` that the action lerps to 0; SoH3D must replicate that yOffset set+decay, not change position math |

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
- 2026-06-21 (cont.5): **Full N64-twin ALIGNMENTS** (static, 3 parallel subagents, statement-level
  diff; per-func notes in `scratch/align/<addr>.md`). Pinned: run `0x4ba378` = **Player_Action_80842180**
  (free-move walk/run; divergences: added `+0x29b8&4` force-idle trigger, tunable-driven decel/accel/
  turn-rate from settings `+0x6a/+0x3a/+0x4a` vs N64 REGs); turn `0x4a34d0` = **Player_Action_TurnInPlace**
  (FAITHFUL, no behavioral divergence). **⚠ CORRECTED a prior error**: `0x4bf18c` is **Player_Action_8084377C**
  (knockback/damage bounce-LAND), NOT in-air — the cont.3 "in-air, NOT knockback" note was backwards
  (verified vs N64: knockbackType/Rot/Speed restore at +0x2291/+0x2292/+0x2294, gravity clamp, BOUND
  SFX). So `0x4bf18c` is a **FALSE suspect for #86** — the real run-off-edge in-air/freefall action is
  unidentified. Named ~12 new helpers (LinkAnimation_Update=0x36b4ec, Player_SetupAction=0x36055c,
  AnimationContext_SetLoadFrame/SetCopyTrue, Player_HoldsTwoHandedWeapon, ...) and new offsets
  (+0x64 velocity.y, +0x70 gravity, +0x1321 acFlags, +0x2238 actionVar2, +0x2291.. knockback fields).
  NEXT: identify the freefall/in-air action for #86 (live-read while running off a ledge); carry/pickup
  cluster (#6/#85/#9) live; align idle 0x4ba538's inlined picker + 0x488b40 (wait/fidget) statically.
- 2026-06-21 (cont.6): **#86 run-off-edge FREEFALL/auto-jump RESOLVED & verdict = FAITHFUL.**
  Pinned the OoT3D twins of the N64 left-ground/auto-jump/freefall chain (static, evidence in
  scratch/align/86_freefall.md): freefall action `Player_Action_8084411C` = **0x004bba4c** (tells:
  gravity DAT=-1.2f/0.0f, `gSaveContext.respawn[TOP].data>40` via `<')'`, SPEED_MODE_LINEAR=0.0f
  sentinel, FUN_003518cc=Player_CheckHostileLockOn); left-ground handler `func_8083AA10` =
  **0x001cf9ac** (2344B, INLINES auto-jump func_8083A4A8 + ledge-on-runoff func_8083A6AC);
  jump-setter `func_80838940` = **0x0034b3dc** (sets velocity.y, STATE1_JUMPING=0x40000, jump+voice
  SFX). **All auto-jump constants bit-identical to N64**: 3.0/4.0/20.0 thresholds, 0x2000/0x1000 yaw
  gates, run_jump(0x6b)/jump(0x95) anims, IREG 66-69 height (/100,/1000), water-fall 6.0, AUTO_JUMP
  voice. ⇒ **#86 run-off jump is a SoH3D integration bug (framerate of the gating reads), NOT a
  Grezzo behavior change — there is no divergence to port.** New offsets: +0x64 velocity.y,
  +0x227f hoverBootsTimer, +0x2280 fallStartHeight, +0x2282 fallDistance. New helpers: FUN_001cf9ac,
  FUN_0034b3dc, FUN_003518cc (CheckHostileLockOn), FUN_002bc618 (func_8083DFE0 in-air locomotion),
  0x0021e4e8 (Player_Action_80844A44 water-fall sibling). Decomp .c: build/decomp/{001cf9ac,0034b3dc,
  004bba4c}.c.
- 2026-06-21 (cont.7): **#79 higher-surface climb teleport — step-up action ALIGNED & FAITHFUL.**
  `FUN_00183634` = N64 `Player_Action_80845668` (ledge step-up / vault onto higher surface), entered
  from a ledge-grab by `Player_ActionHandler_12`. Mount onto a high ledge is a **clamped velocity
  launch** (`min(+0x2270 yDistToLedge, ageProperties->unk_0C)` × water/land mult + child offset, via
  jump-setter 0x34b3dc) and the settle is a `Math_StepToF(&shape.yOffset(+0xc4), 0, 150)` lerp — NOT a
  teleport, and faithful to N64. ⇒ #79's actual pos.y compensation lives in the **caller
  `Player_ActionHandler_12`** (N64 z_player.c:4975-4978), OoT3D addr unidentified = next target. New
  offsets: +0xc4 actor.shape.yOffset, +0x2270 yDistToLedge. Note: 86/79 alignments done read-only (no
  Ghidra) by a parallel subagent while the #86 freefall agent held the Ghidra project. Note:
  scratch/align/{4ba378,4a34d0,4bf18c,86_freefall,79_climb}.md hold the full per-func diffs (gitignored).
- 2026-06-21 (cont.8): **#79 climb-teleport ROOT CAUSE traced & RESOLVED — FAITHFUL.** The ledge-grab
  caller `Player_ActionHandler_12` = OoT3D `FUN_0023c7ac` (pinned: unique `Player_SetupAction(0x183634)`
  call site, @0x0023c918). Grezzo keeps the `pos.y(+0x2c) += yDistToLedge` + compensating
  `shape.yOffset(+0xc4) -= sp34*100` pre-offset byte-exact. ⇒ #79 is a SoH3D **integration** bug (handler
  AND step-up action both faithful): the pos.y jump is hidden behind a negative shape.yOffset lerped to 0;
  SoH3D must replicate the yOffset set (FUN_0023c7ac) + Math_StepToF(&yOffset,0,150) decay (0x183634), NOT
  alter the position math. New helpers: FUN_0023c7ac=Player_ActionHandler_12, FUN_00358dfc=
  LinkAnimation_PlayOnceSetSpeed, FUN_00330ed8=AnimationContext_DisableQueue. Decomp: build/decomp/0023c7ac.c.

## STATUS (end of 2026-06-21 static block): 3 of the locomotion/idle bugs root-caused
- **#86 run-off-edge jump** = SoH3D integration bug (framerate of gating reads); auto-jump FAITHFUL. No port.
- **#79 higher-surface climb teleport** = SoH3D integration bug (replicate shape.yOffset set+decay); FAITHFUL. No port.
- **#88 weird yawn** = likely the Grezzo `+0x4c37→FIDGET_HOT` override (needs +0x4c37 resolved + live check).
- **#86 walk-stop torso snap** = apply the morphWeight 1→0 blend (prior session, confirmed live).
- Action-func map COMPLETE for: run/turn/idle/knockback-land/freefall/climb-stepup + their key callers.
- NOT yet done (LIVE, needs oracle): carry/pickup (#6/#85/#9), door-exit slide, sword-on-back (equipment draw).
- 2026-06-22: **ALL 11 Player_UpdateCommon special-cased action funcs aligned to N64 twins** (batch-2:
  4 parallel read-only agents, no Ghidra). Pinned: 0x4b9920=Player_Action_808414F8 (back-walk),
  0x488b40=Player_Action_80840450 (standing-aim; Grezzo ADDED a 90-frame look-around fidget +0x24ba +
  region anim variants — same 3DS field family as the #88 +0x4c37 override), 0x4bc22c=
  Player_Action_8084E6D4 (get-item; ICE_TRAP arm removed), 0x4886d4=Player_Action_8084E3C4 (ocarina/
  warp-song, FAITHFUL), 0x4bf3bc=Player_Action_8084193C (side-walk; anim layer reimplemented w/ 5
  discrete ids), 0x4bf5cc=Player_Action_8084E30C (surfacing→swim-wait, FAITHFUL), 0x4bcccc=
  Player_Action_CsAction (cutscene dispatcher, FAITHFUL + morphTable layout change). ⚠ Found the prior
  "slope/slippery-floor" role guess for the 0x4b9920/@1166 gate was WRONG (it's back-walk) — the real
  slope-slide func is still unmapped; and noted two unresolved inter-agent sub-helper name conflicts
  (FUN_0034b17c, FUN_002c3c7c). Full per-func diffs in scratch/align/. New helpers: FUN_002bcd38=
  func_8083FD78, FUN_0033100c=Player_GetMeleeWeaponHeld, FUN_0032c408=LinkAnimation_BlendToJoint,
  FUN_0034ad70=func_8084AEEC, FUN_0036b02c=Player_DetachHeldActor.
- 2026-06-22 (cont.): **CORRECTED the "@1166 slope func unmapped" flag** (was a misread). Read
  00250ad0.c directly: the slope-slide is N64 `func_8083CF5C` (Player_UpdateCommon floor-physics helper,
  the floorType∈{4,7,0xc} block) inlined into OoT3D's UpdateCommon — there is NO separate slope action
  func. `+0x1760`=unk_6C4 (slide accumulator, `gravity -= unk_6C4*0.004f`), `+0x1a7`=currentBoots. The
  `@1166` gate `if(actionFunc==0x4b9920 back-walk) slideSpeed*=factor` is a Grezzo addition; the
  `!=0x4bc22c get-item` guard correctly excludes get-item from sliding.
- 2026-06-22 (cont.2): **carry/pickup #6/#85/#9 placement RESOLVED — FAITHFUL.** `Player_PostLimbDrawGameplay`
  = OoT3D `FUN_004c1c90` (post-limb draw callback from the Player_DrawImpl twin; fn-ptr literal @0x4bff48).
  Held-actor placement byte-exact to N64: offset vec D_80126190={100,1640,0} (1640.0 is a unique literal
  @0x4c2574), R_HAND anchor (3DS limb id 0x14), two −π/2 rots, get-item torso↔hand midpoint. ⇒ SoH3D
  INTEGRATION bug: must invoke the callback with the LIVE R_HAND bone matrix, keep heldActor/unk_862/
  exchangeItemId/GETTING_ITEM consistent, and populate leftHandPos(+0x1228)+bodyPartsPos[15](+0x23e8)
  before draw. New offsets: +0x1224=held-actor draw slot (NOTE: draw path uses +0x1224, not +0x12b0),
  +0x1228=leftHandPos, +0x23e8=bodyPartsPos[15]. Decomp: build/decomp/004c1c90.c.

## ⇒ EMERGENT PATTERN (2026-06-22): OoT3D player code is FAITHFUL — the bugs are SoH3D INTEGRATION bugs
Every player behavior aligned so far whose bug we chased to ground — **#86 run-off-edge, #79 climb-teleport,
#6/#85/#9 carry-placement** — turned out **byte-exact to N64**. The reported Link bugs are NOT Grezzo
behavior changes; they are SoH3D feeding the (faithful) logic wrong inputs / not replicating state the
3DS path relies on (live bone matrices, shape.yOffset decay, framerate of gating reads, held-actor state).
The genuine Grezzo *additions* are narrower and cluster around a **3DS-only field family** (`+0x4c37`,
`+0x174e`, `+0x29b8` bits, `+0x4c32` behaviorType2) driving fidget/idle/aim variants (#88 yawn etc.).
⇒ Strategic implication: the OoT3D→PC delta on the player is mostly *integration correctness* + a small set
of 3DS-only feature flags, NOT a wholesale logic rewrite. This favors extending SoH3D over a full re-decomp.
- 2026-06-22 (cont.3): **ring-1 divergence sweep** (220 player-helper funcs, 5 parallel agents) →
  full results in **docs/divergence_map.md** (144 FAITHFUL / 33 DIVERGENT / 41 UNMATCHED). Key: the
  3DS region/variant field system is **engine-wide** (PlayState +0x4c30/32/33/35/37 + Player +0x29b8/
  +0x174e) — the highest-priority deep-dive. ~60 new anchors pinned. Corrected two helper mislabels
  here (FUN_002bdd54, FUN_0032c408) and resolved FUN_0034ad70=func_8084AEEC.
- 2026-06-22 (cont.4): **region/variant field system RE'd** (deep-dive; full in scratch/align/
  region_field_system.md). It's THREE things, not one: (1) `play+0x4c30`=RoomContext.curRoom.num (NOT a
  "region index" — corrected) + room-header behavior bits +0x4c33/4c35/4c37 set by SCENE_CMD_ROOM_BEHAVIOR
  (0x2344c4) from the ROM; (2) a baked build-version gate on `0x54ac55` ('Q'/'P') that activates 3DS
  alt paths; (3) the Grezzo Player variant word +0x29b8 (bits enumerated). #88 yawn ROOT PINNED (above):
  room-header HOT bit (+0x4c37=bit9) + version-gated alt idle table {0x1f9,0x1f8,0x1f8,0x1fa} vs default
  {0x50,...}. New anchors: 0x2344c4, +0x223c room-spawn mask, 0x54ac55 build-version byte. A port
  DECISION (faithful-3DS vs faithful-N64 idle path) is logged in divergence_map.md OPEN DECISIONS.
- 2026-06-23: **OoT3D SkelAnime field map + morph model fully documented.** `FUN_00360190`
  (`LinkAnimation_Change`) aligned to N64 twin: the `+0x254`-relative controller fields are
  `+0x30=animId, +0x34=morphWeight, +0x38=morphRate, +0x3c=curFrame, +0x40=playSpeed,
  +0x48=endFrame, +0x70=mode, +0x71=updateState, +0x78=jointTable, +0x7c=morphTable`.
  Morph path confirmed: when `|morphFrames|>0`, the outgoing pose is frozen into morphTable
  (`+0x7c`), morphWeight set to 1.0, morphRate=1/|morphFrames|; update-case-3 decrements
  morphWeight each tick and lerps via `FUN_002c3814(1-w/w0, ...)`. Dominant morph duration =
  **6 frames** across all player action transitions (fidget, talk, run→idle). Per-state CSAB ids
  + the alt-idle-table gate logic documented. **Fix spec for #70/#83/#86:** see
  `docs/player_anim_states.md §5` — plumb live `skelAnime.morphWeight` (+0x288) into
  `SoH3D_UpdateAnim`, snapshot outgoing CSAB pose at transition, lerp per-bone local rotations
  over the morph window. No new OoT3D data needed beyond what the oracle already confirmed.
