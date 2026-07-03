# Title-demo rider WORLD POSITION — LOCATED at 0x005AFFB0

Closes the open question from `docs/title_gamestate.md` §"Where the camera + actor state IS".

## Summary

The title-demo pipeline stores its Link+Epona flyover rider's WORLD POSITION as a single Vec3f at .data VA **`0x005AFFB0`**. This is NOT one of the two SkelAnime pose tables (0x005642D0 = Epona, 0x005A54D8 = Link) — those store limb-LOCAL transforms, not world-space actor position. Both mounts share this world-pos slot (Link is drawn attached via Epona's SkelAnime; no second world-pos slot surfaced under the same scan constraints).

## Derivation

### Attack: 4-byte-aligned Vec3f scan across three time deltas

Ran `soh3d/scratch/title_world_pos_re/scan_world_pos.py` over
`soh3d/scratch/gamestate_re/data_dt_{A,B60,B300}.bin`
(0xCF000 bytes each, dumped via `soh3d_harness dumprange`, base VA 0x004F9000).

For every 4-byte-aligned VA, treat the 12 bytes as Vec3f `(x, y, z)`. Keep candidates that satisfy ALL of:

- All three components finite in ALL three frames.
- World-scale bounds at frame A: `X ∈ [-6000, 6000]`, `Y ∈ [-2000, 2000]`, `Z ∈ [-6000, 6000]`.
- Not all-zero, not identity `(1, 1, 1)` (rules out placeholder slots).
- NOT inside the two known pose tables or the camera basis:
  - Pose A (Epona): `0x005642D0..0x005642D0 + 25*36`
  - Pose B (Link):  `0x005A54D8..0x005A54D8 + 25*36`
  - Camera basis:   `0x005BE6D4..0x005BE6D4 + 36`
- Smooth per-frame motion: `|Δpos(A→B60)|` and `|Δpos(A→B300)|` both nonzero,
  ratio `|Δ300| / |Δ60| ∈ [2, 12]` (~linear motion over 60 vs 300 frames),
  and `cos(Δ60, Δ300) > 0.85` (directionally consistent).
- Overall motion `|Δ300| ∈ [20, 4000]` (rules out static and jitter).

### Candidates surfaced

Eight candidates; sorted by `|Δ300|` descending:

| VA          | A                              | B300                           | \|Δ300\| | ratio | cos   |
|-------------|--------------------------------|--------------------------------|----------|-------|-------|
| **0x005AFFB0**| (-5807.97, 69.29, 5143.63)   | (-4790.15, 71.94, 5732.56)     | 1175.9   | 4.89  | 0.999 |
| 0x005AFFA8  | (0, 0, -5807.97)               | (0, 0, -4790.15)               | 1017.8   | 4.90  | 1.000 |
| 0x005B1858  | (-5909.6, 4.0, 45.6)           | (-5029.4, 10.2, 116.5)         |  883.1   | 7.35  | 0.932 |
| 0x005B1850  | (9.9, 40.5, -5909.6)           | (25.3, 103.4, -5029.4)         |  882.6   | 7.47  | 0.942 |
| 0x005AFFB8  | (5143.6, 6.9, 0.36)            | (5732.6, 6.9, -0.61)           |  588.9   | 4.90  | 1.000 |
| 0x005B1870  | (-0.6, -21.4, 5086.8)          | (-1.6, -54.5, 5593.7)          |  508.0   | 7.61  | 0.952 |
| 0x005B1878  | (5086.8, -16.8, 7.9)           | (5593.7, -43.5, 20.5)          |  507.8   | 7.19  | 0.905 |
| 0x005B17B0  | (-1.1, -36.4, 5022.3)          | (-2.1, -72.6, 5508.8)          |  487.8   | 8.72  | 0.917 |

The `0x005B18xx` cluster is the sorted-by-distance actor spawn table
identified earlier (see `docs/title_camera_lead.md`); its entries are 44-byte
strides holding billboard spawn positions.

