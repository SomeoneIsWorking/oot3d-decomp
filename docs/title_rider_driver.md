# Title-demo RIDER driver — mount linkage, cue-driven motion, pose source

Consolidated decomp for the OoT3D 3DS title-demo "Link riding Epona across
Hyrule Field" sequence, for the SoH3D `TitlePresentation` rider-mount port.
Ties together three previously-scattered arcs (`title_writer_chains.md`,
`title_gamestate.md`, `title_gamestate_v2.md`, `cutscene_format.md`) and adds
new decomp for the mount-flag mechanism (§1). Static Ghidra decomp only —
no live harness session this arc (see §4 for why, and the exact next-step
watchpoints that would close the remaining opens).

## 0. Resolved context this doc depends on

- Title is a **normal `Play_Main` tick** on scene **spot99** — not a bespoke
  title-only game loop (`title_gamestate_v2.md`). `Play_Main` →
  `Actor_UpdateAll` → per-actor `update` fn ptr, same as any other scene.
  This **supersedes** the "Falsification" section of `title_gamestate.md`
  (which reasoned from the wrong global, `0x0050AF34`, and concluded
  Link couldn't be a real actor at title — wrong; see `title_gamestate_v2.md`
  §1 for the corrected two-globals finding). Player and Epona at title are
  ordinary `Actor` instances in the real `actorCtx`, reachable via the chain
  in `docs/actor_layout.md`.
- The title cs script (`" BDQ"`, embedded at `spot99_info.zsi + 0x3528`) is
  fully mapped in `docs/cutscene_format.md`. Its rider itinerary rides on
  **opcode 0x0A** cue channels — the "default" 48-byte `CsCmdActorCue`-shape
  entries `{u16 action, u16 startFrame, u16 endFrame, u16 rot[3], s32
  start[3], s32 end[3], f32 tail[3]}`, latched into `csCtx+0x40..0x6C` when
  `startFrame < curFrame <= endFrame`.

## 1. The mount — Player's stateFlags1 bit 0x1000000 (NEW this session)

**Goal:** find the 3DS equivalent of N64's `Actor_MountHorse` /
`PLAYER_STATE1_ON_HORSE` — i.e. what actually attaches Link to Epona.

### Method — Rosetta-stone constant search

3DS's `Player_UpdateCommon` is already pinned at **`FUN_00250ad0`**
(`build/decomp/00250ad0.c`, 10020 bytes — `title_gamestate_v2.md`). N64's
`PLAYER_STATE1_ON_HORSE` is bit 24 of `Player.stateFlags1`, i.e. the literal
constant `0x01000000`. Grepped every cached decomp body
(`build/decomp/*.c`, 1106 files) for that literal — a legitimate
Rosetta-stone move: if Grezzo kept the N64 state-flag bit layout (common for
1:1 remakes), the constant itself is the anchor, no live memory needed.

**Hit, structurally confirmed in `00250ad0.c` itself (Player_UpdateCommon)**:

```c
// build/decomp/00250ad0.c:1416
bVar25 = (*(uint *)(param_1 + 0x1710) & 0x1000000) != 0;
if (bVar25) {
    uVar24 = (uint)*(ushort *)(param_1 + 0x2218);
}
if (!bVar25 || uVar24 == 0) {
    ...
    uVar16 = 1;      // grounded idle/walk anim-select id
} else {
    ...
}
uVar16 = 8;          // <-- selected animID while (stateFlags1 & 0x1000000) && *(u16*)(this+0x2218) != 0
```

This is Player's per-frame **action-anim-id selector** (the switch that
picks which of the ~16 built-in Link animation states runs this frame —
walk/idle/attack/etc., N64-shape `Player_UpdateCommon`'s giant `uVar16 =`
cascade). **AnimID 8 is the riding animation**, gated on exactly the same
two-part test N64 uses: "on horse" flag set AND a nonzero mount sub-state.

Cross-checked against 10 other functions across the binary that read the
same `actor+0x1710 & 0x1000000` bit (all via the same literal-grep):

| VA | fn | role |
|----|----|------|
| `0x00250ad0` | `Player_UpdateCommon` | anim-id selector (animID=8 while mounted) |
| `0x002bcd38` | (unnamed, 496B) | camera/sound param select — reads `+0x2218` as a sub-id when mounted |
| `0x0036b2d4` | (unnamed, 260B) | same `+0x2218` sub-id pattern, feeds a sound-param table lookup by `*(byte*)(this+0x1b3)` |
| `0x003c45f4` | (unnamed) | same bit test, gates a branch |
| `0x0034cc78` | (unnamed) | same bit test |
| `0x002bcbac` | (unnamed) | same bit test |
| `0x002c036c` | (unnamed) | same bit test (twice, different mask combos) |
| `0x002c3b94` | (unnamed) | same bit test |
| `0x002ddba0` | (unnamed) | same bit test (twice) |
| `0x00132ad0` | (unnamed) | same bit test |
| `0x004886d4` | (unnamed) | writes `+0x1710 & 0xdfffffff` (clear bit 0x20000000) and `+0x1710 \| 0x30000000`, plus `+0x1714 \|= 0x1000000` — a DIFFERENT flags word (+0x1714, stateFlags2-equivalent), not this bit; ruled out as a false-positive hit on the same literal |

