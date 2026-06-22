# OoT3D → N64 divergence map (the OoT3D-on-PC port's mismatch index)

Goal (user directive 2026-06-22): **commit to porting OoT3D to PC** via the hybrid path — extend
SoH3D (the running Shipwright/N64-OoT engine + OoT3D assets) by absorbing OoT3D's deltas. To do that
top-down instead of bug-by-bug, we build **broad ownership of the OoT3D binary** and a systematic
**divergence map**: for each OoT3D function, its N64 twin and whether Grezzo changed it. The
divergences (+ the genuine 3DS-only additions) ARE the port payload.

See `docs/player_port.md` for the deep per-behavior player notes; this file is the **breadth index**.

## Why this works (the accelerator)
OoT3D is Grezzo's 3DS port of the SAME C codebase as the fully-decompiled N64 OoT. So nearly every
OoT3D function has an N64 twin in `Shipwright/soh/src` that we can align + diff. We do NOT decompile
blind ARM — the N64 decomp is the Rosetta stone.

## Emergent finding (drives the strategy)
Every player bug chased to ground so far — **#86 run-off-edge, #79 climb-teleport, #6/#85/#9 carry,
walk-stop, idle** — the OoT3D logic is **byte-exact to N64**. The reported Link bugs are **SoH3D
INTEGRATION bugs** (SoH3D feeding faithful logic wrong inputs / not replicating 3DS-relied-on state),
NOT Grezzo behavior changes. Genuine Grezzo *additions* are narrow and cluster on a **3DS-only field
family** (`+0x4c37`, `+0x174e`, `+0x29b8` bits, `+0x4c32` behaviorType2) driving idle/aim/region
variants. ⇒ The port is mostly *integration correctness* + a small set of 3DS feature flags, not a
wholesale rewrite — which is exactly why extending SoH3D beats a full re-decomp.

## Port scope buckets (every OoT3D system lands in one)
- **(a) reuse N64 decomp as-is** — faithful logic SoH3D already runs (most of the engine + gameplay).
- **(b) port the OoT3D delta** — Grezzo logic changes (the DIVERGENT funcs below). The known cluster:
  the engine-wide **3DS region/zone field family** (PlayState `+0x4c30`/`+0x4c32`/`+0x4c33`/`+0x4c35`/
  `+0x4c37`) gating spawn/collision/camera/draw/idle, + the morphTable pointer→0x34-stride relayout.
