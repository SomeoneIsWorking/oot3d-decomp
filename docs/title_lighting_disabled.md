# OoT3D title screen — PICA200 fragment lighting is GLOBALLY DISABLED

## Finding

At the settled title demo (soh_boot → 400+ ticks) every triangle
processed by the software rasterizer reports:

    lit_dis = 1  (regs.lighting.disable == true)

Across 73,399 triangles / 34 unique (tex, w, h, blend, lit_dis) groups
from one 60-frame capture (scratch/task16_lighting.log), there is NOT
ONE triangle drawn with lighting enabled. This includes the landscape,
sky dome, moon composite, terrain, water — everything.

Additionally, vertex color feeding into the rasterizer is (0,0,0,0)
for essentially every landscape draw. The exceptions are:

- `0x2095aa00 512×256 blend(6,7)` — vcol (1,1,1,1) full-alpha — this
  is a fullscreen sky/atmosphere quad passed through a combiner that
  multiplies by primary color (needs primary=1 to leave texture alone).
- `0x2091a900 512×256 blend(6,7)` — vcol (1,1,1,0.55) — a partial-
  coverage layer (probably cloud/atmosphere transparency).

So the title landscape is textured geometry rendered with **NO
per-vertex lighting and NO PICA fragment-lighting unit** — the visible
palette comes entirely from the CMB material combiner constants and
texture data.

## Implication for SoH3D port

The parity target for title-demo lighting is NOT "port PICA200 fragment
lighting." It is:

1. Faithfully apply the CMB material combiner (already done in
   Zelda3D::CmbRenderer's combiner-emit path).
2. **Ensure SoH3D's Zelda3D GL path does NOT introduce synthetic
   per-fragment lighting terms that OoT3D didn't apply.** Any diffuse-
   term / NdotL / worldshade modulation in the pipeline is a DELTA vs
   OoT3D.

The extant SoH3D `#111` worldshade path (opt-in) is correctly opt-in —
enabling it at title-demo would ADD lighting that OoT3D doesn't have,
NOT fix a missing effect.

## Method

Instrumented `Azahar/src/video_core/renderer_software/sw_rasterizer.cpp`
`ProcessTriangle` to append per-triangle:

    tri tex0=… tex1=… tex2=… blendRGB=… sxy=… w=h= c0=… c1=… c2=…
        n0=… lit_dis=<regs.lighting.disable>

when the `soh3d_draw_log_active` extern-C flag is set. The soh3d harness
REPL command `draw_log <path>` toggles it. Frame captured after `run 60`
at settled title with `scratch/title_lighting_probe.py`.

The `n0=` triple is the `quat.x/y/z` field from OutputVertex — which
PICA200 uses as the encoded surface normal quaternion when lighting is
enabled. All three components come out zero, further confirming no
lighting path is populating them.

## Zero-overhead when off

The instrumentation reads `soh3d_draw_log_active` first (branch predicted
false in normal runs), no `regs.lighting` fetch happens unless armed.
Patch committed to `tools/soh3d_harness/AZAHAR_PATCH.md` Patch 2.
