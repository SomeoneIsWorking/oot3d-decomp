# Shared camera math helpers — hand-decomp

Hand-derived from linear ARM disassembly (capstone via `tools/disasm.py`)
2026-07-03. Ghidra project on this workstation is currently
unusable, so these are the primary derivations.

All four helpers are **at parity with SoH** by shape and by
per-instruction behavior. Documenting them here so that future
per-mode camera ports (Normal1, Normal2, Jump1, Battle1, …) can
assume the plumbing side is faithful and focus their attention on
the mode-body itself.

## Summary table

| OoT3D VA     | Function                    | Size (insts) | SoH twin                         | Verdict |
|--------------|-----------------------------|--------------|----------------------------------|---------|
| 0x00355780   | Camera_LERPCeilF            | 7            | `z_camera.c:77`                  | parity  |
| 0x00355804   | OLib_ClampMaxDist           | 10           | `z_olib.c:46`                    | parity  |
| 0x00367df4   | Camera_LERPCeilVec3f        | 26           | `z_camera.c:153`                 | parity  |
| 0x00367e60   | OLib_Vec3fDistXZ            | 10           | (matching `OLib_Vec3fDistXZ`)    | parity  |
| 0x00367e88   | Camera_CalcSlopeYAdj        | 18           | `z_camera.c:893`                 | parity  |

## Camera_LERPCeilF — FUN_00355780

```
00355780  vsub.f32 s4, s0, s1        ; s4 = target - cur
00355784  vmul.f32 s2, s4, s2        ; s2 = diff * stepScale
00355788  vabs.f32 s4, s4            ; s4 = |diff|
0035578c  vcmpe.f32 s4, s3           ; compare |diff|, minDiff
00355790  vmrs apsr_nzcv, fpscr
00355794  vaddge.f32 s0, s1, s2      ; if |diff| >= minDiff: s0 = cur + step
00355798  bx lr                      ; else s0 stays = target (arg 1)
```

Signature: `f32 Camera_LERPCeilF(f32 target, f32 cur, f32 stepScale, f32 minDiff)`.

Behavior:
```c
return (fabsf(target - cur) >= minDiff)
       ? cur + (target - cur) * stepScale
       : target;
```

Matches SoH's `z_camera.c:77` (which uses `f32` math after the s16
rework — same "return `target` when close enough" idiom).

## OLib_ClampMaxDist — FUN_00355804

```
00355804  vabs.f32 s2, s0            ; s2 = |val|
00355808  vcmpe.f32 s2, s1           ; compare |val|, max
0035580c  vmrs apsr_nzcv, fpscr
00355810  bls  0x355828              ; if |val| <= max → return val
00355814  vldr s2, [pc, #0x10]       ; s2 = 0.0f (const at 0x35582c)
00355818  vcmpe.f32 s0, s2           ; compare val, 0.0
0035581c  vmrs apsr_nzcv, fpscr
00355820  vneglt.f32 s0, s1          ; if val < 0: s0 = -max
00355824  vmovge.f32 s0, s1          ; if val >= 0: s0 = max
00355828  bx lr
```

Signature: `f32 OLib_ClampMaxDist(f32 val, f32 max)`.

Behavior:
```c
return (fabsf(val) <= max) ? val : ((val >= 0.0f) ? max : -max);
```

Matches SoH's `z_olib.c:46` byte-for-byte.

## Camera_LERPCeilVec3f — FUN_00367df4

```
00367df4  push  {r4, r5, r6, lr}
00367df8  mov   r5, r0                ; r5 = target
00367dfc  mov   r4, r1                ; r4 = cur
00367e00  vpush {d8, d9}
00367e04  vmov.f32 s16, s1            ; s16 = arg4 = xzStepScale
00367e08  vmov.f32 s17, s2            ; s17 = arg5 = minDiff
00367e0c  vmov.f32 s18, s0            ; s18 = arg3 = yStepScale
00367e10  vldr  s1, [r1]              ; s1 = cur->x
00367e14  vldr  s0, [r0]              ; s0 = target->x
00367e18  vmov.f32 s2, s16            ; s2 = xzStepScale
00367e1c  vmov.f32 s3, s17            ; s3 = minDiff
00367e20  bl    0x355780              ; s0 = Camera_LERPCeilF(target.x, cur.x, xz, min)
00367e24  vstr  s0, [r4]              ; cur->x = s0
00367e28  vmov.f32 s3, s17
00367e2c  vmov.f32 s2, s18            ; s2 = yStepScale        ← Y uses different scale
00367e30  vldr  s1, [r4, #4]          ; s1 = cur->y
00367e34  vldr  s0, [r5, #4]          ; s0 = target->y
00367e38  bl    0x355780              ; Camera_LERPCeilF(target.y, cur.y, y, min)
00367e3c  vstr  s0, [r4, #4]
00367e40  vmov.f32 s3, s17
00367e44  vmov.f32 s2, s16            ; s2 = xzStepScale        ← Z uses xz
00367e48  vldr  s1, [r4, #8]
00367e4c  vldr  s0, [r5, #8]
00367e50  bl    0x355780
00367e54  vstr  s0, [r4, #8]
00367e58  vpop  {d8, d9}
00367e5c  pop   {r4, r5, r6, pc}
```

