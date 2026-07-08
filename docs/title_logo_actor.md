# OoT3D title logo/overlay — session result: NOT a conventional Actor

Task: locate the 3DS En_Mag-equivalent (title logo/fade manager) actor, confirm it gates on
`Flags_GetEnv(play,3)`/`(4)`, and confirm the "two draw targets" fire-glow hypothesis, via a
LIVE actor-list walk on the prebuilt harness. **The live walk could not be run this session** (see
§0); the deliverable instead comes from static decomp, and the headline result **revises, rather
than confirms, the working hypothesis** left by `title_gamestate_driver.md` §4 item 1.

## 0. Harness blocker (report honestly, not silently worked around)

No prebuilt `soh3d_harness` binary exists anywhere on this machine: checked
`Azahar/build-libretro/bin/Release/`, `Shipwright/build-libretro/bin/Release/` (the path named in
the task brief — does not exist; `harness_ctl.py`'s actual `HARNESS_BIN` is under `Azahar/`, also
absent), the primary `soh3d` checkout, and every sibling `.claude/worktrees/*` directory. One
sibling worktree (`agent-af111390d261d0222`) was mid-build of the full SoH library at the time of
this check, but that is a different agent's workspace and its output isn't shared into this one.
Per the task's hard constraint ("do NOT rebuild the harness or soh3d"), no build was started.
**This blocks the live actor-list walk entirely** — items 1–3 of the task's stated method (asel/
enumerate live actors at the settled title, filter by category, decompile the found actor's
update/draw) are not executable without it. Flagging this as the concrete tooling gap for
whoever next has a built harness available: run `titleactors`/an extended `actors`-at-title dump
(the existing `actors` REPL command already walks the correct 3DS actor-list chain — see §2 — it
just needs `CurrentPlayState()` fixed to fall back to the `0x00539F98`/`0x0871E840` live-play
pointer the same way `CompareLightingImpl` already does, since `GPLAYSTATE_VA` genuinely reads 0
throughout title per `title_gamestate_v2.md`).

Given the blocker, this session instead pursued the same discovery goal by a **static** route:
the OoT3D actor system's overlay table and `ActorProfile` structs are compile-time `.data`
(`docs/actor_layout.md`), so the "which actor uses object X" question is answerable by parsing
`build/code.bin` directly — no running emulator needed for that specific sub-question. That
static work is what actually moved this open item forward (see §1); it also produced a real,
useful, actor-independent finding (§2).

## 1. Static scan: no actor's declared `objectId` matches spot99's 3 differing object-bank slots

`title_scene_spot99.md` §6 found `spot99`'s room `ObjectList` differs from `spot00`'s at exactly 3
of 8 slots: `180` / `32324` / `11` (spot99) vs `964` / `31572` / `14` (spot00). The open item in
`title_gamestate_driver.md` §4.1 proposed finding "the actor whose `objBankIndex` resolves to
`zelda_mag.zar`" by cross-referencing a live actor's object against these values.

