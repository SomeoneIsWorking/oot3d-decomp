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

## ★ ARCHITECTURE DECISION (user, 2026-06-22): full OoT3D actor PORT, not N64-logic patching
For actors as for Link: **port OoT3D's actual behavior into SoH3D** — do NOT make N64 actor logic drive
3DS models via integration shims. Faithful by construction (run OoT3D's logic), and the only path that
uniformly handles 3DS-divergent + 3DS-exclusive actors. Efficient form (NOT a blind from-scratch ARM
rewrite of every actor):
- **Scaffold from the N64 Rosetta source** (OoT3D actor ≈ N64 actor + a delta — proven by the sweep) and
  **apply the OoT3D divergences this map catalogs.** This map IS the per-actor port spec.
- **KEYSTONE — port OoT3D's shared SKELETAL-ACTOR DRAW/ANIM FRAMEWORK first** (the CSAB/CMB + MoLive
  skeleton system). OoT3D applies the morph blend, `Npc_TrackPoint` head/torso rotation, and eye/mouth
  facial anim in this ONE shared framework — not per actor. SoH3D currently shims it with N64 SkelAnime,
  which drops those per-limb overrides → the walk-stop morph, Kokiri-don't-head-track, and Saria-facial
  bugs are all ONE missing framework, not N actor bugs. Port it once → every skeletal actor animates the
  3DS way and those bugs are fixed correctly (by running OoT3D's draw logic, not retrofitting N64 callbacks).
- Then port each actor's UPDATE logic on top (N64 scaffold + deltas): Link (vertical slice) → Saria,
  Kokiri → outward. 3DS-exclusive actors (no N64 twin) are reimplemented from the OoT3D decomp.
This SUPERSEDES the earlier "Track B = port behaviors into the N64 Player path" framing: the target is
OoT3D's behavior + OoT3D's draw framework, not the N64 engine's.

## KEYSTONE FIX SPEC (CSAB draw path drops per-limb overrides — RE'd 2026-06-22)
Full analysis: `scratch/align/csab_limb_override_rootcause.md`. CONFIRMED: SoH3D's own-CSAB auto draw
path (`SoH3D_DoRetarget` auto branch `soh3d.c:2136-2233` → `SoH3D_UpdateAnimAuto` `soh3d_model.cpp:2335`
→ `SoH3D_UpdateAnim` :2297`) samples the OoT3D CSAB at a bare `(animName, frame)` and emits a RAW pose,
dropping everything the N64 limb-draw walk layers on top. SoH3D already has a PARTIAL version of OoT3D's
override framework (`SoH3D_ApplyProcOverride` `soh3d.c:337`, `SoH3D_SetBoneRotDelta` channel consumed at
`soh3d_model.cpp:2308-2314`) — but it's hardcoded to ONLY the cucco wing-flap (`kSoH3dProcOverride`).
**Finishing that framework = the keystone.** Two distinct additions, same path:
1. **Head-track (Kokiri + Saria = ONE fix):** generalize `SoH3D_ApplyProcOverride` beyond the cucco
   table — for tracking actors read `interactInfo.torsoRot`/`headRot` (N64 applies them as
   `Matrix_RotateX/Z` on limb 8 torso / limb 15 head in `EnKo_OverrideLimbDraw` z_en_ko.c:1336-1347 —
   NOT written to jointTable, so lost by every path) and feed them as OoT3D head/torso bone deltas via
   the existing `SoH3D_SetBoneRotDelta`. En_Sa = same mechanism.
2. **Morph (SEPARATE fix, same path):** N64 bakes morph into `skelAnime->jointTable` pre-draw
   (`AnimationContext_SetInterp`); the CSAB path ignores jointTable entirely → morph-blind. Plumb
   `skelAnime->morphWeight` from `SoH3D_SkelAnimeDraw` (`soh3d.c:2253`) into `SoH3D_UpdateAnim*` and when
   `morphWeight>0` lerp per-bone local rotations between the new CSAB pose and the cached frozen outgoing
   pose (linear, per `docs/anim_system.md` THE MORPH). (Link's default N64-retarget path reads the
   pre-merged jointTable and morphs for free — soh3d_link.cpp:378 — which is why only the NPC CSAB path is morph-blind.)
3. **Per-limb MATERIAL / texture / DL overrides (3rd category — from the Saria pass):** the limb-draw
   callbacks also do `gSPSegment(0x08/0x09/0x0A)` eye/mouth texture swaps and per-limb DL swaps (e.g.
   Saria's ocarina hand DL on limb 15, En_Sa_Draw z_en_sa.c:822-829). The CSAB path GL-draws the OoT3D
   model and never executes these → static faces, missing held-item DLs. The framework finish must apply
   per-limb material/segment overrides too, not just rotation deltas + morph.

This IS the "port OoT3D's shared skeletal-draw framework" keystone, forward-compatible with full actor
ports (it applies whatever deltas/material-overrides the actor produces, N64-scaffold or fully-ported).
Precedent: the cucco wing-flap (#5) was already fixed through this exact channel.

**★ Strategic confirmation (from En_Sa + En_Ko being byte-faithful to N64):** OoT3D's skeletal-actor
*logic* matches N64, which SoH3D already runs. So finishing this ONE framework (rotation overrides +
material overrides + morph) is expected to fix the VAST MAJORITY of skeletal-actor visual bugs
(head-track, facial, morph, held-item DLs) across ALL actors **without per-actor logic porting**. Only
3DS-*divergent* or 3DS-*exclusive* actors then need real per-actor work. The framework is ~the whole win.
Per-actor comparison passes (e.g. Saria) are DEFERRED until the framework is finalized — they'd just be
re-derived against the finished framework. (Saria's OoT3D addrs, if needed later:
init 0x168504, draw 0x1b9358, update 0x1b9450, OverrideLimbDraw 0x23bca4, PostLimbDraw 0x21e968;
gActorOverlayTable@0x50CD84, ACTOR_EN_SA=0x146. Full notes: scratch/align/saria_en_sa_compare.md.)

## Coverage (live count)
- OoT3D code.bin: **~8,265 functions** total (4.5 MB, whole game statically linked).
- Decompiled to `build/decomp/<addr>.c` (gitignored): **828** (after rings 1–4, 2026-06-22).
- Inventory: `build/decomp/functions.csv` (8,265 rows: addr,name,size).

## The systematic ownership pipeline (call-graph BFS from anchors)
1. **Seed** = the ~30 confirmed OoT3D→N64 anchors in `docs/player_port.md`.
2. **Expand ring**: every `FUN_xxxxxx` referenced by an already-decompiled function is the next ring of
   callees (player-subsystem funcs whose twins are findable by adjacency). Extract:
   `grep -rhoE 'FUN_[0-9a-f]{6,8}' build/decomp/*.c | sort -u`, subtract already-decompiled.
3. **Decompile the ring** in ONE Ghidra run (Ghidra is single-lock — never run two in parallel):
   `OOT3D_REPO=$PWD DECOMP_TARGETS=scratch/sweep/<ring>_targets.txt analyzeHeadless build/ghidra oot3d -process code.bin -noanalysis -scriptPath tools/ghidra_scripts -postScript DecompDump.py`
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

⇒ **PORT BOTTOM LINE:** to be faithful we (a) extract from ROM room headers: room
num, behaviorType1/2, the Grezzo room-behavior bits (incl. bit9 HOT) + the `+0x223c` spawn mask;
(b) ~~live-capture~~ **RESOLVED STATICALLY (2026-07-22)** — the `0x54ac55` build-version byte is a baked
constant, no oracle needed; (c) **RESOLVED STATICALLY (2026-07-22)** — alt anim-id tables read from code.bin.

### (b)+(c) RESOLVED — `Player_GetIdleAnim` decompiled and its pool constants read (2026-07-22)

`FUN_0034d628` is 84 bytes and decompiles to a pure table selector (`build/decomp/0034d628.c`):

```c
if ((player[+0x29b8] & 0x200) == 0 &&
    (player[+0x174e] != 1 || *(char*)0x54ac55 < 'Q' || (player[+0x29b8] & 0x400) != 0))
    return idleTable[player[+0x1b3]];        // default
return idleTable[player[+0x1b3] + 0x4f8/4];  // ALT
```

Its literal pool sits immediately after the body and resolves every symbol — no live capture required:

    pool @0034D67C = 0x000029B8   variant-word offset   (confirms the documented +0x29b8)
    pool @0034D680 = 0x0053A5F8   idle table base
    pool @0034D684 = 0x0054AC55   version-byte pointer  (confirms the documented address)

    default @0x53A5F8 = {0x50, 0x58, 0x58, 0x119}      <- matches this doc, byte-exact
    alt     @0x53AAF0 = {0x1F9, 0x1F8, 0x1F8, 0x1FA}   <- matches this doc, byte-exact
    *0x54AC55 = 0x7F  ->  0x7F >= 'Q'(0x51)  =>  THE VERSION GATE IS OPEN

**So the shipped USA ROM DOES use the alt idle table** (whenever `+0x174e == 1` and variant bit 0x400 is
clear, or unconditionally when variant bit 0x200 is set). Faithful-3DS is therefore not hypothetical:
N64-default idles are simply WRONG for this ROM, which is what "#88 weird yawn" has been all along.
Index is `player[+0x1b3]` (byte, 4 entries). The `+0x4c37` HOT override lives in the CALLER, not here.

CAVEAT not yet closed: 0x7F is read from the static image; if anything rewrites `0x54AC55` at runtime the
gate could differ live. Cheap to confirm on the oracle before shipping behavior that depends on it.

### (a) RESOLVED — the room-header HOT bit is authored in exactly 4 rooms (2026-07-22)

Scanned all **390** OoT3D room ZSIs (`/scene/*_N_info.zsi`, raw `ZSI\x01`) for header command **0x08**
(Room Behavior; `cmd1.byte1` = behaviorType1, `cmd2` = behaviorType2 + Grezzo's added bits):

    bit histogram over cmd-0x08 cmd2:  {0: 45, 1: 39, 2: 45, 8: 22, 9: 4}

    bit9 "HOT" set in 4 rooms, all with cmd2 == 0x200 exactly:
      /scene/ddan_0, /scene/ddan_3     (Dodongo's Cavern)
      /scene/men_4,  /scene/men_6      (Gerudo Training Ground)

Bits 0-2 are the ordinary N64 `behaviorType2` value; bit8 (-> `+0x4c35`) appears in 22 rooms.

**This SHRINKS the #88 port.** N64/SoH already selects the fidget from room behavior —
`z_player.c:8651  fidgetType = play->roomCtx.curRoom.behaviorType2` — so Grezzo's HOT bit is a
re-encoding of a mechanism SoH ALREADY HAS, not a new system to build. Provided SoH's own room data
gives `behaviorType2 == ROOM_BEHAVIOR_TYPE2_3` for those same four rooms (verify before relying on it),
the HOT half of #88 needs NO port at all.

⇒ What actually remains for #88 is only the **anim TABLE**: which clip each fidget slot resolves to.
OoT3D uses `{0x1F9, 0x1F8, 0x1F8, 0x1FA}` where N64 uses `{0x50, 0x58, 0x58, 0x119}`, and since the
version gate is open on the shipped ROM, those 3DS clips are what OoT3D actually plays. The port is to
resolve Link's idle/fidget CSAB from the ALT ids. Remaining unknown: the id -> CSAB-name mapping for
0x1F8/0x1F9/0x1FA. **Then DECIDE: replicate the 3DS
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

### 0x002c2700 do-action resolver — partial RE (2026-07-22)

The blocker on this row was "the MEANING of the 11 return values is unmapped". Progress, not a
resolution:

- **The values are do-action LABEL ids**, produced by a resolver that `0x002c2700` shares code with:
  `FUN_003769d8` (0x3769d8) branches into `LAB_002c27d0`, i.e. the two are one tail-merged routine.
  Callers of 0x2c2700 are exactly two: `FUN_00346964` (@0x346a38) and `FUN_003769d8` (@0x376a20).
- **Condition -> value mapping recovered** from `build/decomp/003769d8.c` (ctx = `iRam00376a34`):

      ctx+0xf38 == 0                         -> 0        (no label)
      byte[iRam002c27d8 + ctx+8] == 0x1a     -> 7
      byte[...] == 0x1f  (and s16 +0x2b7e != 3) -> 9
      ctx+0xf38 == 0x05                      -> 10
      ctx+0xf38 == 0x06                      -> 6 if ctx+0xfac == -1 else 1
      ctx+0xf38 == 0x07                      -> 4
      ctx+0xf38 == 0x0e and ctx+0xfa4 < 2    -> 2
      ctx+0xf38 in {0x08,0x09}               -> falls into the shared 0x2c27d0 tail

- **Consumer semantics, one data point:** `FUN_00346964` special-cases `!= 4` — value 4 is excluded
  from the button-press path that fires the SFX builder (`FUN_0037547c`). So 4 is a label whose
  press must not trigger the action sound.

STILL MISSING for a faithful port: the value -> texture/label binding. Neither caller indexes a
label table, so the binding lives further out (HUD draw).

**NEGATIVE RESULT (2026-07-22), so this is not retried statically:** `ListCallers 0x003769d8`
returns **zero** callers. The resolver is reached by FUNCTION POINTER, which the Ghidra Reference DB
does not resolve (the known limitation documented in the ghidra-re skill §4 — the same one that hid
`PathFollow_Update`'s caller). So walking the call graph will NOT find the HUD consumer.

Use the dynamic route instead: set a watchpoint on the resolver's return path (or on whatever field
the HUD reads) in the embedded oracle and capture the PC/LR at fire time, then resolve those with
`FnAt.py`. That is the documented escape hatch for fn-pointer dispatch and is what unblocked the
path_node work.

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
| 0x34b288 | **func_8084B158** (SWIM/DIVE playSpeed setter — NOT run/walk; corrected 2026-07-22) | adds a one-call press latch: after an A/B press bumps playSpeed to full, bit 0x200000 is latched in the variant word +0x29b8 |
| 0x34b17c | **func_8084B000** (water buoyancy/vertical-velocity updater — NOT func_8083CF5C; corrected 2026-07-22) | buoyancy rescaled by 2/3 (sink bump 1.0->0.6666667, rise damping -0.3->-0.2, rise accel 0.1->0.06666667) + Iron-Boots velocity floor anim-gated to -6.0f during sw_swim_wait |
| 0x3438a4 | **Message_StartOcarina** (z_message_PAL.c) — NOT Player_InitItemActionWithAnim; corrected 2026-07-22 | FAITHFUL. Deltas are 3DS-engine-local only: async text-resource lock around each Message_OpenText; scarecrow text id 0x86F->0x8A0 (also used for SCARECROW_LONG_PLAYBACK); textBoxType 0x63->4; stateTimer 2->3 and 3->5 (30Hz vs 20Hz); Message_Decode dropped in the MEMORY_GAME arm; R_TEXTBOX_X/Y unset (dual-screen); Font_LoadCharWide preload absent. **Do NOT rewrite Player_InitItemAction's dispatch on the strength of the old row** — the "renumbered item ids" were actually OcarinaAction ids (0x2B/0x2D/0x2E/0x2F/0x30) and text ids. |
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

## Rings 2–4 sweep (Workflow `oot3d-ownership-sweep`, 2026-06-22) — 510 funcs, coverage 318→828
Automated BFS (one Ghidra agent/ring + parallel alignment). Per-batch maps: `scratch/sweep/divmap_ring{2,3,4}_b*.md`.
**Tally: 216 FAITHFUL · 18 DIVERGENT · 264 UNMATCHED.** (ring2 108F/15D/75U, ring3 86F/3D/99U, ring4 22F/0D/90U.)

### ★ MILESTONE: the player-LOGIC layer is owned; the frontier is now the 3DS ENGINE FRAMEWORK
DIVERGENT collapses as the BFS leaves player code (ring4 = **0** divergent) while UNMATCHED dominates —
the call-graph frontier has crossed from gameplay logic into Grezzo's 3DS engine. The remaining player
divergences cluster entirely in the **item/do-action/HUD/UI layer**. Meaning: aligning *more* player
functions yields diminishing divergences; the next real work is (a) the do-action/UI delta and (b)
**reimplementing the 3DS engine subsystems** (bucket c) — which is where the lighting + title-screen +
indistinguishable goals live. The "decompile-and-diff the player" phase is essentially complete.

### DIVERGENT (the remaining port payload, rings 2–4) — item/UI/draw-centric
| addr | what | the change |
|---|---|---|
| 0x00354894 | Player_TryItemUseAction / ProcessItemButtons | CMB held-object DMA-load, renumbered item ids, region/variant gates (+0x1710&0x800, +0x1714&0x400, +0x29b8&0x1000000) |
| 0x00354f70 | Player_StartTalking dispatcher | talk-actor acquisition gated on focusActor flags + 3DS context |
| 0x0034c998 | Player_SetModelGroup / equipment-data | ADDED 3DS branch: group==2 && room-flag && +0x1a6==2 → force group 1 (boots/equip-variant model remap) |
| 0x003523dc | first-person / gyro-aim cam toggle | 3DS FP-cam enter/exit SM (focus-rot snapshot ±0x40, audio restore) |
| 0x00352dbc | health/magic bar add-with-clamp | ADDED damage-scaling gates (+0xe doubles, +0x51 halves negative delta) |
| 0x002c3970 | Player_GetSwordHeld / equipped-weapon picker | +0x5c75 minigame override, per-slot equip-mask gate, 0x55→0x3d Biggoron remap |
| 0x002b9a88 | EffectBlure_AddVertex (sword trail) | per-vertex blur-type + held-sword trail-color selection (sword ids 0x18–0x1b) |
| 0x0036c494 / 0x0036f4f0 | Player draw-shadow / motion-blur trail recorder | per-frame pos/rot/vel trail snapshot (3DS extra fields) |
| 0x0035da3c | footstep variant index | packed-byte variant pick (3DS table) |
| 0x002c2700 / 0x002c41c4 / 0x00377a50 / 0x0033228c / 0x0033b548 / 0x0034913c / 0x003341e4 | **3DS do-action / HUD UI** + look-at-aim | the rewritten 3DS do-action/label subsystem (region-aware label promotion, button-press SFX by behaviorType1) + the aim-flag/auto-aim hook |
| 0x00376a78 | Audio_ProcessSeqCmd | 3DS reworked seq-command opcode ranges + flag words |
| 0x004c08c0 / 0x004c0ab0 | Message_Decode (narrow/wide) | table-driven control-code parser, UTF-8-aware + wide (u16) multi-language path |

### ★ Bucket (c) reimplement-3DS-only — engine-subsystem inventory (the 264 UNMATCHED)
This is the scoping map for the graphics/audio/UI reimplementation (feeds the lighting + title goals):
- **MoLive C++ engine framework** (~70: object lifecycle, vtable dispatch, containers, allocators,
  resource handles) — Grezzo's engine runtime. Plumbing under everything; reimplement/stub as a shim.
- **3DS audio engine** (~46: SfxSource pools `0x2bfdb0/0x2bff8c`, Audio_SetSequenceMode, channel mgmt,
  seq-cmd) — no `z_sfx`/`z_audio` twins in the Shipwright tree; map onto SoH3D's audio backend.
- **3DS GPU draw path** (draw-request queues, **stereo L/R** double-draw `0x30f900/0x2dd7b8/0x2c371c`,
  CSAB→3×4 MtxF anim eval `0x3204a4`, MtxF blend `0x30f6b0`, frame flush/double-buffer) — the renderer.
- **CMB/CSAB model+anim pipeline** (`0x2f70c4` resource dtor, `0x3204a4` matrix eval, limb material/cull
  `0x32c2c0`) — replaces N64 SkelAnime + display lists; the 3DS model format runtime.
- **3DS lighting** — **RE'd 2026-06-22** (scratch/align/render_lighting_subsystem.md). CPU light-state
  is **fully tractable statically**: `0x5af460` = authoritative per-channel color-env state (0x50 stride,
  5 sub-records of `[cur,target,step,framesRemaining]` f32 lerp = classic EnvLightColor crossfade);
  `0x5af450` = live PICA light-object ptr table; `0x465514` = per-frame interp tick; `0x344410` =
  time-of-day→sky/fog/light (square-curve gamma on ambient); `0x33c950` = ambient tick; `0x36ec40` =
  per-room apply; **`FUN_0030ed80` (cmd 0x19) = the PICA GPU boundary** (16 light channels). Byte→float
  norm = **1/127 = 0.007874f** (reproduction-critical). Per-room env color authored in ROM room headers.
  **LIVE-capture-only piece:** the PICA200 **fragment-lighting LUTs** (Fresnel/specular/spotlight/dist-
  atten) + resolved 16 light-object register state below cmd-0x19 — capture from the Azahar oracle.
  This is the [[goal-3ds-lighting]] reimpl spec.
- **Per-limb material system** (`0x32c2c0`): static 5-byte/limb descriptor table @0x53a558 → material-ptr
  table @0x53c698; the `&0x400000` gate = player `stateFlags1` (+0x1710) → Link-only material override
  (tunic/equip/damage tint, tied to equip-variant +0x1a6==2).
- **do-action / HUD / interface** (~26: the touch/do-action subsystem, label resolvers, HUD color init)
  — the 3DS UI; pairs with the item/do-action DIVERGENT funcs above.
- **z_message + UTF text** (~18: control-code parser, UTF-8↔UTF-16 transcode, multi-language) — the
  3DS message engine.
- **effect/particle** (~11: stereo effect emit, water-splash spawn) and misc engine plumbing (tasks,
  queues, file/stream, time-of-day) round out the rest.

⇒ **The remaining ownership work is no longer "align player funcs" — it's RE'ing these named 3DS
subsystems for reimplementation.** A future workflow ring targeting *specifically* the lighting +
CMB/CSAB + draw subsystems (not blind BFS) is the efficient next move for the visual-fidelity goals.
