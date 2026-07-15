# En_Horse/Epona OoT3D body render gap — root cause and fix

Prior finding (`soh3d/debug_journal/2026-07-15-epona-hoof-dust-depth.md`): Epona (and every
other `Skin`-system actor: En_fHG the ghost-Epona, En_Horse_Normal/Ganon/Link_Child,
En_Horse_Zelda, En_Viewer) always rendered its native N64 mesh regardless of the Zelda3D
AUTO "skinned"-eligible classification `actorsnear` reported. This doc records the exact gap
and the fix that closes it, so the classification is no longer dead.

## The gap

SoH has two independent animated-actor draw families:

1. **`z_skelanime.c`'s `SkelAnime_Draw*` family** (`SkelAnime_DrawSkeletonOpa`,
   `SkelAnime_DrawSkeleton2`, `SkelAnime_DrawOpa`, `SkelAnime_DrawFlexOpa`, `SkelAnime_Draw`,
   `SkelAnime_DrawFlex`, `func_80034BA0`/`CC4`). Every one of these already calls a Zelda3D
   choke point before emitting any N64 limb `Gfx` — `Zelda3D_SkelAnimeDraw(play, skelAnime)`
   (the `SkelAnime*`-bearing wrapper) or `Zelda3D_SkelAnimeDrawRaw(play, skeleton, jointTable)`
   (the raw wrapper for call sites without a `SkelAnime*`). Both funnel into
   `Zelda3D_DoRetarget`, which — when `Zelda3D_TryAuto` has staged a pending replacement for
   the current actor (`gZelda3dPendingActor`/`gZelda3dPendingModel`) — retargets the live N64
   `jointTable` onto the OoT3D CMB skeleton, plays the mapped CSAB, draws the OoT3D model via
   the GL renderer, and returns 1 so the N64 limb walk is skipped.

2. **`z_skin.c`'s `Skin_DrawImpl`** — a *completely separate* limb-walk used exclusively by
   the `Skin` actor system (`Skin_Init`/`Skin_ApplyAnimTransformations`/`Skin_DrawAnimatedLimb`/
   `Skin_DrawLimb`). `Skin_DrawImpl` never called into `zelda3d.c` at all — it did not even
   `#include "zelda3d/zelda3d.h"`. So even though `Zelda3D_TryDrawActor` → `Zelda3D_TryAuto`
   correctly identifies En_Horse's object (`OBJECT_HORSE` → `zelda_horse.zar`) as
   `Zelda3D_AutoModelSkinned`, sets `e->skinned = 1`, and defers to the actor's own `Draw` by
   returning 0 (staging `gZelda3dPendingActor`/`gZelda3dPendingModel` exactly as it does for
   `SkelAnime`-based skinned actors) — nothing downstream ever consumed those pending globals.
   `EnHorse_Draw` → `Skin_DrawImpl` ran straight through to the native N64 `Gfx` limb walk every
   frame. The `AUTO:/actor/zelda_horse.zar (skin)` tag `actorsnear` reports is therefore a
   **static eligibility classification only**, not a live draw confirmation — this was the
   exact conclusion of the 2026-07-15 hoof-dust session (confirmed via `ZELDA3D_DUST_DEBUG=1`:
   100% `FALLBACK` on every hoof-dust resolve).

## Why the fix can reuse the existing raw choke point unmodified

`Skin` (`z64skin.h`) embeds a full `SkelAnime skelAnime` member, populated via
`Skin_Init` → `SkelAnime_InitSkin` and updated by the actor's own per-frame `SkelAnime_Update`
call on `skin->skelAnime` (same mechanism every N64-animated actor uses) — `z_skin_awb.c`'s
`Skin_ApplyAnimTransformations` reads `skin->skelAnime.jointTable` directly to build each
limb's local TRS matrix, exactly like `SkelAnime_DrawOpa` reads its `jointTable` argument.
So a `Skin` actor's live pose is carried in the *same* jointTable representation the
`SkelAnime_Draw*` family already retargets from — no new retarget math needed.

