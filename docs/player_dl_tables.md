# OoT3D player display-list tables (`code.bin` .data)

Grezzo's counterpart of the N64 `z_player_lib.c` player DL tables. On N64 each entry is a pair of
display-list POINTERS `{adultDL, childDL}`; on 3DS each entry is a pair of **mesh ids** into Link's
CMB (`mid` / `mesh_id` in our renderer), so this table is directly portable to the zelda3d mesh-mask
policy.

Everything below is read byte-exact out of `oot3d-decomp/build/code.bin` (file offset = VA − 0x100000).

## Layout — CORRECTED

* Each value is an **s32**. `adult` at `+0x0`, `child` at `+0x4`.
* **Logical stride is 0x10** and the row is four s32:
  `{ adultNear, childNear, adultFar, childFar }` — the near/far **LOD** pair.
* This is now DERIVED, not guessed. The N64 tables in `z_player_lib.c` are each exactly four
  pointers in that same order (e.g. `gPlayerLeftHandOpenDLs = { gLinkAdultLeftHandNearDL,
  gLinkChildLeftHandNearDL, gLinkAdultLeftHandFarDL, gLinkChildLeftHandFarDL }`), so one N64 table
  maps to exactly one 0x10 row here.
* **Proof the far slot is real rather than a meaningless duplicate:** across the region 40 of 42 rows
  have `near == far`, but exactly two DIFFER — `0x0053c678` near adult 26 / far adult 27, and
  `0x0053c688` near adult 28 / far adult 30. A duplicated value could not differ. So Grezzo kept the
  near/far structure and simply reused one mesh for both LODs almost everywhere.
* Beware the grid alignment: rows start at `0x0053c3f8`, which is NOT 0x10-aligned to the start of the
  surrounding data. Reading on a 0x10 grid based anywhere else shifts every row by 8 and reports
  ~all rows as "near != far", which is how this first came out looking like 55 mismatches.
* `-1` means "draw nothing".
* `(-1, -1)` rows are **NOT** table separators, though they look like it. `sSheathDLs` @0x0053c5e8
  sits *inside* the run between two of them, so grouping the region by `(-1,-1)` produces "blocks"
  that straddle real table boundaries. Since each N64 table is exactly one 0x10 row, the boundaries
  are every row, and a `(-1,-1)` row is simply a table whose every entry draws nothing.

An earlier note described this as "8-byte stride with (adult, child) as s16 at +0/+4". The **values**
that came from it are unaffected (they were sampled 0x10 apart), but the type and stride were wrong.
Corrected here and in claim C023.

## Sheath tables (these two are used by our port)

`sSheathDLs` @ **0x0053c5e8** — `PLAYER_MODELTYPE_SHEATH_17` ("empty sheath"):

| adult | child |
|---|---|
| 42 | 21 |

Adult 42 is **visually confirmed** as the empty sheath strap: isolating it live (`linkmid only 42`)
and differencing against an empty-mask frame gives 2826 px, bbox y[9:263] x[128:553], reading as a
slim diagonal strap on Link's back. Mid 1 = Hylian shield + sheath, mid 3 = Mirror shield + sheath.

`sSheathWithoutSwordDLs` @ **0x0053c4d8** — `PLAYER_MODELTYPE_SHEATH_19`. **8 rows, not 4.** The
first four follow shield order NONE / DEKU / HYLIAN / MIRROR; the second four repeat that order for
what appears to be the bow-on-back case:

| VA | adult | child | reading |
|---|---|---|---|
| 0x0053c4d8 | 42 | 21 | NONE |
| 0x0053c4e8 | 42 | 12 | DEKU |
| 0x0053c4f8 | 1 | 10 | HYLIAN |
| 0x0053c508 | 3 | 21 | MIRROR |
| 0x0053c518 | 9 | 21 | NONE + bow |
| 0x0053c528 | 9 | 12 | DEKU + bow |
| 0x0053c538 | 10 | 10 | HYLIAN + bow |
| 0x0053c548 | 7 | 21 | MIRROR + bow |

