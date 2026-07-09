# OoT3D title screen — gamestate, per-frame driver, and logo/fade phase timing

Consolidated synthesis (2026-07-08) of the title-screen decomp arc for the SoH3D
TitlePresentation port. Ties together `title_gamestate.md` (superseded),
`title_gamestate_v2.md`, `graph_thread_and_state_dispatch.md`,
`cutscene_format.md`, and `title_2d_overlay_logo.md` into one reference, and
adds new decomp for item 3 (logo/fade phase timing) below.

## 1. The gamestate question — RESOLVED: title IS a Play state

Two prior findings looked contradictory:

- `title_gamestate.md` (2026-07-03): "`gPlayState @ 0x0050AF34` stays 0
  throughout title → title is NOT a Play gamestate."
- A rider-RE note (memory `soh3d-oot3d-title-not-play`) claiming the opposite:
  a real Play state runs `Player_Update`/`Actor_UpdateAll` with a mounted
  Player+Epona.

**The rider note was right; the `gPlayState`-is-zero observation was a red
herring from reading the wrong global.** `title_gamestate_v2.md` (2026-07-04)
found OoT3D uses **two separate globals**:

| VA | Meaning | Value at title |
|----|---------|-----------------|
| `0x0050AF34` | legacy/UI-subsystem slot — inline title-UI context, NOT gPlayState | `0` always |
| `0x00539F98` | live `play + 0x14` pointer, installed by `Play_Main` every frame | `0x0871E854` (non-zero) |

`0x0050AF34` genuinely holds a separate UI-subsystem struct (sprite-factory
sub-objects for the title HUD, `sceneNum`-hint at `+0x6c`, `active` flag at
`+0x78` — see `title_gamestate_v2.md` field map) that runs **alongside** the
real Play state. It was mistaken for `gPlayState` because it happens to sit at
the address the N64-shaped struct dump was probing. The actual PlayState
instance lives at the fixed heap slot **`0x0871E840`**, and its `main` fn
ptr (`play+0x04`) is the decompiled **`Play_Main`** (`FUN_0045238c`,
524 bytes):

```c
// FUN_0045238c = Play_Main(PlayState* play)
void Play_Main(int play) {
    *(int*)(0x00539F98) = play + 0x14;   // installs the live "current play" global
    // ... scene delayed-effect list (play+0x43dc, postFxCount) ...
    FUN_002e4514(play);                   // early tick
    FUN_002e2e60(play);                   // Actor_UpdateAll (5372 bytes)
    FUN_002e25f0(play);                   // post-actor tick
}
```

`Actor_UpdateAll` (`FUN_002e2e60`) → per-actor dispatch (`FUN_00461324`) →
`actor->update` fn ptr → for Player, `FUN_001e1b54` = `Player_Update` →
`FUN_00250ad0` = `Player_UpdateCommon` (10020 bytes, the giant Player state
machine) → down through actor sub-functions to the SkelAnime pose writer
(`FUN_002bb34c`) that populates the live limb-transform table. Full call
chain traced live via stack-window resolution in `title_gamestate_v2.md`
("Full boot → title-demo call chain").

**Conclusion: title-demo is a completely ordinary `Play_Main` tick.** There is
no bespoke "opening/title-mode Main" — `Play_Init` (`FUN_00449420`, at
`.rodata` state-init table slot `0x00435624`) special-cases **`sceneNum ==
0x51`** at three sites to steer the title-demo setup, then installs the same
`Play_Main` used for every other scene. `0x51` is the **boot-time hint value**
that triggers the title-demo branch inside `Play_Init` — it is NOT the scene
that ends up running. Confirmed live: `play+0x104` (sceneNum field; N64 has
this at `play+0xA4`, 3DS moved it to `+0x104`) reads **`0x6b`** once title has
settled, not `0x51`.

### Which scene is `0x6b`, concretely

A later, more precise probe (`cutscene_format.md`, 2026-07-07) pinned the
*actual loaded ZSI* by direct live-memory read: `/scene/spot99_info.zsi` (VA
`0x0877AA20`) and `/scene/spot99_0_info.zsi` (VA `0x088C7070`), byte-verified
against the ROM files. **Neither `spot00` ZSI is loaded at title.** So `0x6b`
is spot99's own internal scene-number slot value, and `spot99` — a
Grezzo-added, OoT3D-only scene distinct from N64's `spot00` (Hyrule Field) —
is the real title-demo scene. (This falsifies the assumption in the earlier
`PLAN-title-scripted-port.md` that title runs on `scene 0x51 = spot00`; keep
that plan's *strategy* — port the OoT3D-format cutscene interpreter rather
than translate bytes — but retarget every "spot00" reference in it to
`spot99`.)

