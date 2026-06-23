# En_Ko CSAB binding chain — full static RE (2026-06-23)

Static reverse-engineering of how OoT3D En_Ko (Kokiri kid, actor id=355) selects its
animation (CSAB) per ENKO_TYPE. Serves soh3d #87.

---

## Functions involved

| address    | name / role                                       |
|------------|---------------------------------------------------|
| `0x00165684` | `EnKo_Init` (ARM32, size=680)                  |
| `0x003ac990` | initial action handler (ARM32, size=940)        |
| `0x003717ac` | `SetSkelAnimCSAB` / apply CSAB + params (size=88) |
| `0x00363c10` | `ObjectCtx_GetSlotByObjectId` (size=168)        |
| `0x00373074` | `ObjectCtx_IsSlotLoaded` (size=24)              |
| `0x00353e78` | CSAB pool registration (called at init, arg=0x13) |

---

## EnKo_Init — object slot setup

`EnKo_Init` calls `ObjectCtx_GetSlotByObjectId` (`FUN_00363c10`) 4× to register 4
object slots. The slot indices are stored as s8 in actor+0x22c..0x22f.

**11-byte stride table** @ `0x0052bc65` (one row per ENKO_TYPE, stride=11):
```
type  b[0]  b[1]  b[6]  ... (other bytes control anim/shape params)
  0    0     0     0      → boy body (km1)
  1    1     1     1      → girl body (kw1)
  2    0     0     0      → boy
  3    0     0     0      → boy
  4    0     0     0      → boy
  5    1     1     1      → girl
  6    1     1     1      → girl
  7    0     0     0      → boy
  8    0     0     0      → boy
  9    1     1     1      → girl
 10    1     1     1      → girl
 11    0     0     0      → boy
 12    2     1     1      → FADO (special)
```

Object IDs per type (computed from b[0..1..6] via s16 table @ `0x0052b8cc`):
- All types: slot 0 = obj 0xC5 (197) = shared Kokiri base (CMB skel, no CSAB)
- b[0]=0 (boy): slots 1..3 = obj 0xFC (252) = zelda_km1.zar
- b[0]=1 (girl): slots 1..3 = obj 0xFD (253) = zelda_kw1.zar
- type=12 (FADO): slot 0..2 = obj 0xFD (253), slot 3 = obj 0x13D (317) = zelda_fa.zar

---

## Initial action handler — CSAB pool setup

