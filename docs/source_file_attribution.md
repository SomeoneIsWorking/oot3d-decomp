# OoT3D source-file attribution from the embedded 3DS `__FILE__` strings

Status: 53 of 8265 Ghidra functions attributed to their original C++ source file, 26 of them
also to a source line. `tools/decomp_coverage.py` moves oot3d from 0/8265 READABLE to
**26/8265 (0.31%)** — the first non-zero readable figure for this title.

## 1. Name-source verdict

OoT3D **does** carry the same name source MM3D does, but in a different format. Measured over
the whole 4,567,040-byte code image (`oot3d-decomp/build/code.bin`, mapped at `0x00100000`):

| form searched | occurrences |
|---|---|
| `.cpp(` (the MM3D assert form) | **0** |
| `.c(` | 0 |
| `.h(` | 0 |
| `sources\original` | 0 |
| `Jenkins` | 0 |
| `.cpp:` | 0 |
| `dailyBuild` | **55** |
| NUL-terminated `*.cpp` filenames | **51 distinct** |
| RTTI (`.?AV`, `_ZTS`, `typeinfo`, `vtable`) | 0 |
| ELF header | 0 |

The strings are Windows build paths:

    d:\home\queen\dailyBuild\game_us\sources\z_actor.cpp
    d:\home\queen\dailyBuild\game_us\sources\ctr\Kankyo\QueenLuminary.cpp
    d:\home\queen\dailyBuild\game_us\libraries\gzw\graph\CmbRenderer.cpp

