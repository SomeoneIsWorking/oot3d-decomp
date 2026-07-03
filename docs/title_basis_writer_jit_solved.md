# TITLE_CAM_BASIS writer — SOLVED via JIT watchpoint

**Status:** SOLVED 2026-07-03.

The static-analysis dead end (`title_basis_writer_static_deadend.md`)
was resolved by a JIT memory-write watchpoint on `0x005BE6D4` fired
from the soh3d harness. Writer PC is a single instruction:
**PC = 0x004235D4**, inside **`FUN_004235B8` @ `0x004235B8`**.

## The writer function — `FUN_004235B8` (292 bytes)

Signature: `void FUN_004235B8(void* view_in, Vec3f* eye_out, float* basis9_out)`

C body (Ghidra 12.0.4 decomp, `build/decomp/004235b8.c`):

```c
void FUN_004235b8(view_in, eye_out, basis9_out):
    float scratch[12];
    FUN_0034a80c(scratch, view_in);           // 3x3 view-matrix INVERSE
                                              // (scratch is 3x4 row-major)

    // Copy the translation column of the inverse → recovered eye position
    eye_out->x = scratch[3];
    eye_out->y = scratch[7];
    eye_out->z = scratch[11];

    // Extract the 3 basis vectors as COLUMNS of the inverse 3x3
    // (i.e. rows of the transposed rotation = the camera-to-world rotation).
    basis9_out[0..2] = (scratch[0], scratch[4], scratch[8]);          // right
    basis9_out[3..5] = (scratch[1], scratch[5], scratch[9]);          // up
    basis9_out[6..8] = -(scratch[2], scratch[6], scratch[10]);        // -LH_forward
                                                                     // = at - eye
    // then normalize each of the 3 triples.
```

`FUN_0034A80C` (`build/decomp/0034a80c.c`, 280 bytes) is a stock 3x4
matrix-inverse routine — computes the adjugate/determinant of the
3x3 rotation part and packs it with the translation-inverse
`-inv_R · T` into the 3x4 output.

## Corrected memory layout at TITLE_CAM_BASIS_VA

```
0x005BE6D4..0x005BE6DC : Vec3f eye       (recovered translation)
0x005BE6E0..0x005BE6E8 : Vec3f right     (was mis-labeled "dir")
0x005BE6EC..0x005BE6F4 : Vec3f up
0x005BE6F8..0x005BE700 : Vec3f at-eye    (the RH viewing direction)
```

Empirical values at settled title (2026-07-03):
- eye       = (-4071.7, 57.8, 5217.1)
- right     = (-0.450, +0.085, -0.889)   ← the RE doc's ex-"dir"
- up        = (+0.212, +0.977, -0.013)
- **at−eye**    = **(-0.868, +0.195, +0.458)**   ← the ACTUAL look direction

Orthonormality of {right, up, at−eye} verified numerically
(pairwise dot products < 1e-4, unit magnitudes).

## Consequence for the SoH title-cam port

The SoH title-cam port had `kZelda3dTitleAt = eye + <the ex-"dir">*1000`
which pointed the SoH cam along the WRONG axis (the right axis instead
of the viewing direction). All three earlier "test hypotheses"
(handedness flip, at=eye-dir, at=eye+dir) were guesses that failed
because the source data itself was mis-interpreted.

**Fix, shipped in soh3d `4a37634a`:**

```c
kZelda3dTitleAt = kZelda3dTitleEye + at_minus_eye_normalized * 1000
                = (-4939.49, 252.81, 5675.30)
```

SxS at settled title now matches Az (moon top-right, mountain
silhouette across horizon, grass foreground with flowers).

## The general RE lesson

The RE for `title_camera_lead.md` labeled the second Vec3 slot in the
basis "dir" and dismissed the third slot at +0x18 as "last basis
word". Empirical evidence (SoH's |Δdir|=0.0005 parity) reinforced
the wrong label because SoH was configured to interpret the slot the
same wrong way — the metric was measuring a self-consistent
mis-interpretation, not a real semantic match.

Any RE that assigns semantic meaning to a memory slot should be
cross-checked against the WRITER's behavior — not just against
empirical value-shape ("this is a unit vector, so it's probably a
direction"). The JIT watchpoint was the only reliable way to
confirm the writer here; static Ghidra had no visibility into the
heap-pointer-chained store.

## What replaced what

Files this doc supersedes / updates:
- `title_camera_lead.md` — was the FIRST scan-based RE that labeled
  +0x0C as "dir". Values numerically correct, semantic label wrong.
- `title_camera_containing_struct.md` — noted `+0x140 = last basis
  word` without semantic. Now known to be the at-eye vector.
- `title_basis_writer_static_deadend.md` — documents why Ghidra
  couldn't surface the writer.
- `title_view_matrix_lh.md` — LH convention proof from FUN_002d9e68
  (still correct; the mis-RE was of the STORED basis, not the
  view-matrix builder).

Files added:
- `build/decomp/004235b8.c` — the writer.
- `build/decomp/0034a80c.c` — its callee (already committed earlier).

## For future arcs

The full title-render camera chain is now:
1. Some upstream code builds a 3x4 LH view matrix (FUN_002d9e68 or a
   similar builder) into a scratch or global.
2. `FUN_004235B8(that_view, &title_eye, &title_basis)` inverts it and
   stores {eye, right, up, at-eye} at TITLE_CAM_BASIS_VA.
3. Az's title render pipeline (still not RE'd — probably a separate
   Play-less gamestate render fn) READS the LH view matrix, not the
   inverted basis. The inverted basis is a diagnostic / secondary
   consumer.

Next arcs should:
- Find the caller of FUN_004235B8 that passes `r1=0x005BE6D4` and
  `r2=0x005BE6E0` (an ADD-based address computation on some parent
  struct, likely 0x005BE5B8 + 0x11C, 0x005BE5B8 + 0x128).
- Trace back to `view_in` = the upstream LH view matrix — that's the
  real render input, and porting IT (per-frame) closes the title
  parity spline residual.
