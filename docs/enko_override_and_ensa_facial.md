# En_Ko head-track + En_Sa facial/material — OoT3D ground truth (verifies SoH3D keystone port)

Decompiled from `build/code.bin` (load base 0x00100000) with `tools/ghidra_scripts/DecompDump.py`.
All `build/decomp/*.c` are gitignored — this doc cites addresses only. This SPECS keystone #1
(head/torso track, En_Ko + En_Sa) and keystone #3 (per-limb material/facial + held-DL override).

Resolved via `gActorOverlayTable @ 0x0050CD84` (stride 0x20, entry+0x14 = ActorProfile*):
the OverrideLimbDraw/PostLimbDraw pointers are not in the ActorProfile — they are the `DAT_*`
literals passed into the SkelAnime draw call inside each actor's Draw.

---

## TARGET 1 — En_Ko (ACTOR_EN_KO = 0x163)

### Resolved addresses
| fn | OoT3D addr |
|---|---|
| ActorProfile | 0x0052bd90 (objId 0x1 OBJECT_KO_MASTER? cat 4 NPC, instSize 0xca8) |
| EnKo_Init | 0x00165684 |
| EnKo_Destroy | 0x00165948 |
| EnKo_Update | 0x001b5f14 |
| EnKo_Draw | 0x001b5e30 |
| **EnKo_OverrideLimbDraw** | **0x002335b4** (= DAT_001b5f10, passed by EnKo_Draw) |
| EnKo_PostLimbDraw | 0x00217230 (= DAT_001b5f0c) |
| FUN_0034e01c | the **shared limb head/torso rotate helper** (En_Ko AND En_Sa both call it) |
| FUN_0034c664 | Npc_TrackPoint (writes interactInfo head/torso rot) |

### interactInfo offset — SoH3D assumption `@ 0x1E8` is WRONG for En_Ko
OoT3D En_Ko `interactInfo` base = **+0x28c** (proof: `EnKo_Update` 0x1b5f14:217 calls
`Npc_TrackPoint(this, this+0x28c, 2)`). NpcInteractInfo layout is byte-exact to N64
(`z64actor.h`: talkState@0, trackingMode@2, headRot@0x08, torsoRot@0x0E), so:
- **headRot @ this+0x294** (0x28c + 0x08)  — read by OverrideLimbDraw limb 10
- **torsoRot @ this+0x29a** (0x28c + 0x0E) — read by OverrideLimbDraw limb 9
(0x1E8 is not En_Ko's interactInfo; per-actor base differs — En_Sa's is +0x450. Do not hardcode 0x1E8.)

### Head/torso limb indices — SoH3D assumption (head=10, torso=9) is CORRECT
`EnKo_OverrideLimbDraw @ 0x2335b4`:
```
if (limbIndex == 9)  { copy torsoRot(+0x29a) -> local; FUN_0034e01c(mtx, &local); }  // TORSO
if (limbIndex == 10) { copy headRot (+0x294) -> local; FUN_0034e01c(mtx, &local); }  // HEAD
```
⇒ **OoT3D En_Ko: head = bone 10, torso = bone 9.** Confirms the SoH3D port (km1/kw1 head=10,
torso=9). (N64 En_Ko uses different indices — limb 15 head / limb 8 torso, z_en_ko.c:1336-1347 —
because the OoT3D CMB skeleton is renumbered. Port must use the OoT3D indices 10/9.)

### Axis sequence — SoH3D assumption is HALF RIGHT; FIX the torso Y-sign
The shared helper `FUN_0034e01c(MtxF* mtx, Vec3s* rot)` applies, for a Vec3s `rot` = {x,y,z}:
1. `FUN_00369014(rot.y * (2π/65536), mtx, mode=1)` — this `mode==1` branch rotates matrix
   columns [1,2]/[5,6]/[9,10] = **Matrix_RotateX** (concat) by **rot.y**.
