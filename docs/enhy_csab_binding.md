# En_Hy CSAB binding chain — static RE (2026-06-23)

Static reverse-engineering of how OoT3D En_Hy (Hylian NPC, actor id=366 / 0x016e)
selects its animation (CSAB) per ENHY_TYPE. Serves soh3d (Market/Castle Town NPCs).

---

## Functions involved

| address      | name / role                                          |
|--------------|------------------------------------------------------|
| `0x001648e0` | `EnHy_Init` — spawn-filter: scene+type gating (476B) |
| `0x00164ad0` | `EnHy_Destroy` — (trivial, 193B)                     |
| `0x003ac640` | `EnHy_InitAction` — actual CSAB/skel load (692B)     |
| `0x001b4c84` | `EnHy_Update` — per-frame: Npc_TrackPoint + action   |
| `0x001b4944` | `EnHy_Draw` — multi-slot CMB draw + head-obj draw    |
| `0x003717ac` | `SetSkelAnimCSAB` — apply CSAB from pool             |
| `0x0034c664` | `Npc_TrackPoint` — head/torso tracking               |

---

## Per-type info table @ `0x00527a4c` (stride=0x18, 21 types)

Also pointed to by `DAT_001b5014` (update) and `DAT_001b4c70` (draw).

| field      | offset | type | description                       |
|------------|--------|------|-----------------------------------|
| obj_id     | +0x00  | s16  | OoT3D object ID (ZAR file)        |
| csab_count | +0x0c  | s16  | number of CSABs to register       |
| eye_anim   | +0x12  | s16  | eye-blink period (frames; -1=none)|

Object IDs per type:

| type | ENHY_TYPE (N64)  | obj_id | N64 object     | OoT3D ZAR       | model          |
|------|-----------------|--------|----------------|-----------------|----------------|
|  0   | AOB             | 0x0105 | object_aob     | zelda_aob.zar   | hyliawoman1    |
|  1   | COB             | 0x018c | object_cob     | zelda_cob.zar   | hyliawoman2    |
|  2   | AHG_2           | 0x0107 | object_ahg     | zelda_ahg.zar   | hyliaman2      |
|  3   | BOJ_3           | 0x0111 | object_boj     | zelda_boj.zar   | hyliaman1      |
|  4   | AHG_4           | 0x0107 | object_ahg     | zelda_ahg.zar   | hyliaman2      |
|  5   | BOJ_5           | 0x0111 | object_boj     | zelda_boj.zar   | hyliaman1      |
|  6   | BBA             | 0x010d | object_bba     | zelda_bba.zar   | hyliaoldwoman  |
|  7   | BJI_7           | 0x010c | object_bji     | zelda_bji.zar   | hyliaoldman    |
|  8   | CNE_8           | 0x0108 | object_cne     | zelda_cne.zar   | hylialady      |
|  9   | BOJ_9           | 0x0111 | object_boj     | zelda_boj.zar   | hyliaman1      |
| 10   | BOJ_10          | 0x0111 | object_boj     | zelda_boj.zar   | hyliaman1      |
| 11   | CNE_11          | 0x0108 | object_cne     | zelda_cne.zar   | hylialady      |
| 12   | BOJ_12          | 0x0111 | object_boj     | zelda_boj.zar   | hyliaman1      |
| 13   | AHG_13          | 0x0107 | object_ahg     | zelda_ahg.zar   | hyliaman2      |
| 14   | BOJ_14          | 0x0111 | object_boj     | zelda_boj.zar   | hyliaman1      |
| 15   | BJI_15          | 0x010c | object_bji     | zelda_bji.zar   | hyliaoldman    |
| 16   | BOJ_16          | 0x0111 | object_boj     | zelda_boj.zar   | hyliaman1      |
| 17   | AHG_17          | 0x0107 | object_ahg     | zelda_ahg.zar   | hyliaman2      |
| 18   | BOB_18          | 0x0115 | object_bob     | zelda_bob.zar   | hyliawoman3    |
| 19   | BJI_19          | 0x010c | object_bji     | zelda_bji.zar   | hyliaoldman    |
| 20   | AHG_20          | 0x0107 | object_ahg     | zelda_ahg.zar   | hyliaman2      |

Types 0 (AOB), 1 (COB), 6 (BBA), 18 (BOB): **single-body** (dress/full-length — CMB
contains everything; no separate head object slot).

