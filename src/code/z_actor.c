/**
 * OoT3D z_actor — hand-RE'd bodies for the actor movement pipeline.
 *
 * Landing shape follows z_camera.c / z_view.c / z_title_demo.c:
 *   - Match N64 zeldaret/oot naming where a twin exists
 *     (Actor_MoveXZByYawSpeed here matches N64 z_actor.c convention).
 *   - Per-body VA + provenance + Ghidra decomp cross-ref.
 *
 * See docs/title_writer_chains.md for the derivation of the actor-
 * position write chain — this file is its termination point.
 *
 * Ghidra 12.0.4 default (analyzeHeadless on $PATH); hand-disasm
 * only for spot-verify with named reason.
 */

#include "z_types.h"
#include "z_camera.h"       /* Vec3f */
#include "z_actor.h"

/* Math primitives — proven via cross-fn reuse across the disasm:
 *   FUN_002CFCA0 : Math_SinS(s16 binang) -> f32
 *   FUN_00338F60 : Math_CosS(s16 binang) -> f32 (also referenced from
 *                  z_camera.c's Camera_CalcSlopeYAdj)
 * VectorSignedToFloat is the guest's s16-to-f32 conversion helper
 * that consumes the FPSCR rounding-mode bits (bits 22:21 of FPSCR).
 */
extern f32   Math_SinS(s16 binang);              /* FUN_002CFCA0 */
extern f32   Math_CosS(s16 binang);              /* FUN_00338F60 */

/* Grezzo actor struct field offsets. See z_actor.h for the full map. */
#define ACTOR_ROT_Y_OFF        0x36  /* s16 */
#define ACTOR_VEL_X_OFF        0x60  /* f32 */
#define ACTOR_FWD_SPEED_OFF    0x64  /* f32 */
#define ACTOR_VEL_Z_OFF        0x68  /* f32 */
#define ACTOR_SPEED_XZ_OFF     0x6C  /* f32 */
#define ACTOR_FORCE_MAG_OFF    0x70  /* f32 */
#define ACTOR_MAX_SPEED_OFF    0x74  /* f32 */
#define ACTOR_WORLD_POS_X_OFF  0x28  /* f32 */
#define ACTOR_WORLD_POS_Y_OFF  0x2C  /* f32 */
#define ACTOR_WORLD_POS_Z_OFF  0x30  /* f32 */
#define ACTOR_SCRIPT_DELTA_OFF 0xA4  /* Vec3f — cutscene/demo bias */

/* -------- Actor_MoveXZByYawSpeed — FUN_00376864 ---------------------------
 *
 * Ghidra decomp: build/decomp/00376864.c.
 * VERIFIED via JIT memory-write watchpoint on the title-demo rider's
 * game-actor world.pos slot at 0x09906AA8 (see scratch/title_spline_hunt.py
 * output in docs/title_writer_chains.md).
 *
 * Per-frame integrator: (yaw, speed_xz, forceMag, maxSpeed, scriptedDelta) →
 * (velocity, world.pos). Standard OoT movement kernel — reused by every
 * actor whose motion goes through this API, not demo-specific.
 *
 * The gTicks_delta term comes from *DAT_00376930 (a global tick-time
 * source) with FPSCR-rounded s16→f32 conversion. K1 / K2 are per-scene
 * time scalars (DAT_00376934 / DAT_00376938 — see build/decomp for
 * their exact values; not resolved here because they're runtime state,
 * not compile-time constants).
 */
void Actor_MoveXZByYawSpeed(void* actor) {
    u8* base = (u8*)actor;
    s16 yaw = *(s16*)(base + ACTOR_ROT_Y_OFF);
    f32 speed_xz = *(f32*)(base + ACTOR_SPEED_XZ_OFF);
    f32 sin_yaw = Math_SinS(yaw);
    f32 cos_yaw = Math_CosS(yaw);

    /* XZ velocity from yaw + speed */
    *(f32*)(base + ACTOR_VEL_X_OFF) = sin_yaw * speed_xz;
    *(f32*)(base + ACTOR_VEL_Z_OFF) = cos_yaw * speed_xz;

    /* Read the global tick source; the guest emits this via
     * `VectorSignedToFloat(*(iVar4 + 0x110), rounding_mode)` where
     * iVar4 = *DAT_00376930. Placeholder pending broader RE of the
     * global tick subsystem — the fn signature stays exact. */
    extern f32 Grezzo_GetTickDelta(void);   /* wraps FUN_XXXX + globals */
    f32 gTicks_delta = Grezzo_GetTickDelta();

    /* Accelerate fwdSpeed toward maxSpeed. K1 = DAT_00376934. */
    extern const f32 kActorAccelScale;      /* DAT_00376934, per-scene */
    f32 fwd_speed = *(f32*)(base + ACTOR_FWD_SPEED_OFF);
    f32 force_mag = *(f32*)(base + ACTOR_FORCE_MAG_OFF);
    f32 max_speed = *(f32*)(base + ACTOR_MAX_SPEED_OFF);
    fwd_speed = fwd_speed + force_mag * gTicks_delta * kActorAccelScale;
    if (fwd_speed > max_speed) fwd_speed = max_speed;
    *(f32*)(base + ACTOR_FWD_SPEED_OFF) = fwd_speed;

    /* Integrate world.pos from velocity + scriptedDelta. K2 = DAT_00376938. */
    extern const f32 kActorMoveScale;       /* DAT_00376938, per-scene */
    f32 dt2 = gTicks_delta * kActorMoveScale;
    Vec3f* scripted = (Vec3f*)(base + ACTOR_SCRIPT_DELTA_OFF);
    f32 vx = *(f32*)(base + ACTOR_VEL_X_OFF);
    f32 vz = *(f32*)(base + ACTOR_VEL_Z_OFF);
    *(f32*)(base + ACTOR_WORLD_POS_X_OFF) += scripted->x + vx        * dt2;
    *(f32*)(base + ACTOR_WORLD_POS_Y_OFF) += scripted->y + fwd_speed * dt2;
    *(f32*)(base + ACTOR_WORLD_POS_Z_OFF) += scripted->z + vz        * dt2;
}
