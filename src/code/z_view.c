/**
 * OoT3D z_view — hand-RE'd bodies for the view / camera-basis pipeline.
 *
 * Landing shape follows z_camera.c / z_title_demo.c:
 *   - Match N64 zeldaret/oot naming so per-fn diffs work by inspection
 *     where a twin exists.
 *   - Per-body VA + provenance line so future sessions can walk it back.
 *   - Reference Ghidra decomp files (build/decomp/<va>.c) for the
 *     underlying disassembly source of truth.
 *
 * Both bodies here are JIT-watchpoint verified at title:
 *   Camera_ViewMatrixToBasis writes cam basis eye/dir/up at 0x005BE6D4.
 *   SndActor_SetWorldPos     writes rider world.pos at 0x005AFFB0.
 * See docs/title_writer_chains.md for the derivation.
 *
 * Ghidra 12.0.4 is default now (analyzeHeadless on $PATH); hand-disasm
 * only for spot-verify with named reason.
 */

#include "z_types.h"
#include "z_camera.h"       /* Vec3f */
#include "z_view.h"

/* -------- Mat4x3_Invert — FUN_0034A80C ------------------------------------
 *
 * Ghidra decomp: build/decomp/0034a80c.c.
 *
 * Standard 3x3 cofactor-expansion inverse for the rotation submatrix,
 * with the affine translation column back-solved as `-M_inv * t_orig`.
 * Returns 1 on success, 0 on singular determinant (== +0.0 or -0.0
 * exact — the guest uses `if (det != -0.0 && det != 0.0)`).
 *
 * `src->m[]` layout — column-major 4x3:
 *   [0]  R.x.x    [4]  U.x.x    [8]  F.x.x
 *   [1]  R.y.x    [5]  U.y.x    [9]  F.y.x
 *   [2]  R.z.x    [6]  U.z.x    [10] F.z.x
 *   [3]  Tx       [7]  Ty       [11] Tz
 *
 * The decomp reads indices 0,1,2,4,5,6,8,9,10 (the 3x3 rotation) via
 * f{1..13} and computes the standard determinant + adjugate. Then the
 * translation column is filled via -(row_dot_translation) for each row.
 * The one non-obvious constant is DAT_0034A924 which is exactly 1.0f
 * (the numerator in 1/det).
 */
s32 Mat4x3_Invert(Mat4x3* out, const Mat4x3* src) {
    f32 r0 = src->m[0], r1 = src->m[1], r2 = src->m[2];
    f32 u0 = src->m[4], u1 = src->m[5], u2 = src->m[6];
    f32 f0 = src->m[8], f1 = src->m[9], f2 = src->m[10];
    f32 tx = src->m[3], ty = src->m[7], tz = src->m[11];

    /* 3x3 determinant via cofactor expansion along the first row */
    f32 det =
        (r0 * u1 * f2  -  f0 * u1 * r2) +
        (r1 * u2 * f0  -  u0 * r1 * f2) +
        (r2 * u0 * f1  -  r0 * f1 * u2);

    if (det == -0.0f || det == 0.0f) return 0;

    f32 inv = 1.0f / det;

    /* Rotation adjugate (transpose of cofactor matrix), scaled by 1/det */
    f32 m0 =  (u1 * f2  - f1 * u2) * inv;
    f32 m1 = -(r1 * f2  - f1 * r2) * inv;
    f32 m2 =  (r1 * u2  - u1 * r2) * inv;
    f32 m4 = -(u0 * f2  - f0 * u2) * inv;
    f32 m5 =  (r0 * f2  - f0 * r2) * inv;
    f32 m6 = -(r0 * u2  - u0 * r2) * inv;
    f32 m8 =  (u0 * f1  - f0 * u1) * inv;
    f32 m9 = -(r0 * f1  - f0 * r1) * inv;
    f32 m10 = (r0 * u1  - u0 * r1) * inv;

    out->m[0] = m0;  out->m[1] = m1;  out->m[2]  = m2;
    out->m[4] = m4;  out->m[5] = m5;  out->m[6]  = m6;
    out->m[8] = m8;  out->m[9] = m9;  out->m[10] = m10;

    /* Translation: t_new = -M_inv * t_orig, per column */
    out->m[3]  = -(m0 * tx) - (m1 * ty) - (m2  * tz);
    out->m[7]  = -(m4 * tx) - (m5 * ty) - (m6  * tz);
    out->m[11] = -(m8 * tx) - (m9 * ty) - (m10 * tz);

    return 1;
}

