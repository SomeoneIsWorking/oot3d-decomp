# OoT3D EnElf (Navi) — draw path RE

Recovered 2026-07-02 from Ghidra headless decomp of `build/code.bin`. Anchors:

- `gActorOverlayTable @ 0x0050CD84`, stride 0x20, EN_ELF id = 0x18.
- `EnElf` ActorProfile @ **0x005230a4** (entry+0x14 dereference).
- Draw @ **0x001d6ec4** (build/decomp/001d6ec4.c)
- Update @ 0x001d732c
- Init @ 0x0018a8e0 (build/decomp/0018a8e0.c)
- Destroy @ 0x0018b12c

## Draw path (from 001d6ec4.c)

EnElf_Draw does NOT call any SkelAnime / CMB / Model draw. It is a two-sprite effect
submitter. Structure:

```
if (actor+0x9a8 != 8 && !(actor+0x9c4 & 0x08)) {         // state/flags gate
    // optional cull vs. some world-Y threshold via VectorSignedToFloat(...)
    // fallthrough only if actor+0x54 != 0 (visible amplitude != 0)
    // — write per-sprite rot + scale + color into two effect slots:
    outer = *(actor+0x918)   // sprite handle 0 (allocated in Init)
    inner = *(actor+0x91c)   // sprite handle 1 (allocated in Init)

    outer[0x170] = 1                             // activate/visible flag
    outer[0x3c..0x44] = actor.head_rot?          // rot copied from actor+0x154/0x164/0x174
    outer[0x48..0x50] = scale × (1, 1, 1)         // uniform scale from breathing curve
    outer[0xf0..0xfc] = (R, G, B, A)              // color from actor+0x938..0x940

    inner[0x170] = 1
    inner[0x3c..0x44] = same rot
    inner[0x48..0x50] = scale × innerFactor       // fVar10 = DAT_001d72e8, smaller
    inner[0xf0..0xfc] = (R, G, B, A)              // color from actor+0x928..0x934

    FUN_00371eac(outer, 1)                        // submit for this frame
    FUN_00371eac(inner, 1)
}
```

## Init path (from 0018a8e0.c)

Both sprite handles are allocated in Init via a do-while loop:

```
for (iVar14 = 1; iVar14 >= 0; --iVar14) {
    handle = (**DAT_0018ac90->[+0xc])(0x1b8, "<grezzo-src>/... .c", ...)
    FUN_00348f34(handle, local_4c[iVar14])                   // bind to sprite def slot
    FUN_00348be4()
    FUN_00348a64(handle, 0, ..., DAT_0018ac9c, DAT_0018ac9c, DAT_0018ac98, DAT_0018ac98)
    if (!(*DAT_0018aca0 & 1) && FUN_003679b4(...))
        FUN_0036788c(DAT_0018aca4)                           // ensure asset loaded
    sprite = FUN_0034897c(gRomFsBase[0x47c], handle, actor+0x178, 0)
    actor[0x918 + iVar14*4] = sprite
    sprite[0x170] = 0                                        // initially hidden
}
```

Then Init writes the initial colors via `FUN_0036f410(actor+0x28, +0x2c, +0x30,
actor+0x948, 0xff, 0xff, 0xff, 0, 0)` for the outer (yellow-white) and
`FUN_003591e4(...)` for the inner. Also copies palette from DAT_0018accc based on
Navi type (case 0 = default Navi).

## Port implications for Zelda3D

**Navi is a native two-sprite effect, not a CMB port.** The port must:

1. Suppress the N64 EnElf_Draw (which draws the OoT3D-incompatible Fast3D billboard).
2. Emit two sprite billboards per frame at the actor's world.pos + focus offset,
   driven from live N64 EnElf C struct fields (actor+0x54 visibility, actor+0x920
   scale, actor+0x928..+0x940 inner/outer color × alpha).
3. Textures: OoT3D uses one shared "orb glow" texture for both sprites. Not in
   `/actor/*.zar`; likely in kankyo/effect/BlueSky.zar (candidates: `fine_star`,
   `fine_moon0`, other billboard textures already threaded through
   `Zelda3D_AutoModelId("BILLBOARD:...")` per zelda3d.c:3271). Confirm by RAM-reading
   the sprite handle's texture ptr from the live Azahar oracle at a scene where
   Navi is present (kokiri forest ent 0xEE).

## Sprite handle field map (CORRECTED 2026-07-22 from live Kokiri gameplay reads)