**Rows 1-4 are CONFIRMED** (ported and verified in-game). **Rows 5-8 are UNVERIFIED**: the
second-half reading rests on our own `link_mesh_id_map.md` labels — adult "9 = bow on back",
"10 = Hylian shield + bow" — which line up strikingly well with a repeated shield order, but the map
itself is listed as UNVERIFIED in the audit. Do not port rows 5-8 on this basis alone.

## Region extent

Table rows run `0x0053c3f8` .. `0x0053c697` — 42 rows. From `0x0053c698` on, the values are pointers
and floats (huge magnitudes), so that is where the table region ends.

The last two rows (`0x0053c678`, `0x0053c688`) are the two with a real far-LOD difference AND have
`child == -1`, i.e. adult-only. That matches the tail of the N64 declaration order, which is the five
first-person tables (`sFirstPersonLeftForearmDLs`, `sFirstPersonLeftHandDLs`,
`sFirstPersonRightShoulderDLs`, `sFirstPersonForearmDLs`,
`sFirstPersonRightHandHoldingWeaponDLs`) — all adult-only, since the first-person bow is adult-only.
Suggestive of the OoT3D order mirroring the N64 declaration order, but only two adult-only rows appear
where N64 has five tables, so it does NOT cleanly line up and I am NOT claiming it.

## SOLVED: `sPlayerDLists[PLAYER_MODELTYPE_MAX]` @ **0x0053c698**

A master POINTER table of **21 words** at `0x0053c698`, each pointing at one 0x10 DL row.
21 == `PLAYER_MODELTYPE_MAX` (0x15), so it is indexed directly by `PLAYER_MODELTYPE_*`.

Found without Ghidra: scan the whole binary for 4-byte-aligned words whose value equals a known
table VA. That turns up both this master table and a literal pool at `0x004c71cc`/`0x004c71d4`
holding consecutive pointers to the two sheath tables (i.e. the reading function sits just above it).

| idx | PLAYER_MODELTYPE_ | table VA | adult | child |
|---|---|---|---|---|
| 0x00 | LH_OPEN | 0x0053a5c8 | 13 | 0 |
| 0x01 | LH_CLOSED | 0x0053a5d8 | 14 | 1 |
| 0x02 | LH_SWORD | 0x0053c588 | 16 | 2 |
| 0x03 | LH_SWORD_2 *(unused)* | 0x0053c578 | 16 | 2 |
| 0x04 | LH_BGS | 0x0053a5a8 | 37 | 16 |
| 0x05 | LH_HAMMER | 0x0053c658 | 32 | 0 |
| 0x06 | LH_BOOMERANG | 0x0053a5e8 | 13 | 6 |
| 0x07 | LH_BOTTLE | 0x0053c668 | 24 | 7 |
| 0x08 | RH_OPEN | 0x0053c598 | 20 | 3 |
| 0x09 | RH_CLOSED | 0x0053c5a8 | 21 | 4 |
| 0x0A | RH_SHIELD | 0x0053c3f8 | 21 | 4 | *(base of a 12-row run, see below)* |
| 0x0B | RH_BOW_SLINGSHOT | 0x0053c5b8 | 29 | 19 |
| 0x0C | RH_BOW_SLINGSHOT_2 *(unused)* | 0x0053c618 | 29 | 19 |
| 0x0D | RH_OCARINA | 0x0053c628 | 40 | 17 |
| 0x0E | RH_OOT | 0x0053c638 | 40 | 18 |
| 0x0F | RH_HOOKSHOT | 0x0053c648 | 33 | 3 |
| 0x10 | SHEATH_16 | 0x0053c5c8 | 31 | 14 |
| 0x11 | SHEATH_17 | 0x0053c5e8 | 42 | 21 |
| 0x12 | SHEATH_18 | 0x0053c438 | 31 | 14 |
| 0x13 | SHEATH_19 | 0x0053c4d8 | 42 | 21 | *(base of a run, see below)* |
| 0x14 | WAIST | 0x0053c608 | -1 | -1 |