2. an inline rotation of columns [0,1]/[4,5]/[8,9] = **Matrix_RotateZ** (concat) by **rot.x**.
   (scale const `DAT_0034e0e8 = 9.5874e-05 = 2π/65536` = the binang→radian factor.)

⇒ OoT3D applies, for BOTH head and torso, **`RotateX(rot.y) · RotateZ(rot.x)`, with NO Y negation
and NO pivot Matrix_Translate.**

| param | SoH3D assumed | OoT3D ground truth | verdict |
|---|---|---|---|
| head | `RotateX(headRot.y)·RotateZ(headRot.x)` | `RotateX(headRot.y)·RotateZ(headRot.x)` | ✅ CONFIRMED |
| torso | `RotateX(-torsoRot.y)·RotateZ(torsoRot.x)` | `RotateX(+torsoRot.y)·RotateZ(torsoRot.x)` | ❌ **DROP the minus on torso.y** |
| pivot translate | (none assumed) | none | ✅ |
| axis order | X then Z | X(from rot.y) then Z(from rot.x) | ✅ |

**Correction:** the SoH3D port copied N64's `RotateX(BINANG_TO_RAD(-torsoRot.y))`
(z_en_ko.c:1338). OoT3D's shared helper does NOT negate — it feeds `rot.y` straight through for
head and torso alike. The N64 negation compensated for the N64 torso bone's bind-axis handedness;
the OoT3D CMB torso bone is authored the other way, so **the OoT3D-faithful port must use
`+torsoRot.y`** (i.e. call the same helper for limb 9 and limb 10 with no per-limb sign flip). Using
N64's `-torsoRot.y` against the OoT3D model will lean the torso the wrong way.

Note the axis is **binang** (s16 angle), scaled by 2π/65536 — same units as N64 `BINANG_TO_RAD`.

### En_Ko PostLimbDraw / eyes
`EnKo_PostLimbDraw @ 0x217230`: on limb 10 writes actor.focus.pos (`+0x3c`) via Matrix_MultVec3f —
mirrors En_Sa. En_Ko's eye index is a single material-anim slot (see TARGET 2 API): `EnKo_Draw`
0x1b5e30 calls `FUN_0035e3a4(this+0xacc, 0, eyeTbl[headId])` + `FUN_0035e330(this+0xacc)`; the eye
table `@0x4d98f4 = {0,0,1,0}` and headId byte @ this+0x2ba (DAT_001b5f08). No mouth slot for En_Ko.

---

## TARGET 2 — En_Sa facial/material draw + ocarina mesh swap

### Resolved addresses (confirmed)
| fn | OoT3D addr |
|---|---|
| EnSa_Draw | 0x001b9358 |
| EnSa_OverrideLimbDraw | 0x0023bca4 (= DAT_001b944c) |
| EnSa_PostLimbDraw | 0x0021e968 (= DAT_001b9448) |
| material-index SET | **FUN_0035e3a4** |
| material-index COMMIT | **FUN_0035e330** |
| limb-rotate helper (shared w/ En_Ko) | FUN_0034e01c |
| mesh-visibility SHOW / HIDE | FUN_0037266c (set=1) / FUN_0036932c (set=0) |

interactInfo base = +0x450 (talkState@+0x450, headRot@+0x458, torsoRot@+0x45e — N64-exact).
matAnim base = +0x228. eye index = s16 @ +0x480. mouth index = s16 @ +0x482.

### The eye/mouth material-index mechanism (this is the implementable spec)
OoT3D does NOT do N64's `gSPSegment(0x08/0x09/0x0A)` texture-pointer swaps. Each face feature is a
**CMB material-texture-animation slot** whose current "frame" = the eye/mouth index. The matAnim
array (base `this+0x228`, **stride 0x98 per slot**, slots: 0=eye, 1=mouth, [2=?] — commit loops 3):

