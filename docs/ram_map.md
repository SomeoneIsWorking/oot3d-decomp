# OoT3D emulated-RAM reverse-engineering journal

Empirical RE of OoT3D's RAM (USA, title `0x0004000000033500`) via the Azahar oracle (see
`docs/oracle.md`). No symbols — addresses derived by memory scanning + OoT-N64 (zeldaret/oot) parallels.
**Mark CONFIRMED vs GUESS. Note which addresses are run-stable (static BSS) vs per-boot (heap).**

## Address space (3DS virtual, OoT3D process)
| base | region | notes |
|------|--------|-------|
| `0x00100000` | `.text` (ARM code) | BL-opcode stream confirmed |
| `0x08000000` | heap | actor allocations, transforms; **addresses change every boot** |
| `0x0C000000` | mapped | |
| `0x14000000` | linear heap (~32 MB) | FS/asset data (`DU..` headers) |
| `0x30000000` | N3DS extra RAM | |

## Memory-scan methodology (the right way)
To find a value by behavior, alternate **still / move / still / move / still**, snapshotting the heap
each time, and keep floats that are **unchanged across every *still* interval** AND **changed across
every *move* interval**. Camera/animation jitter fails "unchanged while still"; constants fail "changed
while moving". (A single move+diff gives hundreds of false positives — camera, anim, particles. The
alternation is what isolates it.) Implemented in `soh3d:tools/azahar_scan.py` `find_player_pos`.
- Result: 277 candidates (naive 1-move diff) → **40** (still/move/still/move/still). Validated 2026-06-21.

## Findings