## 2. The per-frame driver — Graph_ThreadEntry → GameState_Update → Play_Main → cs interpreter

Fully solved in `graph_thread_and_state_dispatch.md`. The single "tick" that
orchestrates everything, top-down:

```
FUN_00416208   Graph_ThreadEntry (644B) — boot loop, one GameState at a time:
    gs = FUN_0035010c(state_desc)      // heap-alloc GameState from the 9-slot
                                        // gGameStateOverlayTable @ 0x00531af4
                                        // (stride 0x34: main/destroy/nextStateId/
                                        // initFn/size/../initFlag)
    FUN_00416f60(gs, state_desc->initFn, &frame_ctx)   // e.g. Play_Init
    while (gs->exit == 0) {
        FUN_00417014(gs);              // GameState_Update: (*gs->main)(gs); gs->frames++
        FUN_00418b88(...);             // render pass
        FUN_0031bebc/bd30/bb84(...);   // present/swap
    }
    // pick next state_desc from gs->exitVal, loop
```

`FUN_00417014` = `GameState_Update` is the literal "tick": it calls
`gs->main` (== `Play_Main` once Play_Init has run) and increments
`gs->frames` (`play+0xf8`). Play_Main's body is item 1 above. So the
orchestration for EVERYTHING at title (camera, dayTime, actors/rider, sky,
2D logo/fade) funnels through **one** call site: `Play_Main`'s
`Actor_UpdateAll`, which ticks every live actor's `update` fn once per
`GameState_Update` call.

**The cutscene cursor** that actually drives camera + actor motion + env cues
is a *second* layer inside that tick, not a separate loop: `csCtx` at
`play + 0x2298` is advanced by the cutscene interpreter
**`FUN_002c5ba0(play, csCtx, script)`** (verified live: harness watchpoint on
the csCtx `endFrame` store fired at `pc = 0x002c5c20`). This is presumably
invoked once per `Play_Main` tick for the currently-running cutscene (call
site not re-traced this session — the existing RE reached the interpreter
via a csCtx-field watchpoint, not a static caller walk; that caller-walk is
a small open item, see §4).

### Cutscene script format (" BDQ") — what the interpreter drives

Full opcode map + struct layout in `cutscene_format.md`; summary of what it
orchestrates each cutscene frame:

- **csCtx fields** (`play+0x2298`): `+0x20` curFrame (u16, the master cursor),
  `+0x18` endFrame, `+0x24` subcam id, `+0x84` camera segment idx, `+0x88`
  parsed camera-blob ctx, `+0x94` evaluated camera pose (fed to the camera via
  `FUN_0033cb1c`, which stores the pointer at `camera+0x16C`), `+0x40..+0x6C`
  per-channel actor-cue current-entry pointers.
- **Opcode 0x97 ("ccb" camera spline)** — the flyover: parsed by
  `FUN_00494600`, segment picked by absolute-frame range via `FUN_0032b69c`,
  evaluated per-frame by `FUN_0033cb90` (keyframe curves, shared evaluator
  `FUN_003087a4`: linear/hermite/step tracks for eye/at/roll/fov), applied by
  `FUN_0033cb1c`. Verified **exact** against Az's live title camera
  (`|Δeye| = 0.00` at 8 sampled frames).
- **Opcode 0x0A family (player-cue channels, sub-ops 0x40/0x41/0x24)** — the
  Link/Epona ride cues (per-actor motion segments), landing in the
  `+0x40..+0x6C` channel slots.
- **Opcode 3 (misc)** — generic per-frame trigger dispatch (see §3: this is
  where the logo fade-in/fade-out triggers live).
- **Opcode 0x8C (set-time)** — env/day-time advance cue (12B records: `u16 ?,
  u16 frame, u16 ?, u8 hour, u8 min`); title cs sets 04:00.
- **Opcode 0x7C (transition/fade)** — the loop-boundary fade (title cs:
  frame 2310–2460, straddling the destination/loop point).