`EnSa_Draw @ 0x1b9358` each frame:
```
FUN_0035e3a4(this+0x228, 0, (s16)*(this+0x480));                       // eye  = eyeIndex
FUN_0035e3a4(this+0x228, 1, mouthRemap[ *(s16*)(this+0x482) ]);        // mouth= remap[mouthIndex]
FUN_0035e330(this+0x228);                                              // COMMIT (tick all 3 slots)
```
- **`FUN_0035e3a4(matAnimBase, slot, index)`** = set slot's target index:
  if slot enable-byte `*(matAnimBase+slot) != 0`, writes float(index) to `record[slot].targetFrame`
  (`+0xc`) and a rate/mode const `DAT_0035e40c` to `+0x10` (record stride 0x98).
  `index` is converted via `VectorSignedToFloat` (int→f32) — it is a material-anim frame number.
- **`FUN_0035e330(matAnimBase)`** = commit: loops the 3 slots, calls `FUN_00373bec(record+4)` on each
  active slot (advances/applies the material texture-anim to its target frame). This is what actually
  swaps the displayed eye/mouth texture for the frame.
- **Mouth remap table** `DAT_001b943c = 0x4d9c20`, **bytes = {0, 3, 4, 1, 2, ...}** — the N64 5-entry
  mouth order (N64 mouthIndex 0..4) is remapped to the 3DS material-anim frame order. `eyeIndex` is
  used directly (no remap). (Confirms saria doc: faithful, just material-order remapped.)

Eye-CLOSE / blink overlay (the `if (*(s16*)(this+0x484) != 0)` block in EnSa_Draw): sets a material
COLOR (`FUN_003589cc/FUN_00358964` slot 4, color = DAT_001b9440, alpha = (s16 @ +0x484)/255 via
`DAT_001b9444 = 1/255`) on the model `this+0x1cc`, then toggles eye-overlay mesh visibility
(`FUN_0036932c`/`FUN_0037266c` mesh index 1) — i.e. the closing-eye is a colored overlay mesh faded
by alpha @ +0x484, distinct from the eyeIndex texture slot.

### Implementable spec for the SoH3D material/facial override (keystone #3)
SoH3D already computes `rightEyeIndex/leftEyeIndex/mouthIndex` live (N64 En_Sa logic runs). In the
auto-replace draw path, after binding the OoT3D CMB/CSAB, per frame:
1. set the OoT3D model's **eye material-anim slot 0** current-frame = `eyeIndex`.
2. set **mouth material-anim slot 1** current-frame = `mouthRemap[mouthIndex]`, remap = {0,3,4,1,2}.
3. commit (advance the material texture-anims) so the GL draw samples the selected eye/mouth texture.
4. blink overlay: when the close-timer (`+0x484`/N64 blink alpha) != 0, fade the eye-overlay material
   color/alpha and show its mesh (slot 4 color, mesh 1). (Optional fidelity; eyeIndex alone gives the
   open/half/closed sprites for the common blink.)

### En_Sa head/torso limb indices + ocarina — CONFIRM + CORRECT the limb number
`EnSa_OverrideLimbDraw @ 0x23bca4`:
```
if (limbIndex == 10) FUN_0034e01c(mtx, this+0x458);   // HEAD  via headRot  (shared helper)
if (limbIndex == 9)  FUN_0034e01c(mtx, this+0x45e);   // TORSO via torsoRot
if (scene==0x56 (MEADOW) && limbIndex==0x12) { hideMesh(model, 2); }      // ocarina-in-hand pose
else                                         { showMesh(model,5); showMesh(model,2); }
```
- En_Sa head = **bone 10**, torso = **bone 9** — same as En_Ko, **same shared helper**, so same axis
  rule: `RotateX(rot.y)·RotateZ(rot.x)`, **no Y negation** (saria doc's "limb 16/9" was the N64
  numbering; OoT3D is 10/9).
