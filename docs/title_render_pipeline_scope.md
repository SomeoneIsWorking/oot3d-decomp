# OoT3D title render pipeline — scope of the full port

## Where SoH stands (2026-07-03)

**Solved** — camera + geometry:
- Title-cam PORT (soh3d 4a37634a): kZelda3dTitleEye/At/Up derived from
  the JIT-caught view-inverse writer (FUN_004235B8 @ 0x004235B8,
  see `title_basis_writer_jit_solved.md`). SoH now looks in the same
  direction Az does: `(-0.868, +0.195, +0.458)` from
  `(-4071.5, 57.8, 5217.3)`.
- Landscape parity: TryDrawRoom returns 1 at title (OoT3D field CMB
  drawn on both sides).
- BlueSky night dome + kumo cloud band + fine_star (soh3d d6f90c08):
  Zelda3D_TryDrawSky fires at title; all three model IDs (2000-2002)
  submit. Skybox guardrails: `envCtx.skyboxDisabled=false`,
  `skybox1Index=skybox2Index=3` (fine_tenkyu_3), `skyboxBlend=0`.
- Moon disc: fine_moon0.ctxb billboard drawn via the standard
  env-driven sun/moon path (dayTime=0x0000 → alpha 255, world
  position `eye - sunPos`).

**Unsolved** — the "not enough parity" the user reported:

## Gap 1: moon halo / aura

Az's title moon has a radiant golden halo visible in every SxS. On
SoH the moon is a hard-edged disc with no halo.

Empirical assets tested this session:
- **`tex/fine_lensflare.ctxb`** wired as BILLBOARDADD behind the
  moon → paints pink anamorphic flare orbs scattered across the
  sky. This ctxb is the **sun's lens flare** (typical noon glare
  strip), NOT a moon halo. Ruled out.
- **`tex/fine_moon0.ctxb`** reused as BILLBOARDADD behind the disc,
  warm-tinted → gives a soft glow, but it visibly reads as "a
  second moon behind the moon", not a radiant halo. Bandaid.

Neither approach reproduces the actual OoT3D effect. The 3DS bake
of the moon halo is almost certainly the **PICA200 hardware bloom
postprocess** applied to bright framebuffer pixels — a screen-space
effect on the compositor output, not a scene-space asset. See
Nintendo 3DS graphics reference: the PICA200 supports HDR-like
color output through a bloom pass in the display transfer stage.

## Gap 2: world lighting / tint

Az's title view has:
- Cool, dark tones on the grass foreground (green trending toward
  desaturated near horizon)
- Warm accent from moon light on the terrain
- Silhouetted Death Mountain against a lit sky (not flat colour)

SoH's title view (with the LH-corrected cam and OoT3D room CMB) has:
- Uniformly lit terrain, reddish-brown cliffs (raw CMB tint, no
  moon key light)
- Flat mid-value sky, less contrast against the ground

The gap is that OoT3D applies **per-vertex directional lighting**
(NdotL from a key direction, plus baked ambient from the env
palette) at frame time. SoH renders the CMB with a flat scene tint
(the `#111` world-shade port exists in this repo but is opt-in and
was reported as a no-op for Kokiri in memory
`soh3d-lighting-port` — needs re-visit for outdoor title framing).

Fix requires the OoT3D vertex lighting engine to be always-on for
scene CMBs, driven by the env palette + the actual `light1Dir` a
title-time.

## Gap 3: sky-dome sky-hemisphere tint

Az's sky has finer gradient banding + subtle atmospheric depth
(darker at top, lighter with warmish tone at horizon). SoH's dome
renders as a flatter dark-blue mostly because:
- The tenkyu vertex colours (baked cyan-blue gradient) are drawn
  correctly, but the compositor writes them WITHOUT bloom/tone
  mapping, so highlights fall flat.
- The kumo cloud band model IS drawn but its texture/blend read
  as barely-visible dark bands on SoH; on 3DS the same pass
  reads as subtle streaks.

## What "full parity" requires

Ordered by size (smallest first):

1. **Wire up + tune the vertex-lighting (`#111`) at title** — the
   world-shade path already exists but is opt-in and disabled by
   default. Turn it ON for OoT3D-mapped outdoor scenes AND at
   title-demo, drive it from the settled env palette (dayTime = 0
   → night palette). Doesn't fix bloom but corrects the base
   diffuse. Fits in one commit.

2. **Bloom postprocess pass** — implement a two-pass Gaussian bloom
   in Zelda3D_GL_RenderPass on the LDR framebuffer: extract
   pixels above a luminance threshold, blur, add back at alpha.
   Approximates PICA200's hardware bloom. Not a byte-exact
   emulation but visually equivalent for the title moon + bright
   sky highlights. Non-trivial renderer work; touches
   `Shipwright/libultraship/src/fast/zelda3d_gl.cpp` + shader.
   1-2 sessions.

3. **HDR / gamma matching** — 3DS output has a specific gamma curve
   and slight HDR compression on the top-screen framebuffer. SoH's
   output is straight sRGB. Reading Azahar's display transfer code
   (`Azahar/src/video_core/pica/regs_framebuffer.h` and the
   equivalent transfer pass) would tell us the actual tone-map
   applied. Then match SoH's compositor.

Absent all three, "full parity" isn't producible by billboard
scaling or asset swaps. This doc is the honest scope so future
sessions don't tune-and-fake around it.