### Why this assignment is trustworthy

Five independent checks, none of which was used to derive it:

1. **Slot count.** 21 slots, and `PLAYER_MODELTYPE_MAX` is 0x15 = 21. Exact.
2. **The two "unused, same as X" enum entries hold identical values.** `z64player.h` documents
   `LH_SWORD_2` as "unused, same as `LH_SWORD`" and `RH_BOW_SLINGSHOT_2` likewise. Here
   0x02/0x03 are both `(16, 2)` and 0x0B/0x0C are both `(29, 19)` — while pointing at *different*
   addresses, so the match is a property of the data, not aliasing.
3. **Both sheath slots land on tables already verified in-game.** 0x11 -> `(42, 21)` and
   0x13 -> `(42, 21)`, the two tables read and ported independently before this table was found;
   adult 42 was confirmed visually as the sheath strap.
4. **`LH_BGS` = adult 37** matches what the zelda3d port already does (`SwordTwoHand` -> mid 37),
   an assignment the audit had flagged as UNVERIFIED. It is correct.
5. **The shield sub-run reproduces existing hand-derived code exactly** (below).

### Shield-variant runs

`RH_SHIELD` (0x0A) and `SHEATH_19` (0x13) point at the FIRST row of a multi-row run; the code adds a
shield-type offset. Shield order is **NONE / DEKU / HYLIAN / MIRROR**.

`RH_SHIELD` base 0x0053c3f8, 12 rows = three groups of four:

| group | NONE | DEKU | HYLIAN | MIRROR |
|---|---|---|---|---|
| +0..+3 | (21,4) | (21,5) | (23,4) | (39,4) |
| +4..+7 | (31,14) | (31,11) | (0,9) | (2,14) |
| +8..+11 | (12,14) | (12,11) | (11,9) | (8,14) |

Group `+4..+7` adult column is `31, 31, 0, 2` — which is *literally* the existing zelda3d line
`hylian ? LINK_MID(0) : (mirror ? LINK_MID(2) : LINK_MID(31))` for `ShieldOnBackSwordSheathed`,
derived by hand long before this table was decoded. Group `+0..+3` gives HYLIAN 23 / MIRROR 39,
matching two fixes already landed. That agreement is the strongest evidence for the shield ordering.

**What the three groups distinguish is NOT established.** Sword-drawn / sheathed / on-back is the
obvious guess given group `+4..+7`'s meaning, but it is a guess and the port should not depend on it.

`SHEATH_19` base 0x0053c4d8, 8 rows = two groups of four (see the sheath section above); the second
group is UNVERIFIED.

## Port targets — current zelda3d divergences this table settles

Each of these is an audit finding whose correct value is now known rather than guessed:

| finding | modeltype | we draw | table says |
|---|---|---|---|
| adult hammer swing draws nothing | LH_HAMMER 0x05 | nothing | adult **32** |
| bottle uses a clenched fist | LH_BOTTLE 0x07 | fist | adult **24**, child **7** |
| adult hookshot/longshot = flat open palm | RH_HOOKSHOT 0x0F | open palm | adult **33**, child **3** |
| ocarina shows open palm, `RH_OOT` not in the switch | RH_OCARINA 0x0D / RH_OOT 0x0E | default | **(40,17)** / **(40,18)** |
| child boomerang draws something OoT3D never draws | LH_BOOMERANG 0x06 | wrong mid | adult **13**, child **6** |
| hands flat-open while running | LH_OPEN 0x00 / LH_CLOSED 0x01 | open | **(13,0)** / **(14,1)** |
| shield pose with no shield shows open palm | RH_SHIELD 0x0A +NONE | open palm | adult **21** (fist) |

Port these as a DATA TABLE indexed by model type, not as a switch of special cases -- the whole reason
these diverged one-by-one is that each was hand-written.
