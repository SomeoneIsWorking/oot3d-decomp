/**
 * OoT3D view/camera-basis pipeline — hand-RE'd interface.
 *
 * The title-camera BASIS at .data VA 0x005BE6D4 (RE'd in
 * docs/title_camera_lead.md, ported into SoH at commit 17221301) is
 * written each frame by the following call chain, identified via a
 * JIT memory-write watchpoint (see docs/title_writer_chains.md for the
 * derivation, and scratch/title_writer_watch.py for the driver):
 *
 *     FUN_00416208  Demo_LoopDrive       (function-pointer root)
 *         ↓ bl
 *     FUN_00418B88  Camera_DispatchModes (1564-line, 5 mode branches)
 *         ↓ bl (5 sites, each mode-specific)
 *     FUN_0030120C  Camera_WriteBasisAt  (thin wrapper; writes 9 basis
 *                                          words into camStruct+0x24..+0x44)
 *         ↓ bl
 *     Camera_ViewMatrixToBasis (FUN_004235B8)   ← this file
 *         ↓ bl
 *     Mat4x3_Invert            (FUN_0034A80C)   ← this file
 *
 * This header defines the TWO chain endpoints that are 100% RE'd + JIT-
 * watchpoint verified: Camera_ViewMatrixToBasis and Mat4x3_Invert.
 * The upstream matrix producers (FUN_003009D4, FUN_00300AA8,
 * FUN_00300C58, FUN_0041BD10 — decomp'd, characterized as UI
 * orthographic + view-transform kernels), dispatcher, and demo-loop
 * root are IDENTIFIED but await hand-authoring as a separate porting
 * arc (the current SoH title-cam already matches shot 1 to |Δeye|=0.22u
 * via the static-basis port; the residual is small enough that pursuing
 * the full spline is a next-arc decision).
 */
#ifndef OOT3D_Z_VIEW_H
#define OOT3D_Z_VIEW_H

#include "z_types.h"
#include "z_camera.h"   /* Vec3f */

/*
 * 4x3 column-major matrix. Row 3 (translation) is stored as elements 3,7,11.
 * Column-major means: mtx[0..2] = right basis, mtx[3] = tx, mtx[4..6] = up
 * basis, mtx[7] = ty, mtx[8..10] = forward basis, mtx[11] = tz.
 * Matches the classic OpenGL/DirectX affine 4x3 layout.
 */
typedef struct {
    f32 m[12];
} Mat4x3;

/*
 * Mat4x3_Invert — FUN_0034A80C.
 *
 * Inverts an affine 4x3 matrix. The 3x3 rotation submatrix is inverted
 * via the standard cofactor-expansion / adjugate method (single 1/det
 * multiplied through the 9 cofactors), then the translation column is
 * back-solved as `-M_inv * t_orig`.
 *
 * Returns 1 on success, 0 if the source matrix is singular (det == 0
 * exact, +0.0 or -0.0). Guest ABI: VFP-in via s0..s7 for the reads,
 * writes back into *out. Signature reflects the observed
 * Ghidra decomp (both `param_1` and `param_2` are `float*`).
 */
s32 Mat4x3_Invert(Mat4x3* out, const Mat4x3* src);

/*
 * Camera_ViewMatrixToBasis — FUN_004235B8.
 *
 * Given a view matrix `view_mat`, produce the world-space camera state:
 *
 *   *eye_out = camera world position (extracted from view_mat translation
 *              column, via Mat4x3_Invert).
 *
 *   basis_out[0..2] =  right   (unit)
 *   basis_out[3..5] =  up      (unit)
 *   basis_out[6..8] = -forward (unit)     // the 0x005BE6D4 "dir" slot
 *
 * The basis is orthonormalized: each of the three Vec3f rows is scaled
 * by 1.0f / |row| after extraction. Matches empirical dumps of
 * 0x005BE6D4 (dir + up have |v| == 1.0 across all title snapshots).
 *
 * VERIFIED via JIT memory-write watchpoint at title (see
 * docs/title_writer_chains.md live result): all 32 write hits on the
 * cam-basis eye range 0x005BE6D4..+8 arrive from this function.
 *
 * OoT3D calls this via the FUN_0030120C wrapper, which pre-allocates
 * a 12-word local for `basis_out` (the same buffer is used as output
 * for the inverse). Callers pass `eye_out = camStruct + 0x18`,
 * `basis_out = &local_stack_36_bytes` and then copy the local basis
 * into `camStruct + 0x24..+0x44`.
 */
void Camera_ViewMatrixToBasis(const Mat4x3* view_mat,
                              Vec3f* eye_out,
                              Vec3f  basis_out[3]);

/*
 * SndActor_SetWorldPos — FUN_0047E314.
 *
 * The direct writer of the title-rider WORLD POSITION at 0x005AFFB0
 * (RE'd in docs/title_actor_world_pos.md, ported into soh3d
 * TitleDemo_GetRiderWorldPos accessor).
 *
 * `snd_actor` is a 3D-audio source struct with layout:
 *   +0x68 .. +0x74   Vec3f  world.pos      (the watched slot)
 *   +0x74 .. +0x80   Vec3f  velocity       (integrated per frame)
 *   +0x80            u8     velocity_valid
 *
 * On first call (velocity_valid == 0) the velocity is (0,0,0). On
 * subsequent frames it becomes (new_pos - old_world.pos), then the
 * flag is reset. This gives 3D-audio doppler + pan the current
 * velocity vector without a separate integration site.
 *
 * VERIFIED via JIT memory-write watchpoint at title (see
 * docs/title_writer_chains.md live result): all 6 write hits on
 * 0x005AFFB0..+8 arrive from this function via the FUN_004647F0
 * audio-source-update caller.
 *
 * Structural note: 0x005AFFB0 is the AUDIO subsystem's mirror of the
 * demo-actor's world.pos. The game-actor's OWN storage is upstream via
 * `*(snd_actor + 0x88)` = pointer to the actor's world.pos slot. That
 * pointer is where the demo trajectory (the spline) actually lives.
 */
void SndActor_SetWorldPos(void* snd_actor, const Vec3f* new_pos);

#endif /* OOT3D_Z_VIEW_H */