**Confirmed struct fields (Player instance, `param_1` in `Player_UpdateCommon`)**:

| offset | type | field | evidence |
|--------|------|-------|----------|
| `+0x1708` | fn ptr | `actionFunc` | `(**(code**)(param_1+0x1708))(param_1,param_2)` at `00250ad0.c:1357` — called `(this, play)`, exact N64 `ActionFunc` shape |
| `+0x1710` | u32 | `stateFlags1` | bit `0x1000000` = **mounted-on-horse**, identical semantics + identical bit position to N64 `PLAYER_STATE1_ON_HORSE` |
| `+0x2218` | u16 | mount sub-state / anim-override id | read only when the mount bit is set; `0` while transitioning, nonzero while actively riding (gates animID 8 vs the idle/walk cascade) |

**This is real structural confirmation that 3DS kept N64's mount-flag
mechanism intact** — same bit, same two-part "flag set AND substate
nonzero" test, same downstream effect (switch Link's animation-id
selection and audio/camera parameter tables to their riding variants).
The title-demo rider is not a bespoke title-only pose — it is Link's
**ordinary mounted-Player state machine**, running exactly as it would
during regular Epona-riding gameplay, which is exactly what
`title_rider_port_spec.md`'s ground-truth section argued from the
higher-level `title_gamestate_v2.md` finding. This session's decomp closes
that gap with actual disassembled bit-level evidence instead of inference.

### Open — the mount SETTER (who flips the bit + attaches rideActor)