- **The "ocarina-hand DL swap" is a MESH-VISIBILITY toggle, not a DL/segment swap**, and the limb is
  **0x12 (18), NOT 15** (saria doc said limb 15 — CORRECTION). In the Sacred Forest Meadow
  (scene 0x56) on limb 18 it hides mesh 2 (and elsewhere shows meshes 5 & 2). For SoH3D: when in
  scene 0x56, toggle the OoT3D model's mesh visibility (hide the no-ocarina right-hand mesh / show the
  ocarina mesh) instead of replicating N64's `gSariaRightHandAndOcarinaDL` DL swap.

`EnSa_PostLimbDraw @ 0x21e968`: limb 10 writes actor.focus.pos (`+0x3c`) via Matrix_MultVec3f.

---

## SUMMARY of corrections to the SoH3D port assumptions
1. **interactInfo @ 0x1E8 is wrong** — it is per-actor: En_Ko +0x28c (head +0x294, torso +0x29a),
   En_Sa +0x450 (head +0x458, torso +0x45e). Resolve per actor; don't hardcode 0x1E8.
2. **head=bone10, torso=bone9** — CONFIRMED for both En_Ko and En_Sa (OoT3D numbering).
3. **axis = `RotateX(rot.y)·RotateZ(rot.x)` for BOTH head and torso** — CONFIRMED for head;
   **torso must DROP the `-` on rot.y** (SoH3D copied N64's `-torsoRot.y`; OoT3D's shared helper uses
   `+torsoRot.y`). No pivot translate. Units = binang × 2π/65536.
4. **facial = material-anim frame index, not segment swap:** set eye slot 0 = eyeIndex, mouth slot 1 =
   {0,3,4,1,2}[mouthIndex], then commit; blink-close is a separate colored overlay mesh.
5. **ocarina = mesh-visibility toggle on limb 18 (0x12) in scene 0x56**, not a limb-15 DL swap.

---

# ACTOR-OWNERSHIP SWEEP 2 (2026-06-22) — En_Hy, En_Md (Mido), En_Ma1/2/3 (Malon)

Same extraction as TARGET 1/2 above, for the next-priority SoH3D skeletal NPCs. Resolved from
`build/code.bin` (load base 0x100000): gActorOverlayTable @ 0x50CD84 (stride 0x20, entry+0x14 =
ActorProfile*), ActorProfile {init@0x10, destroy@0x14, update@0x18, draw@0x1C}. The OverrideLimbDraw
/ PostLimbDraw pointers are the `DAT_*` literals passed by each Draw into the skel-draw call
`FUN_0035e240(skel, jointBase, OverrideLimbDraw, PostLimbDraw, this, mode)`.

**★ KEY CONFIRMATION: all five actors use the SAME shared head/torso rotate helper `FUN_0034e01c`**
as En_Ko/En_Sa → the no-negation `RotateX(rot.y)·RotateZ(rot.x)`, units binang × 2π/65536, no pivot
translate. So the SoH3D `trackRot()` already in `soh3d_anim_override.cpp` is correct for ALL of them;
only the per-actor `{interactOff, headBone, torsoBone}` differ. Facial = the same material-anim slot
API (`FUN_0035e3a4` set slot index + `FUN_0035e330` commit) as En_Sa.

## Resolved addresses

| actor | id | ActorProfile | objId | Init | Update | Draw | OverrideLimbDraw | PostLimbDraw |
|---|---|---|---|---|---|---|---|---|
| En_Hy   | 0x16e | 0x527418 | 0x001 | 0x1648e0 | 0x1b4c84 | 0x1b4944 | **0x16d9d4** | 0x150480 |
| En_Md   | 0x16d | 0x52c524 | 0x0fb | 0x16604c | 0x1b736c | 0x1b72b4 | **0x23bc70** | 0x21e91c |
| En_Ma1  | 0x0e7 | 0x52c11c | 0x0e0 | 0x18c334 | 0x1d9e00 | 0x1d9d50 | **0x233614** | 0x217274 |
| En_Ma2  | 0x0d9 | 0x52c1c0 | 0x0d0 | 0x18c614 | 0x1da0d4 | 0x1da000 | **0x233648** | 0x2172bc |
| En_Ma3  | 0x1c5 | 0x52c274 | 0x0d0 | 0x18c990 | 0x1da360 | 0x1da28c | **0x23367c** | 0x217304 |