The three hits at `0x005AFFA8` / `0x005AFFB0` / `0x005AFFB8` are the SAME
Vec3f read at three overlapping 4-byte-aligned windows — they surface together because a single moving 12-byte Vec3f slot yields three overlapping "hits" as the scan window slides through it. **The aligned Vec3f is at `0x005AFFB0`.**

### Verification across all 8 snapshots

| snapshot           | pos                             |
|--------------------|---------------------------------|
| dt_A / titleF0 / title_A | (-5807.97, 69.29, 5143.63) |
| dt_B1 (+1 frame)   | (-5807.97, 69.29, 5143.63) *[same; input mode changed?]* |
| titleF5 (+5)       | (-5794.12, 70.02, 5151.65)      |
| dt_B60 (+60)       | (-5600.25, 82.79, 5263.82)      |
| dt_B300 / title_B  | (-4790.15, 71.94, 5732.56)      |

Per-frame Δ ≈ `(3.39, 0.009, 1.96)` → magnitude ≈ 3.9 units/frame. This is a scripted gallop-speed motion. Y stays near 70 (Hyrule Field terrain height); the camera basis at `0x005BE6D4` tracks this slot as its look-at target across every snapshot (camera eye at (-4070, 57, 5219) sits ~1750 units offset in +X and +Z from the subject and looks back toward -X, -Z).

## Struct-shape context (surrounding fields)

Frame A dump for VAs `0x005AFF80..0x005AFFF0` (Δpos relative to the world-pos slot):

| Δpos | VA         | value (u32)  | interpretation                                  |
|------|------------|--------------|-------------------------------------------------|
| -48  | 0x005AFF80 | 0x00000000   | pad                                             |
| -44  | 0x005AFF84 | 0x005AFF84   | self-referential list-node ptr (head/nil)       |
| -40  | 0x005AFF88 | 0x005AFF84   | self-referential list-node ptr (head/nil)       |
| -36  | 0x005AFF8C | 0x00000001   | flag / active bit                               |
| -32  | 0x005AFF90 | 1.0f         | scale-x placeholder                             |
| -28  | 0x005AFF94 | 1.0f         | scale-y placeholder                             |
| -24  | 0x005AFF98 | 0            |                                                 |
| -20  | 0x005AFF9C | 0x00000001   | flag                                            |
| -16  | 0x005AFFA0 | 0x004EBDEC   | code pointer (in `.text`; draw/update fn?)      |
| -12  | 0x005AFFA4 | 0x005B1208   | .data pointer (into spawn table region)         |
| -8   | 0x005AFFA8 | 0x005BE190   | .data pointer (near camera basis 0x005BE6D4)    |
| -4   | 0x005AFFAC | 0            |                                                 |
| **+0**| **0x005AFFB0** | **-5808.0f (float)** | **pos.x** — world.pos                |
| +4   | 0x005AFFB4 | 69.29f       | pos.y                                           |
| +8   | 0x005AFFB8 | 5143.63f     | pos.z                                           |
| +12  | 0x005AFFBC | 6.92f STATIC | rot-scalar? Y-scale? (not standard rot range)   |
| +16  | 0x005AFFC0 | 0.36 → -0.61 | varying (direction cos? partial-rot?)           |
| +20  | 0x005AFFC4 | 4.01f STATIC | animation-authoring constant?                   |
| +24  | 0x005AFFC8 | 0x02000100   | packed flags                                    |
| +28  | 0x005AFFCC | 0x09906AA8   | FCRAM heap pointer                              |
| +32  | 0x005AFFD0 | 0x0054AC20   | ptr → counter (0x54AC20 = 1/frame tick VA)      |
| +36  | 0x005AFFD4 | 0x0054AC20   | same counter ptr                                |
| +40  | 0x005AFFD8 | 0x0054AC24   | counter ptr + 4                                 |
| +44  | 0x005AFFDC | 1.047 → 1.021| varying (velocity magnitude?)                   |

The self-referential list-node pointers at -44/-40 and the code+data pointer trio at -16/-12/-8 are typical of a lightweight demo-actor / callback-node object — NOT the N64 OoT `Actor` struct shape (which would have `id`/`category`/`flags`/`home.pos` in that prefix). GREZZO's 3DS title path uses its own node type; the full struct layout is deferred (further RE would follow the writer chain that references this base).

