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
