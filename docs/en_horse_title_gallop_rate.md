# Title-demo Epona gallop: per-frame animation-rate constants (FUN_0016ca48 / FUN_003cf3c4)

2026-07-15. Follow-up to `title_rider_cs_dispatch.md` (idx1/idx4 CsMove/CsWarpMove handlers).
That doc names the handlers and their *shape* ("integrate toward cue endPos") but does not
resolve the literal-pool constants that drive the CSAB playback rate. This doc closes that gap —
triggered by a user report that SoH3D's title-cs Epona gait "looks off".

## Pool constants (raw `code.bin` reads, `tools/ghidra_scripts/ReadWord.py`)

| VA | raw u32 | as float | site | meaning |
|----|---------|----------|------|---------|
| `0x0016cb18` | `0x41c00000` | `24.0` | `FUN_0016ca48` (idx1 init, `EnHorse_CsMoveInit`) | landing-nudge distance threshold (dead code mid-demo — gated on actor flags never set by the cs) |
| `0x0016cb20` | `0x3ee66667` | `0.45` | `FUN_0016ca48` | **init-time anim-rate multiplier**: `Animation_Change(speedXZ * 0.45, ...)` |
| `0x003cf4f0` | `0x3ee66667` | `0.45` | `FUN_003cf3c4` (idx1 action, `EnHorse_CsMoveToPoint`) | **per-frame anim-rate multiplier**: `Animation_Change(speedXZ * 0.45, ...)` on every SkelAnime-complete re-trigger |
| `0x003cf4f4` | `0x0000010b` | `267` | `FUN_003cf3c4` | turn-rate cap (binang), matches the already-documented "capped at 267 binang" |
| `0x003cf4f8` | `0x41000000` | `8.0` | `FUN_003cf3c4` | constant chase speed while still approaching the cue's endPos |
| `0x003cf500` | `0x00000000` | `0.0` | `FUN_003cf3c4` | speed snapped to 0 once within 8.0u of the cue's endPos |

**Finding:** the 3DS title cs's own dispatcher (`FUN_0016ca48`/`FUN_003cf3c4`) scales the gallop
CSAB's playback rate by **0.45**, not the **0.3** that N64 `z_en_horse.c`'s `EnHorse_CsMoveInit`/
`EnHorse_CsMoveToPoint`/gameplay `EnHorse_MountedGallop` all use (`Shipwright/soh/src/overlays/
actors/ovl_En_Horse/z_en_horse.c:1385,2127,2142,2152,2290,2303,2313` — every N64 gallop site is
`speedXZ * 0.3f`). Grezzo changed the constant for the 3DS title demo specifically.

## Why 0.45 vs 0.3 is NOT a tempo bug — verified by direct computation

