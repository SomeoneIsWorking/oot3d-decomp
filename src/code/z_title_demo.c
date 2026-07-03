/**
 * OoT3D z_title_demo — hand-RE'd bodies.
 *
 * At title (gPlayState == 0 on 3DS), the demo runs a lightweight scripted
 * playback distinct from N64's Play state (per docs/title_gamestate.md).
 * A tiny amount of state — camera basis, two SkelAnime pose tables, and
 * ONE rider world-position slot — lives statically in `.data` rather than
 * being reached through a PlayState-rooted ActorContext.
 *
 * This file exposes read accessors for the RE'd slots. Writers (evaluators
 * that update each slot per frame) are RE'd in docs/title_gamestate.md
 * and docs/title_camera_lead.md; they're not re-implemented here (the
 * decomp target is faithful state access, not evaluator re-implementation).
 */

#include "z_types.h"
#include "z_camera.h"       /* Vec3f */
#include "z_title_demo.h"

/* -------- TitleDemo_GetRiderWorldPos ---------------------------------------
 *
 * Return the rider (Epona-with-Link) world position by reading the fixed
 * .data slot. Empirically located via a frame-A vs frame-B300 .data-diff
 * scan on the 8 gamestate_re/data_dt_*.bin snapshots: this was the ONLY
 * Vec3f in .data that
 *   - Lived outside the two known pose tables and the camera basis,
 *   - Held world-scale coordinates in the Hyrule Field range at frame A,
 *   - Moved smoothly and directionally-consistently across three time
 *     deltas (Δ60 vs Δ300 ratio ~4.9, cos(Δ60,Δ300) = 0.999),
 *   - Had struct-shaped surroundings (self-referential list-node pointers
 *     at -0x28/-0x24, scale-1.0 placeholders, code+heap pointer neighbors).
 * See docs/title_gamestate.md for the surrounding-fields dump.
 *
 * The read is a direct load from TITLE_RIDER_WORLD_POS_ADDR — no Play or
 * Actor pointer chain is available at title on 3DS.
 */
Vec3f TitleDemo_GetRiderWorldPos(void) {
    return *(Vec3f*)TITLE_RIDER_WORLD_POS_ADDR;
}