### Link world position (per-boot heap; CONFIRMED behavior)
- Scan isolated a position component cluster around `0x081a5770` (this boot only). The bytes there are
  **transform/limb matrices** (1.0 diagonals, 0.01 model scale, translation = Link's world pos), with
  the same translation duplicated at `0x081a5b90 / 5bf0 / 8a48 / 0871ec80` (per-limb world matrices).
  x at `+0x00`, z at `+0x20` (y between is constant on flat floor, so it wasn't flagged).
- These are NOT the clean `Actor.world.pos` Vec3f (which is x,y,z contiguous). The matrices are
  downstream of it. **Heap addresses differ every boot — do not hardcode.**

### Scan #2 (7-pass still/move, in Link's HOUSE) + poke test — partial
- 7-pass still/move/still gave 33 candidates in 3 clusters: `081a57xx/5bxx/8axx/0871ecxx` (limb/render
  matrices, Link's translation duplicated per limb), `0821exxx/0821fxxx` (Vec3f-like triples, z≈-340 —
  position COPIES: camera target / Navi-follow), `08779xxx` (~10000-range, map/screen space).
- **Poke test** (write a candidate, see if Link teleports): wrote `0x0821e638` x 124→524; it PERSISTED
  (not a per-frame matrix) but Link did NOT move → it's a position copy, not the canonical world.pos.
- **KEY GOTCHA:** scanning in Link's tiny HOUSE filters OUT the real `Actor.world.pos` — several "move"
  passes hit walls, so world.pos was UNCHANGED during a "move" and failed the changed-while-moving test.
  **Redo the scan in OPEN Kokiri Forest** (walk out the door first), where every move actually displaces
  Link. Then poke-confirm the world.pos (the one that teleports Link), read back for the actor `id`
  header → actor base → list.
- NOTE: heap addresses above are this-boot only. There is now an in-game SAVE at Link's house (File 1);
  fast-load skips the intro (see oracle.md).

## STATIC anchors from the code image (durable; via static decomp — see `static_decomp.md`)
The in-house dynamic scan kept landing on camera-focus copies + render matrices and could NOT
isolate the canonical `Actor.world.pos` (every poke reverted within a frame; even spam-write didn't
visibly teleport — the master is recomputed each frame from a value the copies don't expose, and
headless navigation out of the house was unreliable). 2026-06-21 we pivoted to **static decomp**:
extract+disassemble `.code`, find globals by reference-frequency, and cross-check vs live RAM.
These are STATIC (.data/.bss) → **run-stable every boot**, unlike the heap addresses above.

- **gSaveContext @ `0x00587958`** (CONFIRMED by content; .bss). 670 code refs (2nd-most-referenced
  global). Cross-checked live: player name "Link" (UTF-16) at `+0x1C` (`0x00587974`), save magic
  **"ZELDAZ"** at `+0x2C` (`0x00587984`), health/cap `0x30` near `+0x44`.
  - `+0x00` = **entranceIndex = `0x00BB`** (= entrance "Link's House, child" — matches where Link is).
    This is the warp lever (write entrance + trigger a scene reload). Trigger mechanism not yet found.
  - Other `0xBB` copies live at static `0x00588e58` (182 refs) — likely a play-state/next-entrance copy.
- **Top-referenced globals** (refcount): `0x0051b2f4` (749) holds heap ptr `0x08080010` (a near-empty
  arena); `0x0055a1f8` (114) holds heap ptr **`0x08000110`** — a C++ object whose `[0]` is a vtable
  ptr into rodata (`0x004eca6c`), near an **"EXPH"** (CTR EXPHeap) header — a major game/scene object,
  candidate for the GameState/PlayState root. Not yet confirmed to contain `actorCtx`.
- **The port is C++** (GREZZO): source paths like `z_actor.cpp`, `z_player.cpp`, `ctr/actor_util.cpp`
  (51 files indexed). `__FILE__` strings are NOT referenced by absolute literals (PC-relative `ADR`),
  so absolute-literal xref misses them — find actor fns by structure / vtables, not by string xref.

### ACTOR SYSTEM — SOLVED 2026-06-21 (see `docs/actor_layout.md`)
The actor list, actorCtx, Actor struct, gActorOverlayTable, ActorProfile, and gPlayState are all
recovered and **verified live** at Link's House. Enumerate with `tools/actors.py`. Key anchors:
`gPlayState @ 0x0050AF34 → PlayState → +0x208C actorCtx → +0x0C ActorListEntry[12]{count,head} →
Actor.next @ +0x130`. Actor: id@0, category@2, pos@0x08, params@0x1C. The Actor IS N64-compatible
(id@0/category@2 ARE correct) — the prior dead-end failed for ONE reason only (below), not layout.

### DEAD ENDS (resolved — kept for the record)
- The heap signature-scan for the actor lists scanned only **0x08000000–0x08c00000**. WRONG REGION:
  actors are allocated from the zelda **arena at ~0x098F4000** (0x09xxxxxx). The Actor layout was
  fine (id@0, category@2); nothing in 0x08xxxxxx is an actor, so every scan there returned 0 — this
  was a scan-range bug, NOT a "C++ Actor differs from N64" problem (that earlier conclusion was wrong;
  corrected here). actorCtx itself happens to sit in 0x08xxxxxx (PlayState heap), but the Actor*
  heads point into 0x099xxxxx. Always reach actors via the chain, not a region scan.
- The `>>7` id trick (accessor 0x3C06BC reads `(u16@+0x1C)>>7` as an id) does NOT apply to Actors:
  on a real Actor +0x1C is `params`. That accessor walks a different struct. Read id as s16 @ +0x00.

## CONTROL PRIMITIVES (live, via the actor chain — durable across boots)
- **TELEPORT (`tools/link_ctl.py tp <x> <z> [y]`) — WORKS.** Writing Link's canonical
  `Actor.world.pos` @ `head+0x08` (Vec3f, reached via the actor chain) reliably teleports him.
  Collision then resolves the final spot and will NOT cross walls (conservative — a teleport to a
  point behind a wall snaps back to the nearest reachable floor). **This resolves the old RAM-scan
  dead-end**: the prior poke-test (above) failed only because it wrote a *copy* (`0x0821e638`); the
  actor-chain pos IS the canonical world.pos. Verified live 2026-06-21 at Link's House.
- Link `world.rot.y` @ `head+0x16` reads a constant `-32767` regardless of facing — it is NOT his
  heading. The facing used for movement is elsewhere (shape.rot, not yet located). Don't steer on it.
- **Closed-loop walk is feasible but the camera fights it**: the circle pad is camera-relative and
  the camera swings behind Link as he runs, so a constant stick curves him in circles. Reading his
  real pos each tick (scratch: `nav_probe.py`/`nav_goto.py`/`exit_walk.py`) lets you drive him, but
  precise nav is unreliable — prefer TELEPORT for in-scene positioning.

## CAMERA layout — CONFIRMED 2026-06-23 (Kokiri Forest scene 85)

Two Vec3f fields embedded directly in the PlayState struct (reached via gPlayState):

| field | PlayState offset | notes |
|-------|-----------------|-------|
| Camera **EYE** Vec3f | `play + 0x1b8` | live camera position in world space; duplicated at +0x3f0 and +0x408 (eyeNext / interpolation) |
| Camera **AT** Vec3f  | `play + 0x1c4` | look-at point; tracks Link's XZ exactly plus ~35u Y offset (head height); duplicated at +0x3e4 |

These are the live per-frame values the renderer reads. Writing them overrides the camera for ONE
frame (the camera update runs at 30 fps and recomputes them). For a screenshot, write then
immediately issue the screenshot RPC — the screenshot captures the frame before the next update.

Other camera data:
- `play + 0x330c` → `cam_path_ptr` — points to a spline/path buffer (e.g. 0x08129034 in Kokiri)
  used by fixed-camera modes (the overhead arc). `cam_path_ptr + 0x34` stores a PATH FRAME eye
  position, not the live per-frame eye. **Do not use cam_path_ptr+0x34 as the live camera eye.**
- `play + 0x440` = Link's exact world pos (Vec3f copy).
- `play + 0x20f8` = camera AT lag copy (slightly behind the primary at+0x1c4).

**Tool:** `tools/azahar_cam.py` — `status`, `set_eye`, `set_at`, `frame_actor`, `freeze_link`, `scan`.
`freeze_link` spam-writes Link's canonical world.pos at ~100 Hz (3× the 30 fps game update) to hold
him stationary so the camera follows him to the right position for a screenshot. `frame_actor <addr>`
teleports Link adjacent to an actor, freezes him, waits for camera to settle, and screenshots.

GOTCHA 1: if Link is teleported to a position outside the collision mesh, the game pushes him back
to the nearest floor. For off-ground actors (e.g. type 3 En_Ko at y=-80 underground), adjust Y.

GOTCHA 2: camera mode is scene-dependent. The offsets above (play+0x1b8 / +0x1c4) were confirmed
in Kokiri Forest (follow-cam mode). In Market/Hyrule (fixed-cam mode), the same offsets hold
different values and may not be the live camera eye/at. For follow-cam scenes these offsets work;
for fixed-cam scenes (overhead fixed views) further RE is needed. Use `azahar_cam.py status` to
sanity-check that eye/at are plausible (eye should be within ~500u of Link for follow-cam).

## WARP / scene-transition — **SOLVED** 2026-06-21 (deterministic warp to any scene)
**The transition trigger is `PlayState.transitionTrigger @ play+0x5c2d` (s8), polled every frame
by Play_Update.** To warp: set `PlayState.nextEntranceIndex @ play+0x5c32` (s16) to an entrance
index, then write `play+0x5c2d = 20` (TRANS_TRIGGER_START). Play_Update runs the fade-out and
(re)loads the scene at that entrance. Entrance indices == N64 OoT (e.g. 0xEE = Kokiri Forest).

- **Tool:** `tools/link_ctl.py warp <entrance>` (e.g. `warp 0xEE`). Verified live: Link's House
  (scene 52) → Kokiri Forest (scene 85), and back (0xBB), repeatedly. Lands in the populated scene
  (98 actors incl. 8× En_Ko id=355). This UNBLOCKS #87.
- **How it was found:** GameState header @ gPlayState holds `main` fn ptr @ +0x04 = `Play_Main`
  (0x0045238c, ARM). Play_Main tail-calls the transition driver `0x2e2e60`. There:
  `ldrsb r0,[play+0x5c2d]` (trigger) drives a `transitionMode` jump table (`cmp r0,0x14;
  ldrlo pc,[pc,r0,lsl 2]` @ 0x2e314c); transition fade callbacks are stored at `play+0x1e0..0x204`;
  `ldrsh r0,[play+0x5c32]` indexes the **entrance table @ 0x543bb8** (4-byte entries). `cmn r0,0x14`
  sites check trigger == -20 (TRANS_TRIGGER_END).
- **Side note (how the trigger was first reproduced):** Game Over → "Continue" performs a savewarp
  reload, but the savewarp respawn entrance for Link's House is Link's House itself (scene stays 52),
  so it does NOT reach Kokiri — the direct transitionTrigger write is the general solution.

Tooling used: `r2 -a arm -b 32 -m 0x100000 build/code.bin` (load base 0x100000) for the static
disassembly; `azahar_rpc` for live read/write. See `tools/link_ctl.py` for field offsets.

### (historical) earlier investigation — concrete dead-ends, do not re-walk
Goal: deterministic nav to another scene (Kokiri Forest, for #87 En_Ko). What was PROVEN:
- **Entrance indices == N64** (OoT3D reuses the Shipwright `entrance_table.h` values). Confirmed:
  `gSaveContext+0x00 entranceIndex = 0xBB = ENTR_LINKS_HOUSE_CHILD_SPAWN` (live). Kokiri Forest =
  `ENTR_KOKIRI_FOREST_0 = 0xEE`. So a warp = set entrance + trigger a (re)load.
- **`gSaveContext` health: `+0x42`=cap, `+0x44`=current** (both 48 = 3 hearts). Writing `+0x44=0`
  does NOT kill Link / trigger death — death fires only on a damage *event*, not a static 0. So
  **no static death-warp.** (restored after test.)
- **entranceIndex is consumed only at scene-init**, not polled: setting `+0x00=0xEE` while idle does
  nothing (scene stays 52 indefinitely). A reload must be *triggered*.
- **Walking triggers NO scene-52 exit anywhere in the walkable area.** Exhaustive teleport-anchored
  walks (whole room, all 8 dirs, all X lanes) never flipped sceneNum. Link's House exit is not a
  plain walk-into-wall load plane here (door-actor or a path/angle not yet hit). Confirmed not a
  detection bug (sceneNum@+0x104 is correct). Walkable room: x∈[-78,126], z∈[28,135] straight, with
  a southern section (z<28) reachable only by curving around at the far E/W edges.
- The `+0x104` scene-flags getter `0x44e7a0` (1 caller, `0x448c50`, scene-init) computes
  `gSaveContext + sceneNum*28 + 0xec` = **SavedSceneFlags**, NOT a scene-load table. The handoff's
  "per-scene stride-28 table" lead was this (a red herring for warp).
- Static scan for the entranceIndex consumer (`tools/find_consumer.py`, now ARM+Thumb) finds only
  ~7 sites loading the bare `gSaveContext` base; the Thumb ones are likely false matches (ARM/data
  mis-decoded as Thumb). **disasm.py desyncs on Thumb-2** — bulk static RE of the mixed ARM/Thumb
  image needs a real function map (load `build/code.bin` @0x100000 into Ghidra/radare2 with ARM+Thumb
  analysis) to reliably find `Play_Init`/the transition function. That's the next tool to stand up.

### WARP — concrete NEXT approaches (pick one)
1. **Ghidra/radare2 the code image** (function map) → find the fn that sets the PlayState transition
   trigger / `nextEntranceIndex`, or `Play_Init` reading entranceIndex. Then write those fields live.
2. **In-game save + reload savewarp**: if an in-game SAVE can be triggered headlessly (the fast-load
   File 1 was made manually), set `entranceIndex=0xEE`, save → SRAM, restart Azahar + fast-load →
   should savewarp into Kokiri (UNTESTED — save-remap behavior unknown; verify it doesn't overwrite
   entranceIndex with a scene default).
3. Find PlayState transition fields by diffing PlayState across a REAL transition (needs one working
   exit first — chicken/egg; lower priority).

### NEXT (durable anchors still needed)
- **Recover the OoT3D Actor struct layout from static code.** The port is C++ (`z_actor.cpp`,
  `ctr/actor_util.cpp`). Approach: the GameState/scene object is at `0x08000110` (static global
  `0x0055a1f8`), vtable @ `0x004eca6c` (rodata). Disassemble its vtable Update/Draw to find the
  actor-iteration loop → that reveals `actorCtx` offset, the list-entry layout, and `Actor.next`
  / `id` / `category` / `world.pos` offsets. Then re-run the validated heap scan with real offsets.
  (xref-by-absolute-literal does NOT find `__FILE__` strings — ADR-relative; use vtables/structure.)
- Cross-check every recovered offset by reading a known actor (Player/Link) live.
- **Warp**: find the transition trigger that consumes `gSaveContext+0x00` entranceIndex (set entrance
  + trigger → deterministic nav to open Kokiri, which UNBLOCKS the dynamic actor scan + #87).
- **En_Ko (Kokiri kids)**: per-instance type/variant + the CSAB it plays — the #87 driver.
