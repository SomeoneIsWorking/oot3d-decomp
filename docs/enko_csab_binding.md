# En_Ko CSAB binding chain — full static + oracle RE (2026-06-23)

Static + live-oracle reverse-engineering of how OoT3D En_Ko (Kokiri kid, actor id=355)
selects its animation (CSAB) per ENKO_TYPE. Serves soh3d #87.

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
- type=12 (FADO): slot 0..2 = obj 0xFD (253)=zelda_kw1.zar, slot 3 = obj 0x13D (317) = zelda_fa.zar

**KEY for CSAB resolution:** The CSAB registration (`FUN_003ac990`) always runs against the
BODY ZAR — zelda_km1.zar for boys, zelda_kw1.zar for girls AND Fado. The zelda_fa.zar slot
is NOT the CSAB source for Fado's runtime pool; FADO uses kw1 for its pool CSABs too.

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

---

## CSAB playback parameter table @ `0x0052b8dc`

28 entries × 24 bytes. Indexed by runtime CSAB pool index.

| field | offset | type | default |
|-------|--------|------|---------|
| csab_zar_idx | +0x00 | u32 | 0 (filled at load: ZAR file index of the CSAB) |
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

**IMPORTANT — `csab_zar_idx` field semantics (oracle-verified 2026-06-23):**
The `+0x00` field of each param table entry stores a ZAR file index, written at runtime by
`FUN_003ac990` / `FUN_00353e78`. The value is a small integer (0x00..0x20) — NOT a RAM pointer.
The ZAR file index maps to the CSAB file in the body ZAR, with a per-ZAR offset:

- **zelda_km1.zar** (boys): has 2 non-CSAB files at the front (CMB model + CMAB eye anim).
  `ZAR file index = csab_zar_idx + 2`
- **zelda_kw1.zar** (girls + Fado): has 1 non-CSAB file at the front (CMB model only; CMABs are at the END).
  `ZAR file index = csab_zar_idx + 1`

So `FUN_003717ac` takes the small index, adds the per-ZAR offset, and looks up the CSAB in the
actor's loaded body ZAR.

Live-read parameter table values (scene 85, Kokiri, all En_Ko initialized):
```
pool_idx  csab_zar_idx  playSpeed  yOffset
   0      0x20 (32)       1.0      0.0
   1      0x1e (30)       1.0      0.0
   2      0x1a (26)       1.0      0.0
   3      0x1b (27)       1.0      0.0
   4      0x1c (28)       1.0      0.0
   5      0x02 ( 2)       1.0      0.0
   6      0x02 ( 2)       1.0    -10.0
   7      0x00 ( 0)       1.0    -10.0
   8      0x0a (10)       1.0      0.0
   9      0x10 (16)       1.0      0.0
  10      0x03 ( 3)       1.0      0.0
  11      0x11 (17)       1.0      0.0
  12      0x0e (14)       1.0      0.0
  13      0x0f (15)       1.0      0.0
  14      0x14 (20)       1.0      0.0
  15      0x06 ( 6)       1.0      0.0
  16      0x07 ( 7)       1.0      0.0
  17      0x08 ( 8)       1.0      0.0
  18      0x0d (13)       1.0      0.0
  19      0x0b (11)       1.0      0.0
  20      0x05 ( 5)       1.5      0.0
  21      0x17 (23)       1.0      0.0
  22      0x13 (19)       1.0      0.0
  23      0x16 (22)       1.0      0.0
  24      0x15 (21)       1.0      0.0
  25      0x18 (24)       1.0      0.0
  26      0x12 (18)       1.0      0.0
  27      0x0c (12)       1.0      0.0
```

---

## ZAR file ordering (live-verified from RAM, scene 85)

### zelda_km1.zar — 36 files, ZAR base 0x090acee0

Non-CSAB prefix: 2 files (CMB + CMAB). CSAB offset = +2.