```
+0x22   u16       type discriminator (2 = default, 1 = alt)
+0x3c..+0x44  Vec3f   WORLD POSITION (matches actor pos + hover offset; the earlier "rotation"
                      label was wrong — actor+0x154/164/174 is the sprite's world-pos source)
+0x48..+0x50  Vec3f   scale — uniform; live Kokiri fairies: OUTER = 15.0, INNER = 7.5 (2:1).
                      The sprite quad is 1x1 WORLD UNIT (scale == world size): confirmed by
                      the on-screen orb measurement (~15 px at eye depth ~242 under the
                      camNear-7/zFar-12000 52-deg projection = 7.4 world units = the
                      7.5-scaled inner sprite).
+0xf0..+0xfc  FLOAT RGBA (0..1 floats, not packed): colors = the N64 innerColor/outerColor
                      fields /255; ALPHA is the N64 draw's own animation — OUTER = the
                      (timer*50)&0x1FF folded triangle pulse (live samples 0.010/0.490
                      trace it), INNER = innerColor.a (1.0 when active).
+0x170  u32       submitted-this-frame flag (must be 1 for the frame's effect pass to draw it)
```

## Textures + wing model (FOUND 2026-07-22, /actor/zelda_keep.zar)

- `elf/tex/acto_navi_light1.ctxb` (L8 64x64)  = OUTER glow sprite
- `elf/tex/acto_navi_light2.ctxb` (LA8 32x32) = INNER core sprite
  Both are QUADRANT-authored (bright corner, meant to be mirror-expanded across both axes
  — same convention as BlueSky's fine_moon1/2), verified by offline morton decode.
- `elf/model/elf_fly_mdl_info.cmb` (~2138 units tall) + `elf/Anim/elf_fly_soft_anim_tbl_info.csab`
  = the WINGS. EnElf_Draw itself never draws them: EnElf_Init (FUN_0018a8e0 lines 41-47) binds a
  skeleton-model instance — FUN_00358ea8(handle, play, actor+0x1a4 /*shape*/, modelRes(10),
  actor+0x178, 0, ...) — which the engine's model manager draws at the ACTOR's transform+scale.

## Sprite scale/alpha formulas (pool constants resolved 2026-07-22, code.bin @ VA)

FUN_001d6ec4's constant pool (DAT_001d72dc..0x1d7314):
0=0.0, +0xe0=255, +0xe4=1/3, +0xe8=0.5, +0xec=0.1, +0xf0=1.0, +0xf4=0.012, +0xf8=2.0,
+0xfc=125, +0x300=1000, +0x304=1.3, +0x308=0x1FF, +0x310=0.00116667 (= 7/6000), +0x314=1/255.

Decoded draw math:
```
pulse      = 1.0 + sin(angle) * 0.1        // angle from global frame counter (*1/3, per-fairy
                                            // multiplier at actor+0x9be), sin via binang<<12
outerScale = actor.scale.x * pulse * 0.012 * 125 * 1000 * 1.3     // *2 if fairyFlags & 0x200 (BIG)
innerScale = outerScale * 0.5
           // scale 0.008 -> 15.6*pulse ==> the live-read 15.003 exactly (pulse ~0.96)
envAlpha   = fold_0x1FF(angle * 50)         // 0..255 triangle — SAME as N64's (timer*50)&0x1FF
fadeOut    = 1 + disappearTimer * k * 0.00116667   // 7/6000 — the N64 fade constant verbatim
outer.a    = actor+0x924 (master, ~1 active) * envAlpha * fadeOut / 255
inner.a    = actor+0x934 (innerColor.a)      * actor+0x924 * fadeOut / 255
```
The formula is the N64 draw's, re-plumbed onto sprites — every constant either matches N64
verbatim (0x1FF fold, *50, 7/6000, 0.1 wobble) or is the 3DS sprite-size chain (0.012*125*
1000*1.3 = 1950 world units per actor-scale unit; sprite quad = 1x1 world unit).

## Actor struct: scale at +0x54 (CONFIRMED live)

The 3DS elf actor's scale Vec3f is at +0x54..+0x5C, live value 0.008 == the N64 fairy scale
(ICHAIN scale 8/1000). This also reinterprets the draw gate: `*(actor+0x54) != 0` in
FUN_001d6ec4 is `scale.x != 0`, not a "visible amplitude". Wing world size = CMB units x
actor scale = ~17 units tall, no extra base factor.

## Actor world matrix @ +0x148; sprite position source (SOLVED 2026-07-22)

The 3DS Actor embeds its engine-computed world transform as a ROW-MAJOR 3x4 float matrix at
`actor+0x148` (rows of 4: m00 m01 m02 tx | m10 m11 m12 ty | m20 m21 m22 tz — translation
column at **+0x154/+0x164/+0x174**, the stride-0x10 triple EnElf_Draw copies into both sprite
handles' +0x3c). Live-verified (Kokiri gameplay): rotation part = yawRot * scale(0.008),
translation == `world.pos` (+0x28) EXACTLY. So the glow sprites sit at the actor origin — the
SAME transform the wing skeleton-model instance is drawn at. **There is NO sprite offset/lift**
(falsifies the port's earlier hand-tuned kNaviYLift=12). Handles whose fairy has master fade
+0x924 == 0 are NOT submitted that frame, so their +0x3c reads are stale — only compare
submitted handles.

Also live-pinned on the 3DS Actor: `+0x94` = xyzDistToPlayerSq, `+0x98` = xzDistToPlayer
(N64 0x8C/0x90 shifted +8), `+0x1c` = params, `+0x60/68` = velocity.x/z.

## Glow proximity fade: +0x920 (light) / +0x924 (sprites) — SOLVED 2026-07-22

Grezzo addition, no N64 counterpart. Both floats init to 1.0 in EnElf_Init (DAT_0018ac4c).
The **Kokiri-fairy action fn @0x00129fac** (3DS port of N64 func_80A0353C: parent-follow +
1500*scale.y+40 hover + atan2S — then the Grezzo tail) steps them every update, gated to
`sceneNum == 0x55 (Kokiri Forest) || 0x5B (Lost Woods)`:

```
d = csMode ? dist3d(play+0x1b8 /*view.eye*/, world.pos) * 0.25       // csMode: play+0x22a0 byte
           : actor.xzDistToPlayer (+0x98)                            //   (FUN_0037571c) | global
SmoothStep(&+0x920, target = (d <= 720) ? 1 : 0, 0.3, 40/255, 1/255) // point-light fade
SmoothStep(&+0x924, target = (d <= 900) ? 1 : 0, 0.3, 40/255, 1/255) // sprite-glow fade
```

- Stepper `FUN_0036e168(target, fraction, step, minStep, &val)` == N64 Math_SmoothStepToF with
  the 3DS global 2/3 update-rate scale applied internally (watchpoint-verified ramp: constant
  phase step 0.156863*2/3 = 0.1046, proportional phase gap*0.2 = 0.3*2/3).
- Thresholds/steps are pool consts @0x0012a2c0..0x0012a2e4 (720=0x44340000, 900=0x44610000,
  0.3, 40/255=0x3e20a0a1, 1/255, cs-dist mult 0.25).
- Consumers: `+0x924` multiplies BOTH sprites' alpha in FUN_001d6ec4 (outer.a = m*envFold*fade,
  inner.a = innerColor.a*m*fade) and gates submission (m==0 -> sprites not submitted).
  `+0x920` = point-light intensity — FUN_001d6ec4 calls FUN_00341d5c(play, actor+0x1a4, 0, 0,
  actor, (s16)(m920*255)) when m920 != 0 && !(fairyFlags & 0x200); also toggles actor flags
  bit 0x20000000 (set when m920==0) and calls FUN_003731e0(actor+0x1a4) when m920 != 0.
- Net visible behavior: distant Kokiri fairies are BARE WINGS (no glow); glow fades in within
  900 units of the player, their light within 720.
- Special branches in the same fn (cutscene-only, unported): scene 0x55 + parent id 0x146
  (En_Sa, Saria) + globalA[0x00587958]->+8 == 0xFFFD -> orbit block writing hover offsets
  +0x980/984/988 from sin/cos of a global frame counter; scene 0x5B + csMode + parent id 0xC9
  -> +0x920 = +0x924 = parent->+0x408 * (1/255) directly.

Outer sprite RGB comes from the N64 outerColor fields (+0x938..): live samples across three
Kokiri fairies — (0,113,211), (0,237,0), (216,103,0) — match the N64 EnElf_GetColorValue
distribution (per-component flag 0 -> 0, 1 -> 200..255, 2 -> rand 0..255; sColorFlags config
random per spawn). Inner = 255,255,255,255. Per-fairy colours are spawn-RNG on BOTH engines,
so a given fairy's hue never matches across engines — only the distribution does.

## Follow-up decomp targets

- FUN_00371eac — likely `Effect_SubmitBillboard(handle, 1)` (dispatch to per-frame
  effect list). Confirm.
- FUN_0034897c — sprite handle allocator; confirm allocator arena to find handle
  size / where texture ptr lives.
- FUN_0036f410 / FUN_003591e4 — color init helpers (probably outer/inner palette setters).
