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

> **FALSIFIED 2026-07-10 — see §5.** The En_Mag-equivalent Actor DOES exist (id 0x171,
> objectId 330); §1's scan missed it because it only checked spot99's *differing* object
> slots. The rest of this section is kept as a record of the wrong turn.

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

## 4. Follow-up session (2026-07-09): asset-side ground truth for the alpha ramp + more static dead ends

Task: extract the logo alpha fade RATE (step/cap/duration) for the SoH3D `title_logo.cpp` STOPGAP,
which currently borrows N64 `En_Mag`'s `+6/frame · 35-frame` ramp. This session could not recover
that rate either (§4.2), but closed one important sub-question: **the alpha is not baked/keyframed
anywhere in the ROM assets**, which pins the search to a runtime value and rules out a whole class of
"maybe it's in the CMB/CSAB" hypotheses.

### 4.1 New evidence: `title_logo_us.cmb` and `copy_nintendo.cmb` have alpha-blend infrastructure but a STATIC baked alpha=1.0 — no animated alpha data anywhere in the asset

Dumped both CMBs directly from the ROM this session (`soh3d:tools/cmb.py`, via `soh3d:tools/ctr_romfs.py`
+ `soh3d:tools/zar.py` — read-only, no soh3d working-tree edits):

```
title_logo_us.cmb: 13 bones, 22 meshes, 12 materials, 10 textures (tex0="title_all" 128x64 is the
  actual wordmark plate art; the rest are per-letter/decoration textures).
  mat0/mat1/mat2 (tex0=title_all, meshes sepd3/12/15/20/21 — the wordmark plate itself):
    alphaTest=False, BLEND ENABLED: src/dst rgb=0x302/0x303 (GL_SRC_ALPHA / GL_ONE_MINUS_SRC_ALPHA,
    standard non-additive compositing, NOT the additive g_title.cmb fire-glow blend), blend
    const=(0,0,0,1) — i.e. constant ALPHA = 1.0, fixed at compile time.
  mat3..mat11 (the other 9 materials, per-letter-piece textures): blend_enable=False entirely
    (fully opaque, no alpha channel in play at all).

copy_nintendo.cmb (the copyright block): 1 bone, 1 mesh, 1 material, same shape — alphaTest=False,
  BLEND ENABLED, src/dst=0x302/0x303, const alpha=1.0 static.
```

Neither CMB has an associated `.cmab` (material-animation) targeting these materials —
`zelda_mag.zar` contains exactly two `.cmab`s (`g_title_fire.cmab`, `g_title_fire_ura.cmab`,
per `title_logo_fireglow_cmab.md`) and both are already accounted for as the `g_title.cmb`
fire-glow's `ConstColor`/`Translation` tracks, driving a *different* mesh (`g_title.cmb`, additive
blend) via a *different* material than the wordmark's `mat0/1/2` or the copyright's `mat0`. So:

- The wordmark plate and the copyright block **both** have the alpha-blend GPU state switched on
  (this is deliberate — someone authored these materials to be alpha-composited, not opaque), but
  the alpha value itself is a compile-time constant (1.0) with **no keyframe track anywhere** that
  could rewrite it over time.
- This directly parallels N64's `En_Mag`: N64 never bakes `mainAlpha`/`copyrightAlpha` into a
  texture or display-list constant either — it's a plain runtime `f32`/`s16` field on the actor,
  written by `EnMag_Update`'s per-frame arithmetic and consumed by the draw call's primitive-color
  alpha argument. The 3DS material design is consistent with the exact same pattern: blend state
  ON, alpha supplied per-frame from code, not from the asset. This is new, positive, decompiled-and-
  measured corroboration (not just structural analogy) that OoT3D kept a runtime alpha-ramp
  mechanism for both the logo AND the copyright block — reinforcing (not just repeating)
  `title_gamestate_driver.md` §3's "the state-machine SHAPE ports even though constants must be
  re-derived" conclusion.
- It also rules out one entire avenue for recovering the rate: there is no CMAB/CMB keyframe data to
  read the ramp off of, the way `title_logo_fireglow_cmab.md` could read the fire-glow's flicker
  curve straight from `g_title_fire.cmab`'s bytes. The alpha ramp constant can ONLY come from code
  (static decomp of the per-frame tick) or a live memory read (harness) — asset inspection is a dead
  end for this specific question.

### 4.2 Continued search for the per-frame tick / `Flags_GetEnv`-equivalent read: still not found, new dead ends recorded

Per `title_logo_actor.md` §3's open item 1 ("find `FUN_0046ac98`'s per-frame sibling"), tried:

- **`FindDataWriters` on `0x0050AF34`** (the title-context global pointer itself): only **2** total
  code references in the whole binary — `FUN_00444cb8` (DATA ref, 36B, unrelated: writes a `0x16`
  state and clears a field on a *different* subsystem struct reached via `DAT_00444cdc`, not the
  title context) and `FUN_0042df18` (WRITE ref, 5344B, a **controller-pairing / "NO CONTROLLER"
  message state machine** gated on `sceneNum==0x4b`, i.e. an unrelated scene-agnostic system that
  happens to alias the same pointer slot for its own bookkeeping — not the title tick). Neither
  function touches `+0x5f98`, `+0x6c`, or `+0x78`. **Ruled out**: the title-context struct's
  per-frame tick is not reached by direct references to the `0x0050AF34` global at all — it must be
  invoked through a pointer already cached elsewhere (a local/stack copy taken once and held), which
  is exactly the kind of indirection Ghidra's static Reference DB can't follow (per the ghidra-re
  skill's documented limitation on register-computed / cached-pointer dispatch).
- **Sibling-function sweep near `FUN_00366704`/`FUN_003667b0`** (the confirmed `Flags_SetEnv`/
  `Flags_UnsetEnv`, at `0x366704`/`0x3667b0`): listed every function Ghidra has defined in
  `0x366600..0x366a00` (`tools/ghidra_scripts/ListFnsInRange.py`, new small script added this
  session — lists function entries in a VA range, composes with `DecompDump`) and decompiled the
  four neighbors (`FUN_00366684`, `FUN_003666a0`, `FUN_00366738`, `FUN_00366748`). **None is a
  `Flags_GetEnv`-shaped bit-test** (`(*(ushort*)(x+0x5f98) >> (flag&0xf)) & 1`) — they're unrelated
  small helpers (a lookup-table dereference, an input/pairing state updater, two trivial
  single-field bool checks on completely different offsets `+0xa90`/`+0xf38`). Ruled out: the
  `Flags_GetEnv`-equivalent is NOT co-located with `Flags_SetEnv`/`Flags_UnsetEnv` in the binary
  layout (no adjacency to exploit).
- **`FUN_002db6a0`** (the allocator installing the `+0x1C`/`+0x20` duplicate quad-batch sub-objects,
  flagged in §2 as the best lead for the two-fire-glow-targets hypothesis): decompiled fully — it is
  a one-shot CONSTRUCTOR (builds an index buffer, allocates a GPU command-list slot, registers a
  material) with no per-frame/alpha-ramp logic in it at all. Ruled out as the tick function; its
  *runtime* update method (installed via the `(**(code**)(...+8))(...)` vtable pattern noted in §3
  item 3, not resolved this session either) remains the actual next lead if this angle is pursued
  further, but that requires walking a heap-resident vtable pointer, which is dynamic-observation
  work (harness), not static Ghidra.

**Conclusion, unchanged from the prior session but now on firmer ground**: the OoT3D logo/copyright
alpha ramp is real (the CMB material design proves runtime-driven alpha is intended), but its rate/
duration constants live exclusively in a per-frame code path that two static-RE sessions have failed
to locate by every static avenue tried so far (Actor-table scan, global-pointer xref scan, sibling-
function-address scan, constructor-vs-updater decompilation). The only remaining productive avenues
are the ones already named in §3: (a) the embedded-Azahar harness, once built, reading the title-
context struct's live per-frame fields across the frame-345→1930 window directly, or (b) a broader,
non-address-adjacency-based static sweep (e.g. Ghidra's `FunctionID`/pattern search for the exact
`ushort` bit-test-and-mask instruction shape anywhere in the binary, not just near the known
`SetEnv`/`UnsetEnv` pair) — not attempted this session, flagged as the next concrete static option
before falling back to harness-only.

### 4.3 Recommendation for the SoH3D STOPGAP (no change to the port itself — decomp-only session)

Given §4.1/§4.2, the honest state of the evidence is: the 3DS logo/copyright ramp mechanism-SHAPE
(runtime alpha, blend-enabled, no baked keyframes) is now doubly confirmed, but the concrete
step/cap/duration numbers remain undiscovered. The existing STOPGAP in
`Shipwright/soh/src/zelda3d/behaviors/title/title_logo.cpp` (N64 `En_Mag`'s `+6/frame`, scaled to
35 frames) should stay marked as a STOPGAP — nothing here confirms or refutes its specific numbers,
it only reinforces that *some* per-frame runtime ramp is the correct mechanism shape to keep. Do not
promote it to "derived from 3DS decomp" until either the harness or a fresh static angle (§4.2's
closing paragraph) actually recovers the constant.

### Anchors (this follow-up session)

- `0x0050AF34` global-pointer xref scan (`FindDataWriters`): exactly 2 refs, both unrelated
  subsystems (`FUN_00444cb8`, `FUN_0042df18`) — negative result, see §4.2.
- `FUN_00366684`/`FUN_003666a0`/`FUN_00366738`/`FUN_00366748` (the 4 functions Ghidra has defined
  adjacent to `Flags_SetEnv`/`Flags_UnsetEnv` in `0x366600..0x366a00`) — decompiled this session,
  none is `Flags_GetEnv` — negative result.
- `FUN_002db6a0` @ `0x002db6a0` — decompiled this session; confirmed one-shot quad-batch constructor,
  not a per-frame tick — negative result.
- `title_logo_us.cmb` materials 0/1/2 (wordmark plate) and `copy_nintendo.cmb` material 0
  (copyright): alpha-blend enabled, constant alpha baked at 1.0, no CMAB target — new evidence this
  session (`soh3d:scratch/decomp_stream/{title_logo_us,copy_nintendo}.cmb`, dumped via
  `soh3d:tools/cmb.py`).
- `tools/ghidra_scripts/ListFnsInRange.py` — new reusable script this session (list function
  entries whose entry point falls in `[OOT3D_RANGE_START, OOT3D_RANGE_END)`; composes with
  `DecompDump` for "what functions live near this address" sweeps).

## 5. RESOLVED (2026-07-10): the logo IS an Actor (id 0x171) — full alpha state machine decompiled + live-verified

This session **falsifies §3's headline conclusion**. The title 2D overlay's logo/copyright
alpha state machine lives in a perfectly conventional Actor — it was missed because §1
scanned `ActorProfile.objectId` only against spot99's 3 *differing* object slots
`{11, 180, 32324}`, and the logo actor's declared object is **330**, which is present in
BOTH spot99 and spot00's object banks (so it never showed up in the difference set).
The non-Actor `0x0050AF34` context from §2 is real but is a separate subsystem; the fade
constants were never in it (live dumps of that struct + all 8 sub-objects across the whole
fade window: zero bytes change).

### 5.1 The actor

`gActorOverlayTable[0x171]` → `ActorProfile @ 0x0052c328`:

| field | value |
|---|---|
| actorId | **0x171** (369) |
| category | 6 (PROP) |
| objectId | **330** (zelda_mag) |
| instanceSize | 0x1E0 |
| init | `FUN_0018cbb8` @ 0x0018cbb8 (decompiled: `build/decomp/0018cbb8.c`) |
| destroy | 0x0018cf1c |
| update | **`FUN_001da9f8`** @ 0x001da9f8 (decompiled: `build/decomp/001da9f8.c`, 1180 B) |
| draw | `FUN_001da4f4` @ 0x001da4f4 (decompiled: `build/decomp/001da4f4.c`) |

How it was found (dynamic→static loop, embedded-Azahar harness + Ghidra):

1. Static: the known `Flags_SetEnv` (`FUN_00366704`) encodes the env-flag bitfield access as
   `add r0,r0,#0x5f00` + `ldrh/strh [r0,#0x98]`. Raw-scanned code.bin for the ADD encoding
   (`(w & 0x0FE00FFF) == 0x02800C5F`): 18 sites; only one has the *load-and-mask* (GetEnv)
   shape: **`Flags_GetEnv` = `0x0035a3c4`** (`ldrh` + `1 << (flag&0xf)` + `and`).
2. BL-scan for its callers: 14. Exactly two pass flags 3/4 — `0x001db00c` (flag 3) and
   `0x001db04c` (flag 4), both inside `FUN_001da9f8` = the logo actor's update.
3. Live (harness savestate at title, cs curFrame domain — note `0x0054CC3C` is a *different*,
   faster counter; the trigger frames 345/1930 are in `csCtx.curFrame @ play+0x22B8`):
   whole-FCRAM `dumpphys` snapshots across the fade-in window, diffed for the predicted
   ramp values, located the live instance at phys `0x27008CA0` and confirmed every field.

### 5.2 The alpha fields (actor instance offsets)

| offset | type | meaning (from draw fn `FUN_001da4f4`) |
|---|---|---|
| +0x1C0 | s16 | generic delay timer |
| +0x1C2 | s16 | "seen/skip latch" |
| +0x1C4 | s16 | fade-in sub-phase (0..5) |
| +0x1C6 | s16 | sub-phase countdown timer |
| +0x1C8 | s16 | globalState: 0=INITIAL 1=FADE_IN 2=DISPLAY 3=FADE_OUT(cs) 4/6=press-START paths 5=DONE |
| +0x1CA | s16 | **copyright fade-in step = 6** (set in init `FUN_0018cbb8`) |
| +0x1CC | s16 | **fade-out step = 10** (set in init; press-START path overrides to 25, +0x1CA→15) |
| +0x1D0 | f32 | alpha (0..255) of zar asset idx 0 = `g_title` backdrop/emblem |
| +0x1D4 | f32 | alpha (0..255) of zar asset idx 2/3 = `title_logo_us`/`_eu` wordmark (idx picked by language via `func_0x00410350`) |
| +0x1D8 | f32 | alpha (0..255) of zar asset idx 1 = `copy_nintendo` copyright |
| +0x1DC | f32 | wordmark sheen/light-vector scale (0..255), ramped with +0x1D0 |

Draw multiplies each field by `1/255.0f` (`fRam001da8b4 = 0x3b808081`) into the material
const-color alpha — exactly the N64 `EnMag` pattern (runtime alpha into prim color), and
exactly what §4.1 predicted from the CMB blend states.

### 5.3 The measured + decompiled fade constants (cs frames, 30 fps cursor)

Fade-in (`Flags_GetEnv(play,3)` fires at csCtx.curFrame **345**; live trace
`soh3d:scratch/decomp_stream/fields/trace.log`):

| cs frame (measured) | phase | what happens | decomp constant |
|---|---|---|---|
| 346 | state 0→1 | flag-3 gate passes; `+0x1C6 = 0x28` | delay 40 |
| 347–384 | 1 | wait (38 observed; phase-0 bind consumed 2) | timer 0x26 = 38 |
| 385–465 | 2 | **wordmark `+0x1D4 += 3.0`/frame** (0→240), then snap 255 | step `fRam001db030 = 3.0f`, timer 0x51 = 81 |
| 466–525 | 3 | **backdrop `+0x1D0` and sheen `+0x1DC` += 4.25/frame** (0→250.75), snap 255 | step `fRam001db034 = 4.25f`, timer 0x3C = 60 (60×4.25 = 255 exact) |
| 526–568 | 4 | **copyright `+0x1D8` += 6.0/frame** (0→252), clamp at 255 | step = s16 `+0x1CA` = **6**, cap `fRam001db038 = 255.0f` |
| 569 | 5 / state 2 | DISPLAY (full alpha hold) | — |

Fade-out (`Flags_GetEnv(play,4)` fires at csCtx.curFrame **1930**; MEASURED live, same
trace file): state 2→3 at cf1931, then per frame `+0x1D0, +0x1D4, +0x1D8 -=
(float)(s16)+0x1CC` (= **10.0/frame**): 255→245→235→…→5 (cf1932..1956), floored to 0.0
(`fRam001dad04`) and state→5 at cf1957 — **26 frames** (~0.87 s at 30 fps), all three
alphas in lockstep. `+0x1DC` is NOT decremented (stays 255; the sheen dies with the
wordmark's alpha=0).

Press-START skip paths (decomp only, not traced): pressing START during DISPLAY sets
`+0x1CC = 0x19` (25/frame fast fade, ~11 frames) with `+0x1CA = 0xF`, plus play transition
trigger `play+0x5C2D = 0x14`.

### 5.4 vs N64 En_Mag

| | N64 `En_Mag` | OoT3D actor 0x171 |
|---|---|---|
| trigger mechanism | env-flags 3/4 via cs misc-ops | **identical** (same flag numbers, same misc-op types 0x1E/0x1F) |
| fade-in | single alpha, +6/frame to 210 cap (~35 fr) | **three staged ramps**: logo +3.0→255 (81 fr, after 40-fr delay), backdrop+sheen +4.25→255 (60 fr), copyright +6→255 (~43 fr) |
| fade-out | -10/frame (En_Mag `MAG_STATE_FADE_OUT`) | -10/frame to 0, all three at once (26 fr) |
| alpha domain | 0..255 into prim color | 0..255 × (1/255) into const color — same shape |

So the N64-derived STOPGAP in `soh3d:Shipwright/soh/src/zelda3d/behaviors/title/title_logo.cpp`
(+6/frame, 210 cap) is wrong for OoT3D on every element except the copyright's step (6), and
misses the 3DS's staged sequencing entirely. Port targets: steps 3.0 / 4.25 / 6.0, cap 255,
phase timers 40 (lead-in delay) / 81 / 60, fade-out 10/frame, all in 30 fps cs-frame ticks.

### 5.5bis Superseded by §6/§7 (2026-07-10 follow-up)

The draw fn was decompiled only at the top level in §5; two things were left ambiguous:
how `+0x1DC` ("sheen") actually reaches the GPU (§5.2's row said "ramped with +0x1D0" but
not *how it composites*), and the press-START skip path (§5.3 called it "decomp only, not
traced"). **Both are now resolved — see §6 and §7 below.** §5.2's `+0x1DC` row and §5.3's
press-START paragraph are superseded by those sections; this paragraph is the pointer, the
old text is left in place above for history but should not be read as current.

### 5.5 Anchors (this session)

- `Flags_GetEnv` = **`0x0035a3c4`** (raw-encoding scan; 14 BL callers)
- logo actor update = **`FUN_001da9f8`** @ 0x001da9f8; flag-3 call @ 0x001db00c, flag-4 @ 0x001db04c
- init = `FUN_0018cbb8` (writes `+0x1CA=6`, `+0x1CC=10`, `+0x1C6=0x3C`, alphas=0, state=0)
- draw = `FUN_001da4f4` (3 draw blocks: handles +0x1A8/idx0 ← alpha+0x1D0; +0x1A4/idx2|3 ← alpha+0x1D4 (+sheen +0x1DC); +0x1AC/idx1 ← alpha+0x1D8; ×1/255)
- literal pool: 3.0f @ 0x001db030, 4.25f @ 0x001db034, 255.0f @ 0x001db038 & 0x001dad00, 0.0f @ 0x001dad04, 1/255 @ 0x001da8b4
- live instance @ phys 0x27008CA0 (title session; heap — not stable across boots)
- csCtx.curFrame = `play + 0x2298 + 0x20` (VA 0x08720AF8 at title); runs at HALF the
  emulated-frame rate and is NOT the `0x0054CC3C` counter (that one ticks ~1/emulated frame;
  the settled-title savestate sits at counter 394 but curFrame 88)
- measured traces: `soh3d:scratch/decomp_stream/fields/trace.log` (FI = fade-in per-frame,
  FO = fade-out per-frame; machine-local scratch — the tables above carry the durable numbers)
- writer-PC watchpoint caveat: the harness write-watch needs the instance's VA; `memscan`
  over `0x08000000..0x09000000` did not find the actor header pattern (heap VA region not
  yet mapped for this heap), so no runtime writer-PC record was captured. The writer is
  pinned STATICALLY instead — `FUN_001da9f8` contains the only `Flags_GetEnv(play,3)/(4)`
  call sites in the binary, and its decompiled constants predicted the live per-frame field
  behavior exactly (all 4 ramps, all 3 snaps, both triggers) — which is a stronger
  identification than a PC sample would have been.

## 6. RESOLVED (2026-07-10): the draw fn traced fully — `+0x1DC` is NOT a mesh alpha, it's a light-direction sweep on the wordmark

Full static decompile of `FUN_001da4f4` (`build/decomp/001da4f4.c`, 231 lines) and every
callee it reaches (`003687a8`, `003589cc`, `00358964`, `0033d220/0033d200/0033d174/0033d14c`,
`0036c174`, `003721e0`, `003679b4`, `0036788c` — all now in `build/decomp/`). Static RE only,
no live probing this session (per task constraint) — cross-checked against the live per-frame
trace already captured in §5.3/§5.5 (that trace's numbers, e.g. `+0x1DC` snapping to 255.0 in
lockstep with `+0x1D0`, are consistent with the mechanism below).

### 6.1 Draw fn structure: exactly THREE draw blocks, one per handle, no fourth

`FUN_001da4f4(actor)` has **only three conditional draw blocks**, gated on actor+0x1A8,
+0x1A4, +0x1AC respectively — the same three handles §5.1/§5.5 already identified
(backdrop `g_title`/idx0, wordmark `title_logo_us`/`_eu`/idx2|3, copyright
`copy_nintendo`/idx1). **There is no fourth block and no reference to a `ura.ctxb` handle
anywhere in this function** — see §6.4, this rules out the fire-glow-strip "quick win" the
task asked about; it isn't reachable from here.

Each block does the same four things when its alpha condition passes (alpha field > 0):
build an RGBA color (RGB from a static asset literal, alpha from the actor field ×
`1/255`), write it into the model's own **constant-color register index 5**, set the
model's own **local placement transform** (a fixed 3×4 matrix, camera-relative — the
overlay's existing camera-basis technique), mark the model visible (`handle+0xac=1`), and
enqueue it into the scene draw-list exactly once (`FUN_003679b4` "already queued" latch +
`FUN_0033d220` submit). The WORDMARK block (+0x1A4) does one extra thing before the
enqueue: the sheen computation.

### 6.2 What each callee actually does (GPU-facing semantics, decompiled this session)

| fn | VA | what it writes |
|---|---|---|
| `FUN_003687a8` | 0x003687a8 | `return *(*(handle+0x14)+0x10)` — fetches the model's material-context pointer (`matCtx`) from its CTR render-object, used by every call below |
| `FUN_003589cc(matCtx, ch)` | 0x003589cc | `*(matCtx+ch+4) = 1` — dirty/enable flag for constant-color channel `ch` |
| `FUN_00358964(matCtx, ch, rgba)` | 0x00358964 | copies 4 words (RGBA) into `matCtx + ch*0x10 + 8` — **the actual constant-color register write**, indexed by channel `ch` (always called with `ch=5` from the draw fn) |
| `FUN_0033d200(slot, idx)` / `FUN_0033d174(slot, idx, c0..c3)` / `FUN_0033d14c(slot, idx, vec3)` | 0x0033d200/74/4c | write into a **per-index (stride 0x60) light-environment slot**: `+0xd4`=flag, `+0x88/0x98/0xa8/0xb8`=4 constant colors — **`+0x88`=light DIFFUSE, `+0x98`=light AMBIENT** (§6.6 runtime-verified: they feed CmbVShader's `LightDiffuseColor0`/`LightAmbientColor0` c81/c82 respectively; consistent with `FUN_003fa5d0` pairing `+0x88` with the material's diffuse bytes and `+0x98` with its ambient bytes — the earlier "ambient/diffuse/specular/emission" arg-order guess was WRONG), `+0xa8/+0xb8`=specular-shaped colors unused by the vertex-lit path, `+0xc8..0xd0`=a Vec3 (light **direction**). Only the wordmark block calls these, always `idx=0` |
| `FUN_003721e0(handle, mtx34)` | 0x003721e0 | copies a 3×4 matrix into `handle+0x7c..0xa8` — the model's own local placement transform |
| `FUN_0036c174(dst, A, B)` | 0x0036c174 | 3×4 affine matrix compose (`dst = B∘A`), used to build the backdrop/copyright placement matrices from a shared base |
| `FUN_003679b4` / `FUN_0036788c` | 0x003679b4 / 0x0036788c | "enqueue once" latch + scene draw-list flush (shared plumbing, not draw-content-specific) |

**Constant-color RGB is always the literal `(1.0, 1.0, 1.0)`** for all three elements
(read from the asset pool: `0x004d9904` backdrop, `0x004d9914` wordmark, `0x004d9964`
copyright — all three all-1.0f). So **the only thing this actor ever writes into
const-color-5 is the fade alpha** (`+0x1D0`/`+0x1D4`/`+0x1D8` × 1/255); the RGB channel is
a neutral pass-through. This resolves the fire-glow ambiguity flagged in
`soh3d:debug_journal/2026-07-10-title-fireglow-copyright.md`: `g_title.cmb`'s visible
orange/gold TINT does **not** come from this actor at all — it must come from a *different*
constant-color channel (not `5`) driven by `g_title_fire.cmab`'s own material-animation
player (a separate subsystem from actor 0x171, ticked when the model is loaded — out of
this actor's code entirely). The soh3d port's existing split — CMAB ConstColor→flat tint,
actor alpha field→visibility fade — is confirmed to be the functionally correct
decomposition of two genuinely separate GPU registers, not a guess that happened to work.
**Combine mode: MULTIPLICATIVE.** Const-color-5's alpha directly scales the texture's own
alpha (standard N3DS TEV constant-color modulate, same shape as N64 EnMag's prim-alpha —
already noted in §5.2); nothing here is additive.

### 6.3 `+0x1DC` ("sheen"): a rotating LIGHT DIRECTION for the wordmark's fragment light, not a mesh alpha

The wordmark block (+0x1A4) is the **only** block that touches `+0x1DC`, and it never
writes it to a color/alpha register at all. Decompiled sequence (`001da4f4.c` lines
180–197):

```c
t = *(f32*)(actor + 0x1dc) * (1.0f/255.0f);      // sheen ramp, normalized
if (t > 1.0f) t = 1.0f;                           // clamp to [0,1]  (int-compare trick on the float bit pattern)
w0 =  t*2.0f - 1.0f;                              // 2t - 1
w1 =  1.0f - t*2.0f;                              // 1 - 2t
w2 = -0.5f - t*0.5f;                              // -0.5 - 0.5t
dir = w0*basisRow0 + w1*basisRow1 + w2*basisRow2; // blend 3 rows of the SAME 3x3 camera-facing
dir = normalize(dir);                             // basis matrix used to billboard the wordmark itself
FUN_0033d200(matCtx, 0);                          // enable light-env slot 0
FUN_0033d174(matCtx, 0, diffuse, ambient, spec0, spec1); // {1,1,1,1} {0.18,0.18,0.18,1} {1,1,1,1} {0,0,0,1} — STATIC, same every frame
                                                  // (arg->slot color roles corrected per §6.6:
                                                  //  1st color = light DIFFUSE = WHITE,
                                                  //  2nd color = light AMBIENT = 0.18 exactly —
                                                  //  NOT ambient-1/diffuse-0.1834 as first guessed)
FUN_0033d14c(matCtx, 0, &dir);                    // the ONLY per-frame-animated part: light direction
```

`basisRow0/1/2` are the **same three rows** of the 3×4 matrix (`fStack_58` block, identity
rotation + local translate `(0,0,-34.0)`) that is *also* passed to `FUN_003721e0` a few
lines later to set the wordmark's own billboard placement transform — i.e. the sheen
sweep direction is expressed **in the wordmark's own camera-facing local frame**, not
world space. As `t` goes 0→1 (which happens in lockstep with the backdrop alpha ramp,
`+0x1D0`, over cs frames 466–525 per §5.3 — same 4.25/frame rate, same 60-frame window),
the light direction rotates continuously between two fixed endpoints (`t=0`: `-row0 +
row1 - 0.5·row2`; `t=1`: `row0 - row1 - row2`, both normalized) — feeding the shared
CmbVShader's vertex-lighting unit (§6.6; the material is `isVertexLighting=1`,
`isFragmentLighting=0`, so this is SOFTWARE vertex lighting, not the PICA hardware
fragment-light unit as first assumed), not a texture-combiner trick. Once
`+0x1DC` reaches 255 (end of the backdrop-fade stage) it is never touched again — not on
DISPLAY hold, not on fade-out (§5.3 already noted this) — so the light direction **freezes
at its `t=1` endpoint** for the rest of the title's life. The visual effect is a
gold specular gleam that sweeps once across the wordmark during fade-in, then holds still.

**Port implication (corrected by §6.6):** the "sheen scale" is not something to multiply
into the wordmark's alpha or add as a second draw pass — it is the light-direction
parameter of the wordmark's **vertex-lit shading term**. The faithful expression (derived
from the CmbVShader disassembly + the runtime uniform read-back, §6.6) is:

```
t   = clamp(+0x1DC/255, 0, 1)
L   = normalize(2t-1, 1-2t, -0.5-0.5t)          // object space; basis rows are identity
o1  = clamp(0.18 + max(0, dot(N, -L)), 0, 1)    // matAmb*lightAmb + max(0,N·(-L))*matDif*lightDif,
                                                //  all material colors white
px  = texel.rgb * o1                            // TEV stage0 MODULATE(PRIMARY_COLOR, TEXTURE0) x1
```

There is NO specular term: the vertex-lit CmbVShader path has no specular uniform at all
(`title_env_lighting.md` §10 — dir/diffuse/ambient per light only), so `{1,1,1,1}` in slot
`+0xa8` is dead data for this draw class. Since the letter meshes are perfectly FLAT
(all `title_logo_us.cmb` mats-0-2 normals are exactly (0,0,1)), the term shades the whole
wordmark uniformly: `0.18 + (0.5+0.5t)/|L_raw|` — 0.513 at t=0 → 0.757 at t=1, a x1.48
end-to-end swing (x1.31 over the cs470→cs588 measurement pair). This was a real gap:
`title_2d_overlay_logo.md` and the fireglow journal both assumed the sheen fed
`g_title.cmb`; it does not — it feeds the **wordmark's own light direction**.

Per-field → per-drawcall map (supersedes §5.2's `+0x1DC` row):

| actor field | consumer draw block | GPU write | combine |
|---|---|---|---|
| `+0x1D0` (backdrop alpha) | block 1 (`+0x1A8`, `g_title`) | const-color-5.a | multiplicative (× texture alpha) |
| `+0x1D4` (wordmark alpha) | block 2 (`+0x1A4`, `title_logo_us/_eu`) | const-color-5.a | multiplicative (× texture alpha) |
| `+0x1D8` (copyright alpha) | block 3 (`+0x1AC`, `copy_nintendo`) | const-color-5.a | multiplicative (× texture alpha) |
| `+0x1DC` (sheen) | block 2 ONLY (wordmark) | light-env slot 0's **direction** vector (`matCtx+0xc8..0xd0`), NOT a color/alpha register | interpolation parameter (lerp+normalize between 2 fixed endpoints), feeds a fragment-light term multiplicatively into the wordmark shading — orthogonal to `+0x1D4`'s alpha gate |

### 6.4 `ura.ctxb` — confirmed NOT part of this actor's draw at all

The task asked to flag any `ura.ctxb`/billboard-strip placement constants visible in the
draw code. **None exist here.** `FUN_001da4f4` has exactly three draw blocks
(`+0x1A8`/`+0x1A4`/`+0x1AC`) and three corresponding placement matrices, all accounted for
in §6.1 above — there is no fourth handle, no fourth `FUN_0033d220` submit, and no
reference to any `_ura` asset or a second CMAB target anywhere in this function or its
callees. This **rules out** the hypothesis (implicit in
`soh3d:debug_journal/2026-07-10-title-fireglow-copyright.md`'s "Gaps" section) that the
`ura.ctxb` billboard strip is drawn from inside the logo actor's own draw call — whatever
draws it (if it's drawn by the retail title at all — it may be dead/unused content) is a
separate subsystem, not reachable by extending this function. Do not look here for its
placement; a future session would need to find its OWN draw call from scratch (start from
`ListCallers` on whatever loads `g_title_fire_ura.cmab`, not from this actor).

**Bonus (partial) finding — the three elements' own LOCAL placement offsets**, in case
useful for the overlay's depth ordering (these are local-frame translations composed with
the shared camera basis, not screen-space fractions, so they don't replace the port's
existing oracle-measured screen-fraction placement, but they do give relative depth/offset
between the three elements in the overlay's own coordinate space):

| element | local translate (composed with the shared billboard basis) | source literal(s) |
|---|---|---|
| wordmark (`title_logo_us/_eu`) | `(0, 0, -34.0)` | `0x001da8a4` = -34.0f |
| backdrop (`g_title`) | `(0, 0, -34.0 + 0.00990)` ≈ `(0,0,-33.99)` | `0x001da8ac` = 0.0099... (tiny near-bias composed on top of the wordmark's own -34.0 base) |
| copyright (`copy_nintendo`) | `(0, -11.0, -34.0)` | `0x001da8b0` = -11.0f (composed the same way) |

i.e. backdrop sits almost exactly at the wordmark's depth (nudged a hair to avoid
z-fighting), copyright sits offset -11 local units on the same axis the port already
treats as "screen Y" (below the wordmark) — consistent with the oracle-measured screen
fractions in the fireglow journal (copyright bbox center y=0.879, well below the wordmark).

### 6.5 Anchors (this session)

- draw fn `FUN_001da4f4` fully decompiled: `build/decomp/001da4f4.c` (231 lines)
- callees newly decompiled this session: `build/decomp/003687a8.c`, `003589cc.c`,
  `00358964.c`, `0033d220.c`, `0033d200.c`, `0033d174.c`, `0033d14c.c` (matrix-compose
  `0036c174.c`, transform-set `003721e0.c`, enqueue-latch `003679b4.c`/`0036788c.c` were
  already decompiled from an earlier session, re-read this session)
- const-color RGB literals (all `1.0f`): `0x004d9904` (backdrop), `0x004d9914` (wordmark),
  `0x004d9964` (copyright)
- light-env static color-preset block (diffuse/ambient/spec0/spec1 — roles per §6.6):
  16 words at `0x004d9924` = `{1,1,1,1}` (DIFFUSE), `{0.18,0.18,0.18,1}` (AMBIENT —
  exactly `0x3E3851EC` = 0.18f, the earlier "0.1834" was a misread), `{1,1,1,1}`,
  `{0,0,0,1}` (both unused by the vertex-lit path)
- sheen-blend constants: `0x001da8d4`=2.0f, `0x001da8d8`=0.5f, `0x001da8dc`=-0.5f,
  `0x001da8b4`=1/255 (shared with the alpha scale)
- placement literals: `0x001da8a0`=0.0f (filler), `0x001da8a4`=-34.0f, `0x001da8a8`=1.0f
  (filler), `0x001da8ac`=0.00990f, `0x001da8b0`=-11.0f
- verified via cross-check against §5.3's live-captured per-frame trace (independently
  gathered, not this session) — no contradiction found: `+0x1DC` snaps to 255 in lockstep
  with `+0x1D0` exactly as the code predicts, and is never decremented on fade-out exactly
  as §5.3 already recorded

### 6.6 RESOLVED (2026-07-10, sheen-diffuse session): the slot-color ROLES verified at the GPU — diffuse is WHITE, ambient is 0.18; the full shading expression reproduces the measured ×1.40

Trigger: soh3d's discriminator measurement (soh3d `debug_journal/
2026-07-10-fade438-sheen-diffuse-analysis.md`) found the oracle's wordmark letters brighten
**×1.40** across the sheen ramp (cs470→cs588, alpha provably constant) while a first-order
"ambient=1 + 0.1834·N·L" model caps at ×1.18 — the §6.3 light-env labels had to be wrong or
incomplete. All three legs were re-derived this session:

1. **Pool bytes re-read** (`build/code.bin`, ptr `0x001da8d0` → `0x004d9924`): the four
   vec4s are `{1,1,1,1} {0.18,0.18,0.18,1} {1,1,1,1} {0,0,0,1}` — the second color is
   **0.18 exactly** (`0x3E3851EC`), not 0.1834.
2. **The shared vertex shader has no specular path and no clamp before output**
   (`/CmbVShader.shbin` @ ROM 0x320cf0, full disassembly via `tools/shbin_disasm.py`,
   re-read of `title_env_lighting.md` §10 words 76–120): the lit path is exactly
   `o1 = Σ_enabled_i [matAmb·LightAmbientColor_i + max(0, dp3(-LightDir_i, N_view))·matDif·LightDiffuseColor_i]`,
   optionally ×`vColorScale·vColor` (`HasColor` — FALSE for the letters), written raw to o1.
   Note the **negated** light dir in the dp3 (`-c80`) — a port that dots with +L gets 0 from
   `max()` on the letters' +Z normals and shows a bit-flat sheen (soh3d's exact prior bug).
3. **Runtime uniform read-back (new tooling)**: Azahar patch 5 (`soh3d
   tools/soh3d_harness/AZAHAR_PATCH.md`) logs the decoded `vs_setup.uniforms` (b5/b9/b10,
   c8/c9, c80–c88) at every `trigger_draw`; harness REPL command `vsuni_log <path>`.
   At the wordmark draw (az=1000 from `title_settled.state`):
   `hasCol=0 vLit=1 fLit=0 matDif=(1,1,1,1) matAmb=(1,1,1,0)
   dir0=(0.57735,-0.57735,-0.57735,1) dif0=(1,1,1,1) amb0=(0.18,0.18,0.18,1)`,
   lights 1/2 disabled (`dir1.w=dir2.w=0`). So **slot `+0x88` (the draw fn's 1st color,
   WHITE) feeds `LightDiffuseColor0` and slot `+0x98` (0.18) feeds `LightAmbientColor0`** —
   §6.2/§6.3's original "ambient={1,1,1,1}, diffuse={0.1834}" assignment was swapped.
   Cross-check: `FUN_003fa5d0` (hardware-lighting sibling, `title_env_lighting.md` §11)
   pairs slot `+0x88` with the CMB material's DIFFUSE bytes (+0xA8) and `+0x98` with its
   AMBIENT bytes (+0xA4) — same roles, independently.
   The light-env slot itself was also located in guest RAM (memscan for the color block;
   ctx `0x0820ca9c`, slot dir at +0xc8 = `(-0.64838,0.64838,-0.399)` at az=764 /
   `(0.57735,-0.57735,-0.57735)` at az=1000) — **bit-exact** vs `normalize(2t-1, 1-2t,
   -0.5-0.5t)` with t=17/255 resp. 1, confirming §6.3's direction formula and that no
   view-basis transform is applied to it.

**Resulting ground-truth expression** (letters, mats 0-2 — flat meshes, every normal
exactly (0,0,1), 12 tris, dumped via `soh3d tools/cmb.py`):

```
shade(t) = clamp(0.18 + max(0, dot((0,0,1), -L(t))), 0, 1)
         = 0.18 + (0.5+0.5t)/‖(2t-1, 1-2t, -0.5-0.5t)‖
pixel    = texel.rgb · shade(t)        (TEV MODULATE ×1; alpha unaffected by the sheen)
```

Predicted cs470→cs588 factor: shade(t=17/255)=0.579 → shade(t=1)=0.757 = **×1.308**,
vs the oracle-measured ×1.40 (baseline mask) / ×1.38 (strict letter-core mask) — within
the ±0.1 acceptance bar of the strict measure; the small residual is consistent with the
fire-glow overlay (which ramps over the SAME cs466–525 window) bleeding into the letter
mask via antialiasing/letter-texture alpha, i.e. not part of the letter shading term.

Anchors: `soh3d scratch/decomp_agent/{vsuni_capture2.py, slot_dump2.py, predict_factor.py,
dump_combiner.py}`; harness `vsuni_log` command (committed, soh3d `tools/soh3d_harness/`);
Azahar-side hunk documented in `AZAHAR_PATCH.md` Patch 5 (Azahar tree is gitignored).

## 7. RESOLVED (2026-07-10): the press-START skip path, traced through `FUN_001da9f8`

`FUN_001da9f8` (the actor's update fn, already anchored in §5.1) fully decompiled
(`build/decomp/001da9f8.c`, 300 lines) and traced end to end. Static only, this session.

### 7.1 Detection: a "confirm pressed" byte read once per frame while gated

Once the fade-in delay timer (`+0x1C0`) reaches 0 and the "seen" latch (`+0x1C2`) is still
0, and `globalState` (`+0x1C8`) is ≥ 2 (DISPLAY or later), the update fn reads
`*(byte*)(inputCtx + 8)` every frame, where `inputCtx = *piRam001dad08` (a fixed global
pointer, not traced further this session — static RE budget went to the composite
mechanism instead; functionally it behaves exactly like a per-frame "confirm/START pressed
this frame" latch read from a title-menu input-polling struct). This is the actual
"press-START" detection; it is NOT gated on any specific button code visible in this
function (the byte is pre-resolved elsewhere), so it may key off START **or** A/confirm —
not distinguished at this call site.

### 7.2 State fan-out on press: which target state depends on WHEN you pressed

```c
if (*(char*)(inputCtx + 8) != 0) {                 // "confirm" pressed this frame
    if (play->field_0x5c2d != 0x14) {               // guard: only fire the transition once
        FUN_0033d13c(0);
        FUN_0037547c(...);                          // some cs/audio side-effect (not traced further)
    }
    switch (globalState) {                          // +0x1C8
        case 2: case 5:                              // DISPLAY, or already-DONE
            *(s16*)(actor+0x1c0) = 25;                // delay 25 frames before the real skip
            *(s16*)(actor+0x1c8) = 4;                 // → globalState 4 = "press-START, pending"
            break;
        case 3:                                       // FADE_OUT already running (cs-driven, natural)
            *(s16*)(actor+0x1c0) = 25;
            *(s16*)(actor+0x1c8) = 6;                 // → globalState 6 = "press-START during fade-out, accelerate"
            break;
    }
    *(s16*)(actor+0x1c2) = 1;                          // latch: don't re-detect the press again
}
```

So the skip is **not instant** — it always inserts a **25-frame (`0x19`) grace delay**
(`+0x1C0`) before anything visible happens, regardless of whether you pressed during
DISPLAY or during an already-running cs fade-out. This matches §5.2's existing row
`"+0x1CC = fade-out step = 10 (set in init; press-START path overrides to 25)"` — 25 is
used for BOTH the grace-delay timer AND (later) the accelerated fade rate; they share the
same literal but are two different uses of it.

### 7.3 After the 25-frame delay (globalState 4 → 3): the actor MANUALLY fires the scene transition

```c
if (globalState == 4) {
    if (actor->0x1c0 > 0) return;                     // still counting down the 25-frame grace delay
    if (play->0x5c2d != 0x14) {                        // guard: only if the transition wasn't already requested
        play->0x4e4  = 2;                              // (context field, not traced further — a request-kind tag)
        play->0x5c2d = 0x14;                            // *** the scene-transition trigger ***
        play->0x5c76 = 2;                               // (paired flag, likely "which transition variant")
    }
    actor->0x1ca = 15;                                  // 0xf  (repurposed; unused by state 3's own ramp — see 7.4)
    actor->0x1cc = 25;                                  // 0x19 — accelerated fade-out RATE (vs default 10)
    globalState  = 3;                                    // → normal FADE_OUT state, but now running at 25/frame
}
```

**This is the key finding**: under the *normal* (un-skipped) flow, `play->0x5c2d = 0x14`
is **never written by this actor at all** — the natural fade-out (`globalState` 2→3 via
`Flags_GetEnv(play,4)`, `LAB_001daff8`'s else-branch) does not touch `play+0x5C2D`; that
trigger is presumably set by the title cutscene's own scripted end-of-cs command instead.
The press-START path has to **manufacture that same trigger itself**, because the player
is cutting the cutscene short before it would naturally reach that point. The `!= 0x14`
guard on both this site and the `globalState==6` site exists specifically so a
double-press (or a press landing during an already-fired transition) doesn't refire it.

`+0x1CA` being set to 15 here is real but **currently unused downstream** — state 3's own
fade-out block (`FUN_001da9f8` lines ~172–209, already documented in §5.3) reads only
`+0x1CC` for its per-frame decrement, never `+0x1CA`. This write is either dead code, or
defensive pre-staging for a path this static trace didn't find a consumer for (candidate:
if `+0x1CA` is re-read by a DIFFERENT function this actor doesn't own, e.g. a shared
title-transition helper — not chased further, flagging rather than guessing).

### 7.4 The accelerated fade-out itself: same ramp code, faster rate, one guard difference

Both `globalState==3` (normal cs fade-out, and now ALSO the post-press-START path once it
reaches this state) and `globalState==6` (press-START **during** an already-running
cs fade-out) execute the **same three-alpha decrement block** already documented in §5.3
(`+0x1D0`/`+0x1D4`/`+0x1D8` each `-= (float)(s16)+0x1CC` per frame, floored at 0, all in
lockstep) — the only difference is the per-frame rate baked into `+0x1CC` (10 normal /
25 accelerated) and that state 6 re-checks and re-fires the `play+0x5C2D` transition guard
one more time (belt-and-suspenders, in case state 6 was entered directly from DISPLAY-press
without ever passing through state 4 — it can, per §7.2's case 3 branch). Once all three
alphas hit 0 (and, for state 3 only, the delay timer `+0x1C0` is also 0), `globalState`
becomes 5 (DONE) and — for state 3, if the transition wasn't already fired — the same
`play->0x4e4=2 / 0x5c2d=0x14 / 0x5c76=2` triple is written one final time as a safety net.

### 7.5 Timing summary (30 fps cs-frame ticks, all counts confirmed from `0018cbb8.c`/`001da9f8.c` literals)

| trigger | delay before transition fires | fade-out rate | total frames alpha→0 (from 255) |
|---|---|---|---|
| natural cs end (`Flags_GetEnv(play,4)`) | 0 (transition presumably fired by the cs script itself, not this actor) | 10/frame (default, `+0x1CC` init value) | 26 (§5.3, already measured live) |
| press START during DISPLAY/DONE | **25 frames** (`+0x1C0`) before `play+0x5C2D=0x14` fires, THEN fade begins | 25/frame (override) | 11 (255/25, ceil) |
| press START during an already-running cs fade-out | **25 frames** before transition (re-)fires (if not already), THEN remaining alpha continues down at 25/frame | 25/frame (override) | up to 11 from wherever the cs fade had already reached |

So the full skip latency from button-press to scene-transition-request is **25 frames
(~0.83s at 30fps)** in every case, followed by an ~11-frame (~0.37s) fast fade-to-black —
noticeably snappier than the natural ~26-frame cs-driven fade, but not instant. **Port
target:** on confirm-press during DISPLAY, start a 25-frame timer; at timer-end, request
the same scene transition the natural cs end would request and switch the alpha ramp to
-25.0f/frame (was already fading at -10.0f/frame if the press happened during a natural
fade-out already in progress).

### 7.6 Anchors (this session)

- update fn fully decompiled: `build/decomp/001da9f8.c` (300 lines)
- press-detect read: `*(byte*)(*piRam001dad08 + 8)`, gated on `globalState>=2 && delay==0 &&
  seenLatch==0`
- state fan-out: DISPLAY(2)/DONE(5) → state 4; FADE_OUT-cs(3) → state 6; both set
  `+0x1C0=25(0x19)`, latch `+0x1C2=1`
- transition trigger fields: `play+0x5C2D=0x14` (main trigger, guarded by `!=0x14` check),
  paired writes `play+0x4E4=2`, `play+0x5C76=2` — field names not resolved this session
  (no cross-reference to a named `PlayState`/`GlobalContext` struct layout attempted;
  flagging as future work if the port needs the exact semantics of `0x4E4`/`0x5C76`)
- rate override site: `+0x1CA=15` (unused downstream, flagged not guessed), `+0x1CC=25`
  written at the state-4→3 transition (`FUN_001da9f8` ~L110-117)
- default rate (`+0x1CC=10`, `+0x1CA=6`): confirmed still in init `FUN_0018cbb8`
  (`build/decomp/0018cbb8.c` L86-87), matches §5.1/§5.3's existing citation
- also noted in init (not part of the task, flagging for completeness): a SEPARATE
  "already seen title, resume at file-select" cold-start path (`0018cbb8.c` L102-126,
  gated on `*(char*)(iRam0018cf14+0x576)`) that snaps straight to `globalState=2` (DISPLAY)
  with all alphas already at full — likely the "returning from file-select via B" case, NOT
  the press-START skip; not traced further, out of this task's scope

## 8. Session 2026-07-10 (decomp stream): reconciling §5.3's live-verified timing against soh3d's oracle-vs-SoH glow-wash discrepancy

soh3d's `2026-07-10-fireglow-combiner-and-terrain-decomposition.md` measured a gold-hue pixel
count in the logo box (x[110,300] y[40,190]) at three Az/SoH frame pairs and reported: at
az=730 (labeled "cs≈453"), the oracle already shows a full gold-hue wash (3982 matching px) while
SoH's port (driving `g_title.cmb`'s alpha from `+0x1D0`, per §5.3/§6) shows only 169 — read there
as "SoH's glow hasn't started". Since §5.3/§6 are now both **live-verified** (not just
decompiled — §5.5's anchors record a live trace, `soh3d:scratch/decomp_stream/fields/trace.log`,
that confirmed every ramp/snap/timing number), this session re-derived the cs-frame mapping to
check whether the discrepancy is a real staging bug or a measurement confound.

### 8.1 cs-frame conversion, reconstructed from the port's own three matched pairs

The port session's `fireglow_ab.py` table gives three (az, cs)-labeled pairs: (700,438) is cited
verbatim in `title_env_lighting.md` §7 as a confirmed "cs-frame-EXACT" match; solving
`cs = (az + k)/2` for that pair gives `k = 2*438 - 700 = 176`. Applying `cs=(az+176)/2` to the
other two rows in the same table reproduces their labels exactly: az=936 → (936+176)/2 = **556**
(table says 556); az=1100 → (1100+176)/2 = **638** (table says 638). Applying it to the az=730 row:
`(730+176)/2 = 453` — matches the task's own "cs≈453" label. **So the conversion is internally
consistent and correct**: az=730 really does correspond to `csCtx.curFrame` **453**.

### 8.2 cs=453 falls inside the WORDMARK's alpha ramp (cf385-465), squarely BEFORE the glow mesh's ramp (cf466-525)

Per §5.3's fade-in table (decompiled AND live-measured):

| phase | cs-frame range | what ramps |
|---|---|---|
| 2 | 385–465 | wordmark alpha `+0x1D4` (title_logo_us.cmb), +3.0/frame |
| 3 | 466–525 | backdrop/glow alpha `+0x1D0` (**g_title.cmb**, the fire-glow mesh) + sheen `+0x1DC`, +4.25/frame |

`cs=453` is **68 frames into the 81-frame wordmark ramp** (≈84% wordmark alpha, `+0x1D4 ≈ 204/255`)
and **13 frames BEFORE** the glow-mesh ramp even starts. Per §6.2's confirmed GPU wiring
(`g_title.cmb`'s composite alpha = `constColor5.a` = `+0x1D0/255`, driving the additive blend
factor `srcAlpha*src + 1*dst` directly — alpha=0 means the additive term contributes literally
nothing to the framebuffer regardless of the flame texture's RGB content), **the glow mesh must be
fully invisible on a correctly-running 3DS at cs=453, exactly as SoH shows.** This is not a
"maybe" — §5.3's numbers were independently confirmed by a live memory trace on the harness in the
same investigation arc, not just by static decompile, so there is no live/decomp discrepancy to
resolve on THIS side.

### 8.3 The likely explanation: `fireglow_ab.py`'s gold-hue mask is picking up the WORDMARK, not the glow mesh

`zelda_mag.zar` contains exactly 4 relevant CMB assets (`title_2d_overlay_logo.md` §1):
`g_title.cmb` (the flame/glow mesh, idx0), `copy_nintendo.cmb` (idx1), and
`title_logo_us.cmb`/`title_logo_jpeu.cmb` (idx2/3, the wordmark). At cs=453, only the WORDMARK
(idx2/3) has nonzero alpha in the logo box — the glow mesh (idx0) and copyright (idx1) are both
still at alpha=0 (copyright's ramp, cf526-568, hasn't even started). The "Legend of Zelda: Ocarina
of Time 3D" wordmark is itself rendered in a gold/bronze gradient (well-established from the
retail title screen's visual identity), so a screen-region gold-hue classifier (soh3d's mask:
`R>60, 0.3R<G<0.9R, B<R/2`) applied to the *whole* logo box cannot distinguish "additive flame
glow" pixels from "wordmark text that happens to also be gold-colored" pixels — both live in the
same box and match the same RGB heuristic. **The most likely read of the az=730/cs=453 data point
is that the oracle's "full glow wash" is actually its (correctly-timed, ~84%-alpha) wordmark
render, not a prematurely-visible flame glow** — i.e. this is a measurement confound in the mask,
not a staging bug in `+0x1D0`'s gate.

This reframes, rather than contradicts, the port session's own honest secondary note: it already
recorded that SoH's contribution at this frame is "169 stray px = wordmark edge pixels, zero glow
contribution" — i.e. the port's own measurement already shows the wordmark (not the glow) is the
thing present in-frame at this timestamp on the SoH side too. The oracle showing ~23x more gold-hue
px in the same box, at a moment when only the wordmark should differ between the two renders
(since the glow mesh is 0-alpha on both, by the live-verified ramp), points at a **wordmark
rendering gap** (texture/tint/coverage — plausibly the still-unported specular sheen light-sweep
from §6.3, or a texture-decode/tint difference on `title_logo_us.cmb` itself), not at the fire-glow
staging mechanism documented in §5-§7.

### 8.4 What this does and doesn't settle

- **Not falsified**: §5.2/§5.3/§6's field-to-draw-block mapping and cf-window numbers for
  `g_title.cmb`'s alpha (`+0x1D0`, cf466-525) — those stand, now cross-checked against a third,
  independent line of evidence (this session's cs-frame reconstruction) with no contradiction.
- **Falsified**: the *reading* of the az=730/cs=453 data point as "the oracle's glow starts
  earlier than SoH's" — under the live-verified timing, neither engine's flame-glow mesh should be
  visible yet at that frame; the observed gap is much better explained by the wordmark.
- **Open, and now correctly scoped**: whether SoH's wordmark (`title_logo_us.cmb`) render at
  matching alpha actually reproduces the oracle's gold coverage/intensity. This is a port-side,
  runtime-observable question (mask the wordmark's own bbox specifically, or diff two SoH renders
  with the glow mesh's draw forcibly suppressed vs not) — not something this static-RE session can
  settle further; handing back to the port/harness stream with this specific, falsifiable
  redirection instead of the original "fix the glow's alpha gate" framing.
- The az=936/1100 (cs=556/638) rows in the same table DO fall inside or after the glow ramp window
  (556 is in DISPLAY, past cf525; 638 likewise) — those two rows are legitimately measuring the
  glow mesh (plus wordmark, plus copyright, all now non-zero-alpha) and their reported "SoH ~0.8x
  intensity / ~45% coverage of Az" residual is NOT explained by this session's finding; that part
  of the port's report should still be treated as a live open item (combiner RGB/coverage gap),
  separate from the az=730 data point this section reconciles.

### Anchors (this session)

- cs-frame formula reconstructed from the port's own table: `cs = (az + 176) / 2`; verified exact
  against all 3 rows of `soh3d:tools/fireglow_ab.py`'s A/B table (700→438 given, 936→556 and
  1100→638 independently reproduced).
- `title_2d_overlay_logo.md` §1's asset inventory (4 CMBs in `zelda_mag.zar`) cross-referenced
  against §5.2's per-field asset-idx table to confirm block1/`+0x1A8`/idx0 is unambiguously
  `g_title.cmb` (the flame/glow mesh itself, not a separate plain backdrop card).
- No new decompilation or live probing this session — this section is a cross-check/reconciliation
  of already-decompiled-and-live-verified §5-§7 material against the port's fresh measurement,
  per the task's static-RE scope.