| file_idx | name | dur |
|----------|------|-----|
| 0  | Model/kokirimaster.cmb       | — |
| 1  | Misc/kokirimaster_eye.cmab   | — |
| 2  | Anim/fad_kusukusu.csab       | 40 |
| 3  | Anim/fad_kusu_to_wait.csab   | 10 |
| 4  | Anim/fad_n_wait.csab         | 40 |
| 5  | Anim/km1_agura_pose.csab     | 30 |
| 6  | Anim/km1_asekaki_wait.csab   | 20 |
| 7  | Anim/km1_backcyu.csab        | 22 |
| 8  | Anim/km1_bed_suwari_pose.csab | 24 |
| 9  | Anim/km1_doushite_pose.csab  | 30 |
| 10 | Anim/km1_hiji_suwari_pose.csab | 24 |
| 11 | Anim/km1_ijiiji.csab         | 20 |
| 12 | Anim/km1_ishi_wait.csab      | 19 |
| 13 | Anim/km1_kusakari.csab       | 19 |
| 14 | Anim/km1_kususu_pose.csab    | 30 |
| 15 | Anim/km1_miage_pose.csab     | 24 |
| 16 | Anim/km1_nani_pose.csab      | 24 |
| 17 | Anim/km1_niterunar_pose.csab | 24 |
| 18 | Anim/km1_nokezori_pose.csab  | 24 |
| 19 | Anim/km1_osiete_wait.csab    | 20 |
| 20 | Anim/km1_setsumei_pose.csab  | 24 |
| 21 | Anim/km1_shinpai_pose.csab   | 24 |
| 22 | Anim/km1_suwari_pose.csab    | 24 |
| 23 | Anim/km1_udekumi_pose.csab   | 25 |
| 24 | Anim/km1_ukiuki_wait.csab    | 34 |
| 25 | Anim/km1_usirote_pose.csab   | 24 |
| 26 | Anim/km1_utsumuki_pose.csab  | 20 |
| 27 | Anim/km1_omise.csab          | 30 |
| 28 | Anim/kw1_out_in_pose1.csab   | 25 |
| 29 | Anim/kw1_out_in_pose2.csab   | 21 |
| 30 | Anim/kw1_out_in_pose3.csab   | 25 |
| 31 | Anim/kw1_out_in_pose4.csab   | 25 |
| 32 | Anim/km1_out_in_pose1.csab   | 31 |
| 33 | Anim/km1_out_in_pose2.csab   | 25 |
| 34 | Anim/km1_out_in_pose3.csab   | 14 |
| 35 | Anim/km1_out_in_pose4.csab   | 12 |

### zelda_kw1.zar — 37 files, ZAR base 0x090f5380

Non-CSAB prefix: 1 file (CMB only; CMABs are at the END [35,36]). CSAB offset = +1.

| file_idx | name | dur |
|----------|------|-----|
| 0  | Model/kokiripeople.cmb       | — |
| 1  | Anim/fad_kusukusu.csab       | 40 |
| 2  | Anim/fad_kusu_to_wait.csab   | 10 |
| 3  | Anim/fad_n_wait.csab         | 40 |
| 4  | Anim/km1_agura_pose.csab     | 30 |
| 5  | Anim/km1_asekaki_wait.csab   | 20 |
| 6  | Anim/km1_backcyu.csab        | 19 |
| 7  | Anim/km1_bed_suwari_pose.csab | 24 |
| 8  | Anim/km1_doushite_pose.csab  | 30 |
| 9  | Anim/km1_hiji_suwari_pose.csab | 24 |
| 10 | Anim/km1_ijiiji.csab         | 20 |
| 11 | Anim/km1_ishi_wait.csab      | 19 |
| 12 | Anim/km1_kusakari.csab       | 19 |
| 13 | Anim/km1_kususu_pose.csab    | 30 |
| 14 | Anim/km1_miage_pose.csab     | 24 |
| 15 | Anim/km1_nani_pose.csab      | 24 |
| 16 | Anim/km1_niterunar_pose.csab | 24 |
| 17 | Anim/km1_nokezori_pose.csab  | 24 |
| 18 | Anim/km1_osiete_wait.csab    | 20 |
| 19 | Anim/km1_setsumei_pose.csab  | 24 |
| 20 | Anim/km1_shinpai_pose.csab   | 24 |
| 21 | Anim/km1_suwari_pose.csab    | 24 |
| 22 | Anim/km1_udekumi_pose.csab   | 25 |
| 23 | Anim/km1_ukiuki_wait.csab    | 34 |
| 24 | Anim/km1_usirote_pose.csab   | 24 |
| 25 | Anim/km1_utsumuki_pose.csab  | 20 |
| 26 | Anim/km1_omise.csab          | 30 |
| 27 | Anim/kw1_out_in_pose1.csab   | 25 |
| 28 | Anim/kw1_out_in_pose2.csab   | 21 |
| 29 | Anim/kw1_out_in_pose3.csab   | 25 |
| 30 | Anim/kw1_out_in_pose4.csab   | 25 |
| 31 | Anim/km1_out_in_pose1.csab   | 31 |
| 32 | Anim/km1_out_in_pose2.csab   | 25 |
| 33 | Anim/km1_out_in_pose3.csab   | 14 |
| 34 | Anim/km1_out_in_pose4.csab   | 12 |
| 35 | Misc/kokiripeople_a_eye.cmab | — |
| 36 | Misc/kokiripeople_b_eye.cmab | — |