- **(c) reimplement 3DS-only** — no N64 twin; built fresh in SoH3D:
  - **3DS LIGHTING** (user goal, 2026-06-22): replicate OoT3D's PICA200 **per-fragment lighting**
    (Fresnel/specular/diffuse via fragment-lighting LUTs + per-material light env, per-room ambient)
    in SoH3D's GL path. Renderer reimplementation, NOT a logic port — no N64 twin. Strategy: capture
    the live PICA200 lighting state from the Azahar oracle to drive it; rides the same PICA surface as
    the 3×4-matrix and region-field findings. Tracked here as a parallel graphics-fidelity workstream
    separate from the gameplay-logic port.
  - **Title/attract scene** (user goal, 2026-06-22; SoH3D kanban **#92**): replicate OoT3D's title
    presentation (3D Triforce intro, remade logo, 3DS camera moves + lighting/particles) to be
    visually **indistinguishable**. Capture the reference live from the Azahar oracle; showcases the
    3DS-lighting reimpl.
  - 3DS UI (dual-screen item/menu, touch), gyro aiming, Sheikah Stone hint movies, Boss Challenge,
    Master Quest integration, the remade textures/models (already loaded as assets in SoH3D).

## ★ NORTH STAR (user, 2026-06-22): make SoH3D **indistinguishable** from OoT3D
The bar is not "close enough" — the end goal is visual + behavioral parity with the 3DS game. That
sets the standard for both workstreams: (1) the gameplay-logic port (Link/actors/scenes behave
exactly like 3DS — driven by this divergence map) and (2) the graphics-fidelity reimpl (PICA200
lighting, title scene, remade look). Verification is like-for-like oracle-vs-SoH3D comparison, not a
vibe check.

## Coverage (live count)
- OoT3D code.bin: **~8,265 functions** total (4.5 MB, whole game statically linked).
- Decompiled to `build/decomp/<addr>.c` (gitignored): **318** (as of ring-1 sweep, 2026-06-22).
- Inventory: `build/decomp/functions.csv` (8,265 rows: addr,name,size).

## The systematic ownership pipeline (call-graph BFS from anchors)
1. **Seed** = the ~30 confirmed OoT3D→N64 anchors in `docs/player_port.md`.
2. **Expand ring**: every `FUN_xxxxxx` referenced by an already-decompiled function is the next ring of
   callees (player-subsystem funcs whose twins are findable by adjacency). Extract:
   `grep -rhoE 'FUN_[0-9a-f]{6,8}' build/decomp/*.c | sort -u`, subtract already-decompiled.
3. **Decompile the ring** in ONE Ghidra run (Ghidra is single-lock — never run two in parallel):
   `OOT3D_REPO=$PWD DECOMP_TARGETS=scratch/sweep/<ring>_targets.txt /opt/ghidra_11.0.3_PUBLIC/support/analyzeHeadless build/ghidra oot3d -process code.bin -noanalysis -scriptPath tools/ghidra_scripts -postScript DecompDump.py`
4. **Align in parallel** (read-only, no Ghidra): partition the ring into batches; one agent per batch
   produces a compact `addr | N64 twin | FAITHFUL/DIVERGENT/UNMATCHED | note` table
   (`scratch/sweep/SWEEP_CONTRACT.md` is the agent contract). Deep notes only for DIVERGENT funcs.
5. **Fold** confirmed twins/offsets into `docs/player_port.md`'s anchor tables; record DIVERGENT funcs
   below. Then GOTO 2 with the newly-decompiled funcs as the next seed (the ring grows the frontier).

This loop is the unit of "gaining ownership." It is multi-agent-orchestration-shaped; it can be run by
hand in waves (current) or automated end-to-end with a Workflow over the whole binary.

## Ring-1 sweep (2026-06-22) — 220 funcs, the player-helper call-graph frontier
Partitioned into 5 batches; per-batch maps in `scratch/sweep/divmap_batch0[0-4].md`.
**Tally: 144 FAITHFUL · 33 DIVERGENT · 41 UNMATCHED.** Confirms the emergent finding hard: the player
helper layer is overwhelmingly faithful to N64; the divergences are narrow and almost all ride the
3DS region/variant field family or are 3DS-only feature additions.

### ★ STRUCTURAL FINDING: the "region field system" — RE'd (2026-06-22). It's THREE things, not one.
The deep-dive (scratch/align/region_field_system.md) dissolved the sweep's "region cluster" into three
concrete, well-understood pieces. **Correction: `+0x4c30` is NOT a region index — it's `curRoom.num`.**

**(1) `play+0x4c30` = `RoomContext.curRoom` base; `+0x4c30`=`num`, `+0x4c32`=`behaviorType2`,
`+0x4c33`=`behaviorType1`, `+0x4c35`/`+0x4c37` = Grezzo-added ROOM-HEADER behavior-command bits**
(bit8→+0x4c35, **bit9→+0x4c37 "HOT room"**, bit10→+0x2b9c). Source = the **ROM room header**, set by the
`SCENE_CMD_ROOM_BEHAVIOR` handler at **OoT3D 0x2344c4** (twin of z_scene.c:270) at room load. So these
are AUTHORED-PER-ROOM flags, not free-floating region state.
- The spawn gate `*(u32*)(play+0x223c) & (1 << curRoom.num)` (in Actor_SpawnEntry 0x3738d0) is a
  **per-room actor-spawn-enable / residency bitmask** (+ stamps `actor.room = curRoom.num`).

**(2) The build-version gate.** The recurring `(player[+0x174e]!=1 || *0x54ac55 < 'Q') || (player[+0x29b8]
& 0x400)` is gated on **`0x54ac55` = the baked-in build region/version code byte** (14 readers, ZERO
writers — a per-build const, compared to ASCII 'Q'/'P'). `+0x174e` = a per-frame environment-state byte
set in Player_UpdateCommon (0x250ad0:1505) from the audio/sequence block (=1 when a region ambience
source is present). **When this gate opens, alt anim/behavior paths activate; otherwise the default
(N64-like) path runs.** This is why some 3DS "variants" only appear in certain builds/regions.

**(3) Player `+0x29b8` = a Grezzo-added Player variant/force state word** (NO N64 twin). Bits:
`0x4`=force run/back-walk→idle (set 0x250ad0:603); `0x200`=select alt anim table; `0x400`=alt-anim
veto/variant-2; `0x800000`=ledge-grab (set 0x33ebfc); `0x200000`=movement/weight arm (0x34b288);
`0x1`=first-person aim; `0x100`=ledge-height arm; `0x1000000`=water/cam arm. **Player_SetupAction
(0x36055c) clears bits 1/4/0x200000/0x800000 SELECTIVELY per-action** — the table-selector bits
0x200/0x400 persist across actions.

**#88 yawn root, now pinned:** `Player_GetIdleAnim` (0x34d628) returns the **default idle table @0x53a5f8
`{0x50=yawn, 0x58, 0x58, 0x119}`** or, when the version gate opens, the **ALT table @+0x4f8
`{0x1f9, 0x1f8, 0x1f8, 0x1fa}`** — plus the `+0x4c37 (room-header bit9 "HOT") → FIDGET_HOT` override in
the picker (Grezzo's replacement for N64 `behaviorType2 == TYPE2_3`). The "weird yawn" is the authored
per-room HOT flag + which idle table the version gate selects.

⇒ **PORT BOTTOM LINE (decision needed):** to be faithful we (a) extract from ROM room headers: room
num, behaviorType1/2, the Grezzo room-behavior bits (incl. bit9 HOT) + the `+0x223c` spawn mask;
(b) live-capture the `0x54ac55` build-version byte from the Azahar oracle (it decides if the alt path is
even active); (c) extract the alt anim-id tables from code.bin. **Then DECIDE: replicate the 3DS
alt-anim path (faithful-3DS, idles match OoT3D) vs force the default table (faithful-N64).** Per the
"indistinguishable" north star → **faithful-3DS** (replicate the alt path), gated on the captured
version byte. (See `## OPEN DECISIONS`.)

Also engine-wide: **3DS matrices are 3×4 (MtxF*, no w-row) with explicit args** vs N64's 4×4 global —
a layout difference to handle throughout, not a math change.

Also engine-wide: **3DS matrices are 3×4 (MtxF*, no w-row) with explicit args** vs N64's 4×4 global —
a layout difference to handle throughout, not a math change.

### Region-system new anchors (fold into player_port.md)
0x2344c4 = SCENE_CMD_ROOM_BEHAVIOR handler; 0x3738d0 = Actor_SpawnEntry (room-residency gate);
play+0x4c30 = RoomContext.curRoom.num, +0x4c32 = behaviorType2, +0x4c33 = behaviorType1,
+0x4c35/+0x4c37 = Grezzo room-header behavior bits (bit8/bit9-HOT), +0x223c = per-room spawn-enable
mask (u32), play+0x2b9c = room-header bit10 target; **0x54ac55 = baked build region/version byte**
(compared to 'Q'/'P'); player+0x174e = per-frame region-ambience-present byte; player+0x29b8 = Grezzo
variant/force state word (bits enumerated above).

## OPEN DECISIONS (need a user call)
- **Idle/variant anim path (from #88):** replicate the 3DS alt-anim path (faithful-3DS — idles match
  OoT3D, gated on the captured build-version byte) **[recommended, per "indistinguishable" north star]**
  vs force the N64-default table (simpler, but idles won't match 3DS). Affects idle/aim/movement-start
  anims wherever the `+0x29b8`/`+0x174e`/version gate selects an alt table.

### DIVERGENT functions (the port payload) — ring-1
**3DS-only NEW features (no N64 twin — additions to replicate):**
| addr | what | hooks |
|---|---|---|
| 0x2bf814 | auto-aim "head-track nearest actor" acquisition assist | +0x24bc state, +0x174a\|=0x200 |
| 0x2c3e34 | standing-aim 90-frame look-around fidget (limb-anim half) | +0x24ba timer, +0x24b9 |
| 0x2c3fac | animated boots-swap / force-idle settle action | +0x1b8 prevBoots, +0x29b8 |
| 0x2ddba0 | `func_8083DC54` look-at aim — byte-exact + ADDED auto-aim dispatch branch | +0x174a\|=0x200 |

**Region/variant-field-gated divergences (the field-system payload):**
| addr | N64 twin | the change |
|---|---|---|
| 0x34d628 | Player_GetIdleAnim | +0x174e/'Q'/+0x29b8 idle override (= #88 yawn root) |
| 0x35d304 | movement/wall-start dispatcher | alt start-anims by +0x29b8 0x200/0x400 + +0x174e |
| 0x3589dc | per-boots/region camera settings | +0x4c33 per-region cam override block |
| 0x34b288 | run/walk playspeed setter | adds 3DS flag arm |
| 0x34b17c | `func_8083CF5C` floor/gravity arm `?` | gated on anim +0x284==0x34 + 3DS flag |
| 0x3438a4 | Player_InitItemActionWithAnim | N64 fn-ptr table → inline switch, CMB DMA-load, renumbered item ids, +HUD restriction SM |
| 0x355830 | Inventory_ChangeAmmo | same clamp, dispatch re-keyed to slot-id table |
| 0x34cc78 | Player_UpdateUpperBody | inlines item-button scan + 3DS scratch state |
| 0x3518dc | Player_ActionHandler_13 | fused grab/climb/door/get-item dispatch on +0x1749 + 3DS scratch |
| 0x376340 | Actor_UpdateBgCheckInfo | adds region gate `DAT[play] & (1<<+0x4c30)` |
| 0x3738d0 | spawn-from-segment | adds region gate (+ Grezzo build-path debug string) |
| 0x37547c | Audio_PlaySfxGeneral builder | region-gated pitch + 3DS bank-table |
| 0x3c45f4 | Player_UpdateCamAndSeqModes | ~3× N64 size, region gates +0x4c33/+0x4c35 + appended SEQ_MODE/audio-fade SM (+0x29e0..) |
| 0x4c55c0 | Player draw-matrix/held-actor builder | 3×4 matrix relayout + region gates |

**Genuine small logic tweaks:**
| addr | N64 twin | the change |
|---|---|---|
| 0x330efc | func_8083BA90 (jump setter) | added snow/sand floortype jump-SFX (floorType {0x3b,0x3c,0x3d}) |
| 0x33ebfc | func_8083A5C4 (ledge-grab setup) | added Vec3 pos-offset param + early-out line-test moved from caller; +0x29b8\|=0x800000 |
| 0x3343ec | csAction-end swim/land restore | swim uses anim 0x34 morph; land adds anim-gated rot.y−=0x8000 |
| 0x33ee60 | Math3D_UDistPlaneToPos | int-threshold zero-normal guard vs N64 float-epsilon+debug print |
| 0x33eeb8 | WaterBox_GetSurfaceImpl | prepended scene-0x58 surface override |
| 0x2bbbcc | Player_CalcSpeedAndYawFromControlStick | persists curved target speed in +0x29cc (N64 local) |
| 0x2be2ec | Player_PlaySteppingSfx | footstep variant from discrete play+0x80 scene field vs continuous |
| 0x3603f8 | cutscene morph-table commit | pointer→0x34-stride Vec3f morphTable relayout (= 0x4bcccc) |
| 0x36055c | Player_SetupAction | faithful + it's where the +0x29b8 region/variant machine resets between actions |

**DIVERGENT? — flagged, need a dedicated per-func align pass:** 0x132ad0 (2072B damage/void
processor), 0x2bc420 (freefall land-impact), 0x3598c8 (wall/water step-up collision probe), 0x35150c
(ledge-mount sub), 0x358bf4 (wall-grab attach/release).

### UNMATCHED (41) → bucket (c) reimplement-3DS-only (no N64 twin)
Genuine 3DS-only engine code, grouped: **audio** (0x32e780 Audio_SetSequenceMode, 0x32eadc/eb30/eb60/
ebe8 channel/reverb, 0x355f54 light/color env); **3DS touch-screen do-action** (0x332284, 0x33885c —
the rewritten do-action subsystem, replaces N64 Interface_SetDoAction); **GPU/stereo draw** (0x32c408
stereo L/R limb-draw, 0x3240f8/0x324154 draw-request queue, 0x358778/0x3688a8/0x331094 CSAB/CMB
anim-channel Vec4 ops that REPLACE N64 SkelAnime); **MoLive engine framework** (0x2bea70/0x2beafc/
0x2bedd4 C++ containers/allocators); **z_message** text-box control-code parser (0x2df850/0x2e03e8);
**z_kankyo/map-lights** (0x33c25c); region/env getters + small global setters. These are the "build
fresh in SoH3D" list, distinct from the (b) port-the-delta funcs above.

### Ring-1 new anchors (≈60 pinned; durable here, key ones folded into player_port.md)
**Helpers:** 0x2cfca0=Math_SinS, 0x338f60=Math_CosS, 0x3758b0=Math_Atan2S, 0x3759d0=Rand_ZeroOne,
0x371e50=Rand_ZeroFloat, 0x3738a8=Rand_CenteredFloat, 0x3702c8=Rand_S16Offset, 0x375a18=Math_SmoothStepToS,
0x3624c8=Matrix_MtxFToYXZRotS, 0x36c174=Matrix_MtxFMtxFMult, 0x371234=Matrix_RotateZ, 0x371348=Matrix_Scale,
0x3713fc=Matrix_Translate, 0x3735e8=Matrix_RotateY, 0x3735ac=Matrix_MultVec3f, 0x372224=Matrix_MtxFCopy,
0x3721e0=Matrix_ToMtx, 0x36df4c=Math_Vec3f_Copy, 0x35fb94=Math_Vec3s_Copy, 0x360190=LinkAnimation_Change,
0x36b4ec=SkelAnime update-mode dispatcher, 0x3603c0=LinkAnimation_GetEndFrame, 0x36b1e0=Player_CheckAnimFrameRange,
0x360a1c=Player_ProcessAnimSfxList, 0x36b96c=SkelAnime root-motion apply, 0x330ed8=AnimationContext_DisableQueue,
0x35d260=Player_HoldsTwoHandedWeapon, 0x33100c=Player_GetMeleeWeaponHeld, 0x3279dc=Player_GetExplosiveHeld,
0x34d688=Player_UseItem, 0x336bbc=Player_StartTalking, 0x334c44=Player_FinishAnimMovement,
0x32ec94=func_8083D36C(water-dive), 0x376340=Actor_UpdateBgCheckInfo, 0x376864=Actor_MoveXZGravity,
0x376168/3761f0/3762a4=CollisionCheck_Set{AT,AC,OC}, 0x37547c=Audio_PlaySfxGeneral, 0x36f59c=Player_PlaySfx,
0x49f28c=HealthMeter_IsCritical, 0x1ebe68=func_8002F0C8(lock-on range), 0x2bc618=func_8083DFE0(in-air step),
0x2b949c=Player_UpdateShieldCollider, 0x2c036c=func_8084ABD8(C-up aim), 0x34ad70=func_8084AEEC(swim setter).
**Offsets:** +0x1a9=heldItemAction, +0x48/4a/4c=actor.focus.rot, +0x71=SkelAnime anim-mode,
+0x3c/44/48/4c=SkelAnime frame quad, +0x34/38=morph cursor/rate, +0x174a=aim flag word,
+0x174e=region/env flag, +0x1750/52/56/58=upper/head limb rot, +0x29b8=region/variant state word,
+0x29cc=cached curved move-speed, +0x24b9/24ba=look-around fidget, +0x24bc..d8=auto-aim track state,
+0x4c30/32/33/35/37=PlayState region fields, +0x0d00=blendTable, +0x12e4=subCamId, +0xa54=cameraPtrs[0].

### ⚠ Corrections to player_port.md (from the sweep)
- `FUN_0032c408` was mislabeled **LinkAnimation_BlendToJoint** — it is actually a **3DS stereo (L/R)
  limb-draw helper** (pushes 2 draw entries + FUN_0030f900). Re-pinned.
- `FUN_002bdd54` was mislabeled the **5-arg idle-anim resolver** — the func at 0x2bdd54 is a 12-line
  1-arg stub; the resolver label was on the wrong address. Unpinned pending re-find.
- `FUN_0034ad70 = func_8084AEEC` (swim velocity/yaw setter) — the prior inter-agent conflict is RESOLVED
  (FAITHFUL swim setter).
