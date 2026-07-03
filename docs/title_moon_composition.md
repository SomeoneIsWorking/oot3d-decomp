# OoT3D title moon — 3-layer composite (RE'd)

## Method

The moon draw was surfaced by instrumenting Azahar's SW rasterizer
(`Azahar/src/video_core/renderer_software/sw_rasterizer.cpp`) with a
per-triangle logger that appends `(tex[0..2] phys addr, blend, screen
xyz)` to a file when armed. A REPL command `draw_log <path>` in the
soh3d harness enables it for one frame at settled title. See soh3d
commit history for the draw_log wiring.

The captured frame contains 878 triangles. Filtering by unique
`(tex, w, h)` triples and bbox in the top-right quadrant (screen x >
260, y < 80) surfaces exactly three quads composing the moon:

| draw order | phys addr    | tex WxH | blend RGB / A       | screen bbox         | screen size |
|------------|--------------|---------|---------------------|---------------------|-------------|
| 1st (behind) | `0x2090ec80` | 64×64   | ADD (srcAlpha, One) | (292,   0)-(480,133) | 188 × 133   |
| 2nd (disc)   | `0x20906a80` | 128×128 | ALPHA (srcA, 1-srcA)| (377,   0)-(480, 91) | 103 ×  91   |
| 3rd (front)  | `0x20910e80` | 64×64   | ADD (srcAlpha, One) | (280,   0)-(480,139) | 200 × 139   |

Addresses are consecutive with ~0x2200 stride, matching the ctxb file
size of 8264 bytes — confirming they're the sequential
`fine_moon0/1/2.ctxb` loaded from `/kankyo/BlueSky.zar`:

- `fine_moon0.ctxb` (128×128, alpha) — the crescent-shape disc.
- `fine_moon1.ctxb` (64×64, additive) — INNER glow layer.
- `fine_moon2.ctxb` (64×64, additive) — OUTER glow layer.

Both inner and outer halos are drawn ADDITIVE at scales LARGER than
the disc (1.65× and 1.85× uniform-averaged). Screen-size ratios:

    moon1 / disc: 1.72× wider, 1.46× taller
    moon2 / disc: 1.94× wider, 1.53× taller

The inner glow renders first (behind the disc); the outer glow
renders last (on top, but its texture has a transparent centre so it
only lightens the frame OUTSIDE the disc). This gives the moon its
characteristic warm halo without over-brightening the crescent.

## PICA200 blend factors used

From `Azahar/src/video_core/pica/regs_framebuffer.h`:
- 0 = Zero
- 1 = **One** — used as dst for additive
- 6 = **SrcAlpha** — used as src for both
- 7 = **OneMinusSrcAlpha** — used as dst for alpha-blend

So the three layers translate directly to GL blend modes:
- Additive halos: `(GL_SRC_ALPHA, GL_ONE)` — matches `BILLBOARDADD:` in
  soh3d's loadBillboard.
- Disc: `(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA)` — matches
  `BILLBOARD:` (non-additive default).

## Port landed

soh3d Zelda3D_TryDrawSunMoon now emits the three quads in exact
order, at the derived scale ratios. The lens-flare atlas
(`fine_lensflare.ctxb`) is NOT used for the moon — it's the sun's
noon-glare strip. Earlier attempts to use it as a halo were
misdiagnosis.

## Reusable infra added

- `Azahar/src/video_core/renderer_software/sw_rasterizer.cpp`:
  `extern "C" soh3d_draw_log_path/_active` — one-flag draw-log hook
  in ProcessTriangle. Zero overhead when off (single branch).
- `tools/soh3d_harness/main.cpp`: `draw_log <path>` REPL command
  enables logging for as long as it stays set.
- `scratch/title_draw_log.py`: boots to title, arms the log, snaps,
  disables, and prints unique `(tex, w, h)` groups filtered to the
  top-right quadrant.

This substrate applies to any future OoT3D visual-parity arc: any
composite draw (particles, HUD items, cutscene FX) can be
enumerated by running the log at the target frame and matching
against the extracted ctxb catalog.