- **Opcode 0x3E8 (destination)** — the loop-restart marker (title cs @
  frame 2400 = end_frame).

### Title cs instance

Byte-identical `" BDQ"` script embedded at **`spot99_info.zsi + 0x3528`**
(live VA `0x0877DF48`), `cmd_count=13`, `end_frame=2400` (~~40 s loop @
60 fps~~ — see correction below; the same script is also duplicated at
`spot00_info.zsi + 0x203b8`, but spot00 is not the scene that loads at title; see §1).

**Correction (2026-07-09, SoH3D port session) — the cs cursor advances at 0.5 frames per
`retro_run()` tick, not 1: the loop is ~80s of real 3DS time, not 40s.** The "60 fps" figure
above was an unverified assumption. Directly measured via Azahar (title cs's `csCtx`-driven
live camera-eye position at `0x005BE6D4`, inverted against the byte-exact-verified OP97
spline table across az_step 0..600): **az_cs(az_step) = 88 + 0.5 · az_step** — the cs cursor
ticks exactly once per TWO `retro_run()` calls (residual <0.1 world units at every sampled
point — an exact fit, not approximate). So the 2400-frame loop is 2400 cs-ticks at an
effective 30 fps under Azahar's 60Hz-clocked `retro_run()` cadence, i.e. **~80s real time**,
not the 40s the table below assumes. This doesn't change any of the frame NUMBERS in this
doc (345/1930/2310–2460/2400 are all still correct cs-frame values, unaffected) — only the
real-time duration each one corresponds to. See `<soh3d>/debug_journal/
2026-07-09-title-cs-phase-sync.md` for the full derivation and the SoH3D-side fix this
enabled (SoH's ported cursor was wrongly running at the naive 1:1 rate, i.e. 2x too fast).

## 3. Logo/fade phase timing — NEW this session

`title_2d_overlay_logo.md` flagged this as the confirmed open gap: "RE (or
re-derive)... exactly which title-cs frame range shows the logo phase vs. the
pure-demo phase vs. eventual PRESS START." That doc established the *assets*
(`title_logo_us.cmb` + `title_logo_us.csab`, `g_title.cmb` +
`g_title_fire[.ura].cmab`, `copy_nintendo.cmb`) but not the *timing*. This
session closes the trigger-frame half of that gap via the cutscene
interpreter's misc-opcode dispatch.

### The N64 Rosetta stone: Flags_GetEnv(3)/(4) gate the logo state machine

N64's `En_Mag_Update` (`Shipwright/soh/src/overlays/actors/ovl_En_Mag/z_en_mag.c`,
lines 319–328) gates its `MAG_STATE_INITIAL → MAG_STATE_FADE_IN` and
`MAG_STATE_DISPLAY → MAG_STATE_FADE_OUT` transitions on exactly two
scene/cutscene environment flags:

```c
if (this->globalState == MAG_STATE_INITIAL) {
    if (Flags_GetEnv(play, 3)) { ...; this->globalState = MAG_STATE_FADE_IN; }
} else if (this->globalState == MAG_STATE_DISPLAY) {
    if (Flags_GetEnv(play, 4)) { this->globalState = MAG_STATE_FADE_OUT; }
}
```

i.e. env-flag **3** = "start the logo fade-in", env-flag **4** = "start the
logo fade-out". These are the classic N64 cutscene misc-command flags (a cs
"misc" entry of type N sets `Flags_SetEnv(play, N)` for small N).

### OoT3D cs interpreter: the SAME two flags, set by the SAME misc-opcode shape

Decompiled this session (`build/decomp/002c5ba0.c`, misc-opcode `case 3`
sub-switch on the per-entry type field `uVar18`, lines ~743–748):

```c
case 0x1e:
    FUN_00366704(param_1,3);
    break;
case 0x1f:
    FUN_00366704(param_1,4);
    break;
```

And `FUN_00366704` (`build/decomp/00366704.c`, 52 bytes), decompiled this
session:

```c
void FUN_00366704(int param_1,int param_2)
{
  param_1 = param_1 + ((int)(param_2 + ((uint)(param_2 >> 0x1f) >> 0x1c)) >> 4) * 2;
  *(ushort *)(param_1 + 0x5f98) =
       (ushort)(1 << (param_2 % 0x10 & 0xffU)) | *(ushort *)(param_1 + 0x5f98);
}
```

