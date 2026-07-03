/**
 * OoT3D camera — hand-decomp'd interface.
 *
 * OoT3D refactored the N64 Camera struct: paramData folded inline, field
 * offsets differ (Camera+0x114 is xzOffsetUpdateRate vs N64's +0xCC).
 * These prototypes reflect the ACTUAL 3DS ABI (float args passed in VFP
 * s0..s3 per AAPCS-VFP), not Ghidra's inferred signatures.
 *
 * See src/code/z_camera.c for the bodies + per-instruction provenance.
 */
#ifndef OOT3D_Z_CAMERA_H
#define OOT3D_Z_CAMERA_H

#include "z_types.h"

/*
 * Vec3f / VecSph — carried over from N64 OoT layout. Confirmed identical
 * on OoT3D via the pose-table RE (docs/title_gamestate.md): {f32 r, s16
 * pitch, s16 yaw}.
 */
typedef struct { f32 x, y, z; } Vec3f;
typedef struct { f32 r; s16 pitch; s16 yaw; } VecSph;
typedef struct { Vec3f pos; struct { s16 x, y, z; } rot; } PosRot;

/*
 * Camera struct — OoT3D-specific offsets. Only the fields touched by the
 * hand-decomp'd bodies below are declared here (extending the layout is
 * per-RE-arc work).
 *
 * Confirmed offsets (from Camera_CalcAtDefault @ 0x00338ac8 disasm):
 *   +0x80   Vec3f  at            (base for camera→at)
 *   +0xD8   void*  player        (Actor* Player)
 *   +0xDC   PosRot playerPosRot
 *   +0x114  f32    xzOffsetUpdateRate
 *   +0x118  f32    yOffsetUpdateRate
 *   +0x12C  Vec3f  posOffset
 *   +0x148  f32    atLERPStepScale
 *   +0x150  Vec3f  floorNorm
 */
struct Camera;

/*
 * Player_GetHeight — 0x00367ef0.
 *
 * Returns Link's effective vertical height. 44 for child (linkAge=1),
 * 68 for adult (linkAge=0), plus 32 if a specific player-state bit (at
 * *(u32*)(player + 0x1710) & 0x800000) is set. Identical shape to N64
 * OoT z_actor.c Player_GetHeight.
 */
f32 Player_GetHeight(void* player);

/*
 * Camera_LERPCeilF — 0x00355780.
 *
 * If |target - cur| >= minDiff, return cur + (target-cur)*stepScale.
 * Else return target. Matches N64 OoT z_camera.c:77 in float form.
 */
f32 Camera_LERPCeilF(f32 target, f32 cur, f32 stepScale, f32 minDiff);

/*
 * Camera_LERPCeilVec3f — 0x00367df4.
 *
 * Component-wise LERPCeilF; X and Z use xzStepScale, Y uses yStepScale.
 * Signature matches N64 z_camera.c:153.
 */
void Camera_LERPCeilVec3f(Vec3f* target, Vec3f* cur, f32 yStepScale,
                          f32 xzStepScale, f32 minDiff);

/*
 * OLib_ClampMaxDist — 0x00355804.
 *
 * Clamp |val| to max, preserving sign. Matches N64 z_olib.c:46.
 */
f32 OLib_ClampMaxDist(f32 val, f32 max);

/*
 * OLib_Vec3fDistXZ — 0x00367e60.
 *
 * sqrtf(dx*dx + dz*dz). Y ignored. Matches N64 OLib_Vec3fDistXZ.
 */
f32 OLib_Vec3fDistXZ(Vec3f* a, Vec3f* b);

/*
 * Camera_CalcSlopeYAdj — 0x00367e88.
 *
 * Slope-correction bias for the camera's at-target Y. Matches N64
 * z_camera.c:893 shape:
 *   sphGeo = OLib_Vec3fToVecSphGeo(floorNorm);
 *   tmp = cos(sphGeo.pitch) * cos(playerYRot - sphGeo.yaw);
 *   return |tmp| * adjAmt * cos(playerYRot - eyeAtYaw);
 */
f32 Camera_CalcSlopeYAdj(Vec3f* floorNorm, s16 playerYRot, s16 eyeAtYaw,
                         f32 adjAmt);

/*
 * Camera_CalcAtDefault — 0x00338ac8.
 *
 * The at-target follower shared across CAM_FUNC_NORM1, NORM2, JUMP1
 * and func_800458D4 (Normal1 flags&0x80 branch). Same signature/shape
 * as N64 z_camera.c:906 EXCEPT for a 3DS-only extra Y-bias block:
 *
 *   if (*(u32*)(camera->player + 0x29B8) & 0x100) {
 *       extraAtY = *(f32*)(camera->player + 0x1760) * -0.01f;
 *       // added to atTarget.y before the LERP
 *   }
 *
 * Δ-A structural divergence vs SoH — inert at Kakariko-idle (bit
 * clear), fires on states that set 0x100 (climbing/pull candidates,
 * still to catalogue).
 *
 * Returns 1 unconditionally on 3DS (unlike N64's void-return; the
 * caller in Camera_Normal1 ignores the return).
 */
s32 Camera_CalcAtDefault(struct Camera* camera, VecSph* eyeAtDir,
                         f32 extraYOffset, s16 calcSlope);

#endif /* OOT3D_Z_CAMERA_H */