Signature: `void Camera_LERPCeilVec3f(Vec3f* target, Vec3f* cur, f32 yStepScale, f32 xzStepScale, f32 minDiff)`.

Behavior:
```c
cur->x = Camera_LERPCeilF(target->x, cur->x, xzStepScale, minDiff);
cur->y = Camera_LERPCeilF(target->y, cur->y, yStepScale, minDiff);
cur->z = Camera_LERPCeilF(target->z, cur->z, xzStepScale, minDiff);
```

Matches SoH's `z_camera.c:153`. Confirms X and Z use `xzStepScale`, Y
uses `yStepScale`, in agreement with SoH.

**Cross-check with Camera_CalcAtDefault call site (0x00338b54..):**
- `s1 = *(camera+0x114)` → **xzOffsetUpdateRate at Camera+0x114 in
  OoT3D** (SoH has `xzOffsetUpdateRate` at Camera+0xCC — different
  layout, same semantic)
- `s0 = *(camera+0x118)` → **yOffsetUpdateRate at Camera+0x118**
  (SoH: +0xD0)
- `s2 = 0.1f` (minDiff)
- OoT3D calls `Camera_LERPCeilVec3f(&target, &posOffset,
  yOffsetUpdateRate, xzOffsetUpdateRate, 0.1f)` — same arg order as
  SoH's call at `z_camera.c:925`.

The `at`-final LERP in Camera_CalcAtDefault (0x00338bd0-8) passes
`atLERPStepScale` for both rates and `0.2f` for minDiff — matches
SoH's `z_camera.c:932` call.

## OLib_Vec3fDistXZ — FUN_00367e60

```
00367e60  vldr  s0, [r0]              ; s0 = a->x
00367e64  vldr  s1, [r1]              ; s1 = b->x
00367e68  vldr  s2, [r1, #8]          ; s2 = b->z
00367e6c  vsub.f32 s1, s0, s1         ; s1 = dx
00367e70  vldr  s0, [r0, #8]          ; s0 = a->z
00367e74  vsub.f32 s0, s0, s2         ; s0 = dz
00367e78  vmul.f32 s1, s1, s1         ; s1 = dx*dx
00367e7c  vmla.f32 s1, s0, s0         ; s1 += dz*dz
00367e80  vsqrt.f32 s0, s1            ; s0 = sqrt(dx² + dz²)
00367e84  bx lr
```

Signature: `f32 OLib_Vec3fDistXZ(Vec3f* a, Vec3f* b)`.

Behavior:
```c
f32 dx = a->x - b->x;
f32 dz = a->z - b->z;
return sqrtf(dx*dx + dz*dz);
```

Matches SoH's `OLib_Vec3fDistXZ`. Note the function omits `y` entirely
— pure horizontal distance.

## Camera_CalcSlopeYAdj — FUN_00367e88

