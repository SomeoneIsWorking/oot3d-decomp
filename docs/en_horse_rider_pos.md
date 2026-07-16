# EnHorse rider position (Link's seat anchor) — RE'd chain

Question: how does OoT3D compute the mounted player's position on the horse each frame
(N64: `EnHorse_PostDraw` → `Skin_GetLimbPos(skin, 30, &riderOffset{600,-1670,0}, &riderPos)`;
consumed by `Player_Action_8084CC98`: `player.pos = horse.pos + riderPos, y -= 27.0f`)?

## Chain (all VAs code.bin, decomp dumps under build/decomp/)

1. **EnHorse ActorProfile @ 0x00526ef0**: flags 0x80000010, objectId 0x1a, **instanceSize
   0x1098**, Init 0x001d9004, Destroy 0x001d97f8, **Update FUN_0014a5a8**, **Draw
   FUN_001b46e8**. Found via the cutscene action-func table (`title_rider_cs_dispatch.md`'s
   0x00526DE4): the per-action dispatch table base 0x00526e24 (= 0x00526e68 − 17*4,
   N64 `ENHORSE_ACT_CS_UPDATE`=17) has its only pool literal at 0x0014adbc, inside
   FUN_0014a5a8 (region was unanalyzed; force-ARM-disassembled, prologue @ 0x0014a5a8).

2. **riderPos = EnHorse+0xEB8..0xEC0**, written every frame by EnHorse_Update:
   ```c
   // FUN_0014a5a8 tail (build/decomp/0014a5a8.c:483):
   FUN_00408828(horse + 0x1B4 /*skel holder*/, horse + 0xEB8 /*out riderPos*/,
                &horse->actor, ..., /*jointIdx=*/0xE, /*axisStashMask*/);
   ```
   **Joint index 0xE = 14** — the OoT3D Epona rig (`zelda_horse.zar`, Model/epona.cmb,
   25 bones) carries a DEDICATED zero-geometry rider-attach bone: bone 14, parent 1
   (torso), local trans (1268, −1763.7, 0). The N64's separate `riderOffset {600,−1670,0}`
   constant does NOT exist in code.bin (searched 0x44160000/0xC4D0C000 as a 12-byte Vec3f
   and individually) — Grezzo baked the offset into the skeleton as this bone.

3. **FUN_00408828** (build/decomp/00408828.c) = "posed joint offset from actor": builds the
   actor base matrix `T(pos.x, pos.y + shape.yOffset*scale.y, pos.z) · R_YXZ(shape.rot) ·
   S(scale)`, walks the joint hierarchy multiplying per-joint local matrices (parent-chained,
   stride 0x34), and at the requested joint index returns
   `out = jointWorldPos − actorBasePos` — the actor-relative offset of the POSED joint
   origin. (param_6 is a per-axis mask that stashes+zeroes the joint's local translation —
   the N64 `ENHORSE_CALC_RIDER_POS` jump-path analog; unused at title.)

4. **Riding player action func = FUN_002b7fd0** (0x002b7fd0..0x002b9120, ~4.4KB; N64
   `Player_Action_8084CC98` twin — located via its UNIQUE `upperLimbRot.y` clamp constant
   −0x4AAA = 0xFFFFB556, single hit in code.bin at pool 0x002b9120). Attach
   (build/decomp/002b7fd0.c:101/277):
   ```c
   player.pos(+0x28/2c/30) = horse.pos + horse->riderPos(+0xEB8/EBC/EC0);
   player.pos -= player+0x2B8[0..2] * 0.01f;   // fRam002b839c = 0.01
   ```
   The subtraction is the player's own root-joint translation (model units) × actor scale —
   the N64's hardcoded `y -= 27.0f` is this term constant-folded (root joint ≈ 2700 × 0.01).

## Non-rider joint reads (disambiguation)

- **EnHorse_Draw FUN_001b46e8** and **PostDraw FUN_002326ac** both read joint **9** world
  matrix translation (via FUN_003478bc(skel, 9)) into +0x1088 / +0xE8C — that is the **HEAD**
  (CMB bone 9 = end of neck chain 7→8→9), the N64 `unk_228` head/focus analog. NOT the rider.
- PostDraw's hoof-dust reads use joints **6 / 0xD / 0x12** (front-R, front-L, rear-R hoof
  chain ends) — confirming **runtime joint index == CMB bone index** for this rig.

## Port status

Ported in soh3d: `Zelda3D_HorseSaddleOffset` (zelda3d_render.cpp) computes bone 14's posed
model-local origin through the exact replaced-draw transform and `EnHorse_PostDraw`
(z_en_horse.c) uses it as riderPos whenever the horse draws as the OoT3D model (N64
`Skin_GetLimbPos(30)` stays as the native-draw fallback). The player side keeps the vendored
N64 `y -= 27.0f` (the 3DS computes the same term live from its root joint; equal for the
standing-rig constant N64 folded).