## Landing

- `include/z_title_demo.h` — `TITLE_RIDER_WORLD_POS_ADDR = 0x005AFFB0`, `Vec3f TitleDemo_GetRiderWorldPos(void)`.
- `src/code/z_title_demo.c` — the one-line body reading the fixed .data slot.
- Harness accessor `Az_ReadTitleLinkPos` mirrors the 600a1ddd shape (typed struct + memory-safe read via `mem.Read32OrNullopt`).
- `CompareFirstDivImpl` title-actor block replaces its diagnostic-only limb-local dump with a real |Δpos| metric between Az's slot and SoH's Player world.pos.

## Live verification (soh3d harness d7888d5d)

After the harness accessor landed, `title_parity_check.py` at the settled title
frame (soh_step ≈ 1000, shot 1) prints:

```
title-actor: az_world=(-6008.8, 46.6, 5027.5)
             soh_world=(-670.0, -122.5, 8782.5)  |Δ|=6529.3
title-cam:  |Δeye|=0.22  |Δdir|=0.0005  |Δup|=0.0006
```

Az's world.pos reads at world-scale Hyrule Field coordinates matching the
scan-derived slot; the |Δ| = 6529u vs SoH is a real divergence surface
(SoH inherits the N64 title path where Link starts at a different world
coord than 3DS's refactored title spline). This is the first-ever
title-actor cross-engine world-pos delta computed by the harness.

## Writer-chain hunt — negative result (dead-end recorded)

Applied the same `tools/find_indexed_writers.py` primitive that closed the
Table A/B writer chains to the world-pos slot and its containing struct:

```
find_indexed_writers.py --lo 0x005AFFB0 --hi 0x005AFFBC     → 0 hits
find_indexed_writers.py --lo 0x005AFF80 --hi 0x005AFFE0     → 0 hits
find_indexed_writers.py --lo 0x005AFF80 --hi 0x005B0000     → 0 hits
```

And a direct pool-literal scan of `code.bin` for `u32 == 0x005AFFB0`,
`0x005AFF84`, `0x005AFFA0`, `0x005AFF8C` — all zero. No `.text`
instruction materializes any of these addresses via movw/movt OR via a
pool constant.

This is DIFFERENT from Table A/B's writer chain, which surfaced via a
single pool literal one-stride before the table (`0x003208DC = 0x005642D0`).
Here the struct base has to be reached through an even more indirect
route — likely a pointer stored in a higher-level state block whose base
is itself computed. Candidate paths for the next attack:

1. **Heap-side pointer inventory** — dump `.data` at title and look for
   any u32 word equal to `0x005AFF80` / `0x005AFF84` / `0x005AFFB0`. If a
   parent struct holds a pointer to this node, its slot surfaces here.
2. **JIT memory-write watchpoint** — attach a dynarmic write hook on any
   byte in `0x005AFFB0..0x005AFFBC` and dump the ARM PC. Guaranteed to
   reach the writer on the first frame the demo actively runs.
3. **The list-node ptrs at -0x2C/-0x28 self-reference** — this is a
   `head_ptr == list_head == list_head->next` idiom (empty list). The
   list-management code (add/remove/iterate) is where the writers live.
   Cross-reference with any other statically-allocated struct in `.data`
   that has the same self-referential 12-byte prefix — those are sibling
   nodes belonging to the same list class, and their shared write path
   is the writer chain we want.

Deferred until one of these attacks lands. The world-pos accessor is
independent of the writer identity.

## What this closes

`docs/title_gamestate.md` §"Where the camera + actor state IS" open item — camera state was previously closed (`title_camera_lead.md`); this closes the actor-state twin. The remaining open item is the writer chain that OWNS this slot (which fn per frame does `str rN, [rBase, #imm]` with base = 0x005AFFB0). Attack vector is the same as the pose-table writer chain — `soh3d/tools/find_indexed_writers.py` retargeted to `[0x005AFF80, 0x005AFFE0)`.
