# OoT3D uses LEFT-HANDED view matrix convention

**Update 2026-07-03 later:** the memory layout at TITLE_CAM_BASIS_VA
is different from what earlier RE assumed. The writer is
FUN_004235B8 @ 0x004235B8 (JIT-caught, PC=0x004235D4). Layout:

  0x005BE6D4..+0x08 = eye
  0x005BE6E0..+0x08 = **RIGHT axis** (not "dir" — RE doc was wrong)
  0x005BE6EC..+0x14 = UP axis
  0x005BE6F8..+0x20 = **at−eye direction** (RH viewing direction —
                       NEGATED LH forward, since basis[6..8] =
                       -scratch[2,6,10] then normalized)

The vector at 0x005BE6F8 = (-0.868, +0.195, +0.458) is the ACTUAL
title-cam look direction. Was mis-dismissed as "last basis word" in
title_camera_containing_struct.md. It's the semantic forward.

The stored basis is derived by INVERTING the LH view matrix
FUN_002d9e68 builds. So the LH convention of FUN_002d9e68 is still
correct; it's the interpretation of the stored basis that was wrong.

See `title_basis_writer_jit_solved.md` for the writer chain.

---

## Original body (LookAt fn — unchanged):



## Ground truth: FUN_002d9e68 decomp

Decompiled via Ghidra 12.0.4 headless (`build/decomp/002d9e68.c`):

```c
void FUN_002d9e68(float *out, float *eye, float *up, float *at) {
    // forward = normalize(eye - at)           ← LH-style: forward points
    //                                            FROM target TOWARD eye
    fVar1 = eye.x - at.x;
    fVar2 = eye.y - at.y;
    fVar3 = eye.z - at.z;
    // ... normalize by 1/|.|

    // right = up × forward                     ← LH cross-product convention
    fVar4 = up.y * fVar3 - up.z * fVar2;        // (up × fwd).x
    fVar5 = up.z * fVar1 - up.x * fVar3;        // (up × fwd).y
    fVar6 = up.x * fVar2 - up.y * fVar1;        // (up × fwd).z
    // ... normalize

    // up_new = forward × right (Gram-Schmidt orthogonalize)
    fVar10 = fVar2 * fVar6 - fVar3 * fVar5;
    fVar11 = fVar3 * fVar4 - fVar1 * fVar6;
    fVar12 = fVar1 * fVar5 - fVar2 * fVar4;

    // Output: 3×4 row-major view matrix
    //   row 0 = (right.x,  right.y,  right.z,   -eye·right)
    //   row 1 = (up_new.x, up_new.y, up_new.z,  -eye·up_new)
    //   row 2 = (forward.x, forward.y, forward.z, -eye·forward)
    out[0..2] = right;      out[3]  = -(eye · right);
    out[4..6] = up_new;     out[7]  = -(eye · up_new);
    out[8..10] = forward;   out[11] = -(eye · forward);
}
```

## Runtime cross-check (soh3d harness `title-cam:` block)

At the settled Az title, the harness prints:

```
title-cam:LH-right derived (up × dir) = (-0.868, 0.195, 0.458)
title-cam:stored right @ +0x140 =        (-0.868, 0.195, 0.458)
       (match LH → OoT3D uses LH view basis)
```

Stored right at `TITLE_CAM_BASIS_VA+0x140` is exactly `up × dir`,
matching FUN_002d9e68's LH cross-product convention.

## Implication for SoH parity

The `dir` slot stored at `TITLE_CAM_BASIS_VA+0x0C` in OoT3D memory
is **NOT** `normalize(at − eye)` (RH-style eye→target). It is
`normalize(eye − at)` — the LH forward, pointing FROM target TOWARD
eye.

SoH's `guLookAtF(eye, at, up)` is RH-standard: it computes
`forward_rh = normalize(at − eye)`. If SoH sets `at = eye + dir*N`
(treating stored `dir` as eye→target), then SoH's forward becomes
`+dir` — the OPPOSITE of Az's actual look direction (Az looks
toward `−dir`).

The `|Δdir| ≈ 0` metric on the harness title-cam channel is only
telling us that the two engines' `dir` field values coincide
numerically — it says NOTHING about the semantic (which way each
engine is actually looking).

## Not confirmed yet

Setting `at = eye − dir*1000` on the SoH side (to make SoH also
look toward `−dir`) does NOT visually align SoH's title render
with Az's — reproducibly a wrong image, ground close-up. This is
inconsistent with the math, which says the two view matrices
should agree after that swap. Open axes:

- Y-flip inside Az's projection matrix (LH projection uses different
  clip-Y sign than RH).
- Az's title-demo may not render `spot00 room 0` at all — the 3DS
  title is a lightweight scripted playback with `gPlayState=0`
  (memory `soh3d-oot3d-title-not-play`). The rendered CMB / scene
  asset may differ.
- Sync: SxS may capture different game-frames.

Next moves recorded in memory `soh3d-title-cam-handedness.md`.