All others: **two-part** — body ZAR (listed above) + separate head ZAR loaded into
the body ZAR slot (indexed at runtime by the `body_slot` field in the draw table).

---

## CSAB selection

### How it works

`EnHy_InitAction` calls `SetSkelAnimCSAB` (`FUN_003717ac`):
```c
FUN_003717ac(actor + 0x1a4,              // skeleton anim ptr
             CSAB_PARAM_TABLE_BASE,       // @ 0x52747c (= DAT_003ac960 - 0x288)
             DRAW_TABLE[type * 0x28 + 0x24]);  // 1-byte pool index
```

The 1-byte pool index at draw-table[type * 0x28 + 0x24] indexes into the
CSAB param table @ `0x0052747c` (stride=24 bytes). Each param entry stores:

| field          | offset | type | description                                 |
|----------------|--------|------|---------------------------------------------|
| csab_zar_idx   | +0x00  | u32  | ZAR-internal CSAB index (0-based, CSAB only)|
| playSpeed      | +0x04  | f32  | 1.0 (default)                               |
| startFrame     | +0x08  | f32  | 0.0 (default)                               |
| loopMode       | +0x0c  | f32  | -1.0 = loop                                 |
| yOffset        | +0x14  | f32  | 0.0 (default); -8.0 for some walk anims     |

`csab_zar_idx` is a ZAR-internal index into the CSAB file list of the body ZAR
(NOT counting the CMB model at file[0]). Unlike En_Ko, there is NO per-ZAR prefix
offset — the index 0 always means the FIRST CSAB in the ZAR.

### CSAB param table @ `0x0052747c` (27 entries, stride=24)

| pool | csab_zar_idx | yOffset | note              |
|------|-------------|---------|-------------------|
|  0   | 0           | 0.0     | first CSAB (idle) |
|  1   | 0           | 0.0     |                   |
|  2   | 0           | 0.0     |                   |
|  3   | 0           | 0.0     |                   |
|  4   | 0           | 0.0     |                   |
|  5   | 0           | 0.0     |                   |
|  6   | 0           | 0.0     |                   |
|  7   | 1           | -10.0   |                   |
|  8   | 0           | -10.0   |                   |
|  9   | 2           | 0.0     |                   |
| 10   | 1           | 0.0     |                   |
| 11   | 2           | 0.0     |                   |
| 12   | 1           | 0.0     |                   |
| 13   | 6           | 0.0     |                   |
| 14   | 7           | 0.0     |                   |
| 15   | 1           | 0.0     |                   |
| 16   | 2           | 0.0     |                   |
| 17   | 2           | -8.0    |                   |
| 18   | 4           | 0.0     |                   |
| 19   | 5           | 0.0     |                   |
| 20   | 1           | 0.0     |                   |
| 21   | 2           | 0.0     |                   |
| 22   | 0           | 0.0     |                   |
| 23   | 3           | -8.0    |                   |
| 24   | 2           | -8.0    |                   |
| 25   | 1           | -8.0    |                   |
| 26   | 3           | -8.0    |                   |

---

## FULLY RESOLVED: ENHY_TYPE → idle CSAB (static, 2026-06-23)

ENHY_TYPE = `actor.params & 0x7f` (bottom 7 bits; consistent with N64).

| type | ENHY_TYPE (N64)  | ZAR          | pool | csab_idx | dur | idle CSAB                |
|------|-----------------|--------------|------|----------|-----|--------------------------|
|  0   | AOB             | zelda_aob    |  0   | 0        |  20 | **Aob_mastu**            |
|  1   | COB             | zelda_cob    | 22   | 0        |  20 | **Cob_matsu**            |
|  2   | AHG_2           | zelda_ahg    |  1   | 0        |  20 | **Ahg_matsu**            |
|  3   | BOJ_3           | zelda_boj    | 15   | 1        |  16 | **Boj2_5**               |
|  4   | AHG_4           | zelda_ahg    | 11   | 2        |  20 | **Ahg2_8**               |
|  5   | BOJ_5           | zelda_boj    | 16   | 2        |  11 | **Boj2_9**               |
|  6   | BBA             | zelda_bba    | 10   | 1        |  40 | **Bba_n_wait**           |
|  7   | BJI_7           | zelda_bji    |  4   | 0        |  40 | **Bji_matsu**            |
|  8   | CNE_8           | zelda_cne    |  9   | 2        |  40 | **Cne_n_wait**           |
|  9   | BOJ_9           | zelda_boj    | 13   | 6        |  30 | **Boj_13**               |
| 10   | BOJ_10          | zelda_boj    | 14   | 7        |  23 | **Boj_14**               |
| 11   | CNE_11          | zelda_cne    | 20   | 1        |  12 | **Cne2_15**              |
| 12   | BOJ_12          | zelda_boj    | 18   | 4        |  30 | **Boj2_17**              |
| 13   | AHG_13          | zelda_ahg    | 12   | 1        |  20 | **Ahg2_18**              |
| 14   | BOJ_14          | zelda_boj    | 19   | 5        |  30 | **Boj2_19**              |
| 15   | BJI_15          | zelda_bji    | 21   | 2        |  40 | **Bji2_20**              |
| 16   | BOJ_16          | zelda_boj    |  5   | 0        |  30 | **Boj_matsu**            |
| 17   | AHG_17          | zelda_ahg    | 11   | 2        |  20 | **Ahg2_8**               |
| 18   | BOB_18          | zelda_bob    |  6   | 0        |  20 | **Bob_matsu**            |
| 19   | BJI_19          | zelda_bji    | 21   | 2        |  40 | **Bji2_20**              |
| 20   | AHG_20          | zelda_ahg    | 12   | 1        |  20 | **Ahg2_18**              |