---

## FULLY RESOLVED: ENKO_TYPE → idle CSAB (oracle-verified 2026-06-23)

All 8 Kokiri-Forest oracle types verified; types 7–11 resolved by formula (no other-scene data).

| type | sex  | ZAR       | idle_pool | csab_zar_idx | ZAR file_idx | idle CSAB            | dur |
|------|------|-----------|-----------|--------------|--------------|----------------------|-----|
|  0   | boy  | zelda_km1 |  8        | 0x0A (10)    | 12           | **km1_ishi_wait**    | 19  |
|  1   | girl | zelda_kw1 |  2        | 0x1A (26)    | 27           | **kw1_out_in_pose1** | 25  |
|  2   | boy  | zelda_km1 | 11        | 0x11 (17)    | 19           | **km1_osiete_wait**  | 20  |
|  3   | boy  | zelda_km1 |  0        | 0x20 (32)    | 34           | **km1_out_in_pose3** | 14  |
|  4   | boy  | zelda_km1 | 19        | 0x0B (11)    | 13           | **km1_kusakari**     | 19  |
|  5   | girl | zelda_kw1 |  3        | 0x1B (27)    | 28           | **kw1_out_in_pose2** | 21  |
|  6   | girl | zelda_kw1 |  4        | 0x1C (28)    | 29           | **kw1_out_in_pose3** | 25  |
|  7   | boy  | zelda_km1 | 24        | 0x15 (21)    | 23           | **km1_udekumi_pose** | 25  |
|  8   | boy  | zelda_km1 | 26        | 0x12 (18)    | 20           | **km1_setsumei_pose**| 24  |
|  9   | girl | zelda_kw1 |  3        | 0x1B (27)    | 28           | **kw1_out_in_pose2** | 21  |
| 10   | girl | zelda_kw1 |  2        | 0x1A (26)    | 27           | **kw1_out_in_pose1** | 25  |
| 11   | boy  | zelda_km1 | 14        | 0x14 (20)    | 22           | **km1_suwari_pose**  | 24  |
| 12   | FADO | zelda_kw1 |  5        | 0x02 (2)     | 3            | **fad_n_wait**       | 40  |

Oracle cross-check (Kokiri Forest, scene 85, 8 live En_Ko):
- All 8 live oracle animLengths match the computed CSAB duration exactly (0 mismatches).

**Key gotcha:** types 0 and 4 both have dur=19 but use DIFFERENT CSABs:
- type 0 → `km1_ishi_wait` (ZAR file 12)
- type 4 → `km1_kusakari` (ZAR file 13)
This was unresolvable by oracle animLength alone and required the csab_zar_idx cross-check.

Types 9 and 5 share pool[3] and thus the same idle CSAB (`kw1_out_in_pose2`).
Types 10 and 1 share pool[2] and the same idle CSAB (`kw1_out_in_pose1`).

---

## How to resolve ambiguous types (METHOD — oracle session used 2026-06-23)

The oracle RAM scan method that worked:

1. Boot OoT3D oracle, warp to Kokiri Forest (`link_ctl.py warp 0xEE`)
2. Find zelda_km1.zar and zelda_kw1.zar base addresses in RAM via ObjectCtx slot scan:
   - Read PlayState memory for slots with objectId 0xFC (km1) and 0xFD (kw1)
   - ObjectCtx slots at PlayState+0x3d5c (km1) and +0x3ddc (kw1); stride 0x80; data ptr at slot+4
3. Parse the in-RAM ZAR header to get full file directory (names + offsets)
4. Read global CSAB param table @ `0x0052b8dc` (28 entries × 24 bytes)
5. For each pool slot: read `csab_zar_idx = param_table[pool_idx * 24 + 0]` (small integer 0..0x20)
6. Apply ZAR offset: km1 file_idx = csab_zar_idx + 2, kw1 file_idx = csab_zar_idx + 1
7. Read CSAB name from ZAR file directory; read duration from `csab_data + 0x28` (dur-1) + 1
8. Cross-check with oracle `animLength` from `actor+0x1f0` for each En_Ko type

The small integer in `param_table[pool_idx]+0x00` is the ZAR-internal CSAB index written by
`FUN_003ac990`/`FUN_00353e78` at actor initialization. It is NOT a RAM pointer — the actual
per-actor CSAB state lives in the actor's own anim controller (via `actor+0x1cc` → anim player
object hierarchy), separate from the global param table.

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
