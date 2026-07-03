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

#endif /* OOT3D_Z_ACTOR_H */
