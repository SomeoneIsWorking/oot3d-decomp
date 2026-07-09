# OoT3D title scene `spot99` — what it actually is, vs `spot00`

**Update (2026-07-10):** the two items §6/§8 left open — which alt-header the title
uses, and what the 3 swapped object-bank slots are — are now decompiled. Header
selection: **RESOLVED, §6.5** — the selector field is provably always 0 in a normal
boot (no writer anywhere in the binary besides a boot-time zero-clear), so **header 0
(default) is correct — SoH3D's current choice needs no change.** Object slots:
**partially resolved, §6.1** — `180`→`zelda_mo.zar`, `11`→`zelda_wm2.zar`,
`14`→`zelda_box.zar` (real filenames via a newly-derived id table), but `964`/`31572`/
`32324` remain unidentified (confirmed outside that table's range, confirmed no
`ActorProfile` owns them) and the consuming code path for all 6 is still open.
**Update (2026-07-10, later same day) — §6.6: confirmed NOT an extractor bug.** Raw
ROM hexdump + the decompiled consuming handler (`FUN_003a7558`) show 964/31572/32324
are genuine literal bytes in the object-list command, correctly extracted; they're
consumed by a handler with zero bounds-checking, but that handler almost certainly
never runs on the title path (title bypasses normal `Play_Init`/scene-command dispatch)
— so for spot99/title purposes these 3 ids are inert. spot00's normal-gameplay case is
flagged as a separate open question, not resolved this session.

RE'd 2026-07-08 to resolve the scene-level half of the title-parity gap: the oracle
title runs on scene index `0x6b` = **`spot99`** (established in
`title_gamestate_driver.md` §1 via live `play+0x104` read + byte-match against
`spot99_info.zsi`), while SoH3D's title module currently renders N64 scene **spot00**
(Hyrule Field, model 1000). This doc pins down `spot99` as a concrete asset (ZSI
scene+room structure, actor/object lists, collision) and states what SoH3D should load.

Tools: existing `oot3d-decomp/tools/scene_actors.py` (actor/object lists, already
produced `data/scene_actors/spot99.json`), `oot3d-decomp/data/scene_lighting.json`
(already has a `spot99` entry), and `soh3d/tools/oot3d_collision.py` (collision —
reused read-only for this RE, no soh3d files touched/built). ROM:
`<oot3d.3ds>`
via `SOH3D_3DS_ROM`.

## TL;DR

**`spot99` is Grezzo's own scene, built by literally CLONING `spot00`'s scene-header
data (env lighting, actor spawn table, Link spawn points, transition-actor table —
all byte-identical) and then substituting a drastically simplified, camera-path-only
room mesh/collision, trimming the alt-header count, and swapping ~3 of 8 object-bank
slots.** It is not "the same as spot00" (different file, ~25% the file size, ~13% the
collision poly count, restricted footprint) but it is also not an independent
hand-built diorama — its dressing (trees/grass/rock/hole placement, all lighting
palettes) is spot00's, verbatim. SoH3D currently substituting the full, playable
`spot00`/Hyrule Field asset at title is a genuine divergence: it renders the wrong
(larger, differently-collisioned, full-time-of-day) asset, not a faithful stand-in.

## 1. File identity

| | `spot99_info.zsi` (scene header) | `spot99_0_info.zsi` (room 0) |
|---|---|---|
| size | 23,432 B | 754,668 B |
| vs `spot00_info.zsi` (178,116 B) / `spot00_0_info.zsi` (956,440 B) | **13%** the size | **79%** the size |

`spot99` has exactly **1 room** (`spot99_0_info.zsi`) — same room count as `spot00`
(Hyrule Field is also 1 room in this ROM's layout; both use the plain, non-MQ command
shape). No `spot99_dd` (MQ) variant exists — expected, title isn't a quest state.

## 2. Scene-header command list — structurally identical shape, smaller payloads

Both files use the same 8-byte scene command stream (`docs/scene_command_handler.md`
dispatch table, cmd IDs 0x00–0x19). Walking both headers:

| cmd | spot99 (count, ptr) | spot00 (count, ptr) | meaning |
|-----|----|----|---|
| 0x18 altHeaders | 7, 0xc8 | **13**, 0x4c8 | spot99 has fewer alternate scene-setup variants (no per-quest-flag/day-night matrix needed for a scripted demo) |
| 0x15 soundSettings | 2, (shared const) | 2, (shared const) | identical |
| 0x04 roomList | 1 room | 1 room | both single-room |
| 0x03 collisionHeader | ptr 0x3030 | ptr 0x16174 | header offset shifts purely because altHeaders(7) block is shorter |
| 0x06 entranceList | 18 | 18 | identical count |
| 0x07 specialFiles | 1 | 1 | identical |
| 0x0d pathList | 1 | 1 | identical |
| 0x00 spawnList | **18** | **18** | same count (see §3) |
| 0x0f (light-settings-list per `scene_command_handler.md`, though `scene_actors.py` — see caveat §6) | 17 | 17 | **byte-identical entries** (§4) |
| 0x13 exitList | 0 | 0 | identical |
| 0x14 end | — | — | — |

**Nothing in the header command *shape* differs** — same command set, same order,
same counts everywhere except altHeaders (7 vs 13). Every size difference downstream
(scene header 23 KB vs 178 KB, room 755 KB vs 956 KB) traces to fewer alt-header
variants + a smaller collision block + a smaller mesh block, not a different header
schema.

## 3. Actor spawn table — BYTE-IDENTICAL to spot00

`data/scene_actors/spot99.json` (room 0, 74 actor entries) diffed field-by-field
against `data/scene_actors/spot00.json` (room 0, also 74 entries): **0 of 74 differ**
— identical `id`, `pos`, `rot`, `params` for every entry, same order. Actor id set:
`{29, 47, 57, 59, 74, 119, 155, 167, 274, 295, 333, 334, 337, 387}` — this is
`spot00`'s field-decoration cast (trees/grass/rocks/holes; scene_readiness.md's
spot00 gap notes name `En_Wood02`(×27), `Door_Ana`(×8), `Obj_Mure2`(×7),
`En_A_Obj`(×7) etc. — those are exactly the actors spot99 also spawns, at the same
coordinates).

Link's own scene-level spawn points (cmd 0x00, 18 entries): 17 of 18 byte-identical;
entry 0 (the default Link spawn, actor id 581) differs only in `rot.y`
(`12424` vs `25036`) and `params` (`0` vs `1`) — everything else (`pos`) identical.
Irrelevant for title (Player/Epona position there is driven by the CS rider-track, not
the scene spawn point — see `title_rider_driver.md`), but confirms the spawn table
itself is a copy with one field hand-edited.

Transition-actor table (cmd, 17 entries in both): also byte-identical between the two
scenes — but the decoded values (front/back room indices up to 250, negative actor
ids) are physically nonsensical for a field scene. **This block is very likely
mis-parsed by the existing `scene_actors.py`/CMD_TRANS_ACTORS=0x0F assignment** — see
the caveat in §6; not fixed here (out of scope for the scene-identity question, and
irrelevant to title since a single-room scene has no real room transitions), but
flagged so it isn't mistaken for a real spot99-vs-spot00 divergence.

## 4. Env/lighting — BYTE-IDENTICAL to spot00

`data/scene_lighting.json`: spot99 and spot00 each carry **17** `Zelda3dLightSlot`
entries (28 B each, per `scene_command_handler.md` §"Scene_CmdLightSettingsList"),
and **all 17 are byte-identical** (ambient/light0/light1 dir+color, fog start/end,
draw_dist, blend_rate) — confirmed via direct dict comparison, not sampling. spot99's
title-demo lighting is not custom-authored; it inherits spot00's full day/night/event
palette table verbatim (the title cs's `Flags_SetEnv`/env-cursor mechanics documented
in `title_gamestate_driver.md` presumably select one of these 17 slots the same way
Hyrule Field does — likely the dawn/4-AM slot, since the title cs sets time 04:00 per
that doc's opcode-0x8C finding).

## 5. Room mesh + collision — the actual divergence: heavily decimated, camera-path-only

This is where spot99 stops being a copy:

- **Collision** (`oot3d_collision.py`, cmd 0x03 → CollisionHeader):
  - `spot99`: **306 verts, 497 polys**
  - `spot00`: **2,243 verts, 3,754 polys**
  - spot99's collision is **~13% the polygon count** of spot00's.
  - **Bounding box** (raw Vec3s units): spot99 X∈[-6760,5400] Z∈[701,11593] vs
    spot00's full-field X∈[-11048,6732] Z∈[-1755,16668]. spot99's collision covers
    only a **sub-region** of the full field — consistent with "just enough ground for
    the title cs's camera flyover + rider path," not the whole playable Hyrule Field.
  - Y ranges are comparable (spot99 [-505,661] vs spot00 [-1095,669]), i.e. similar
    terrain height variation is retained where present, just a smaller X/Z footprint.

- **Mesh** (cmd 0x0a, room-file mesh-data blob): spot99's room-0 mesh block sits at
  file offset `0xb7e46` vs spot00's `0xe7b56` — everything before that offset (raw
  CMB/vertex/DL data) is smaller in spot99 (room file 755 KB vs 956 KB total, ~79%),
  proportionally less than the 13%-of-polys collision reduction, meaning the VISUAL
  mesh is trimmed less aggressively than collision (expected — camera-visible terrain
  needs more detail than invisible-collision-only edges, and skybox/distant terrain
  still needs full draw geometry even outside the collision footprint).