/* -------- Camera_ViewMatrixToBasis — FUN_004235B8 -------------------------
 *
 * Ghidra decomp: build/decomp/004235b8.c (Grezzo-side).
 * VERIFIED via JIT memory-write watchpoint at title
 * (soh3d/scratch/title_writer_watch.py, all 32 write hits at
 * 0x005BE6D4..+8 attribute to this fn).
 *
 * Sequence (matches disasm at 0x004235B8..0x004236DC):
 *   1. inv_view = invert(view_mat)   [via Mat4x3_Invert, local 12-float]
 *   2. eye_out  = inv_view's translation column  (elements 3, 7, 11)
 *   3. basis[0..2] = row 0 of inv_view   (right)
 *   4. basis[3..5] = row 1 of inv_view   (up)
 *   5. basis[6..8] = -row 2 of inv_view  (dir = -forward)
 *   6. normalize each of the 3 basis Vec3f rows to unit length.
 *
 * The row/column arithmetic in the disasm reads from stack offsets
 * +0x10, +0x20, +0x30 for the translation (rows 3rd word of each
 * column of the 4x3), and +0x04, +0x14, +0x24 / +0x08, +0x18, +0x28 /
 * +0x0C, +0x1C, +0x2C for the three basis rows — this is the standard
 * column-major layout of a 4x3 matrix.
 *
 * The normalization scale is `1.0f / sqrtf(x*x + y*y + z*z)` per row
 * (DAT_004236DC = 1.0f). Empirical dumps of 0x005BE6D4 confirm |dir|
 * and |up| both equal 1.000 to 3 decimal places at every frame.
 */
void Camera_ViewMatrixToBasis(const Mat4x3* view_mat,
                              Vec3f* eye_out,
                              Vec3f  basis_out[3]) {
    Mat4x3 inv;
    if (!Mat4x3_Invert(&inv, view_mat)) {
        /* Guest: leaves outputs uninitialized on singular det. We match. */
        return;
    }

    /* eye = translation column of the inverse view matrix */
    eye_out->x = inv.m[3];
    eye_out->y = inv.m[7];
    eye_out->z = inv.m[11];

    /* Row 0 (right), Row 1 (up), Row 2 (forward) — extracted in decomp
     * as basis[0..2] = (r0,r1,r2), basis[3..5] = (u0,u1,u2),
     * basis[6..8] = (-f0,-f1,-f2). "dir" (0x005BE6E0 slot) is -forward. */
    basis_out[0].x =  inv.m[0]; basis_out[0].y =  inv.m[1]; basis_out[0].z =  inv.m[2];
    basis_out[1].x =  inv.m[4]; basis_out[1].y =  inv.m[5]; basis_out[1].z =  inv.m[6];
    basis_out[2].x = -inv.m[8]; basis_out[2].y = -inv.m[9]; basis_out[2].z = -inv.m[10];

    /* Normalize each basis Vec3f to unit length.
     * The decomp uses fVar4 = 1.0f / sqrt(dot(row, row)); we mirror it. */
    for (int i = 0; i < 3; i++) {
        f32 x = basis_out[i].x, y = basis_out[i].y, z = basis_out[i].z;
        f32 mag2 = x*x + y*y + z*z;
        f32 inv_mag = 1.0f / __builtin_sqrtf(mag2);
        basis_out[i].x = x * inv_mag;
        basis_out[i].y = y * inv_mag;
        basis_out[i].z = z * inv_mag;
    }
}

/* -------- SndActor_SetWorldPos — FUN_0047E314 -----------------------------
 *
 * Ghidra decomp: build/decomp/0047e314.c (23 disasm lines total).
 * VERIFIED via JIT memory-write watchpoint at title
 * (all 6 hits on 0x005AFFB0..+8 attribute to this fn via the
 * FUN_004647F0 audio-source-update caller).
 *
 * Struct layout (see z_view.h header comment):
 *   +0x68 .. +0x74   Vec3f  world.pos
 *   +0x74 .. +0x80   Vec3f  velocity
 *   +0x80            u8     velocity_valid
 *
 * On first call (velocity_valid == 0) the velocity is computed as
 * new_pos - old_world.pos; then world.pos is updated and the flag is
 * reset. The flag naming is inverted from what you'd expect — it's
 * "skip velocity update this frame", not "have valid velocity".
 * (The Ghidra decomp: `if (*(char *)(param_1 + 0x80) == '\0')` guards
 * the velocity write, so 0 = compute velocity, non-zero = skip.)
 */
void SndActor_SetWorldPos(void* snd_actor, const Vec3f* new_pos) {
    u8* base = (u8*)snd_actor;
    Vec3f* world_pos = (Vec3f*)(base + 0x68);
    Vec3f* velocity  = (Vec3f*)(base + 0x74);
    u8*    skip_vel  =           base + 0x80;

    if (*skip_vel == 0) {
        velocity->x = new_pos->x - world_pos->x;
        velocity->y = new_pos->y - world_pos->y;
        velocity->z = new_pos->z - world_pos->z;
    }
    world_pos->x = new_pos->x;
    world_pos->y = new_pos->y;
    world_pos->z = new_pos->z;
    *skip_vel = 0;
}