`FUN_003ac990` (r0=actor, r1=gPlayState):
- r5 = actor+0x200 (so `[r5, #N]` = actor+(N+0x200); actor+0x22c = [r5, #0x2c] etc.)
- Checks 4 obj slots are loaded, aborts to `actor+0x228 = DAT_00165944` if not ready.
- Calls `FUN_00353e78(obj_data, gPlayState, actor+0x1a4, 0, actor+0x2c8, actor+0x6ac, 0x13)`
  to register 19 (=0x13) CSABs from the body ZAR into the runtime pool starting at slot 0.
- Then uses the per-type CSAB selection table to pick the idle CSAB.

---

## CSAB selection table (`sEnKoCsabTable`) @ `0x0052bc24`

Stride=5 bytes, one row per ENKO_TYPE. Each byte = runtime CSAB pool index (0..27).
Columns: [idle, talk_a, talk_b, pose_c, pose_d].

```
type  sex    col0  col1  col2  col3  col4
  0   boy      8     9     9    14    11
  1   girl     2    12     2    13    13
  2   boy     11    11    11    15     9
  3   boy      0    16    16    17    18
  4   boy     19    19    20    10     9
  5   girl     3     3     3     3     3
  6   girl     4    22    22     4    23
  7   boy     24    16    16    25    16
  8   boy     26    15    15    26    15
  9   girl     3     3     3    27    27
 10   girl     2     2     2     2    22
 11   boy     14    14    14    14    14
 12  FADO      5     5     5     5     5
```

The runtime CSAB pool indices (0..27) correspond to CSABs loaded from each type's
body ZAR. The mapping from ZAR-local order to pool slot index is established at runtime
by `FUN_00353e78` and cannot be resolved purely from the static binary.

---

## CSAB playback parameter table @ `0x0052b8dc`

28 entries × 24 bytes. Indexed by runtime CSAB pool index.

| field | offset | type | default |
|-------|--------|------|---------|
| CSAB ptr | +0x00 | u32 ptr | 0 (filled at load) |
| playSpeed | +0x04 | f32 | 1.0 |
| startFrame | +0x08 | f32 | 0.0 |
| loopMode | +0x0c | f32 | -1.0 (loop) |
| (unused) | +0x10 | u8 | 0 |
| yOffset | +0x14 | f32 | 0.0 |

Non-default entries:
- entry[6]:  yOffset = -10.0
- entry[7]:  yOffset = -10.0
- entry[20]: playSpeed = 1.5

`FUN_003717ac` applies a pool entry to the skeleton: `(skel_anim, param_table_base, pool_idx)`.

---

## CSAB name resolution

Using oracle `animLength` as ground truth (see `anim_system.md`). ZAR CSAB catalogs in
`tools/skeldata/csab_catalog.json`.

| type | sex  | animLen | ZAR         | CSAB name(s)               | status   |
|------|------|---------|-------------|----------------------------|----------|
| 0    | boy  | 19      | zelda_km1   | km1_ishi_wait **or** km1_kusakari | AMBIGUOUS |
| 1    | girl | 25      | zelda_kw1   | km1_udekumi_pose, kw1_out_in_pose1, kw1_out_in_pose3, kw1_out_in_pose4, km1_out_in_pose2 | AMBIGUOUS |
| 2    | boy  | 20      | zelda_km1   | km1_asekaki_wait, km1_ijiiji, km1_osiete_wait, km1_utsumuki_pose | AMBIGUOUS |
| 3    | boy  | 14      | zelda_km1   | **km1_out_in_pose3** (unique dur) | RESOLVED |
| 4    | boy  | 19      | zelda_km1   | km1_ishi_wait **or** km1_kusakari | AMBIGUOUS |
| 5    | girl | 21      | zelda_kw1   | **kw1_out_in_pose2** (unique dur) | RESOLVED |
| 6    | girl | 25      | zelda_kw1   | (same as type 1 candidates) | AMBIGUOUS |
| 7-11 | —   | (no oracle data) | —   | see stride table above     | UNKNOWN  |
| 12   | FADO | 40      | zelda_fa    | **fad_n_wait** (zelda_fa.zar[0]) | RESOLVED |

zelda_fa.zar contains only 3 CSABs: `fad_n_wait`(40f), `fad_kusukusu`(21f), `fad_kusu_to_wait`(10f).
Type=12 Fado uses pool index 5. The registration by `FUN_00353e78` maps zelda_fa.zar[0]=`fad_n_wait`
to pool slot 5 (confirmed: oracle animLen=40 matches fad_n_wait duration=40).

---

## How to resolve ambiguous types (oracle session needed)

1. Boot OoT3D oracle, warp to Kokiri Forest (`link_ctl.py warp 0xEE`)
2. TP Link adjacent to each kid type (`link_ctl.py tp <x> <z> <y>`)
3. Run `tools/enko_anim.py` to confirm type + animLength
4. Probe the CSAB name by walking `actor+0x1cc → +0x14 → +0x10 → +0x00` while actor is
   animating (the linear ptrs become readable once the animation system has updated)
5. The ZAR name is embedded as a string just before the CSAB data in memory

Alternatively: inspect the zelda_km1.zar ZAR at runtime after it's been memory-mapped
to find the CSAB name strings at the same offsets as the static ZAR file.

---

## Key gotcha: prior agent's "CSAB init addresses" were misidentified

The addresses `0x001656b4`, `0x001656fc`, `0x0016571c`, `0x00165740` (noted in
`scratch/parity_streams.md`) are all `BL #0x363c10` = calls to
`ObjectCtx_GetSlotByObjectId` — NOT CSAB load calls. They register the 4 object SLOTS
that hold the ZAR data. Actual CSAB registration happens later in the initial action
handler via `FUN_00353e78`.

The "float table @ 0x004d97ac" is a per-type positioning / Y-offset table (NOT a CSAB
start-frame table). The "sl @ 0x0052b8cc" is the object-ID lookup table used to compute
which of obj 0xFC/0xFD/0x13D to load per type.
