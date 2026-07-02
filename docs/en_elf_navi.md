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

## Sprite handle field map (as observed in Draw)

```
+0x22   u16       type discriminator (2 = default, 1 = alt)
+0x3c..+0x44  Vec3f   rotation (X, Y, Z)
+0x48..+0x50  Vec3f   scale     (X, Y, Z)
+0xf0..+0xfc  RGBA    color     (u32 packed or 4×u8/float depending on struct — verify with a live sample)
+0x170  u32       submitted-this-frame flag (must be 1 for the frame's effect pass to draw it)
```

## Follow-up decomp targets

- FUN_00371eac — likely `Effect_SubmitBillboard(handle, 1)` (dispatch to per-frame
  effect list). Confirm.
- FUN_0034897c — sprite handle allocator; confirm allocator arena to find handle
  size / where texture ptr lives.
- FUN_0036f410 / FUN_003591e4 — color init helpers (probably outer/inner palette setters).
