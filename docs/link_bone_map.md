# OoT3D child-Link (childlink_v2) skeleton — bone map vs N64 Link limbs

Ground truth for the soh3d Link retarget (#7/#8/#70/#83/#86). Produced 2026-06-21 by reading the
**live OoT3D game** (Azahar oracle) skeleton and cross-checking the static CMB skeleton + its
mesh→bone bindings — NOT by guessing from the N64 decomp. All three agree.

## How it was derived (reproducible)

- **Static rest skeleton** — `soh3d/tools/link_skel_dump.py` parses `childlink_v2` out of
  `/actor/zelda_link_child_new.zar` (the exact asset OoT3D loads): 25 bones, per-bone parent +
  rest rot/trans, and the computed bind-pose **world position** of each bone origin.
- **Live confirmation** — a live per-bone world-matrix read off the oracle gave Link's
  matrices from the running game: `PLAYER actor (id 0) + 0x25c` → embedded skeleton object
  (vtable `0x4ec030`) `+ 0x20` → anim-player object (vtable `0x4ec018`) `+ 0xd4` → bone-matrix
  array (column-major 4x3, stride `0x30`; world (x,y,z) = floats m[6], m[10], m[2]).
- **Result:** the live per-bone X/Y world positions match the static rest pose **bone-for-bone
  to ≤0.1 model units** (waist 2156.3, chest 2665.2, b11 3226.3, b12 3973.2, shoulders 2918.4,
  elbows 2521.0, hands ±1203.2, knees 1135/1137, feet 388/390). The running 3DS game's live Link
  skeleton object holds exactly this 25-bone rig at exactly these rest positions. (Idle at Link's
  House is static headless, so a moving-pose capture wasn't taken; the rest-skeleton + mesh-binding
  evidence below is asset ground-truth and does not need it.)
- **Body-part labels are from the actual mesh→bone bindings** (`soh3d/tools/link_cmb_dump.py`),
  not a "highest-Y = head" guess — which would be WRONG here: the topmost bone b12 (Y 3973) is
  the **hat tip**, and the **head** is b11 (the eye mesh `c_eye01` and mouth `c_mouth01` bind to
  bone 11; the face meshes `childlink_f00/f01` to bones 10,11; the cap mesh to 10,11,12).

## Hierarchy (OoT3D childlink_v2) — from the live + static skeleton

```
b0 root
├─ b1 waist/pelvis (Y 2156)
│  ├─ b2 lower-pivot (rot -90,0,-90)
│  │  ├─ b3 thigh(+X) → b4 shin(+X) → b5 foot(+X)        [+X leg]
│  │  └─ b6 thigh(-X) → b7 shin(-X) → b8 foot(-X)        [-X leg]
│  └─ b9 upper-pivot (rot +90,0,+90)
│     └─ b10 chest (Y 2665) ── arms + head-chain + sheath all hang off b10
│        ├─ b11 head (Y 3226, eyes/mouth/face) → b12 hat (Y 3973, cap tip)
│        ├─ b13 clavicle(+X) → b14 shoulder(+X) → b15 elbow(+X) → b16 hand(+X)   [+X arm]
│        ├─ b17 clavicle(-X) → b18 shoulder(-X) → b19 elbow(-X) → b20 hand(-X)   [-X arm]
│        └─ b21 sheath/scabbard (+X, behind: Z -440)
└─ b22 root2 → b23, b24 (helper/unused, all at origin)
```

N64 forward = +Z, so **+X = Link's LEFT, -X = Link's RIGHT** (standard, matches N64; consistent
with the shipped soh3d walk render — legs/arms swing on the correct sides).

## The correspondence (OoT3D bone ↔ N64 PLAYER_LIMB)

`n64Limb` is the value used in `soh3d_link_bonecorr.inc` — the runtime reads `jointTable[1+n64Limb]`,
so **N64 PLAYER_LIMB = n64Limb + 1** (see `z64player.h`).

| OoT3D bone | body part      | N64 PLAYER_LIMB        | n64Limb | note |
|-----------:|----------------|------------------------|--------:|------|
| b0         | root           | (ROOT 1 / root pos)    | —       | identity |
| b1         | waist/pelvis   | WAIST 2                | 1       | |
| b2         | lower-pivot    | LOWER 3                | 2       | |
| b3         | thigh(+X)      | **L_THIGH 7**          | 6       | +X = left |
| b4         | shin(+X)       | L_SHIN 8               | 7       | |
| b5         | foot(+X)       | L_FOOT 9               | 8       | |
| b6         | thigh(-X)      | **R_THIGH 4**          | 3       | -X = right |
| b7         | shin(-X)       | R_SHIN 5               | 4       | |
| b8         | foot(-X)       | R_FOOT 6               | 5       | |
| b9         | upper-pivot    | **UPPER 10**           | 9       | waist's upper child — matches N64 UPPER position |
| b10        | **chest**      | (extra; rest)          | —       | arms+head+sheath parent — OoT3D-only intermediate, see CAVEAT |
| b11        | **head**       | **HEAD 11**            | 10      | eyes `c_eye01` + mouth `c_mouth01` bind here |
| b12        | **hat**        | **HAT 12**             | 11      | cap tip (childlink_01 cap mesh) |
| b13        | clavicle(+X)   | (L_SHOULDER 14's root) | —       | OoT3D splits shoulder into clavicle+shoulder |
| b14        | shoulder(+X)   | L_SHOULDER 14          | 13      | |
| b15        | elbow(+X)      | L_FOREARM 15           | 14      | |
| b16        | hand(+X)       | L_HAND 16              | 15      | left hand |
| b17        | clavicle(-X)   | (R_SHOULDER 17's root) | —       | |
| b18        | shoulder(-X)   | R_SHOULDER 17          | 16      | |
| b19        | elbow(-X)      | R_FOREARM 18           | 17      | |
| b20        | hand(-X)       | R_HAND 19              | 18      | right hand |
| b21        | sheath         | SHEATH 20              | 19      | currently rest in soh3d |
| b22–b24    | root2/helpers  | —                      | —       | unused (origin) |

N64 **COLLAR 13** and **TORSO 21** have no separately-articulated OoT3D bone (they fold into the
chest/head).

## CAVEAT — the spine is shifted by one bone: this is the #8/#83 root cause

OoT3D inserts an extra bone in the upper spine vs N64:

- **N64:** WAIST(2) → UPPER(10) → { HEAD(11) → HAT(12), arms, sheath }.  Arms + head all hang off
  the single **UPPER** bone.
- **OoT3D:** b1(waist) → b9(upper-pivot) → b10(**chest**) → { b11(head) → b12(hat), arms, sheath }.
  There is an **extra chest bone (b10)** between the upper-body root and the head/arms.

Aligning by role: **b9 ≡ N64 UPPER** (waist's upper child), **b10 = extra (no N64 limb)**,
**b11 ≡ N64 HEAD** (eyes/mouth bind here), **b12 ≡ N64 HAT**.

The shipped `soh3d_link_bonecorr.inc` instead maps `b9←UPPER, b10←HEAD, b11←HAT` and leaves **b12
(the hat) undriven** — i.e. it applies HEAD and HAT **one bone too low**, driving N64 **HEAD pitch
onto the CHEST bone (b10)**. That is exactly the documented #8 symptom (head-down / arms dragged
forward). It only looks fine at idle because N64 HEAD rot ≈ 0 there, so the per-bone idle-fit
correction (mode 2/3 on b10/b11) papers over it. Under any head-turn / look / dialog animation
(non-zero HEAD rot) the chest tilts instead of the head → "arms wrangled in dialog" (#83), torso
snap (#86).

### Corrected spine mapping (the actionable fix for #8)

| OoT3D bone     | current (shipped) | **corrected drive** | n64Limb |
|---------------:|-------------------|---------------------|--------:|
| b9 upper-pivot | UPPER 10          | UPPER 10 (unchanged)| 9 |
| b10 chest      | HEAD 11 ❌        | **rest** (extra bone) | — |
| b11 head       | HAT 12 ❌         | **HEAD 11**         | 10 |
| b12 hat        | rest ❌           | **HAT 12**          | 11 |

i.e. shift HEAD→b11 and HAT→b12, and set b10 to rest. This touches the shipped retarget path — gate any change on `soh3d/tools/soh3d_anim_qa.py`
(pose-discontinuity scanner) before/after, per [[soh3d-asel-link-and-3d3-static-ok]].

## Carry-walk upper/lower body partition (#85 two-source blend)

N64 splits a walking-while-carrying pose per-limb via `sUpperBodyLimbCopyMap` (z_player.c:397): the
base locomotion clip drives the LOWER body (legs cycle) while the carry clip (e.g. `carryB_wait`,
arms raised) is copied onto the UPPER-body limbs only (`AnimationContext_SetCopyTrue`). The N64 map
marks `PLAYER_LIMB` 10–21 (`UPPER, HEAD, HAT, COLLAR, L/R_SHOULDER, L/R_FOREARM, L/R_HAND, SHEATH,
TORSO`) as upper. Mapped onto the OoT3D 25-bone rig via the table above:

| region | OoT3D bones | source clip |
|--------|-------------|-------------|
| LOWER (root, waist, lower-pivot, R/L legs) | **0–8** | locomotion (walk/run) |
| UPPER (spine b9, chest b10, head b11, hat b12, collar/shoulder roots b13/b17, L arm b14/15/16, R arm b18/19/20, sheath b21) | **9–21** | carry pose |
| aux root2 | 22–24 | locomotion (leave lower) |

So the partition is simply **bones 9–21 = upper**, everything else lower. Same for child
(childlink_v2) and adult (link_v2) — shared rig. SoH3D ports this as `SoH3D_UpdateAnimTwoSource` +
`kLinkUpperBodyMask` (csab.cpp `skinMatricesTwoSource`): each bone samples its LOCAL transform from
its source clip, then the normal parent-multiply composes the hierarchy, so an upper arm hangs off
the walking pelvis exactly as the N64 copy-map result. VERIFIED (soh3d): lower-body bone world
matrices are bit-identical to a walk-only pose (legs come purely from the walk clip), while the hand
bones sit ~1600 model-units higher (raised carry pose) and stay steady as the legs cycle — confirmed
both deterministically (`linktwo` forced blend) and on a live cucco carry-walk.

## Tools
- `soh3d/tools/link_skel_dump.py [zar]` — static rest skeleton + world positions.
- Live per-bone world matrices are read off the oracle at the chain below.