Note: types 4/17 share the same CSAB (Ahg2_8); types 12/20 share (Ahg2_18);
types 15/19 share (Bji2_20).

---

## NPC head-track (from EnHy_Update)

`EnHy_Update` calls `Npc_TrackPoint` (`FUN_0034c664`) at:
```c
FUN_0034c664(actor, actor + 0xdf0, trackMode, uVar4, param_4)
```

- **`interactInfo` base = actor+0xdf0** (N64 En_Hy had it at actor+0x1E8 — larger due to
  3DS instSize 0x1080 vs N64 0x0334).
- **headRot = interactInfo+0x08 = actor+0xdf8**
- **torsoRot = interactInfo+0x0E = actor+0xdfe**

Per-type `trackMode` byte (from variant/track table @ `0x00527d18`, stride=12, byte[0]):

| trackMode | types                         |
|-----------|-------------------------------|
|  0x00     | 12 (BOJ_12) — no tracking     |
|  0x06     | 0,1,3,8,9,10,11,13,14,16,17,18,19,20 — normal |
|  0x07     | 2,4 (AHG)                     |
|  0x08     | 5 (BOJ_5)                     |
|  0x09     | 6,7 (BBA/BJI)                 |
|  0x0a     | 15,20 (BJI_15, AHG_20)        |

Per-type track distances (f32 pair at byte[4] and byte[8]):
- 0x41a00000 = 20.0f, 0x41200000 = 10.0f (near-range tracking)
- 0x42200000 = 40.0f, 0x41a00000 = 20.0f (far-range tracking)
- 0x00000000 = 0.0f (no tracking / one-sided)
- 0xc1a00000 = -20.0f (inverted direction)

---

## Key gotchas

1. **OoT3D types identical to N64 names** — The ENHY_TYPE enum values (0..20) match N64
   exactly. Unlike En_Ko (where Grezzo diverged significantly from N64), En_Hy's type set
   is the same; only the CSAB source differs (3DS ZAR-based vs N64 SkelAnime anims).

2. **Single-body vs two-part** — Types 0(AOB), 1(COB), 6(BBA), 18(BOB) are single-body
   with no head slot (slot0=-1 in draw table). Two-part types additionally load a head
   mesh from a secondary ZAR into bone 0 (neck/root) + override bone 1 (upper spine).

3. **csab_zar_idx is 0-based for CSABs only** — Unlike En_Ko (which had a per-ZAR CMB
   prefix offset of +1 or +2), En_Hy's csab_zar_idx directly indexes into the ZAR's CSAB
   file list starting at 0. This is because `FUN_003717ac` was updated to handle the offset
   internally for the Hylian ZARs.

4. **Walking CSABs also exist** — The param table has entries with yOffset=-8.0 or -10.0
   which correspond to walk/path-follow anims (used in EnHy_Walk action state). The idle
   CSAB (pool entry at draw-table[type*0x28+0x24]) is the main standing anim.

5. **Scene-gating in EnHy_Init** — Not all types appear in all scenes. The init checks
   `play.sceneNum` and per-type flags to despawn types that shouldn't be in a given scene
   (e.g., type 14 only appears in scene 0x35 = Castle Courtyard with specific conditions).
