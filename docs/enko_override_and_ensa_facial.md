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