(En_Sa shares 0x217274/0x2172bc-family PostLimbDraw addresses; En_Ma uses the En_Sa OOT object 0xbc
relatives. The OoT3D-NATIVE interactInfo bases below are NOT the SoH3D table values — see the CRITICAL
note.)

## ⚠ CRITICAL: SoH3D table uses the **N64** interactInfo offset, not the OoT3D-native one

SoH3D runs N64 actor logic, so it reads the **N64** struct. The `interactOff` for `kTrackActors`
comes from the N64 `z_*.h` header (NpcInteractInfo: headRot @ +0x08, torsoRot @ +0x0E inside it):

| actor | **N64 interactInfo off** (soh3d z_*.h) | OoT3D-native base (decomp, FYI only) |
|---|---|---|
| En_Hy  | **0x1E8** (z_en_hy.h:47)  | 0xdf0 (head rot @ +0xdf8, torso @ +0xdfe) |
| En_Md  | **0x1E0** (z_en_md.h:16)  | 0x450 (head @ +0x458, torso @ +0x45e) |
| En_Ma1 | **0x1E8** (z_en_ma1.h:20) | 0xc10 (head @ +0xc18, torso @ +0xc1e) |
| En_Ma2 | **0x1E0** (z_en_ma2.h:39) | 0x450 (head @ +0x458, torso @ +0x45e) |
| En_Ma3 | **0x1E0** (z_en_ma3.h:39) | 0x450 (head @ +0x458, torso @ +0x45e) |

## OoT3D head/torso bone ids (from each OverrideLimbDraw)

**En_Md** (FUN_0023bc70): `limb 9 → headRot(+0x458)`, `limb 8 → torsoRot(+0x45e)`.
⇒ **head = bone 9, torso = bone 8.**

**En_Ma1** child Malon (FUN_00233614): `limb 7 → headRot(+0xc18)`, `limb 6 → torsoRot(+0xc1e)`.
⇒ **head = bone 7, torso = bone 6.**

**En_Ma2 / En_Ma3** adult Malon (FUN_00233648 / FUN_0023367c, identical):
`limb 8 → headRot(+0x458)`, `limb 7 → torsoRot(+0x45e)`. ⇒ **head = bone 8, torso = bone 7.**

**En_Hy** (FUN_0016d9d4): bone ids are **PER-TYPE, NOT CONSTANT** — En_Hy swaps the body/head skeleton
per `EnHyType = actor.params & 0x7f`. The override reads a per-type record at
`sInitTable(0x527a4c) + (params&0x7f)*0x18`: HEAD limb = `*(rec+0x14)` (gets headRot @ +0xdf8),
TORSO limb = `*(rec+0x16)` (gets torsoRot @ +0xdfe). The 21-entry table (head, torso):

| type | name  | head | torso |   | type | name   | head | torso |
|---|---|---|---|---|---|---|---|---|
| 0  | AOB    | 10 | 9 |  | 11 | CNE_11 | 14 | 7 |
| 1  | COB    | 12 | 5 |  | 12 | BOJ_12 |  9 | 8 |
| 2  | AHG_2  | 15 | 8 |  | 13 | AHG_13 | 15 | 8 |
| 3  | BOJ_3  |  9 | 8 |  | 14 | BOJ_14 |  9 | 8 |
| 4  | AHG_4  | 15 | 8 |  | 15 | BJI_15 | 10 | 9 |
| 5  | BOJ_5  |  9 | 8 |  | 16 | BOJ_16 |  9 | 8 |
| 6  | BBA    |  7 | 6 |  | 17 | AHG_17 | 15 | 8 |
| 7  | BJI_7  | 10 | 9 |  | 18 | BOB_18 | 14 | 7 |
| 8  | CNE_8  | 14 | 7 |  | 19 | BJI_19 | 10 | 9 |
| 9  | BOJ_9  |  9 | 8 |  | 20 | AHG_20 | 15 | 8 |
| 10 | BOJ_10 |  9 | 8 |  |    |        |    |   |

