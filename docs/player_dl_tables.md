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
* Tables are separated by `(-1, -1)` rows.

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

## Neighbouring blocks — decoded but UNASSIGNED

Read at stride 0x10 and grouped by the `(-1,-1)` separators. Which `PLAYER_MODELTYPE_*` /
`PLAYER_MODELGROUP_*` index drives each block is **not established**, because the code cross-check
route is dead (see below), so these are listed as raw structure only.

Block @ 0x0053c3f8, 12 rows, then `(-1,-1)` and `(-1, 13)`:

```
(21,4) (21,5) (23,4) (39,4) (31,14) (31,11) (0,9) (2,14) (12,14) (12,11) (11,9) (8,14)
```

Block @ 0x0053c568, 10 rows, then `(-1,-1)`:

```
(42,13) (16,2) (16,2) (20,3) (21,4) (29,19) (31,14) (12,14) (42,21) (9,14)
```

Block @ 0x0053c618 onward:

```
(29,19) (40,17) (40,18) (33,3) (32,0) (24,7) (26,-1) ...
```

For orientation when assigning these, the N64 enum (`Shipwright/soh/include/z64player.h`) is
`PLAYER_MODELTYPE_MAX` = 0x15 = 21 entries: left hand 0x00-0x07 (8), right hand 0x08-0x0F (8),
sheath 0x10-0x13 (4), waist 0x14 (1); and `PLAYER_MODELGROUP_MAX` = 0x10.

## Why there is no code cross-check yet

Ghidra's reference DB returns **no hits** for these VAs: the tables are reached via ARM `movw`/`movt`
immediate pairs, which Ghidra does not materialize as xrefs. So `FindDataWriters.py` / `ListCallers.py`
cannot find the indexing code, and the row semantics above cannot currently be confirmed from code —
only inferred from value patterns plus the N64 table shapes.

Two routes that have NOT been tried and are the obvious next steps:

1. `FindMovwMovtWriters.py` (the per-function constant tracker) over the player-draw address range —
   it exists precisely for the pattern Ghidra's reference DB misses.
2. A harness watchpoint on one of these VAs to catch the reading PC, then `FnAt.py` on it. This is
   the documented pivot for "static Ghidra returns 0 refs".

Until one of those lands, treat every block above as structure without semantics. The trap to avoid
is that these tables are *so* regular that a plausible index assignment is easy to invent and
impossible to distinguish from a correct one by inspection alone.
