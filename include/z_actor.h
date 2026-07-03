/**
 * OoT3D actor system — hand-RE'd interface.
 *
 * Grezzo refactored the N64 OoT Actor struct on the 3DS port. The
 * fields we have RE-verified so far, via JIT memory-write watchpoint
 * on the title-demo rider at 0x09906A80 (see docs/title_writer_chains.md):
 *
 *   Actor+0x28 .. +0x34   Vec3f  world.pos       (differs from N64 +0x24)
 *   Actor+0x36            s16    world.rot.y     (binary angle)
 *   Actor+0x60 .. +0x6C   Vec3f  velocity        (x, ?, z; y layout tbd)
 *   Actor+0x64            f32    fwdSpeed        (current forward speed)
 *   Actor+0x68            f32    velocity.z      (paired with .x @ +0x60)
 *   Actor+0x6C            f32    speed_xz        (yaw-projected speed mag)
 *   Actor+0x70            f32    forceMagnitude  (accel toward maxSpeed)
 *   Actor+0x74            f32    maxSpeed        (speed clamp)
 *   Actor+0xa4 .. +0xB0   Vec3f  scriptedDelta   (per-frame position bias
 *                                                  from cutscene/demo dispatch)
 *
 * See docs/title_writer_chains.md for the derivation; see z_view.h for
 * the SndActor (audio-mirror) layout that references this actor via
 * `snd_actor + 0x84` pointing at `actor + 0x28`.
 */
#ifndef OOT3D_Z_ACTOR_H
#define OOT3D_Z_ACTOR_H

#include "z_types.h"
#include "z_camera.h"   /* Vec3f */

/*
 * Actor_MoveXZByYawSpeed — FUN_00376864.
 *
 * Per-frame integrator for an actor's forward motion + XZ velocity +
 * world.pos. Standard OoT-shape movement kernel:
 *
 *   sin_yaw = Math_SinS(actor->world.rot.y)   // FUN_002CFCA0
 *   cos_yaw = Math_CosS(actor->world.rot.y)   // FUN_00338F60
 *   actor->velocity.x = sin_yaw * actor->speed_xz
 *   actor->velocity.z = cos_yaw * actor->speed_xz
 *   actor->fwdSpeed  += actor->forceMagnitude * gTicks_delta * K1
 *   actor->fwdSpeed   = min(actor->fwdSpeed, actor->maxSpeed)
 *
 *   actor->world.pos.x += scriptedDelta.x + velocity.x * gTicks_delta * K2
 *   actor->world.pos.y += scriptedDelta.y + fwdSpeed  * gTicks_delta * K2
 *   actor->world.pos.z += scriptedDelta.z + velocity.z * gTicks_delta * K2
 *
 * where:
 *   gTicks_delta = VectorSignedToFloat(*(iVar4 + 0x110), rounding_mode);
 *                  iVar4 = *DAT_00376930 = a global tick source.
 *   K1 = DAT_00376934, K2 = DAT_00376938 — per-scene time scalars.
 *
 * VERIFIED via JIT memory-write watchpoint on the title-demo rider's
 * game-actor world.pos slot at 0x09906AA8 = actor + 0x28. All 6 xyz
 * writes per 5-frame window attribute to this fn (via FUN_004647F0's
 * FUN_0047E314 mirror into the audio subsystem).
 *
 * The title-demo trajectory is scripted via `actor->scriptedDelta`
 * (+0xa4/a8/ac) — those get populated by whichever dispatch step
 * feeds the demo actor per frame. That's the true "spline" target
 * for the parity port arc. Small state (3 floats/frame), and the
 * integrator's shape is universal across all OoT3D actors — nothing
 * demo-specific in this fn.
 */
void Actor_MoveXZByYawSpeed(void* actor);

/*
 * Actor_TurnToPoint — FUN_003326F0.
 *
 * Turn `actor->world.rot.y` toward the horizontal bearing from
 * `actor->world.pos` to `target`, capped at `max_step` binary-angle
 * units per frame:
 *
 *   target_yaw = Math_Atan2S(target.z - actor->world.pos.z,
 *                             target.x - actor->world.pos.x)
 *   diff = target_yaw - actor->world.rot.y
 *   diff = clamp(diff, -max_step, +max_step)
 *   actor->world.rot.y  += diff
 *   actor->rot.y_mirror  = actor->world.rot.y   // duplicate at +0xBE
 *
 * Standard N64-OoT-style Actor_TurnToPoint / Math_SmoothStepToS-shape
 * primitive. VERIFIED via JIT memory-write watchpoint on the title-
 * demo rider's yaw at actor+0x36 (all 5 writes attribute to this fn).
 */
void Actor_TurnToPoint(void* actor, const Vec3f* target, s32 max_step);

/*
 * PathFollow_Update — FUN_003CF3C4.
 *
 * The Grezzo demo-actor path follower — reads the CURRENT waypoint
 * from a path node struct, turns toward it, and moves at a constant
 * speed until arrival:
 *
 *   Vec3f target = {
 *     s16_to_f32(*(s16*)(path_node + 0x18)),   // waypoint.x
 *     s16_to_f32(*(s16*)(path_node + 0x1C)),   // waypoint.y
 *     s16_to_f32(*(s16*)(path_node + 0x20))    // waypoint.z
 *   };
 *   f32 dist = length(actor->world.pos - target);
 *   if (dist < 8.0f) {                       // arrival: DAT_003CF500 = 0
 *       actor->world.pos = target;
 *       actor->speed_xz  = 0.0f;
 *   } else {
 *       Actor_TurnToPoint(actor, &target, kMaxYawStep /* DAT_003CF4F4 */);
 *       actor->speed_xz = kPathSpeed;          // DAT_003CF4F8 = 8.0f
 *       // ... plus audio-sfx side effects at actor + 0x1C4
 *   }
 *
 * VERIFIED via JIT memory-write watchpoint on the title-demo rider's
 * speed_xz at actor+0x6C (all 5 writes attribute to this fn's
 * `actor->speed_xz = kPathSpeed` line, with data == 0x41000000 == 8.0f).
 *
 * The path_node struct holds s16 waypoint coordinates and probably
 * neighbour pointers for waypoint chaining. Fields walked so far:
 *
 *   path_node + 0x18   s16  waypoint.x
 *   path_node + 0x1C   s16  waypoint.y
 *   path_node + 0x20   s16  waypoint.z
 *
 * This IS the effective "title-demo spline". Not a Bézier/keyframe
 * curve — a linear-interpolation waypoint chain + this per-frame
 * follower. Porting into SoH's title-cam analogue is a small data
 * table + this integrator.
 */
void PathFollow_Update(void* actor, void* param_2, void* path_node);

#endif /* OOT3D_Z_ACTOR_H */