The only other input `Zelda3D_SkelAnimeDrawRaw` needs is the `void** skeleton` tree walk
(`Zelda3D_WalkN64Skeleton`/`Zelda3D_CountN64Limbs`), which reads each limb by casting to
`StandardLimb*` and reading `.child`/`.sibling`. Layout comparison:

```
StandardLimb (z64animation.h):      SkinLimb (z64skin.h):
  0x00 Vec3s jointPos                 0x00 Vec3s jointPos
  0x06 s8    child                    0x06 u8    child
  0x07 s8    sibling                  0x07 u8    sibling
  0x08 Gfx*  dList                    0x08 s32   segmentType
                                       0x0C void* segment
```

`jointPos`/`child`/`sibling` sit at identical offsets in both structs (only the trailing
per-type payload — `dList` vs `segmentType`/`segment` — differs, and the walk never touches
it). So `Zelda3D_WalkN64Skeleton`'s `StandardLimb*` cast is byte-compatible with a `SkinLimb**`
skeleton array; the existing raw choke point works against a Skin skeleton **unmodified**, no
new Skin-specific limb-tree walker required.

## The fix (SoH3D-side, this session)

`Shipwright/soh/src/code/z_skin.c`, `Skin_DrawImpl`:

- `#include "zelda3d/zelda3d.h"` added.
- After `skeleton = SEGMENTED_TO_VIRTUAL(skin->skeletonHeader->segment)` (and after
  `Skin_ApplyAnimTransformations` has already populated `gSkinLimbMatrices`, so `postDraw`
  callbacks that read posed limb matrices — e.g. `EnHorse_PostDraw`'s hoof-dust
  `Skin_GetLimbPos` calls — keep working unchanged), added:

  ```c
  if (Zelda3D_SkelAnimeDrawRaw(play, (void**)skeleton, skin->skelAnime.jointTable)) {
      if (postDraw != NULL) {
          postDraw(actor, play, skin);
      }
      goto close_disps;
  }
  ```

  before the native limb-matrix-load / per-limb `Gfx` emission. `Zelda3D_SkelAnimeDrawRaw`
  early-outs to 0 (no-op) whenever no pending replacement is staged for the current actor
  (any other `Skin` actor whose object has no OoT3D AUTO entry, or `Zelda3D` disabled), so
  this is a pure additive hook — it changes nothing for actors this doesn't apply to.

No changes were needed to `Zelda3D_TryAuto`/`Zelda3D_DoRetarget`/the AUTO object→ZAR table —
the staging side was already correct; only the missing consumer at the `Skin` draw choke
point was added.

## Scope / actors covered

Any `Skin`-system actor whose object ID has an OoT3D AUTO ZAR entry and is classified
`Zelda3D_AutoModelSkinned` now gets the same live-retarget treatment as `SkelAnime` actors:
En_Horse (Epona/Normal/Ganon/Link_Child variants share `Skin_DrawImpl`), En_fHG (ghost
Epona), En_Horse_Zelda, En_Viewer. This session's live verification covers En_Horse only
(the title-cs rider + a Hyrule Field regression check) — the others were not re-verified this
session (see `soh3d/debug_journal/2026-07-15-epona-en-horse-3ds-render.md` for the honest
scope statement).

## Bone mapping / CSAB coverage

Already fully RE'd and documented by the earlier 2026-07-15 mane/tail session (see
`soh3d/debug_journal/2026-07-15-epona-mane-tail-already-csab-driven.md`, retained/superseding
its own retracted live-verification claim): `epona.cmb`'s 25-bone rig (0=root/pelvis,
1=withers/chest, 2=shoulder, 3-6/10-13=front leg chains, 7-9=neck+head, **14=mane** (single
Z-rotation leaf bone off bone 1), 15-18/19-22=hind leg chains, **23-24=tail** (2-segment
chain off root)), and every `hl_anim_*.csab` clip in `zelda_horse.zar` carries a track for
every one of the 25 bones including 14/23/24 — no additional bone-mapping work was needed for
this fix; `Zelda3D_UpdateAnimAuto`/`Csab::skinMatrices` (the same AUTO CSAB path every other
skinned actor uses) samples them directly once the `Skin_DrawImpl` choke point above lets the
AUTO path actually run for En_Horse.