Wrote `scratch/find_logo_actor.py` (parses `gActorOverlayTable` @ `0x0050CD84`, stride `0x20`,
`+0x14` = `ActorProfile*`, `ActorProfile.objectId` @ profile`+0x08` — all per `actor_layout.md`,
already CONFIRMED against a live Player read (`id=0, objectId=1, category=2` — reproduced
statically here exactly: `id=0 → objectId=1, category=2`, sanity-checking the parse is correct).
Scanned actor ids `0..1199` (961 non-null profile entries):

```
actors whose ActorProfile.objectId matches a spot99-only slot {11, 180, 32324}:
  actorId=  17  objectId=11   category=5 (ENEMY)  profile=0x0053007c
  actorId= 142  objectId=11   category=5 (ENEMY)  profile=0x00523838
  actorId= 196  objectId=180  category=9 (BOSS)    profile=0x00515c1c
  (32324: zero matches across ids 0..1199)
```

**None of these fit.** A logo/title-manager actor would be category PROP(6)/MISC(8)/
ITEMACTION(7) per `actor_layout.md`'s category list, not ENEMY(5) or BOSS(9); and `32324` (0x7E44)
— the object id that most plausibly names something Grezzo-specific rather than a coincidental
small-int collision (per `title_scene_spot99.md` §6's own caveat about `180`/`11`/`14` matching
the N64 enum by chance) — has **no** actor anywhere in the scanned id range that declares it as
a primary object. This rules out "a conventional Actor declares `zelda_mag`'s object id as its
`ActorProfile.objectId`" as the mechanism — either the id-space for the room object bank uses a
different numbering than `ActorProfile.objectId` (plausible: `32324` looks more like a hash/index
into a separate, larger asset-table space than a small sequential enum), or — more likely, per §2
— there simply **isn't an Actor** here to find.

(Also checked: `build/code.bin` contains exactly one occurrence of the ASCII string
`"rom:/actor/zelda_mag.zar"`, at VA `0x005424a7`, sitting inside a fixed-stride (`0x44`=68B)
per-object filename table spanning roughly `0x00516bd8..0x0054a15c` — consistent with a global
object-file table indexed by an internal id. Did not conclusively resolve `zelda_mag`'s numeric
index into that table this session (would need a second known-object anchor to compute the row
alignment) — flagged as a possible follow-up if the object-id angle is revisited, but given §2
below it's no longer the most productive next step.)

## 2. The actual mechanism: a dedicated title 2D-overlay context, NOT an Actor — decompiled

`title_gamestate.md` (prior session) had already found a live struct at `0x0050AF34` (the "legacy
gPlayState slot", actually a separate UI-subsystem context that runs *alongside* `Play_Main`) with
8 sub-object pointers at `+0x14..+0x30` ("sprite factories"/"sprite batches"), plus `sceneNum`-hint
`0x51` at `+0x6C` and an `active` flag at `+0x78` — exactly the two fields the harness's
`TitleActive()` checks. That doc characterized the sub-objects only by their *live pointer values*
and allocation-call disassembly; this session decompiled the actual **initializer function** that
builds this struct, closing the gap:

**`FUN_0046ac98`** (`build/decomp/0046ac98.c`, 1012 bytes) — decompiled this session. Confirmed
smoking-gun evidence it's the title-context initializer:

```c
*(undefined4 *)(iVar5 + 0x6c) = 0x51;   // <- literally writes the title-scene sentinel
...
*(undefined4 *)(iVar5 + 0x78) = 1;      // <- literally sets the "active" flag
```

`iVar5` here is the base of the very struct `title_gamestate.md` mapped live (field offsets below
match that doc's live dump exactly — same offsets, same call signatures):

| off | field | allocator call | note |
|-----|-------|-----------------|------|
| `+0x14` | sub-object | `FUN_002f8ee4(iVar8, 5, 0)` | sprite factory, alloc size read from `DAT_0046b098` |
| `+0x18` | sub-object | `FUN_002f8ee4(iVar8, 1, 8, 0)` | sprite factory (different mode args from +0x14) |
| `+0x1C` | sub-object | `FUN_002db6a0(iVar8, 4)` | alloc `0x14`, **mode=4** |
| `+0x20` | sub-object | `FUN_002db6a0(iVar8, 4)` | alloc `0x14`, **mode=4** — **identical call shape to +0x1C** |
| `+0x24` | sub-object | `FUN_002d2190(iVar8, 1)` | alloc `0x10`, 16-quad batch (per prior live char.) |
| `+0x28` | sub-object | `FUN_002d1e30(iVar8, 1)` | alloc `0x50`, 25-quad batch |
| `+0x2C` | sub-object | `FUN_002d1af8(iVar8, 1)` | alloc `0x10` |
| `+0x30` | sub-object | `FUN_002f2448(iVar8, 7, 4)` | alloc `0x38`, 7-var/4-y batch |

Near the end, three resource-registration calls with **sequential ids** `0x53, 0x54, 0x55`
(83/84/85) via `FUN_002fc534(...,1,0x53/0x54/0x55)` — plausibly registering 3
textures/sprite-resources in a row (candidates: `common_bg01.ctxb` bg card, `ura.ctxb` fire
strip, and one more — not confirmed which, since the resource ids themselves don't carry names in
this function).

### This is real, decompiled corroboration for the "two draw targets" fire-glow hypothesis

`title_logo_fireglow_cmab.md` flagged, as an *unconfirmed* hypothesis, that `g_title_fire.cmab`
drives one target and `g_title_fire_ura.cmab` drives a second, separate one (inferred only from
the CMAB's duplicated `(Translation, ConstColor)` entry pairs and a live draw-log showing two
distinct quads). **`FUN_0046ac98` allocates a matched PAIR of sub-objects with byte-identical
constructor calls** (`+0x1C` and `+0x20`, both `FUN_002db6a0(x, 4)`, both `0x14` bytes) — the only
duplicated allocation shape among the 8 sub-objects; every other slot has a distinct
allocator/argument signature. Two identically-constructed sprite objects, built back-to-back in
the init that also stands up the title 2D-overlay context, is exactly what "one CMAB drives
draw-target A, the other CMAB drives draw-target B" would need at the allocation level. This
doesn't identify *which* pointer binds to which `.cmab` (that needs either the update-side
consumer, not found this session, or a live watch on the two pointers' associated texture/material
state during the fade — harness work, blocked per §0), but it raises the hypothesis from
"consistent with the byte content" to "consistent with the byte content AND the init-side object
graph." Treat it as reinforced, not fully confirmed.

## 3. Revised answer to the task's core question

**There is very likely no OoT3D 3DS "En_Mag-equivalent Actor" at all.** The title's 2D overlay
(background card, animated logo mesh, fire-glow, copyright, and whatever drives "PRESS START")
appears to be implemented as this **dedicated, non-Actor title-context subsystem** —
initialized once by `FUN_0046ac98`, running in parallel with `Play_Main`'s `Actor_UpdateAll` (per
`title_gamestate_v2.md`'s finding that this struct's `sceneNum`/`active` fields are read
independently of the real `PlayState`). This is a coherent design choice for the 3DS remake: N64's
`En_Mag` was already a fairly special-cased "UI actor" (it draws raw framebuffer/UI-style content,
not a normal world actor); OoT3D's rewrite plausibly promoted that whole responsibility out of the
Actor system into its own first-class 2D-overlay context, consistent with this session's negative
result in §1 (no Actor anywhere declares the missing objects as its primary object) and the
positive, decompiled result in §2 (a purpose-built init function exists, writes the exact
title-sentinel fields, and allocates exactly the sprite/quad-batch shapes the overlay needs).

**Open item 1 of `title_gamestate_driver.md` §4 should be considered ANSWERED, in the negative**:
stop searching the Actor system for this. The remaining open work is on the *non-Actor* subsystem:

1. **Find `FUN_0046ac98`'s per-frame sibling** (the "tick" analogous to how `Play_Main` calls
   `Actor_UpdateAll`) — this is where `Flags_GetEnv(play,3)`/`(4)` reads (if they exist on this
   side at all — see caveat below) or an equivalent per-frame state-machine advance would live.
   Not located this session; attack via callers of the sub-object update methods (the vtable-style
   `(**(code**)(...+8))(...)` call pattern already visible in `FUN_0046ac98`/`FUN_0045596c`
   suggests these sprite objects have their own per-frame `update`/`draw` vtable slots — walk
   those, not a generic Actor search).
2. **Caveat on the flag-gate claim**: `title_gamestate_driver.md` §3 already established the
   cs-interpreter WRITE side solidly (`Flags_SetEnv(play,3/4)` at cs frames 345/1930, decompiled).
   Given §3's revision here, the READ side is now equally plausibly inside this title-context
   subsystem's own tick rather than an Actor's `update` — the read-side function still hasn't been
   found by either method (neither an Actor scan nor a direct disasm sweep for computed-offset
   reads of `play+0x5f98`, which Ghidra's static reference DB doesn't surface for register-computed
   addresses). Still open, but now correctly scoped to "the title-context tick", not "En_Mag's
   Update".
3. **Sub-object `+0x1C`/`+0x20` vtable dispatch** — decompile `FUN_002db6a0` and whatever function
   pointer it installs, to see whether ITS update/draw path references the CMAB-sampled
   `ConstColor`/`Translation` values, which would directly confirm which physical sub-object binds
   to `g_title_fire.cmab` vs `g_title_fire_ura.cmab`.
4. Re-run this whole investigation live once a harness build is available: `titleactors`/`actors`
   (after the `CurrentPlayState()` title-fallback fix noted in §0) should now be pointed at THIS
   struct's sub-objects (`0x0050AF34 + 0x14/0x18/0x1C/0x20/...`), not the Actor category lists —
   dump their live per-frame state across the 345→1930 cs-frame window and correlate against the
   CMAB curves sampled in `title_logo_fireglow_cmab.md`.

## Anchors (this session)

- `FUN_0046ac98` @ `0x0046ac98` (title 2D-overlay-context init; DECOMPILED this session,
  `build/decomp/0046ac98.c`) — writes `+0x6C=0x51`, `+0x78=1` (title sentinel/active flag,
  matches harness `TitleActive()`/`TITLE_CTX_VA` exactly), allocates the 8 sub-objects at
  `+0x14..+0x30` (field map matches `title_gamestate.md`'s live dump 1:1).
- `FUN_0045596c` @ `0x0045596c` (broader boot-time UI init; calls `FUN_0046ac98` alongside 8
  sibling inits for other UI subsystems — NOT title-specific itself; decompiled this session,
  `build/decomp/0045596c.c`, mostly a 2-quad geometry setup unrelated to the title question).
- `gActorOverlayTable` @ `0x0050CD84` static scan (`scratch/find_logo_actor.py`, this session):
  0 of 961 valid `ActorProfile`s declare `objectId==32324`; the `objectId==180`/`11` hits are
  category BOSS/ENEMY, not a title-overlay fit — negative result, see §1.
- `"rom:/actor/zelda_mag.zar"` string @ VA `0x005424a7`, inside a `0x44`-stride object-filename
  table (`~0x00516bd8..0x0054a15c`) — index into this table not resolved this session.
- Harness binary: **absent** everywhere checked this session (§0) — blocks all live confirmation.
