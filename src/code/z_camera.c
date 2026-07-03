/**
 * OoT3D z_camera — hand-decomp'd bodies.
 *
 * These bodies were authored while Ghidra was unavailable (project was
 * created by a newer Ghidra than the then-installed 11.0.3). Ghidra 12.0.4
 * has since been installed and `analyzeHeadless` is on `$PATH` — the
 * decompiler is again the default for new RE arcs; hand-disasm here stays
 * (already verified) and applies for spot-verify only.
 *
 * Naming convention matches N64 zeldaret/oot z_camera.c so per-function
 * diffs against the twin work by inspection. Provenance for every body
 * (VA range, per-instruction table, constant decoding) lives in
 * docs/camera_calc_at_default.md and docs/camera_math_helpers.md.
 *
 * All bodies confirmed at parity with SoH's N64 twin EXCEPT
 * Camera_CalcAtDefault, which has the Δ-A extra-Y block (see body).
 */

#include "z_camera.h"

/* External math helpers (VFP-in / VFP-out). Not hand-decomp'd here.
 * These land as extern declarations because their bodies are cross-file
 * utility that hasn't surfaced in a divergence yet. */
extern f32 Math_CosS(s16 angle);                          /* 0x00338f60 */
extern void OLib_Vec3fToVecSphGeo(VecSph* dest, Vec3f* v);/* 0x00342e8c */

/* Grezzo-added Player struct offsets (beyond N64's 0x14F4).
 * 0x1710 = player state word (bit 0x800000 = "on horse" per
 *          Player_GetHeight's 32.0f add).
 * 0x1760 = f32 Y-bias magnitude (Δ-A extra-Y).
 * 0x29B8 = 3DS-only Player-substate bitfield (bit 0x100 activates Δ-A). */
#define PLAYER_STATE_ONHORSE_OFF   0x1710
#define PLAYER_STATE_ONHORSE_MASK  0x00800000
#define PLAYER_YBIAS_OFF           0x1760
#define PLAYER_SUBSTATE_OFF        0x29B8
#define PLAYER_SUBSTATE_YBIAS_BIT  0x100

/* LinkAge sentinel — Player_GetHeight reads *(u32*)0x0058795C.
 * 0 = adult (LINK_AGE_ADULT), nonzero = child (LINK_AGE_CHILD).
 * Same 44/68 shape as SoH gSaveContext.linkAge. */
#define GSAVE_LINKAGE_ADDR 0x0058795C

/* Reg-based-slot from Camera_CalcAtDefault line 0x338b18: an OREG table
 * base. Pool literal at 0x338c04 (address, not in code.bin sample). */
#define OREG_TABLE_ADDR    /* pool-loaded, see body */ 0
#define OREG_SLOPE_ADJ_IDX 9

/* -------- Camera_LERPCeilF — FUN_00355780 (7 insts) --------------------
 *
 * Direct hand-derivation from the ARM listing (per-inst table in
 * docs/camera_math_helpers.md). Matches N64 z_camera.c:77 shape.
 */
f32 Camera_LERPCeilF(f32 target, f32 cur, f32 stepScale, f32 minDiff) {
    f32 diff = target - cur;
    if ((diff < 0.0f ? -diff : diff) >= minDiff) {
        return cur + diff * stepScale;
    }
    return target;
}

/* -------- OLib_ClampMaxDist — FUN_00355804 (10 insts) ------------------
 *
 * Matches N64 z_olib.c:46.
 */
f32 OLib_ClampMaxDist(f32 val, f32 max) {
    f32 abs_val = val < 0.0f ? -val : val;
    if (abs_val <= max) return val;
    return val >= 0.0f ? max : -max;
}

/* -------- OLib_Vec3fDistXZ — FUN_00367e60 (10 insts) -------------------
 *
 * Sqrt of squared XZ differences. Y ignored. Matches N64 OLib_Vec3fDistXZ.
 */
f32 OLib_Vec3fDistXZ(Vec3f* a, Vec3f* b) {
    f32 dx = a->x - b->x;
    f32 dz = a->z - b->z;
    return __builtin_sqrtf(dx * dx + dz * dz);
}

/* -------- Camera_LERPCeilVec3f — FUN_00367df4 (26 insts) ---------------
 *
 * Component-wise LERPCeilF. X and Z use xzStepScale, Y uses yStepScale.
 * Matches N64 z_camera.c:153.
 *
 * Note the ABI wrinkle: at the call site Camera_CalcAtDefault passes
 * yStepScale in s0 and xzStepScale in s1 (VFP arg 3 and arg 4). Inside
 * FUN_00367df4 the assignment is s18=s0=y, s16=s1=xz. Confirmed by
 * pattern-matching the X/Z-then-Y stride against SoH's z_camera.c:154-6.
 */
void Camera_LERPCeilVec3f(Vec3f* target, Vec3f* cur, f32 yStepScale,
                          f32 xzStepScale, f32 minDiff) {
    cur->x = Camera_LERPCeilF(target->x, cur->x, xzStepScale, minDiff);
    cur->y = Camera_LERPCeilF(target->y, cur->y, yStepScale, minDiff);
    cur->z = Camera_LERPCeilF(target->z, cur->z, xzStepScale, minDiff);
}

/* -------- Camera_CalcSlopeYAdj — FUN_00367e88 (18 insts) ---------------
 *
 * Slope-correction bias for the camera's at-target Y. Matches N64
 * z_camera.c:893 one-to-one.
 */
