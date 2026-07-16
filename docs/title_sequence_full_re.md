# Title sequence — FULL-subsystem RE synthesis (2026-07-16)

Three parallel static sweeps (cs interpreter, env-object system, gamestate lifecycle) + live
oracle confirmations. This supersedes the piecemeal per-item model; per-topic detail lives in
the cited docs/dumps. Decompiles: `build/decomp/` + `soh3d:scratch/decomp_agent/title_sweep/`.

## 1. The sequencing model (final, live-confirmed)

- The " BDQ" interpreter (`FUN_002c5ba0`) evaluates all 13 commands per tick while
  `curFrame <= end_frame(2400)`. **Past 2400 it FREEZES**: `if (end_frame < curFrame &&
  state != 4) { restore-control; csCtx.state = 3 }` — it never resets curFrame; nothing loops.
- The opcode-1000 destination (handler `FUN_00491364`, payload `{type=0x68, frame=2400}` at
  `spot99_info.zsi+0x3748`) fires EXACTLY ONCE at 2400: 3-way branch on a persistent
  attract counter (`*pbRam004926d0 -> 0x0051b2f8`), each branch writing the same
  `play+0x5C2D = 0x14` transition trigger (the identical trigger the press-START path writes,
  `title_logo_actor.md` §7), gated by `play+0x5C32`.
- **Live confirmation (soh3d scratch/decomp_agent/ probes, 2026-07-16)**: at the 2400 crossing
  the counter block byte +1 flips 0→1 (the handler fired), but `play+0x5C2C..0x5C37` stays
  ZERO — the transition request never commits on the oracle; the play instance pointer is
  unchanged through tick 2700+. The demo therefore continues indefinitely: interpreter frozen,
  normal Play simulation running (dayTime +6/tick flows dawn→day→night storm past tick 6000,
  luminance-swept), camera RELEASED to the engine (measured moving post-2400, eye
  (-697,-144,9016)→(-697,-200,9254) over 60 ticks — not the OP97 spline).
- Authored-but-unplayed content exists past 2400 (cues to 3036, spline segments) — the freeze
  makes it unreachable on hardware. Do not port it as playable.
- dayTime: op-0x8c writes 4:00 twice (frames 0 and 301) as one-shot absolute stamps; the
  continuous +6/cs-frame flow is the ordinary per-Play-tick advance, not a cs mechanism.
- Title BGM: NOT cs-driven (zero opcode-0x13 records authored); comes from scene-load audio.

## 2. Complete opcode + misc sub-op inventory

`FUN_002c5ba0` is a fast path (≤0x4b) + tiered alias dispatch funneling ~14 physical channel
slots (`csCtx+0x38..0x6C`) + literal cases {0x4b,0x96,0x97,1000}. Title authors: 5× op-0x0a
(ALL binding the SAME channel slot +0x40 — "last matching record in file order wins" is the
decompiled truth, confirming soh3d's decode), 2× op-0x03 (sub-ops 0x1E=logo fade-in @345,
0x1F=logo fade-out @1930 → Flags_SetEnv(3)/(4)), 1× op-0x8c, 1× op-0x7c (one-shot linear
interpolator arm — visible effect at title: none measured), 1× op-0x0d (decompiled INERT),
1× op-0x3e (channel +0x64 latch, no consumer found), 1× op-0x97 (camera spline, byte-verified
earlier), 1× op-1000. The full 39-entry misc sub-op table and the full opcode/alias table are
in the cs-interpreter sweep report (`soh3d:scratch/decomp_agent/title_sweep/cs_interpreter/`).

## 3. Moon transform — parametric ground truth (port-ready)

From the session-4 uniform readback (env_sun_moon_draw.md) + this sweep's ray analysis:
ALL three layers lie on ONE view-space ray (x/z = y/z ratios identical across layers):

```
dir   = normalized moon direction (elevation from the N64-identical trig on dayTime-0x8000)
disc  : distance D (≈2684.5 at the reference frame), model scale 640.0 (exact)
haloA : distance D·(1+1/30) (≈2773.8 = +3.33%), model scale 1280.0 (exact, = 2·disc)
haloB : distance D·(1−1/30) (≈2595.2 = −3.33%), model scale 1280.0
color : (255,255,255,255) — zero modulation; the textures carry all shape/alpha
quad  : unit ±0.5 square, all three layers; billboard-facing with a small shared tilt
```

No magic constants remain: the fitted kMoonDiscScale/kMoonTitleFixedScale/1.94×/2.07× in
soh3d should be replaced by this computed transform. The CPU matrix-builder function itself
stays unlocated statically (4 sessions of recorded dead ends — do not re-chase without a
dynamic watch); the derived transform above is complete regardless.

## 4. Env-object/kind system + the 0x004fa904 dead end

Kind table @0x0054984c (stride 0x50): 0/1/3/5=BlueSky.zar (1=title active group: dome, clouds,
stars, sun glow, moon; per-frame variant/blend schedule @0x0053200a), 4=Dark.zar (deep-night
dome, unreachable in soh3d today). `0x004fa904` (=640.0 in .data after the fog struct) is
FALSIFIED as a moon config: it opens an ~11KB heterogeneous table (star placement + LUT
shapes); zero static readers by three independent methods; the fog struct's consumed extent
stops at +0x38. Do not re-chase statically.

## 5. Known soh3d parity gaps surfaced by the sweep

- Title sky-dome variant selection hardcodes `skybox1Index=skybox2Index=3` — the 3DS runs the
  kind-1 schedule (@0x0053200a) into night variants; with the demo now running past dawn
  (no-loop port), the frozen dome is user-visible.
- Dark.zar deep-night dome unreachable (`Zelda3D_SkyModelId` gap).
- soh3d currently keeps EVALUATING the cs past 2400 (no-wrap port, soh3d commit 39cda5e6) —
  faithful is: freeze interpreter consumers at 2400 (camera/cues/logo triggers), fire the
  attract-counter increment, keep normal simulation (dayTime) flowing.