**Not located this session.** The 11 functions above all *read* the mount
bit; none of them *write* it (only `0x004886d4` writes bit 0x1000000, and
that's a different flags word, `+0x1714`, ruled out above). N64's
`Actor_MountHorse` is a small, one-shot function (sets the flag, sets
`rideActor`, sets `actor.parent`, copies `rideActor->actor.shape.rot.y` into
Link's yaw) called once at mount time, not every frame — so it won't surface
in a per-frame-hot-path decompile pass and needs a targeted static or
dynamic search:

- **Static candidate search (next arc, no harness needed):** grep
  `build/decomp/*.c` for `| 0x1000000` (bit-SET, not bit-test) combined with
  a nearby store of another actor's pointer into a Player field — the
  Rosetta-stone shape of `Actor_MountHorse`'s body. This session's grep only
  covered already-cached `build/decomp/*.c` (1106 of the full function
  inventory in `build/decomp/functions.csv`, 8266 rows) — a fresh
  `DecompDump.py` pass with `DECOMP_TARGETS` swept across the *uncached*
  remainder (or an `analyzeHeadless … -postScript FindMovwMovtWriters.py`
  targeted at bit-pattern `0x01000000` OR literals) would cover the gap.
- **Dynamic confirmation (when a harness build is available):** a JIT
  memory-write watchpoint on the live Player's `+0x1710` word, filtered to
  the transition `0 -> (val | 0x1000000)`, at the title-demo's mount moment
  (cs frame 0, before the first cue fires) — the exact same primitive
  already used to find `TITLE_CAM_BASIS`'s writer (`title_basis_writer_jit_solved.md`)
  and the rider's own `Actor_MoveXZByYawSpeed` chain
  (`title_writer_chains.md`). That writer's caller frame will hold the
  Epona actor pointer as an argument — that's `rideActor`.
- **rideActor / actor.parent pointer field offset**: also not located this
  session (would come from the same watchpoint frame, reading the argument
  register that becomes the stored pointer).

## 2. The cue-driven motion — opcode 0x0A cue channels drive PathFollow (fully RE'd, consolidating prior work)

This part was substantially decomp'd in earlier sessions
(`title_writer_chains.md`); this section is the consolidated landing so the
whole rider driver is documented in one place, plus the s16→s32 correction
already noted there is now reflected in `include/z_actor.h` (was stale in
the header's prose comments; fixed this session — the `.c` body was already
correct).

### Actor struct fields (title-demo rider instance, confirmed via JIT
memory-write watchpoint on `0x09906A80` — see `title_writer_chains.md` for
the full derivation):

| offset | type | field |
|--------|------|-------|
| `+0x28..+0x34` | Vec3f | `world.pos` |
| `+0x36` | s16 | `world.rot.y` (binang) |
| `+0x60/+0x68` | f32 | `velocity.x` / `velocity.z` |
| `+0x64` | f32 | `fwdSpeed` |
| `+0x6C` | f32 | `speed_xz` |
| `+0x70` | f32 | `forceMagnitude` |
| `+0x74` | f32 | `maxSpeed` |
| `+0xA4..+0xB0` | Vec3f | `scriptedDelta` (cutscene/demo per-frame bias; **verified always zero** across all title-demo shots, `scriptedDelta_probe_shots.py`, 11 tick bands) |

(Note: this is a *different* Actor struct region than the generic
`docs/actor_layout.md` header — that doc's `+0x008` pos offset was derived
from a category-2/PLAYER actor at a normal scene; the offsets above were
derived from the title-demo rider found via the audio-subsystem mirror
chain in `title_writer_chains.md`. Reconciling the two into one canonical
Actor layout is an open item, not resolved by this session — flagging so a
future arc doesn't assume they're the same struct without checking.)

### The three primitives (bodies in `src/code/z_actor.c`, decompiled + hand-authored, VERIFIED via JIT watchpoint)

1. **`Actor_MoveXZByYawSpeed` — `FUN_00376864`** (`build/decomp/00376864.c`).
   Per-frame integrator: `velocity = (sin(yaw), cos(yaw)) * speed_xz`;
   `fwdSpeed` accelerates toward `maxSpeed` by `forceMagnitude`; then
   `world.pos += scriptedDelta + velocity * dt` (dt from a global tick
   source, `Grezzo_GetTickDelta`, not fully resolved — runtime state, not a
   compile-time constant).
2. **`Actor_TurnToPoint` — `FUN_003326F0`** (`build/decomp/003326f0.c`).
   Turns `world.rot.y` toward `atan2S(target.z - pos.z, target.x - pos.x)`,
   capped at `max_step` binang/frame. Also writes a mirror copy to `+0xBE`
   (role not resolved — likely a "visible/target yaw" copy consumed
   elsewhere in the pipeline).
3. **`PathFollow_Update` — `FUN_003CF3C4`** (`build/decomp/003cf3c4.c`).
   Reads a waypoint as **s32** (disasm-confirmed: `vcvt.f32.s32`, not s16 —
   Grezzo widened path-node coords from N64's `Vec3s`) from
   `path_node+0x18/0x1C/0x20`. If `dist(pos, target) < 8.0f`
   (`kPathArriveDist`, pool constant `DAT_003CF500`-adjacent): snap to
   target, `speed_xz = 0`. Else: `Actor_TurnToPoint(actor, target,
   kMaxYawStep=267)` (`DAT_003CF4F4 = 0x10B`), `speed_xz = kPathSpeed = 8.0f`
   (`DAT_003CF4F8 = 0x41000000`).

### Cue-track ↔ PathFollow relationship

The title cs's opcode-0x0A cue entries are the **`path_node` source** for
`PathFollow_Update` on each shot: `start[3]`/`end[3]` (the 48-byte cue's s32
triples) are exactly the `{waypoint.x, waypoint.y, waypoint.z}` shape
`PathFollow_Update` consumes. On a cue-chain discontinuity (a shot cut
authoring a fresh `start[3]`) the rider **teleports** to the new cue's
start point, then integrates toward its end point with the constant-8.0f
PathFollow dynamics — not a keyframe lerp. This was verified behaviorally
against a live Azahar oracle in an earlier session
(`soh3d/debug_journal/2026-07-07-rider-cue-port.md`: "NOT a lerp — on a shot
cut (fresh p0) the rider teleports to p0, then INTEGRATES toward p1"), and
the port built on that decomp is live in `Shipwright/soh/src/zelda3d/
zelda3d.c` (`Zelda3D_RiderStepCue`, `Zelda3D_PathFollowUpdate`).

`scriptedDelta` is unconditionally zero for the entire title-demo
(`FUN_00461324` zeroes it every frame, all 11 sampled tick bands across the
full 2400-frame loop) — so the cue-driven PathFollow integration is the
*entire* trajectory; no additional cutscene position bias is layered on
top.

## 3. The pose source — Epona + Link SkelAnime tables, gated by the mount flag

Two statically-pre-allocated 25-bone SkelAnime pose tables drive the visual
rider (`title_gamestate.md`):

| table | VA | owner | writer chain |
|-------|----|----|----|
| A | `0x005642D0` | **Epona** (confirmed: SoH3D's asset loader logs `zelda_horse.zar → Model/epona.cmb`, 25 bones, matching table A's 25 entries) | `FUN_003204a4` → `FUN_00347550` → `FUN_002bb1cc` → `FUN_0036b4ec` (the SkelAnime_Update-equivalent) |
| B | `0x005A54D8` | **Link** (same 25-entry shape; entry 1 has an anomalously high Y — pos.y=7875 vs Epona's own entry 0 at 5789 — consistent with a mount-attachment root joint sitting above the horse's back, i.e. this is a MOUNTED Link skeleton, not a standing one) | `FUN_002bd9ec` → `FUN_00347550` (structurally identical to Epona's chain) |

Format: 36-byte `{Vec3f pos, Vec3f rot(radians), Vec3f scale}` per limb
(floats, not N64's `Vec3s` fixed-point).

**This session's §1 finding closes the "who drives table B" open item from
`title_gamestate.md`'s Falsification section.** That section reasoned (from
the now-superseded "`gPlayState=0`" premise) that "title-context sub-objects
don't lead to Link's anim instance" and left the writer of table B as an
unresolved mystery pipeline. With `title_gamestate_v2.md`'s correction
(title runs a real `Play_Main`/`Actor_UpdateAll` tick) plus this session's
confirmation that Link's `Player_UpdateCommon` mount-flag/animID-selector
machinery is live and identical to normal gameplay, the actual answer is
the mundane one: Link is a real actor, `Player_UpdateCommon` selects animID
8 (riding) via the `+0x1710`/`+0x2218` mount gate documented in §1, and the
resulting SkelAnime evaluation (`FUN_002bd9ec` chain) writes table B same
as it would for any other Player animation state. **No bespoke title-only
pose pipeline exists** — table B is just Link's ordinary mounted-anim
SkelAnime output. `FUN_002c3e34` (the per-frame anim-frame-counter fn noted
in the old Falsification section, called from the Player action-func slot)
is consistent with this: it's the generic Player animation-frame advance,
invoked through `actionFunc` (`+0x1708`) same as any other action state.

**Still open (deferred, not required for a faithful port):** byte-exact
verification that animID 8's specific CSAB resource is the same
`gEponaGallopingAnim`/`hl_anim_fastrun2_30`-family clip the SoH3D N64-anim
map already uses for Epona (per `title_rider_port_spec.md`'s existing
`zelda3d_animmap.inc` table) — i.e. confirming Link's title-demo CSAB
*selection*, not just his SkelAnime *table location*, matches the
already-shipped anim map. This needs either (a) locating the CSAB-index
table that `Player_UpdateCommon`'s animID-8 branch feeds into (structurally
identical hunt to `docs/enhy_csab_binding.md`'s `SetSkelAnimCSAB` pattern
for En_Hy, just for Player's own animation table instead), or (b) a live
harness compare of Link's resolved CSAB index at a known title-demo frame.
Neither done this session — static-only arc, no harness build available
(see §4).

## 4. Method note — why this arc is static-only

The live embedded-Azahar harness (`tools/soh3d_harness`) that earlier
sessions used for JIT memory-write watchpoints (the technique that solved
`TITLE_CAM_BASIS`'s writer, the rider's `Actor_MoveXZByYawSpeed` chain, and
pose tables A/B's existence) has no prebuilt binary in this worktree, and
building it means rebuilding Azahar + SoH3D + the harness glue from
scratch (SoH3D's own `Shipwright/build-cmake` alone is 2.5 GB) — outside
this arc's scope (RE + decomp only, explicitly no soh3d build). Every
finding in §1-3 above is static Ghidra decompile + literal/pattern grep
across the already-cached `build/decomp/*.c` corpus (1106 of 8266
inventoried functions) — no dynamic confirmation this session. The two
explicitly-flagged opens (§1's mount setter, §3's CSAB-index cross-check)
are exactly the kind of question a JIT watchpoint answers in one sitting
once a harness build exists; both are written up with the precise
watchpoint to run.

## Files

- `include/z_actor.h`, `src/code/z_actor.c` — cue-driven motion primitives
  (§2), s16→s32 waypoint-width comment fixed this session (body was
  already correct; only the header's prose examples were stale).
- `docs/title_writer_chains.md`, `docs/title_gamestate.md`,
  `docs/title_gamestate_v2.md`, `docs/cutscene_format.md` — prior arcs this
  doc consolidates.
- `docs/enhy_csab_binding.md` — the reusable CSAB-binding RE pattern
  (`SetSkelAnimCSAB`) that §3's open CSAB-index cross-check should reuse.
- `docs/title_rider_port_spec.md` (SoH3D-side, in the `soh3d` repo, not
  here) — the port spec this decomp feeds; its "still open" list overlaps
  with §1/§3's opens here and should be read alongside this doc.