f32 Camera_CalcSlopeYAdj(Vec3f* floorNorm, s16 playerYRot, s16 eyeAtYaw,
                         f32 adjAmt) {
    VecSph sph;
    f32 tmp;
    OLib_Vec3fToVecSphGeo(&sph, floorNorm);
    tmp = Math_CosS(sph.pitch) * Math_CosS(playerYRot - sph.yaw);
    if (tmp < 0.0f) tmp = -tmp;
    return tmp * adjAmt * Math_CosS(playerYRot - eyeAtYaw);
}

/* -------- Player_GetHeight — FUN_00367ef0 (12 insts) -------------------
 *
 * 44 for child, 68 for adult, +32 if player+0x1710 & 0x800000 (on horse).
 * Same 44/68/+32 shape as SoH's z_actor.c:1402.
 *
 * player is an untyped void* here — Actor* in principle, but this
 * function only reads two known offsets and doesn't touch the rest of
 * the struct, so no full Player layout is required for parity.
 */
f32 Player_GetHeight(void* player) {
    u32 state = *(u32*)((u8*)player + PLAYER_STATE_ONHORSE_OFF);
    f32 mount_add = (state & PLAYER_STATE_ONHORSE_MASK) ? 32.0f : 0.0f;
    /* linkAge lives in a fixed .data slot. Empirically confirmed via the
     * az_height harness probe (soh3d 9d4e1627) at Kakariko: linkAge=1 →
     * returns 44 exactly. */
    u32 age = *(u32*)GSAVE_LINKAGE_ADDR;
    f32 base = (age != 0) ? 44.0f : 68.0f;
    return mount_add + base;
}

/* -------- Camera_CalcAtDefault — FUN_00338ac8 (73 insts) ---------------
 *
 * The at-target follower shared across CAM_FUNC_NORM1, NORM2, JUMP1
 * and func_800458D4. Same shape as N64 z_camera.c:906 EXCEPT the
 * Δ-A extra Y-bias block (the ONE structural divergence in the callee
 * tree — confirmed via probe soh3d 9d4e1627: at Kakariko-idle the
 * activation bit 0x100 is CLEAR, so the block is inert there; will
 * fire on climbing/pull candidates yet to be enumerated).
 *
 * The Camera struct offsets above are used raw (pointer arithmetic on
 * a forward-declared `struct Camera*`) because the full struct isn't
 * needed for this parity port — every access is at a RE'd offset.
 */
s32 Camera_CalcAtDefault(struct Camera* camera, VecSph* eyeAtDir,
                         f32 extraYOffset, s16 calcSlope) {
    u8* c = (u8*)camera;
    Vec3f* at            = (Vec3f*)(c + 0x080);
    void*  player        = *(void**)(c + 0x0D8);
    PosRot* playerPosRot = (PosRot*)(c + 0x0DC);
    Vec3f* floorNorm     = (Vec3f*)(c + 0x150);
    Vec3f* posOffset     = (Vec3f*)(c + 0x12C);
    f32    xzUpdateRate  = *(f32*)(c + 0x114);
    f32    yUpdateRate   = *(f32*)(c + 0x118);
    f32    atLERPStep    = *(f32*)(c + 0x148);

    f32 playerHeight = Player_GetHeight(player);

    Vec3f posOffsetTarget;
    posOffsetTarget.x = 0.0f;
    posOffsetTarget.z = 0.0f;
    posOffsetTarget.y = playerHeight + extraYOffset;

    if (calcSlope) {
        /* OREG(9) is loaded via a pool literal (line 0x338b28 add r0,#0x100
         * then ldrsh r0,[r0,#0xa6]). Actual runtime value unknown to this
         * decomp — read via the pool at call time. Placeholder pending
         * full OREG-table RE. */
        extern s16 OREG9;                                 /* live OREG(9) */
        f32 slopeAdj = Camera_CalcSlopeYAdj(floorNorm, playerPosRot->rot.y,
                                             eyeAtDir->yaw, (f32)OREG9);
        posOffsetTarget.y -= OLib_ClampMaxDist(slopeAdj, playerHeight);
    }

    Camera_LERPCeilVec3f(&posOffsetTarget, posOffset,
                         yUpdateRate, xzUpdateRate, 0.1f);

    /* -- Δ-A: extra Y-bias, gated on 3DS-only Player substate bit -------
     * SoH's z_camera.c:906 has no equivalent. Empirically INERT at
     * Kakariko-idle (bit=0, ybias=0). Fires on states that set
     * PLAYER_SUBSTATE_YBIAS_BIT.
     */
    f32 extraAtY = 0.0f;
    {
        u32 substate = *(u32*)((u8*)player + PLAYER_SUBSTATE_OFF);
        if (substate & PLAYER_SUBSTATE_YBIAS_BIT) {
            f32 ybias = *(f32*)((u8*)player + PLAYER_YBIAS_OFF);
            extraAtY = ybias * -0.01f;
        }
    }
    /* -- /Δ-A ---------------------------------------------------------- */

    Vec3f atTarget;
    atTarget.x = playerPosRot->pos.x + posOffset->x;
    atTarget.y = playerPosRot->pos.y + posOffset->y + extraAtY;
    atTarget.z = playerPosRot->pos.z + posOffset->z;

    Camera_LERPCeilVec3f(&atTarget, at, atLERPStep, atLERPStep, 0.2f);

    return 1;
}
