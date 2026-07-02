# En_Hy townsfolk body-color override — RE finding

## What this covers

`EnHy_Draw` (VA `0x001b4944`) applies per-EnHy-type material-constant overrides
to change clothing colors on the shared body CMBs. This document records the
ground truth read from the OoT3D USA binary + how to regenerate the tables.

Purpose in the port: without these overrides, every EnHy variant renders with
the archetype's default palette (all-white clothing). SoH3D currently renders
them all-white (see the soh3d `debug_journal/2026-07-02-en-hy-body-colors.md`).

## Tables + addresses (OoT3D USA)

Reading `EnHy_Draw`'s ARM literal pool (immediately after the function body,
starting at `0x001b4c6c`):

| pool VA          | u32 value    | meaning                                          |
| ---------------- | -----------: | ------------------------------------------------ |
| `0x001b4c6c`     | `0x003ac640` | some Model constant (out of scope for colors)    |
| `0x001b4c70`     | `0x00527a4c` | **object-id table start**                        |
| `0x001b4c74`     | `0x00527848` | case-8 (BOJ) constant-2 override colour ptr       |
| `0x001b4c78`     | `0x004d96c8` | case-0xB (BOJ variant) constant-2 override ptr    |
| `0x001b4c7c`     | `0x00150480` | callback (draw fn)                                |
| `0x001b4c80`     | `0x0016d9d4` | callback (draw fn)                                |

The Ghidra decompiler surfaces the first as `DAT_001b4c70` (which is the LITERAL,
not the table address); the actual table is at the value it holds.

- **Object-id table**: VA `0x00527a4c`, 22 entries × 0x18 bytes. First `u16` per
  row is the OoT3D `OBJECT_*` id for the EnHy archetype (AHG/BOJ/CNE/BOB/…).
  The rest of the row (0x16 bytes) is per-archetype auxiliary data not consumed
  in the color path.

- **Body-color override table**: VA `0x00527704` (= object-id table − 0x348),
  22 entries × 0x28 bytes. Row layout per entry:

  ```
  +0x00  s8      pre       reset material before overrides; -1 = skip
  +0x01  s8      pre2      BOB-path reset; -1 = skip
  +0x02  s8      matA      target material for constant-4 override; -1 = skip
  +0x03  s8      matB      target material for constant-3 override; -1 = skip
  +0x04  f32[4]  colorA    RGBA float applied to (matA, constant 4)
  +0x14  f32[4]  colorB    RGBA float applied to (matB, constant 3)
  +0x24  u32     trail     per-type index/hash (unrelated pool entry)
  ```

The apply calls are `FUN_00357a50(model, matIdx, constIdx, &color, 1)` =
`Model_SetMaterialConstantColor(model, matIdx, constIdx ∈ {3, 4}, RGBA float)`.

Cases 6, 0xC, 0x12 (matA/matB = -1) apply NO override → default palette.
Cases 8, 0xB additionally apply a constant-2 override on mat 2 (from the
`0x1b4c74` / `0x1b4c78` pool entries) — not covered by the extracted table.

## Regenerating

```
python3 tools/dump_enhy_body_table.py \
    --out data/enhy_body_colors.inc
```

Human-readable variant: add `--human`. Both re-read `build/code.bin` — regenerate
`code.bin` first with `tools/extract_code.py` if the ROM changed.

## Consumer

The generated `data/enhy_body_colors.inc` is imported by the SoH3D port's
townsfolk behavior module (`Shipwright/soh/src/zelda3d/behaviors/actor/townsfolk.cpp`);
see `debug_journal/2026-07-02-en-hy-body-colors.md` in the soh3d repo for the wire-up
steps (still pending — Step 2 needs a per-actor material-constant-color override path
in the SoH3D renderer, Step 3 is the actual wire-up).