Consistent **per body archetype** (so per OoT3D body zar): BOJ→{9,8}, AHG→{15,8}, BJI→{10,9},
CNE→{14,7}, AOB→{10,9}, COB→{12,5}, BBA→{7,6}, BOB→{14,7}. ⇒ For En_Hy the SoH3D override must
**read `actor.params & 0x7f` and pick head/torso bone from this table** (a single static row can't
cover En_Hy). A by-zar fallback works because each archetype maps to one OoT3D body zar.

## Facial / eye mechanism (same material-anim slot API as En_Sa: FUN_0035e3a4 set + FUN_0035e330 commit)

- **En_Hy** (Draw 0x1b4944): eye = slot 0, index `*(s16)(this+0xe20)`, matAnim base `this+0xeb0`.
  Single slot (no mouth). Also per-type mesh-visibility toggles (FUN_0036932c hide / FUN_0037266c
  show on model `this+0x1cc`) for hat/beard variants, gated on `sInit[type]`.
- **En_Md** (Draw 0x1b72b4): eye = slot 0, index `*(s16)(this+0x47e)`, matAnim base `this+0x228`;
  blink/alpha overlay color (slot 4) when `*(s16)(this+0x480)!=0`.
- **En_Ma1** (Draw 0x1d9d50): eye = slot 0 `*(s16)(this+0xc0c)`, mouth = slot 1 `*(s16)(this+0xc0e)`,
  matAnim base `this+0x9e0`.
- **En_Ma2 / En_Ma3** (Draw 0x1da000 / 0x1da28c): eye = slot 0 `*(s16)(this+0x47e)`,
  mouth = slot 1 `*(s16)(this+0x480)`, matAnim base `this+0x228`. (Ma2/Ma3 also toggle an ocarina/
  prop mesh via `this+0x1d4==2 ? showMesh : hideMesh(model,2)`.)

