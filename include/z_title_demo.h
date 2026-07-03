/**
 * OoT3D title-demo state — hand-RE'd interface.
 *
 * At title, OoT3D runs a refactored title-demo pipeline distinct from N64
 * OoT's Play state (per docs/title_gamestate.md: gPlayState == 0 throughout
 * title on 3DS). The demo drives a Link-riding-Epona flyover of Hyrule
 * Field. Two live SkelAnime pose tables + one camera basis + one rider
 * world-position slot are statically pre-allocated in `.data`:
 *
 *   0x005642D0  Epona SkelAnime pose table (25 entries, stride 36, {pos,rot,scale})
 *   0x005A54D8  Link  SkelAnime pose table (25 entries, stride 36, same shape)
 *   0x005BE6D4  Title camera basis {Vec3f eye, Vec3f dir(unit), Vec3f up(unit)}
 *   0x005AFFB0  Title-demo rider WORLD POSITION (Vec3f)     <-- THIS FILE
 *
 * See docs/title_gamestate.md and docs/title_actor_world_pos.md for the
 * empirical derivation of the rider-world-pos slot (frame-A vs frame-B300
 * .data-diff scan; only Vec3f in .data that moves at world-scale in the
 * Hyrule Field range while remaining directionally consistent).
 *
 * The rider-world-pos slot is the actor world.pos for the mount (Epona) —
 * Link is drawn attached via Epona's SkelAnime, so his effective world
 * position is the same slot (verified structurally: no second world-pos
 * slot surfaced in the same .data-diff scan under identical constraints).
 */
#ifndef OOT3D_Z_TITLE_DEMO_H
#define OOT3D_Z_TITLE_DEMO_H

#include "z_types.h"
#include "z_camera.h"   /* Vec3f */

/*
 * Statically pre-allocated rider (Epona-carrying-Link) world-position slot.
 * The containing struct is a title-demo-only lightweight actor node whose
 * layout does NOT match N64 OoT's Actor (see docs/title_gamestate.md for
 * the surrounding-fields dump). Only this one field is currently RE'd; the
 * rest of the struct is deferred.
 *
 * Empirical evidence:
 *   frame  A     (dt_A, titleF0, title_A):    (-5807.97,  69.29,  5143.63)
 *   frame  A+5   (titleF5):                   (-5794.12,  70.02,  5151.65)
 *   frame  A+60  (dt_B60):                    (-5600.25,  82.79,  5263.82)
 *   frame  A+300 (dt_B300, title_B):          (-4790.15,  71.94,  5732.56)
 *   Per-frame Δ: ~ (3.39, 0.009, 1.96) → magnitude ~3.9 units/frame,
 *   consistent with a scripted gallop speed. Y stays near 70 (Hyrule Field
 *   terrain height). Camera basis at 0x005BE6D4 tracks this slot as its
 *   look-at target across the same frames.
 */
#define TITLE_RIDER_WORLD_POS_ADDR  0x005AFFB0

/*
 * Read the title-demo rider's world position. Analogous to reading
 * `actor->world.pos` on an N64-OoT Actor* — but the containing struct
 * doesn't match Actor here (see docs/title_gamestate.md §"Where the
 * camera + actor state IS"), so the accessor is named for the demo, not
 * the actor type.
 *
 * Caller must ensure title is active (see z_title_demo.h's TitleActive
 * pattern in soh3d/tools/soh3d_harness/main.cpp) — the slot is only
 * meaningful when the title demo is running.
 */
Vec3f TitleDemo_GetRiderWorldPos(void);

#endif /* OOT3D_Z_TITLE_DEMO_H */
