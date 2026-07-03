# Title-demo camera state — .data location lead

Static-scan attack: dump .data at title frames F, F+15, F+30, then
find 12-byte-aligned Vec3f triples where all 3 floats change smoothly
across snapshots (small |Δ|, sign-consistent, world-coord magnitudes).

Tool: `find_camera.py` (soh3d repo scratch).

## Region hit

Dense cluster of smoothly-changing Vec3f entries live in
**`0x005B1350` .. `0x005B18B0`** (~350 bytes of contiguous state).
Values fall in two magnitude bands:

- **Position band**: axes with |v| ≈ 5000-6000. Matches Hyrule Field
  world-coord scale (SoH `HyruleField_Camera_Update` on N64 sits
  roughly at 3000..6000 X/Z during the intro flyover).
- **Small-offset band**: axes with |v| ≈ 10-100. Camera at/up deltas
  or spline segment vectors.

Per-K=15-frames deltas are 1-15 units, sign-consistent across the
two intervals → this is a smooth spline evaluator, not per-frame
noise.

Adjacent byte cursors that also landed in this region:

- **0x005B138D** (byte, +2/2 frames irregular) — could be a
  spline-segment index.
- **0x005B18B8** (byte, noisy) — some sub-state field.
- **0x005B8401** (byte, +1/frame) — a bystander counter (freeze
  test showed it doesn't gate pose eval).

## Next attack

1. Read the region as raw bytes and eyeball for struct boundaries
   (Vec3f typically aligned 4-byte, often grouped as 3× Vec3f eye/at/up).
2. Cross-reference with `FUN_003705a0` — that call in FUN_002c3e34
   line 108 passes `param_1 + 0x225c` and looks like a spline
   evaluator (takes float, float, ptr; returns float). Its output-
   destination might be one of the addresses in this region.
3. For d5 wiring: pick the 2 most stable Vec3f slots (eye and at
   candidates) and add a `CompareCameraImpl` 3ds branch that reads
   them; compare vs SoH's active camera eye/at.

## Compare tool acceptance

d5 doesn't need to zero — it needs to SHOW the divergence trajectory
so parity work can attack it. A "close but shifted" camera basis is
useful signal; a "wildly different" one flags a spline retargeting
gap that needs porting.

Same shape as d4: emit `camera-eye`, `camera-at` structured records,
let downstream tooling decide (not "does it look right in the PPM").