```
00367e88  push {r4, r5, lr}
00367e8c  mov  r4, r1               ; r4 = playerYRot (arg 2, s16)
00367e90  mov  r1, r0               ; r1 = floorNorm (arg 1) → will be arg2 to helper
00367e94  vpush {d8}
00367e98  vmov.f32 s16, s0          ; s16 = adjAmt (arg 4, f32)
00367e9c  sub  sp, sp, #0xc
00367ea0  mov  r5, r2               ; r5 = eyeAtYaw (arg 3, s16)
00367ea4  add  r0, sp, #4           ; r0 = &floorNormSph (local VecSph)
00367ea8  bl   0x342e8c             ; OLib_Vec3fToVecSphGeo(&sph, floorNorm)
00367eac  ldrsh r0, [sp, #8]        ; r0 = floorNormSph.pitch  (VecSph: {r, pitch, yaw})
00367eb0  bl   0x338f60             ; Math_CosS(pitch)
00367eb4  ldrh r0, [sp, #0xa]       ; r0 = floorNormSph.yaw
00367eb8  vmov.f32 s17, s0          ; s17 = cos(pitch)
00367ebc  sub  r0, r4, r0           ; r0 = playerYRot - floorNormSph.yaw
00367ec0  sxth r0, r0
00367ec4  bl   0x338f60             ; Math_CosS(playerYRot - floorNormSph.yaw)
00367ec8  vmul.f32 s0, s17, s0      ; s0 = cos(pitch) * cos(playerYRot - yaw)
00367ecc  sub  r0, r4, r5           ; r0 = playerYRot - eyeAtYaw
00367ed0  sxth r0, r0
00367ed4  vabs.f32 s0, s0
00367ed8  vmul.f32 s16, s0, s16     ; s16 = |cos*cos| * adjAmt
00367edc  bl   0x338f60             ; Math_CosS(playerYRot - eyeAtYaw)
00367ee0  vmul.f32 s0, s16, s0      ; s0 = |cos*cos| * adjAmt * cos(deltaYaw)
00367ee4  add  sp, sp, #0xc
00367ee8  vpop {d8}
00367eec  pop  {r4, r5, pc}
```

Signature: `f32 Camera_CalcSlopeYAdj(Vec3f* floorNorm, s16 playerYRot, s16 eyeAtYaw, f32 adjAmt)`.

Behavior — one-to-one match with SoH's `z_camera.c:893`:
```c
VecSph floorNormSph;
OLib_Vec3fToVecSphGeo(&floorNormSph, floorNorm);
f32 tmp = Math_CosS(floorNormSph.pitch)
        * Math_CosS(playerYRot - floorNormSph.yaw);
return (fabsf(tmp) * adjAmt) * Math_CosS(playerYRot - eyeAtYaw);
```

This closes the Camera_CalcAtDefault callee tree — every function in
the tree is now hand-decomp'd and confirmed at parity.

Two additional pin-points from this function:

| OoT3D VA     | Identified as             | Evidence                                            |
|--------------|---------------------------|-----------------------------------------------------|
| 0x00342e8c   | OLib_Vec3fToVecSphGeo     | called with (VecSph*, Vec3f*), writes VecSph fields |
| 0x00338f60   | Math_CosS                 | 3× calls consuming s16, returning f32               |

## Consequence for the port

The **shared camera plumbing (LERP/clamp/distance)** is byte-faithful
between OoT3D and SoH. Any observed camera divergence at CAM_FUNC_*
level lives in one of:

1. The **mode-function body** (Camera_Normal1, Camera_Normal2, …) —
   Grezzo tweaks per-mode logic
2. `Camera_CalcAtDefault` (Δ-A extra Y block, see
   `camera_calc_at_default.md`)
3. Different **data-table values** (fov, distances — see Δ-B in
   `gameplay_firstdiv.md`)
4. **Upstream inputs** (Player_GetHeight, playerPosRot, floorNorm) —
   e.g. the LinkAge parity discovered in the Kakariko sweep

Do NOT chase LERP-rate or clamp-behavior divergence as a port target;
these helpers are already faithful. Same for `Camera_LERPCeilF` — all
per-frame smoothing routes through the same code shape on both sides.

## Callee-chain summary (Camera_CalcAtDefault leaf tree)

```
Camera_CalcAtDefault (FUN_00338ac8)             [camera_calc_at_default.md]
  ├─ Player_GetHeight            (FUN_00367ef0)  [hand-decomp: same doc]
  ├─ Camera_CalcSlopeYAdj-analog (FUN_00367e88)  [not yet decomp'd]
  ├─ OLib_ClampMaxDist           (FUN_00355804)  [THIS doc — parity]
  └─ Camera_LERPCeilVec3f        (FUN_00367df4)  [THIS doc — parity]
       └─ Camera_LERPCeilF       (FUN_00355780)  [THIS doc — parity]
```

**Entire callee tree is decomp'd** as of 2026-07-03. The next
divergence class must live at the mode-body level (or in
`Player_GetHeight` inputs / other upstream fields), not in the
helpers.