NOTE: the facial **indices** are computed by the running N64 logic (SoH3D reads `curEyeIndex` /
`eyeIndex` / `mouthIndex` from the N64 struct); only the application (material-anim slot frame) is the
OoT3D-faithful mechanism. Mouth may need the En_Sa-style {0,3,4,1,2} remap — verify per actor when
wiring facial (keystone #3); the rotation/track port below does not depend on it.

## Ready-to-paste SoH3D `kTrackActors` rows  `{ "/actor/<zar>.zar", <N64 interactOff>, <headBone>, <torsoBone> }`

```c
// Mido — single skeleton.
{ "/actor/zelda_md.zar",   0x1E0, 9, 8 },
// Child Malon (En_Ma1).
{ "/actor/zelda_ma1.zar",  0x1E8, 7, 6 },
// Adult Malon (En_Ma2 Lon Lon / En_Ma3 post-credits) — same OoT3D rig, head 8 / torso 7.
{ "/actor/zelda_ma2.zar",  0x1E0, 8, 7 },
// (En_Ma3 reuses the En_Ma2 adult-Malon zar; N64 interactOff 0x1E0, same bones 8/7.)

// En_Hy townsfolk — BONES ARE PER-EnHyType (params & 0x7f); ONE static row is INSUFFICIENT.
// Per OoT3D body archetype (→ body zar), N64 interactOff = 0x1E8 for all:
//   BOJ  {head 9,  torso 8}   -> /actor/zelda_boj.zar
//   AHG  {head 15, torso 8}   -> /actor/zelda_ahg.zar
//   BJI  {head 10, torso 9}   -> /actor/zelda_bji.zar
//   CNE  {head 14, torso 7}   -> /actor/zelda_cne.zar  (cne body; cow is a separate objId 395)
//   AOB  {head 10, torso 9}   -> /actor/zelda_aob.zar
//   COB  {head 12, torso 5}   -> /actor/zelda_cob.zar
//   BBA  {head 7,  torso 6}   -> /actor/zelda_bba.zar
//   BOB  {head 14, torso 7}   -> /actor/zelda_bob.zar
// Implement En_Hy by reading (params & 0x7f) and indexing the per-type bone table above,
// OR keep a per-body-zar row set (each archetype = one OoT3D body zar). Confirm the exact
// .zar filenames against kSoH3dObjectZars (soh3d.c) before pasting.
```

### Per-actor verdict vs the existing kTrackActors pattern
- **Mido, both Malons**: drop-in single rows, same helper/axis as En_Ko/En_Sa (no Y negation, no pivot).
- **En_Hy**: needs a per-EnHyType bone lookup (8 distinct head/torso bone pairs across body archetypes);
  the rest of the mechanism (shared helper, N64 interactOff 0x1E8, facial slot API) is identical.

## RESOLVED facial wiring (2026-06-22) — Mido / Malon / En_Hy (live-confirmed)

Dump pass (`tools/face_cmb_dump.py` + cmab `strt` frame-name probe) for the CMB **material slot** + the
sibling eye/mouth **.cmab** filename, cross-checked against the OoT3D Draw decomp for the slot index and
**remap** (decompiled `build/decomp/001b72b4.c`=En_Md, `001d9d50.c`=En_Ma1, `001da000.c`=En_Ma2). N64
index offsets from SoH `z_*.h`. **Key finding: Mido & both Malons pass eye/mouth DIRECTLY (no remap)** —
unlike En_Sa's `{0,3,4,1,2}` mouth remap. (OoT3D `FUN_0035e3a4(matAnimBase, slot, N64Index)` verbatim.)

| actor (zar) | N64 eye off | N64 mouth off | CMB eyeMat | CMB mouthMat | eye cmab | mouth cmab | remap |
|---|---|---|---|---|---|---|---|
| zelda_md  | 0x20E (eyeIdx)      | — | 1 | — | mido_eye.cmab (4f)        | — | direct |
| zelda_ma1 | 0x1E4 | 0x1E6 | 3 | 4 | childmalon_eye.cmab (3f)  | childmalon_mouth.cmab (3f) | direct |
| zelda_ma2 | 0x20E | 0x210 | 4 | 5 | malon_eye.cmab (3f)       | malon_mouth.cmab (3f)      | direct |
| zelda_boj | 0x218 (curEyeIndex) | — | 3 | — | hyliaman1_eye.cmab (3f)   | — | direct |
| zelda_ahg | 0x218 | — | 3 | — | hyliaman2_eye.cmab (3f)   | — | direct |
| zelda_bji | 0x218 | — | 3 | — | hyliaoldman_eye.cmab (3f) | — | direct |
| zelda_aob | 0x218 | — | 1 | — | hyliawoman1_eye.cmab (3f) | — | direct |
| zelda_bob | 0x218 | — | 1 | — | hyliawoman3_eye.cmab (3f) | — | direct |

- En_Hy types **cne / cob / bba** have NO eye animation (no N64 `sEyeTextures<TYPE>` array, no eye cmab) —
  omitted. En_Hy is eye-only (no mouth). All eye arrays are `{Open,Half,Closed}` == cmab `*_eye01/02/03`.
- Wired into SoH3D `kFacialActors` (soh3d_anim_override.cpp) + `kFacialAssets` (soh3d_model.cpp).
- LIVE-CONFIRMED: Mido eye open↔closed (Kokiri Forest); child Malon eye open↔closed + mouth (Market).
  All 8 cmabs load with the exact (mat, frame-count) above and zero "bad cmab layout" errors.