This is byte-for-byte the standard `Flags_SetEnv(play, flag)` shape: a `u16`
bitfield array at **`play + 0x5f98`**, indexed by `flag >> 4`, bit `flag &
0xf` set. (A sibling, `FUN_003667b0` at `build/decomp/003667b0.c`, does the
inverse AND-NOT — i.e. `Flags_UnsetEnv` — confirming the array shape rather
than a coincidental match.) So **misc-opcode type `0x1e` = `Flags_SetEnv(play,
3)`** and **type `0x1f` = `Flags_SetEnv(play, 4)`** — the *exact same* flag
numbers N64's `En_Mag_Update` polls for fade-in/fade-out. This is strong,
structural (not asset-coincidental) evidence that OoT3D kept the N64
env-flag-driven trigger mechanism for the title logo, even though the visual
asset pipeline changed (3D animated `title_logo_us.cmb`/`.csab` + CMAB
material anims, vs. N64's raw sprite-alpha ramps).

**Caveat (honest scope):** I did not this session locate OoT3D's own
En_Mag-equivalent actor / its `Update` function to directly show it reading
`Flags_GetEnv(play,3)`/`(4)` from this same array — actor ids are stripped in
the 3DS overlay table (`actor_layout.md`: "OoT3D uses its own id space"), so
finding it requires either a live-oracle actor-list walk (cross-referencing
`objBankIndex` against the object that resolves to `zelda_mag.zar`) or a
disassembly sweep for `ldr`+add-shift reads of `+0x5f98` (Ghidra's static
reference DB doesn't surface register-computed offsets). Neither was run this
session (out of scope per the task brief: no soh3d build, no harness
session). The claim above rests on the **cs-side write**, which is solid;
the **actor-side read** is inferred by structural analogy to N64, not yet
independently confirmed on the 3DS binary. Flag this open item for whoever
extends this decomp next (§4).

### Resulting phase windows (title cs, 2400-frame / ~80s loop at the cs cursor's real
0.5-frame-per-`retro_run()`-tick rate — see the 2026-07-09 correction above; times below
recomputed at that rate, cs FRAME numbers unchanged from the original table)

| cs frame | real time | event |
|---|---|---|
| 0 | 0.0 s | loop start — pure flyover, no logo/UI overlay (matches the "shot 1" sample used to justify SoH3D task #15 — that shot falls before frame 345) |
| **345** | **11.5 s** | misc `0x1e` fires → `Flags_SetEnv(play,3)` → (by N64 analogy) logo enters FADE_IN: `title_logo_us.cmb`/`.csab` assembly animation + `g_title_fire[.ura].cmab` flame fade-in begin |
| 1345 (345+1000, if title_logo_us.csab's 120-frame duration is doubled to cs-cursor ticks — see caveat below) | ~ mid-hold | logo settled, full-alpha hold (by N64 analogy: `MAG_STATE_DISPLAY`) |
| **1930** | **64.3 s** | misc `0x1f` fires → `Flags_SetEnv(play,4)` → logo enters FADE_OUT |
| 2310–2460 | 77.0–82.0 s | opcode `0x7c` transition/fade window (screen-level fade, overlapping the loop boundary) |
| 2400 | 80.0 s | opcode `0x3e8` destination — loop restarts at frame 0 |

The middle row is a rough bound, not a decomp fact: `title_logo_us.csab` is
120 frames / 13 tracks (`docs/csab_catalog.md`), and if CSAB plays at a
30 fps native rate against a 60 fps cs cursor that's ~4 s (240 cs-frames) of
assembly animation after the fade-in trigger — but the CSAB-to-cs-frame rate
ratio was **not verified this session** (would need a live watch on the
CSAB's own play-position field during title, which is harness/live-oracle
work, out of scope here). Treat everything except the 345/1930/2310–2460/2400
frame numbers (which come directly from the decompiled opcode stream, not
inference) as a plausibility estimate.

### What this gives the SoH3D port (§5 of `title_2d_overlay_logo.md`, updated)

The port's "Timing/sequencing" TODO can now be driven by **two concrete cs
frames** instead of asset-duration guesswork: gate
`Zelda3D`'s ported 2D-overlay draw path (logo/bg-card/fire-glow/copyright) on
the SAME misc-opcode trigger frames the OoT3D cs script already carries —
frame 345 (fade-in) and frame 1930 (fade-out) — rather than re-deriving them
from CSAB length or hand-tuning against a screenshot. If the port's cutscene
interpreter (Phase 3 of `PLAN-title-scripted-port.md`, retargeted to
`spot99`) implements opcode 3/type 0x1e/0x1f as `Flags_SetEnv`, the existing
env-flag-gated logo code path (already present, N64-derived, in
`EnMag_Update`) becomes the CORRECT structural fit for driving the 3DS-asset
overlay too — this is a case where the state-machine SHAPE ports even though
the drawn assets and their alpha-ramp constants must be re-derived from the
CSAB/CMAB curves per `title_2d_overlay_logo.md` §5.1.

## 4. Open items for the next session

1. ~~**Locate OoT3D's En_Mag-equivalent actor and its Update fn**~~ — **ANSWERED
   IN THE NEGATIVE**, see `title_logo_actor.md` §3: there is no conventional
   Actor here at all; the title 2D overlay is a dedicated non-Actor subsystem
   (`FUN_0046ac98`'s init struct at `0x0050AF34`). The read-side confirmation
   of `Flags_GetEnv(play,3)`/`(4)` from `play+0x5f98` is still open, but is now
   correctly scoped to "this subsystem's per-frame tick", not "an Actor's
   Update" — `title_logo_actor.md` §4.2 (2026-07-09) records two more static
   dead ends (global-pointer xref scan on `0x0050AF34` found only 2 unrelated
   refs; a sibling-function-address sweep near `Flags_SetEnv`/`Flags_UnsetEnv`
   found no `Flags_GetEnv`-shaped neighbor). Also newly confirmed there (§4.1):
   `title_logo_us.cmb`'s wordmark materials and `copy_nintendo.cmb`'s material
   have alpha-blend GPU state enabled but a compile-time-constant alpha=1.0
   with no CMAB/keyframe track anywhere — so the fade constant is NOT
   recoverable from ROM assets, only from the (still unlocated) per-frame code
   path or a live harness read. Next static option, not yet tried: a
   Ghidra pattern/FunctionID search for the raw bit-test-and-mask instruction
   shape anywhere in the binary (not just near the known SetEnv/UnsetEnv
   address neighborhood).
2. **Find the static call site of `FUN_002c5ba0`** (the cs interpreter) inside
   `Play_Main`'s body or a sub-call, to confirm it's invoked once per
   `GameState_Update` tick rather than at some other cadence (currently only
   reached via a csCtx-field watchpoint, not a call-graph walk).
3. **Verify the CSAB-to-cs-frame rate ratio** (30 fps CSAB vs 60 fps cs
   cursor, assumed above) via a live watch on the logo's own anim-position
   field during title — needed to firm up the "mid-hold" timestamp in §3's
   table.
4. `FUN_00415fe4` (thread main entry, upstream of `Graph_ThreadEntry`) is
   still unnamed/partial per `graph_thread_and_state_dispatch.md` — minor,
   doesn't block the driver picture, but worth closing for completeness.

## Anchors (verified this session unless marked prior)

- `Play_Main` = `FUN_0045238c` @ `0x0045238c` (prior RE)
- `Play_Init` = `FUN_00449420` @ `0x00449420` (prior RE)
- `Graph_ThreadEntry` = `FUN_00416208` @ `0x00416208` (prior RE)
- `GameState_Update` = `FUN_00417014` @ `0x00417014` (prior RE)
- cutscene interpreter `FUN_002c5ba0` @ `0x002c5ba0` (prior RE)
- **`Flags_SetEnv`-equivalent `FUN_00366704` @ `0x00366704`** (decompiled this
  session, `build/decomp/00366704.c`)
- **`Flags_UnsetEnv`-equivalent `FUN_003667b0` @ `0x003667b0`** (decompiled
  this session, `build/decomp/003667b0.c`, confirms the bitfield shape)
- envFlags bitfield array: **`play + 0x5f98`** (u16[], `flag>>4` index,
  `1<<(flag&0xf)` bit) — new offset this session
- title cs script: `spot99_info.zsi + 0x3528` (VA `0x0877DF48`), misc
  triggers at cmd offsets `+0x36a0` (type `0x1e`, frame 345) and `+0x36d8`
  (type `0x1f`, frame 1930) — per `tools/walk_oot3d_cs.py` dump (prior
  session), re-interpreted this session via the opcode-3 decomp above