**55 instances, 51 distinct files.** 44 are under `sources\` (39 `z_*.cpp` N64-derived units
plus `main.cpp` and 5 `ctr\*` engine units) and 11 under `libraries\gzw\` (the `Queen`/Grezzo
graph library). The leading `d:` is a real drive letter in the original; the first byte of each
string is overwritten by adjacent data in a few cases, so the scan matches on
`d:\home\queen\dailyBuild\game_us\`.

There is **no** `.cpp(<line>)` folded form. The line is emitted separately — see §2.

### Correction to `docs/ram_map.md`

`docs/ram_map.md` states:

> `__FILE__` strings are NOT referenced by absolute literals (PC-relative `ADR`), so
> absolute-literal xref misses them

That is only half right, and the wrong half is the one that matters. Measured:

- **38** absolute 32-bit occurrences of a string address exist in the image.
- **65** instructions load a string address with `ldr r2, [pc, #imm]` from the literal pool,
  covering **22** of the 55 strings. So absolute-literal xref does *not* miss them.
- **54** more use `adr r2, <string>` (`add r2, pc, #imm`), covering **33** strings.
- **1** string (`0x004d8290`, `z_boss_tw.cpp`) has no reference at all.

Recognising only one of the two forms silently loses ~45% of the sites; recognising a reference
without checking which register it targets produced 16 false sites whose target register is r1,
not r2. The name index (`51 files`) in that same paragraph is correct.

## 2. How a reference becomes an attribution

The developers' assert/debug-print call shape, decompiled from `FUN_004620f8`:

```c
iVar1 = (**(code **)(*(int *)*DAT_0046222c + 0xc))
              ((int *)*DAT_0046222c, 0x1b8, DAT_00462228, DAT_00462230);
```

`DAT_00462228` holds `0x004dad80` = the `z_lights.cpp` build path; `DAT_00462230` holds `0x38e`
= 910. So the register contract is **`r0` = context, `r1` = message tag, `r2` = `__FILE__`,
`r3` = `__LINE__`**, loaded by two adjacent PC-relative literal loads:

```
00462110  14 01 9f e5  ldr r1, [pc, #0x114]   ; 0x46222c  (a global)
00462118  08 21 9f e5  ldr r2, [pc, #0x108]   ; 0x462228  -> 0x4dad80  __FILE__
0046211c  08 31 9f e5  ldr r3, [pc, #0x10c]   ; 0x462230  -> 0x38e     __LINE__
00462120  00 00 90 e5  ldr r0, [r0]
00462124  00 10 90 e5  ldr r0, [r0]
00462128  0c c0 91 e5  ldr ip, [r3, #0xc]     ; vtable slot
0046212c  6e 1f a0 e3  mov r0, pc, lr
00462130  3c ff 2f e1  mov lr, pc; bx r3
```

A function whose body materialises its own translation unit's `__FILE__` is **by the
developers' construction** defined in that file. That is the whole basis of every row: one
instruction, decoded, pointing at one NUL-terminated build path.

Rules enforced by `build/decomp/extract_file_attribution.py`:

- the string-materialising instruction must target **r2** (16 r1-targeting instructions are
  rejected);
- the `__LINE__` is accepted only when it is loaded into **r3** by a PC-relative literal load
  within ±0x20 bytes, and only when the value is a plausible line (1..0x00ffffff and outside
  every address range present in the image). Anything else leaves `line` empty rather than
  guessing;
- if one entry gets references implying two different files, both are dropped and reported as a
  conflict (**0 conflicts** in the current run);
- no inference from adjacency, ordering, or "same neighbourhood".

## 3. Results

    confidence split   direct 53   pooled 0
    functions          53 of 8265  (0.64%)
    with __LINE__      26 of 53
    distinct files     43 of the 51 indexed

### Per file

| source file | functions | entries (line) |
|---|---|---|
| `sources/ctr/ObjectBankArchive.cpp` | 3 | 0031b124, 00358ef8, 00372c90 |
| `sources/ctr/Kankyo/QueenLuminary.cpp` | 3 | 002d4f10 (487), 002d5124 (407), 004533a4 (307) |
| `libraries/gzw/graph/BoardModelFactory.cpp` | 2 | 00340d00, 0034897c |
| `sources/ctr/Menu/COmoteUraSelector.cpp` | 2 | 004686d0 (341), 00468920 (407) |
| `sources/ctr/TorchAnimationModel.cpp` | 2 | 0034f94c, 00350508 |
| `sources/z_actor.cpp` | 2 | 003738d0 (10201), 0044e7a0 (7180) |
| `sources/z_bg_jya_cobra.cpp` | 2 | 00240c38 (979), 00278d78 (1582) |
| `sources/z_player.cpp` | 2 | 00191844, 004bf618 (21249) |
| `libraries/gzw/graph/AnimatedMaterial.cpp` | 1 | 003fcd1c |
| `libraries/gzw/graph/BoardMultiModel.cpp` | 1 | 004970c0 |
| `libraries/gzw/graph/BoardRenderer.cpp` | 1 | 002c50d4 |
| `libraries/gzw/graph/CmbRenderer.cpp` | 1 | 003faf58 |
| `libraries/gzw/graph/MaterialAnimationPlayer.cpp` | 1 | 004bdcd0 |
| `libraries/gzw/graph/ShaderProgram.cpp` | 1 | 0041724c |
| `libraries/gzw/graph/Skeleton.cpp` | 1 | 0040c9e0 |
| `libraries/gzw/graph/SkeletonAnimationModelFactory.cpp` | 1 | 003ff53c |
| `libraries/gzw/res/CmbRes.cpp` | 1 | 0031ff64 |
| `libraries/gzw/sys/PicaCommand.cpp` | 1 | 00454760 |
| `sources/ctr/Display/DisplayBoardManager.cpp` | 1 | 004178b8 |
| `sources/ctr/EffectSSResourceManager.cpp` | 1 | 004a3638 (633) |
| `sources/ctr/FogResUpdater.cpp` | 1 | 00464b0c |
| `sources/ctr/Kankyo/QueenVRBox.cpp` | 1 | 0045243c |
| `sources/ctr/SaveDataMaintainer.cpp` | 1 | 002f36f4 |
| `sources/ctr/actor_util.cpp` | 1 | 00464488 |
| `sources/z_bg_jya_bigmirror.cpp` | 1 | 0029c0ac (378) |
| `sources/z_bg_jya_bombchuiwa.cpp` | 1 | 002abff0 (269) |
| `sources/z_boss_fd.cpp` | 1 | 001a62c4 (895) |
| `sources/z_boss_sst.cpp` | 1 | 001d0d04 (1780) |
| `sources/z_demo_effect.cpp` | 1 | 0022345c (907) |
| `sources/z_eff_blure.cpp` | 1 | 0033ab60 (789) |
| `sources/z_eff_dust.cpp` | 1 | 001d3390 |
| `sources/z_eff_spark.cpp` | 1 | 001f13f4 (257) |
| `sources/z_en_arrow.cpp` | 1 | 001d44e0 |
| `sources/z_en_choo.cpp` | 1 | 001aeb9c (493) |
| `sources/z_en_elf.cpp` | 1 | 0018a8e0 (1133) |
| `sources/z_en_ganon_mant.cpp` | 1 | 002925ac (1342) |
| `sources/z_en_jsjutan.cpp` | 1 | 0024c3e8 (2635) |
| `sources/z_fbdemo_wipe3.cpp` | 1 | 00452060 |
| `sources/z_kankyo.cpp` | 1 | 0044ff18 (1454) |
| `sources/z_lights.cpp` | 1 | 004620f8 (910) |
| `sources/z_movie.cpp` | 1 | 00471b84 (2977) |
| `sources/z_object_kankyo.cpp` | 1 | 002705b8 (525) |
| `sources/z_room.cpp` | 1 | 00317e30 |

The line values are internally consistent with the N64-source layout: `z_actor.cpp` at 7180 and
10201, `z_player.cpp` at 21249, `z_kankyo.cpp` at 1454, `z_movie.cpp` at 2977. Those magnitudes
match the corresponding N64 decomp translation units, which is an independent sanity check on
the r3 rule (a wrong register would produce values like 341, 755, 911 from a neighbouring
statement instead).

## 4. What remains unattributed, and why

- **8212 of 8265 functions (99.4%) carry no `__FILE__` reference.** This is a hard ceiling of
  this name source, not a gap in the search: the image only contains 55 build paths, and the
  only functions that can name their own file are the ones that *assert*. The OoT3D engine calls
  its logging helper from a small number of places; the other 8212 are silent in release.
- **8 of the 51 indexed files yield no function**: `sources\main.cpp`,
  `sources\z_boss_ganon2.cpp`, `sources\z_boss_tw.cpp`, `sources\z_eff_shield_particle.cpp`,
  `sources\z_file_choose.cpp`, `sources\z_fishing.cpp`, `sources\z_magic_dark.cpp`,
  `sources\z_oceff_storm.cpp`. For `main.cpp` and `z_oceff_storm.cpp` the reference sites
  (`0x004167f4`, `0x00416828`, `0x00416ac4`, `0x002319a0`) lie in address gaps that
  `oot3d_full` has not defined a function for, so they are reported by the control as
  `orphan_ref` rather than attributed to a neighbour. The other six are reached only from data
  tables, with no code reference at all.
- **27 of 53 rows have no line.** The `__LINE__` load is genuinely absent at those sites (the
  call passes a different argument set), or is loaded into a register other than r3. Declining
  to guess is the intended behaviour.
- `confidence=pooled` is **0**. No string is reached only through a pointer table; every
  attribution in the map is a decoded instruction in the function's own body.

## 5. Reproducing

    cd oot3d-decomp
    python3 build/decomp/extract_file_attribution.py --selftest   # negatives + positives, non-zero on failure
    python3 build/decomp/extract_file_attribution.py              # writes both CSVs

    # apply the names to the Ghidra project (oot3d_full, not oot3d)
    OOT3D_REPO=$PWD analyzeHeadless build/ghidra oot3d_full -process -noanalysis \
        -scriptPath ../scratch/oot3d_fileattr -postScript ApplyRenames.py

Do **not** run `DecompDump.py` with no targets against `oot3d_full` to refresh
`build/decomp/functions.csv`: the inventory branch rewrote 469 function sizes and dropped the
8 force-created rows, so the names are patched into the existing CSV instead (a clean 53-line
diff).

## 6. Files

| path | what |
|---|---|
| `build/decomp/extract_file_attribution.py` | extractor + `--selftest` control |
| `build/decomp/function_source_map.csv` | 53 rows, `fn_entry,fn_name,source_file,line,confidence,evidence` |
| `build/decomp/renames.csv` | 53 `vaddr,name` pairs |
| `build/decomp/functions.csv` | 53 name cells patched (coverage reads this) |
| `../../scratch/oot3d_fileattr/ApplyRenames.py` | applies `renames.csv` to the project |
| `../../scratch/oot3d_fileattr/FileAttribution.py` | independent Ghidra-reference-manager implementation (cross-check) |

The two independent implementations (Python image decoding vs. Ghidra's reference manager)
agree on all **51** overlapping functions with **0** mismatches; the Python pass finds 2 more
(`0044ff18`, `00471b84`) that Ghidra's analysis did not create references for.