The N64 `gEponaGallopingAnim` animation is **24 frames** long (`animLength`, confirmed live via
SoH3D's `animdbg 1` — `n64frame=16.8/24.0`, `debug_journal/2026-07-15-epona-en-horse-3ds-render.md`).
The OoT3D `hl_anim_fastrun2_30` CSAB clip is **36 frames** long (`csab_catalog.md:855`,
`| hl_anim_fastrun2_30 | 36 | 25 | yes |`).

At the cs's constant chase speed (8.0 both engines):

- N64/SoH3D rate: `(8.0 * 0.3) / 24 frames = 0.1 cycles per logic tick`
- 3DS native rate: `(8.0 * 0.45) / 36 frames = 0.1 cycles per logic tick`

**Identical.** Grezzo's 3DS CSAB was authored at 1.5x the frame count of the N64 anim (36 vs 24,
consistent with the `_30` clip-name suffix suggesting a 30fps authoring convention vs the N64
anim's own frame rate) and the 0.45 multiplier is exactly the compensating 1.5x scale-up over
0.3 (`0.45 / 0.3 == 36 / 24 == 1.5`). The two engines complete one full gait cycle in the same
number of logic ticks.

SoH3D's AUTO/CSAB replacement path (`Zelda3D_UpdateAnimAuto`, `zelda3d_anim.cpp`) does not use
either engine's absolute multiplier at all when phase-locked — it samples
`csab_frame = (n64CurFrame / n64AnimLength) * csab_duration`, a **fraction-of-cycle** mapping that
is multiplier-and-frame-count-agnostic by construction. So even though the SoH3D port drives the
N64-side SkelAnime with the N64/gameplay 0.3 constant (not the 3DS's native 0.45), the resulting
OoT3D-CSAB playback tempo already matches the real 3DS title demo exactly. **The "gait looks off"
report is NOT explained by an animation-rate/tempo mismatch** — this hypothesis was tested with
real numbers from both binaries and ruled out, not assumed.

## What WAS an approximation (fixed, but not a tempo fix)

Independent of the tempo question, the SoH3D title-rider port's cue-0x24/0x40 (Move/WarpMove)
branch drove Epona's SkelAnime through the **gameplay** `EnHorse_MountedGallop` action func
(`z_en_horse.c:1369`) rather than the native cs dispatcher's own per-frame func
(`EnHorse_CsMoveToPoint`/`EnHorse_CsWarpMoveToPoint`, `z_en_horse.c:2132`/`2293` — the vendored,
previously-unused 1:1 counterparts of `FUN_003cf3c4`/`FUN_00230d84`). `EnHorse_MountedGallop`
additionally calls `EnHorse_UpdateSpeed`/`EnHorse_StickDirection` every frame (reading the actor's
live `curStick`, always zero at title) and gates on `EnHorse_PlayerCanMove` — none of which the
real title cs's own code path exercises (a scripted move has no stick coupling at all). With zero
stick input, `EnHorse_UpdateSpeed`'s `stickMag < minStickMag` branch decremented `speedXZ` by
`0.06`/frame before the title rider's per-frame post-update hook reset it back to `8.0`, so the
gallop `playSpeed` was computed from a very slightly stale, non-`8.0` speed on essentially every
frame (a ~0.75% deficit, not visually significant on its own, but a genuine unfaithful-approximation
gap consistent with the class of divergence this project's ground-truth rule exists to close).

Ported: SoH3D `Shipwright/soh/src/overlays/actors/ovl_En_Horse/z_en_horse.c` gained
`EnHorse_CsMoveAnimOnly`/`EnHorse_CsMoveInitAnimOnly` — the animation-only tail/init of the
vendored `EnHorse_CsMoveToPoint`/`EnHorse_CsWarpMoveToPoint`/`EnHorse_CsMoveInit` (position math
excluded; SoH3D's title rider owns position via its own oracle-verified integrator, see
`title_rider_cs_dispatch.md`'s cross-check section — calling the native functions' position halves
verbatim would double-integrate the same cue endpoint). `title_rider.cpp`'s `applyToActor` now
calls these for cue actions 0x24/0x40 instead of forcing the gameplay `EnHorse_MountedGallop`
action func. See soh3d `debug_journal/2026-07-15-epona-title-animation.md`.

## Open item (honestly flagged, not fixed this session)

The pixel-level A/B (`tools/title_rider_crop.py`) still shows a small (~1-2 cs-frame) pose lag
at some sampled instants (e.g. cs1600), consistent with the ALREADY-DOCUMENTED cs-frame sync
envelope from `title_rider_cs_dispatch.md`'s cross-check ("matches... to within a ~1-2 cs-frame
phase envelope"), not a new regression from this session. No further concrete, decomp-grounded
divergence was found this session beyond the approximation above. If a future playtest still
reads the gait as "off" after this fix ships, the next real step is a **bone-level** A/B: the
harness already exposes ground-truth Epona limb rotations live (`titleactors a`, `main.cpp`
`HandleTitleActors`, `TITLE_POSE_TABLE_VA`/`0x005642D0`, 25 limbs) — SoH3D has no equivalent
REPL-exposed per-bone rotation dump for the AUTO-CSAB-driven OoT3D skeleton (`Zelda3D_DumpModelBones`
exists but is only called internally, gated, not REPL-reachable). Adding a `boneinfo <modelId>`
REPL command in `zelda3d.c` and diffing it against `titleactors a` bone-for-bone at a matched cs
frame would be the next concrete, non-visual verification step — more decisive than pixel-space
projection (which depends on camera calibration and rider-position-in-frame, both separate
potential error sources).

## Files

- `build/decomp/0016ca48.c`, `003cf3c4.c` — the two functions read here (already dumped by the
  2026-07-14 dispatcher session).
- `docs/csab_catalog.md:855` — `hl_anim_fastrun2_30` duration (36 frames).
- Port: soh3d `Shipwright/soh/src/overlays/actors/ovl_En_Horse/z_en_horse.c`,
  `Shipwright/soh/src/zelda3d/behaviors/title/title_rider.cpp`.
