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
  - **+0x172a = stateFlags2-ish** (byte; bit 4 gates the action call; bit 0x80 used too).
  - pos/world @+0x08 (live-verified), morph controller @+0x288 (anim_system.md).
- **Action funcs special-cased in Player_UpdateCommon** (compared against `this->actionFunc`), all
  confirmed function entry points in the action-func block ~0x4b9000–0x4bf000:
  `0x4b9920` (1176B), `0x4ba378` (420B), `0x4bf18c` (528B), and `0x183634`. Name via N64 twin.

## ⇒ Fastest next step: oracle-read `actionFunc` per behavior
Now that **actionFunc is at Player+0x1708**, the exact OoT3D function for any behavior is one RAM
read away: in the live oracle (Azahar), drive Link into state X (idle/yawn, carrying an object,
wall-climbing, in a door, walk-stop) and read `read32(playerInstance + 0x1708)` — that value IS the
action function to decompile + align to N64 + port. (playerInstance via gPlayState→actorCtx→PLAYER
head, see link_skel_live.py.) Do this for each bug below to get its precise target address.

## Bug → behavior → N64 function (decompile these OoT3D twins first)
| reported bug | N64 function family (start here) |
|---|---|
| walk-stop torso snap; run-off-edge jump | locomotion action funcs + the morph; Player_Action_Run/Idle, jump/ledge |
| weird yawn (idle fidget) | `Player_StartMode_Idle` + idle-anim picker |
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
