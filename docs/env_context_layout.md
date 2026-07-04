# OoT3D EnvironmentContext — layout SOLVED (2026-07-04)

Located envCtx-in-play offset and per-field byte layout via harness
JIT watchpoint on the play struct (attack #3 from soh3d's title-envctx
RE plan), then Ghidra decomp of the writer's enclosing function.

## Bottom line

- **envCtx base = play + 0x3135** (Az live: `0x08721975`).
- **Slot stride = 0x1C** (28 bytes per lightSetting — matches the
  corrected ZSI layout `amb l0col l0dir l1col l1dir fogEnd drawDist`).
- Field offsets INSIDE envCtx (delta from `envCtx` base):

| Δ from envCtx | N64 name    | Play offset | Meaning                            |
|---------------|-------------|-------------|------------------------------------|
| +0xA5         | unk_BF      | play+0x31DA | CURRENT lightSettings slot idx (u8), used at palette lookup line 366 |
| +0xA6         | unk_BD      | play+0x31DB | shadow / previous slot (u8)        |
| +0xA7         | (u8)        | play+0x31DC | u8 field READ into `bVar5` at line 133; gated as `!=0xFF`, `!=0xFE`, `<0x20`. **Watchpoint on +0xA7 captured values 0x6F..0x72 (>= 0x20)** — so it's NOT a slot index; the shadow-transition at line 143 doesn't fire on those. Likely a countdown or a per-shot script byte the demo uses; needs more decomp. |
| +0xC8         | unk_D8      | play+0x31FD | lerp weight (float, 0..1)          |
| +0xCC         | unk_DC      | play+0x3201 | mode/flag byte (u8, tested `!=2`)  |

**N64 offset mismatch:** N64 has `unk_BD (0xBD)` BEFORE `unk_BF (0xBF)`
by delta 2; 3DS has them **swapped** — current at +0xA5, shadow
at +0xA6 (adjacent bytes). The +0xA7 byte tested at line 133 is NOT
the CS target (probe showed values 0x6F..0x72 — well above the
`< 0x20` slot-index gate — so the shadow-transition at line 143
doesn't fire on those values). The CS handler must write to unk_BF
(+0xA5) directly, matching the N64 pattern.

## Environment_Update = FUN_0045dd30

Confirmed by pattern-match against N64's `Environment_Update` in
`Shipwright/soh/src/code/z_kankyo.c`. Key lines from
`build/decomp/0045dd30.c` (Ghidra decomp):

```c
// 3DS Environment_Update signature (Ghidra names):
//   FUN_0045dd30(PlayState* param_1, EnvironmentContext* param_2, ...)

// N64 equivalent of the shadow-catchup block (lines 140-143):
if (((bVar19 && bVar1 != bVar5) &&
     (0x3f7fffff < *(int *)(param_2 + 200))) &&    // unk_D8 >= ~1.0f
    (bVar5 < 0x20)) {                              // unk_A7 < 32
    *(float *)(param_2 + 200) = fVar3;             // unk_D8 = 0.0f (reset lerp)
    *(byte *)(param_2 + 0xa6) = bVar1;             // unk_BD = unk_BF   (shadow catches up)
    *(byte *)(param_2 + 0xa5) = bVar5;             // unk_BF = unk_A7   (target commits)
}

// Palette lookup (line 366):
pfVar14 = (float *)(iVar18 + (uint)*(byte *)(param_2 + 0xa5) * 0x1c);
//                    ↑ lightSettingsList     ↑ current slot         ↑ 28B stride
```

Reads `param_2 + 0xa5` (current slot) — this is `envCtx.unk_BF`.
Reads `param_2 + 0xa6` (shadow slot) — this is `envCtx.unk_BD`.

## Derivation trail

1. **Cursor diff** (soh3d `scratch/envctx_cursor_diff.py`) — force Az
   title cursor across the demo, dump play struct at each cursor, find
   varying bytes taking small integer values.

2. **Candidate filter** — narrow to bytes toggling within {0..17} slot
   range. Best candidate: play+0x31DA cycling {6,7,8,9}.

3. **Cross-check against palette** (falsified a decoy): play+0x22B9
   also cycled 0/1/2 across the three demo shots, aligned with shot
   cuts at cursor ~755 and ~2015. BUT slot 0 of spot00 has
   `amb=(2,1,109)` (deep blue) — inconsistent with Az's observed green
   ground at pinned cursor=650. Ruled out as `csCtx.currentShot` (or
   an equivalent frame counter — the harness's watchpoint on
   play+0x22B9 caught monotonic writes at PC=0x00321F50 hitting values
   0xFF, 0x100, 0x101, ..., 0x11E — a frame counter's high byte).

4. **JIT watchpoint** on the candidate (soh3d
   `scratch/envctx_watchhit.py`): captured 32 writes at PC=**0x0045e470**
   with data values in the {6, 7} range — a strong CS-handler
   signature.

5. **Ghidra `FnAt(0x0045e470)`** → **FUN_0045dd30** (4828 B).

6. **Ghidra `DecompDump FUN_0045dd30`** → the code above with the
   0x3F800000 constant, the `!=` check, and the `param_2 + K*slot_idx`
   palette load. All shapes match `Environment_Update`.

## Still open

- **Cutscene_Command_SetLighting** in 3DS: the fn that writes
  `envCtx.unk_BF = cmd->setting - 1` at each shot cut. Watchpoint on
  +0xA5 captured writes at PC=**0x0045e470** — which is INSIDE
  FUN_0045dd30 (Environment_Update's shadow-catchup at line 143), NOT
  the CS handler. To catch the CS handler specifically we need to:
    - Watch multiple bytes of envCtx and correlate with the FIRST-of-N
      write of each new slot value (Env_Update repeats the write every
      frame; the CS handler's ONE-SHOT write is a different PC),
    - Or use the harness's `hits` PC filter to enumerate ALL distinct
      writer PCs to +0xA5 (any that differs from 0x0045e470 IS the CS
      handler).

- **envCtx.lightSettingsList pointer offset** within envCtx —
  `iVar18` in the decomp is the palette base ptr. Its provenance
  (which field of envCtx or which subsystem holds it) needs one
  more decomp read of FUN_0045dd30's caller frames.

## Files

- `build/decomp/0045dd30.c` — Ghidra decomp of Environment_Update
- Cross-ref: soh3d `debug_journal/2026-07-04-title-envctx-cursor-diff.md`
  documented the falsified candidates and this pinned result.
