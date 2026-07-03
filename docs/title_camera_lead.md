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

## Title-camera basis LOCATED at 0x005BE6D4

Not in the 0x005B1300..0x005B18B0 range (that turned out to be a
sorted-by-distance actor spawn table for the title flyover — 8
entries of 44-byte stride, growing as new billboards enter view).
The camera itself is a separate isolated Vec3f slot.

Attack that surfaced it (find_cam_eye.py): scan .data for
isolated Vec3f matching SoH's title camera magnitudes
(X ∈ [-6000, -3000], Y small, Z ∈ [3000, 7000]) that ALSO changes
per frame (rules out fixed constants) and is NOT part of a
repeating stride table. That yields 3 candidates; the winner is
distinguished by the +12 slot being a UNIT vector (view direction)
and the +24 slot being another UNIT vector with dominant Y (up).

### Layout

```
0x005BE6D4  Vec3f  eye       (world position)
0x005BE6E0  Vec3f  dir       (view direction, unit)
0x005BE6EC  Vec3f  up        (up vector, unit)
```

Total = 36 bytes contiguous, standard camera-basis shape.

### Verified values at title frame 400

- eye = (-4070.31, 57.81, 5219.15)
- dir = (-0.450, 0.085, -0.889)  → |dir| = 0.999 (unit-checked)
- up  = (0.212, 0.977, -0.013)   → |up|  = 0.999 (unit-checked)

### Comparison to SoH's same-frame active camera

- SoH eye = (-4000, -1, 5228),  Δeye = 92.09 (1.8% relative)
- SoH up ≈ (0.11, 0.99, -0.05), Δup = 0.107 (nearly identical)
- SoH dir (from at-eye normalized) ≈ (-0.91, 0.12, 0.38)
  vs Azahar dir (-0.45, 0.09, -0.89): Δdir = 1.36. The Z sign
  flip is real — the two engines' cameras are pointing in
  ~opposite Z directions at the same title-demo moment. Title
  spline was retargeted independently between N64 and 3DS; this
  is the analogue of the d4 anim-data floor for the camera path.

### Wired into `compare firstdiv` d5

soh3d commit c87e52f wires the read into CompareFirstDivImpl.
d5 emits |Δeye| / |Δdir| / |Δup| and reports firstdiv when
|Δeye| > 200 (unlikely for the current spline). d4 stays the
named divergence at title, which is correct — d4's residual is
the anim-data floor (documented in prior session).