**Room-header command list is structurally identical** between the two room files
(`0x18 altHeaders(7 vs 13)`, `0x16`, `0x08`, `0x12`, `0x10`, `0x05`, `0x0a mesh`,
`0x0b objectList(8)`, `0x01 actorList(74)`, `0x14 end` — same order, same counts
except altHeaders and the two payload sizes above).

## 6. Object list — 3 of 8 slots swapped

**CORRECTION (2026-07-10) — the slot-index column below was transcribed wrong in the
original version of this table.** Re-read directly from `data/scene_actors/{spot99,spot00}.json`
(`tools/scene_actors.py`'s `parse_room_file`, cmd 0x0B walk) this session:

```
spot99 room0 objects = [1, 258, 0, 180,   0, 32324, 11, 0]
spot00 room0 objects = [1, 258, 0, 964,   0, 31572, 14, 0]
                idx:    0    1  2   3     4      5   6  7
```

Corrected table:

| slot | spot99 | spot00 |
|---|---|---|
| 0 | 1 (`OBJECT_GAMEPLAY_KEEP`) | 1 (same) |
| 1 | 258 | 258 (same) |
| 2 | 0 (empty) | 0 (same) |
| 3 | **180** | **964** |
| 4 | 0 (empty) | 0 (same) |
| 5 | **32324** | **31572** |
| 6 | **11** | **14** |
| 7 | 0 (empty) | 0 (same) |

The **VALUE SET** {180, 32324, 11} vs {964, 31572, 14} that the rest of this doc (and
`title_logo_actor.md`) reasons about was already correct — only the slot-index labels
(2/5/6 vs the actual 3/5/6, and which slot was empty) were off by one. No other finding
in this doc depended on the slot index, so nothing else here needed correcting.

5 of 8 slots identical (including slot 0 = the shared `gameplay_keep`, present in
both — trees/rocks/holes draw from it in both scenes, consistent with the identical
actor table). **3 slots differ.**

### 6.1 RESOLVED (2026-07-10): 180/11/14 identified via a derived OoT3D object-id→filename table; 964/31572/32324 remain unidentified (real negative result, not a gap)

**Falsifies the "N64 `object_table.h` enum lookup is coincidental" framing above** — that
caution was right to distrust an N64-enum lookup, but a *native OoT3D* id→filename table
does exist and resolves 3 of the 6 values cleanly.

Built by extracting every `rom:/actor/<name>.zar` string from `build/code.bin` (398
matches, `re.finditer(rb'rom:/actor/[A-Za-z0-9_]+\.zar')`) and confirming they sit in a
**fixed-stride 0x44-byte table** starting at file offset `0x0043cd38` (VA `0x0053cd38`,
base = VA-file-offset delta `0x00100000`, cross-checked independently against a known
ARM opcode at `0x00378ff8` — `e92d41f0` = `stmdb sp!,{r4-r8,lr}`, matches the disassembly
exactly, confirming the base). Row index → objectId is **`objectId = (fileOffset -
0x0043cd38) / 0x44 + 1`** (9 of the 416 rows are empty/skipped — string count 398 ≠ row
count 416, consistent gaps at exact multiples of 0x44).

**Anchor/validation**: row math gives **objectId 330 → `zelda_mag.zar`** — this is an
EXACT match for the already-confirmed logo actor's `ActorProfile.objectId = 330`
(`title_logo_actor.md` §5.1), independently derived here with zero foreknowledge of that
number. This validates the table's base/stride/1-based-indexing all at once.

Applying the same formula to the 6 differing/candidate values:

| objectId | file (from table) | in range? |
|---|---|---|
| **180** | `zelda_mo.zar` | yes (row 179) |
| **11** | `zelda_wm2.zar` | yes (row 10) |
| **14** | `zelda_box.zar` | yes (row 13) |
| 964 | — | **no** — table only has 416 rows (max objectId ≈ 416; `zelda_keep_opening.zar` is the last entry, objectId 416) |
| 31572 | — | **no** — far outside the table |
| 32324 | — | **no** — far outside the table |

So: **spot99's two unique slots (180, 11) = `zelda_mo.zar` and `zelda_wm2.zar`; spot00's
unique small slot (14) = `zelda_box.zar`.** These are real OoT3D asset filenames, not
coincidental N64-enum collisions (the N64-enum guesses `OBJECT_MO`/`OBJECT_WALLMASTER`/
`OBJECT_BOX` for these same numbers turn out to be superficially similar-sounding but are
a red herring — `zelda_wm2` and `zelda_box` are OoT3D's OWN id space, not proof N64
`OBJECT_WALLMASTER`/`OBJECT_BOX` semantics carry over).

**964, 31572, 32324 do NOT resolve through this table — confirmed a real gap, not a
tooling miss.** They exceed the table's actual extent (416 rows / 28,220 bytes) by
2–75×, so no amount of re-deriving the same table finds them; they belong to a
different numbering/lookup mechanism not yet located.

**Consuming-actor scan (re-run this session with a full, uncrashed sweep of all 1200
`gActorOverlayTable` entries, `tools/ghidra_scripts/ScanObjectIds.py`, new this
session)**: **zero** `ActorProfile.objectId` matches for 964, 31572, or 32324 anywhere
in the binary (confirms `title_logo_actor.md` §1's partial finding, now on a complete,
non-crashed scan). For 180/11/14, matches exist (`actorId 196→180`, `actorId
17,142→11`, `actorId 10,170→14`) but none are a plausible fit for a field/title scene by
category (the categories read as ENEMY/BOSS-shaped in both this session's and the prior
session's independent scans) — so even though the FILENAMES are now solid ground truth,
**no actor declares any of the 6 differing objects as its *primary* object in a way that
explains why spot99/spot00 would need them**. Two live possibilities, neither confirmed:
(a) they're consumed as a *secondary* object slot by some actor (many OoT actors carry
more than one object dependency; `ActorProfile` only exposes the primary), or (b) they're
requested directly by the cutscene interpreter / a per-scene dynamic-spawn path, the same
non-static-actor-table mechanism already established for the title logo itself (id 0x171,
not in spot99's 74-entry static actor list either, yet its object IS in the object bank).
**Not resolved this session** — the consuming code path for 180/11/14/964/31572/32324
remains open; whoever picks this up next should look for `Object_Spawn`/cutscene-side
object-id requests rather than another `ActorProfile` sweep (already run twice, both
negative).

### Anchors (this session)

- OoT3D object-id→filename table: base VA `0x0053cd38` (file `0x0043cd38`), stride
  `0x44`, `objectId = row + 1`, 416 rows (398 populated, 18 gap rows), last entry
  `zelda_keep_opening.zar` @ objectId 416.
- VA-to-file-offset base confirmed independently via ARM opcode match at `0x00378ff8`
  (`e92d41f0`).
- `tools/ghidra_scripts/ScanObjectIds.py` — new reusable script this session: scans
  `gActorOverlayTable` (`0x0050CD84`, stride `0x20`) for `ActorProfile.objectId` matches
  against an `OOT3D_OBJIDS` env-var target set; full 0..1199 sweep with proper exception
  handling (the prior session's ad hoc `scratch/find_logo_actor.py` crashed partway
  through on an unmapped profile pointer and only covered part of the range).

### 6.6 RESOLVED (2026-07-10): 964/31572/32324 are genuine ROM bytes, NOT an extractor bug — root cause of the "anomalous object id" question

Re-derived directly from the raw file bytes (not through `scene_actors.py`), to rule out
a parser bug (wrong stride, off-by-one into adjacent data, byte order) as the source of
these 3 out-of-range values, per the standing "don't RE by poking guessed offsets, verify
against the actual file" rule.

**Raw hexdump at the declared object-list command, both files:**

```
spot99_0_info.zsi: cmd @0x48 = (ctype=0x0B, count=8, ptr=0x000b7e54)
  bytes: 01 00 02 01 00 00 b4 00 00 00 44 7e 0b 00 00 00
  → [1, 258, 0, 180, 0, 32324(0x7e44), 11, 0]
  next cmd (ctype=0x01 actorList) ptr = 0x000b7e64 = object-list ptr + 16
    → EXACTLY 8×2 bytes past the object list start, zero slack/padding.

spot00_0_info.zsi: cmd @0x48 = (ctype=0x0B, count=8, ptr=0x000e7b64)
  bytes: 01 00 02 01 00 00 c4 03 00 00 54 7b 0e 00 00 00
  → [1, 258, 0, 964(0x3c4), 0, 31572(0x7b54), 14, 0]
  next cmd ptr = 0x000e7b74 = object-list ptr + 16, same exact-fit.
```

The next command's pointer landing **exactly** 16 bytes (8 × 2-byte entries) after the
object-list pointer, with zero gap in both files independently, is airtight confirmation
that `count=8` / `stride=2` / `ptr` are all correct — there is no room for a stride or
off-by-one misparse. **`scene_actors.py`'s object-list parsing (`CMD_OBJECT_LIST = 0x0B`,
`_u16le` per entry) is correct and requires no fix.** The values are literal bytes stored
in the ROM's scene file, at the position the game engine itself reads as the object bank.

**Confirmed via the actual consuming handler, `FUN_003a7558` = `Scene_CmdObjectList`
(dispatch table entry `0x0B`, `docs/scene_command_handler.md`), decompiled this session
(`build/decomp/003a7558.c`):**

```c
// FUN_003a7558(segBase, play, cmdPtr) — Scene_CmdObjectList / Object_UpdateBank-equivalent
// Diffs the new object list against the currently-active bank (play+0x3a58 = bank
// count, play+0x3a5c = bank array, stride 0x80/entry): matching leading entries are
// left alone; anything past the common prefix is torn down (freed via FUN_0034fc6c /
// FUN_00371738), then every new entry beyond the matched prefix is appended with its
// id NEGATED (`*(short*)(iVar1+4) = -*psVar5;`) — the standard OoT "pending async
// load" sentinel pattern (negative id = not yet resident; a separate per-frame poller
// flips it positive once the DMA completes).
```

**Critically: this handler does zero bounds/range validation on the raw id.** It reads
`*psVar5` (the scene's literal `s16`/`u16` value — 964, 31572, 32324 included) and writes
`-value` straight into the bank slot. Whatever downstream function resolves a bank-slot id
to an actual RomFS object file (not yet decompiled this session — the next hop from the
negated-id poller) would receive these values unmodified. Since 964–32324 are 2–75× past
the 416-row id→filename table (`§6.1`), if that downstream resolver used the same table
indexing, it would read 2–75× past the table's 28,220-byte extent into unrelated
`code.bin` data — i.e. these ids, if ever actually consumed, would not resolve to a real
object file.

**Why this doesn't crash the real game — reconciling with `spot00` = Hyrule Field being
played normally in retail:** `FUN_003a7558` is only reached through the standard scene
command dispatcher (`FUN_002e4de4`), itself only called from `FUN_004490d8` (normal
Play-state scene init, `docs/scene_command_handler.md`). Per
`docs/title_gamestate_driver.md` (established prior session, reused here — see also the
"OoT3D title NOT Play" memory note), **`gPlayState` is `0` at title** — the title
sequence runs through a separate scripted-playback path that bypasses `Play_Init`/normal
scene-command dispatch entirely, so `FUN_003a7558` almost certainly never executes for
`spot99` during title playback. That is consistent with, and explains, the existing
"zero `ActorProfile` owners, zero consuming references" finding (§6.1) — **spot99's
`964`/`32324` are inert dead bytes as far as the title render path is concerned**: real
ROM data, correctly extracted, but never interpreted by the code path that actually
renders the title scene.

`spot00` (Hyrule Field) DOES go through normal `Play_Init`/scene-command dispatch during
ordinary gameplay, so if header 0's object list genuinely contains `964`/`31572`
unconditionally on every load, `FUN_003a7558` would run on them for real. Two
explanations remain open and were **not** resolved this session (out of scope — this
session's task was specifically the spot99/title anomaly): either (a) `spot00`'s live
daytime gameplay doesn't actually route through the header-0 command list that was
hexdumped here (e.g. some other selection state overrides it before dispatch — unlike
the already-proven-fixed-at-0 alt-header *selector field*, §6.5, this would be a
different override mechanism, not yet checked), or (b) the not-yet-decompiled downstream
id→file resolver silently no-ops out-of-range ids instead of indexing the 416-row table
directly. Whoever next needs spot00 parity should decompile that downstream resolver
(the function reading the negated bank-slot ids once DMA-pending) rather than re-deriving
the id→filename table again.

**Verdict: NOT an extractor bug.** No JSON regeneration needed — `scene_actors.py`'s
object-list output for spot99/spot00 was already correct. The earlier "3 swapped slots"
conclusion (§6, corrected 2026-07-10) **survives unchanged**: `{180, 32324, 11}` vs
`{964, 31572, 14}` are real, byte-verified, engine-legible (if ever dispatched) values.

**Anchors (this session):**
- `FUN_003a7558` @ `0x003a7558` — `Scene_CmdObjectList`, decompiled in full
  (`build/decomp/003a7558.c`); object bank state at `play+0x3a58` (count, `u8`) /
  `play+0x3a5c` (array, stride `0x80`/entry).
- Raw hexdump cross-check performed directly against the decrypted 3DS ROM (RomFS via
  `soh3d/tools/ctr_romfs.py`), independent of `scene_actors.py`, at both files' `0x48`
  scene-header command (`ctype=0x0B`) — see byte listings above.
- No impact on the SoH3D port beyond what §6.1/§7 already state: these 3 ids do not need
  to be resolved to real assets for spot99/title parity, since the handler that would
  consume them never runs on the title path.

## 6.5 Alt-header selection — RESOLVED (2026-07-10): mechanism decompiled; the selector field is provably 0, so header 0 (default) is correct

Task: which of spot99's 7 alt-headers (§2) does the title actually load, and by what
mechanism? Decompiled the real handler (not inferred from N64 by analogy) and traced its
one input field to a dead end that pins the answer.

### The handler: `FUN_00378ff8` = `Scene_CmdAltHeaders`-equivalent

Cmd `0x18` in the scene-command dispatch table (`scene_command_handler.md`). Decompiled
this session (`build/decomp/00378ff8.c`):

```c
undefined4 FUN_00378ff8(int param_1, undefined4 param_2, int param_3) {
  int iVar3 = *(int *)(*(int *)0x00379170 + 0x4e8);   // the ONE input: a global-struct field
  if (iVar3 == 0) {
      return 1;   // no override — the header ALREADY loaded by the generic dispatcher stays active (= header 0)
  }
  iVar6 = param_1 + *(int *)(param_3 + 4);             // headers[] array base (segAddr)
  iVar5 = *(int *)(iVar6 + iVar3 * 4 - 4);              // headers[iVar3 - 1]   (1-BASED index)
  if (iVar5 == 0) {
      if (iVar3 != 3) return 1;
      iVar5 = *(int *)(iVar6 + 4);                      // special-case fallback: iVar3==3 && headers[2]==NULL → use headers[1]
  }
  // ... walk iVar5's 8-byte command stream exactly like the top-level dispatcher (recursive re-parse)
}
```

Disasm-confirmed (`0x00378ff8..0x00379008`): `ldr r0,[0x379170]` loads a POINTER stored at
the FIXED global slot `0x00379170`; `ldr r0,[r0,#0x4e8]` dereferences that pointer +0x4e8.
This is a clean, direct 1-based array index — **not** the N64 `cutsceneIndex >= 0xFFF0`
sentinel scheme; OoT3D refactored header selection into a plain small integer.

### The selector field: pinned to a fixed VA, then traced to a boot-time-only zero-clear with NO other writer in the whole binary

- `*0x00379170` (the pointer itself) has **zero code writers anywhere** (`FindDataWriters`) →
  it is a load-time-fixed constant, not a runtime-relocated pointer. Its value: **`0x00588958`**
  (confirmed twice — once by reading `0x00379170` directly, once via an independent literal
  pool at `0x00449224` used by the sibling function below — both agree).
- So the selector field's real, fixed VA is **`0x00588958 + 0x4e8 = 0x00588e40`**. This sits
  inside a small global struct 0x1000 bytes past `gSaveContext` (`0x00587958`,
  `ram_map.md`); the struct's neighboring field at `+0x500` (`0x00588e58`) is the
  "play-state/next-entrance copy" `ram_map.md` had already flagged (entranceIndex-shaped,
  183 live copies noted there) — consistent placement for a "pending scene setup" struct.
- **`FindDataWriters` on `0x00588e40` directly: 27 reads, 0 writes**, anywhere in the
  30 MB binary. Confirmed this field IS genuinely consulted broadly (`FUN_004490d8`, the
  scene state-1 init, ALSO reads it — via the literal-pool alias `UNK_00449224` — to index a
  byte lookup table at `0x00543bb8` alongside `gSaveContext.entranceIndex`, the classic
  N64-shaped `EntranceTable[entranceIndex + setupIndex]` pattern; this cross-use is a second,
  independent confirmation that `0x00588e40` really is "the setup/header-select index," not
  a coincidental hit).
- The only WRITE that touches this address at all is a **bulk zero-fill**:
  `FUN_00449dec` calls `FUN_00343280(0x00588e3c, 0x70)` — a memset-shaped clear of
  `[0x00588e3c, 0x00588eac)`, which contains BOTH `0x00588e40` (our field, at +4) AND
  `0x00588e58` (the entranceIndex copy, at +0x1C). `FUN_00449dec` is called from exactly one
  place, `FUN_0044735c`, a general boot-time reset routine (not scene-specific).

### Conclusion

**No code anywhere in the binary writes a nonzero value into the alt-header selector field**
via any reference Ghidra's DB can resolve (direct address AND the register-computed-offset
form both checked — the latter is how the 27 reads themselves were even found, so the same
resolution method would have caught a computed-offset write too, if one existed). The field
is zeroed once at boot and never touched again. Therefore **`FUN_00378ff8` always takes its
`iVar3 == 0` early-return path during a normal boot/title session — header 0 (the scene's
default/base header) is what spot99's title load actually uses.**

**This means SoH3D's current header-0 choice is CORRECT — no port change needed here.**
Confidence: high but not absolute — per the `ghidra-re` skill's documented limitation,
a write reached only through a cached heap pointer with no resolvable base (as opposed to
the fixed-global-pointer form all writes to this struct use here) could in principle evade
`FindDataWriters`. Given every access to this specific struct observed in this session (27
reads + the 1 bulk-clear write) used the SAME fixed-global-pointer addressing form, that
residual risk is low — but it was not eliminated by a dynamic/harness cross-check this
session (none was run: the field's writer-count is 0, so there was no writer PC to locate,
which is the one thing the hard directive sanctions a harness watchpoint for).

### Anchors (this session)

- `FUN_00378ff8` @ `0x00378ff8` — `Scene_CmdAltHeaders`-equivalent, decompiled
  (`build/decomp/00378ff8.c`), disasm-verified base-pointer-load shape.
- Selector field VA: **`0x00588e40`** (`= *0x00379170 + 0x4e8`); struct base
  `0x00588958` (pointer stored at fixed global `0x00379170`, itself never rewritten).
- `FindDataWriters` on `0x00588e40`: 27 reads (incl. `FUN_004490d8`'s
  `EntranceTable[entranceIndex+setupIndex]`-shaped lookup, `build/decomp/004490d8.c`), 0
  direct writes.
- Only write path: `FUN_00449dec` (`build/decomp/00449dec.c`) → `FUN_00343280(0x00588e3c,
  0x70)` bulk clear, called once from boot-time `FUN_0044735c`.
- `FUN_00449420` = `Play_Init`, decompiled in full (`build/decomp/00449420.c`) — confirms
  the 3 `sceneNum==0x51` special-case sites `graph_thread_and_state_dispatch.md` already
  flagged, but they gate an unrelated audio/fanfare-cue subsystem (`param_1+0x7f14/0x7f18`,
  `param_1+0x7f38/0x7f3c`), **not** header selection — ruled out as an alternate mechanism.

## 7. What this means for SoH3D — concrete recommendation

**SoH3D rendering `spot00`/model 1000 at title is a substitution bug, not a
close-enough stand-in.** `spot99` is a real, separate ROM asset (own `_info.zsi` +
`_0_info.zsi`) with its own (smaller) collision and mesh — it is not merely "spot00
with a different camera bolted on."

Concretely, the port needs:

1. **Load `spot99`'s own ZSI/room asset**, not `spot00`'s. SoH3D's asset pipeline
   already has machinery to import an OoT3D scene into SoH format (spot00/Hyrule
   Field is proof it works); the title module needs the equivalent import run against
   `spot99_info.zsi` + `spot99_0_info.zsi` specifically, producing its own scene/room
   data (own collision mesh at the ~13%-density/sub-footprint extent measured in §5,
   own trimmed mesh) — not a flag/branch that reuses the already-imported spot00
   asset.
2. **Actor placement + lighting can be inherited from the existing spot00 port
   verbatim** — §3/§4 prove the source data is byte-identical, so if SoH3D's spot00
   scene-object/env import is already faithful, the same actor-spawn-table and
   17-slot lighting-palette output should be reusable/shared for spot99's header
   without new RE — the only NEW asset work is the geometry/collision itself (§5) and
   figuring out the 3 swapped object slots (§6, currently unresolved — may matter for
   whatever prop/decoration those slots draw during the cs).
3. **Do not hand-author or approximate spot99's terrain.** Since it's a real,
   ROM-native, drastically simpler mesh (755 KB, 306-vertex collision) than full
   Hyrule Field, importing it directly is both more correct AND cheaper than porting
   the full spot00 field geometry for a background that's only ever seen from a fixed
   flyover camera path.
4. **RESOLVED (§6.5): header 0 (default) is what the title load actually uses** — fewer
   alt-headers (7 vs 13, §2) is real but irrelevant to the port, since `spot99`'s
   alt-header selector field is provably always 0 in a normal boot. SoH3D does not need
   to pick, port, or even parse the other 6 alt-header variants for the title path.

## 8. Open items for next session

1. **Partially resolved (§6.1, §6.6):** 3 of the 6 swapped object-bank ids now have real
   filenames — spot99-unique `180`→`zelda_mo.zar`, `11`→`zelda_wm2.zar`; spot00-unique
   `14`→`zelda_box.zar` (via a newly-derived OoT3D object-id→filename table, cross-validated
   against the already-confirmed `330`→`zelda_mag.zar` logo-actor anchor). `964`/`31572`/
   `32324` exceed that table's range entirely (max id ~416) — **confirmed §6.6 this is
   genuine ROM data, not an extractor bug** (raw hexdump + exact-fit adjacency to the next
   scene command in both files), consumed by a decompiled handler (`FUN_003a7558`,
   `Scene_CmdObjectList`) with no bounds-checking, but that handler is provably unreached
   on the title path (title bypasses normal `Play_Init`/dispatch — `gPlayState==0`), so
   these 3 ids are inert dead bytes for spot99/title purposes. Still open: whether spot00's
   *normal gameplay* load actually dispatches through this same header-0 list (flagged,
   not investigated — separate question from the title-scene task this session covered).
2. ~~Confirm which of spot99's 7 alt-headers is selected at boot~~ — **RESOLVED, §6.5**:
   none are selected; header 0 (default) is used, because the alt-header selector field
   (`0x00588e40`) has no writer anywhere in the binary other than a boot-time zero-clear.
   The `sceneNum==0x51` `Play_Init` special-case (`title_gamestate_driver.md` §1) was
   checked and ruled out as an alternate header-selection mechanism — it gates an
   unrelated audio/fanfare-cue subsystem, not the scene-header parse (§6.5).
3. **Tooling correction flagged, not fixed**: `scene_actors.py`'s `CMD_TRANS_ACTORS =
   0x0F` conflicts with `scene_command_handler.md`'s dispatch-table finding that cmd
   0x0F is `lightSettingsList` (SOLVED, cross-verified via the envCtx pointer writes)
   and cmd **0x0E** is `transitionActors`. The "transition_actors" arrays currently in
   every `data/scene_actors/*.json` (including spot99.json/spot00.json used in this
   doc) are almost certainly mis-parsed light-settings bytes reinterpreted as 16-byte
   actor records — explains the physically-impossible room indices (up to 250) and
   ids (negative, out-of-range) observed in both scenes' `transition_actors` field.
   Irrelevant to the spot99-vs-spot00 comparison in this doc (identical raw bytes
   either way), but whoever next touches transition-actor data (room-to-room warps)
   should re-point `scene_actors.py` at cmd 0x0E and re-generate, not trust the
   existing field.
