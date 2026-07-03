# TITLE_CAM_BASIS_VA writer: static-analysis dead end

The basis at `0x005BE6D4` (RE'd to hold `{Vec3f eye, Vec3f dir, Vec3f up}`
in `docs/title_camera_lead.md`) has values that evolve smoothly per
frame — but no writer surfaces via any static-analysis path tried so
far. Compiled here so future sessions don't re-attempt what's been
proven blocked.

## Ghidra sweeps run

Session 2026-07-03. All against `code.bin` in the standard oot3d
project.

### 1. `FindDataWriters.py` on {0x005BE6D4, 0x005BE6D8, 0x005BE6DC, 0x005BE6E0}
Ref DB output: **0 refs each**. No code load/store xref anywhere.

### 2. `FindRangeRefs.py` on [0x005BE6D0, 0x005BE700)
**0 refs in range**.

### 3. Raw 32-bit LE scan of `code.bin` for the pool literal `0x005BE6D4`
Zero occurrences of the value. The parent struct base `0x005BE5B8`
appears 398 times as a literal (the "398 pool loads" already noted in
`title_camera_containing_struct.md`). Basis eye VA and neighbours
appear 0 times. **The address is NEVER stored as a constant in the
whole binary.**

### 4. `FindMovwMovtWriters.py` on [0x005BE6D0, 0x005BE6FC)
The reg-const-tracking scanner emits ~1049 hits, but all are the
"(indexed?)" fallback branch — the scanner falls into that branch
when a fn happens to load `0x005BDCA4` or `0x005BE29C` into a base
register. **Zero direct `str/vstr/vstm` writes with resolved
`base+imm` landing in [0x005BE6D0, 0x005BE6FC)**.

### 5. ARG-SETUP tracking of `r0 ∈ [0x005BE5B8, 0x005BE5BC)` at `bl` sites
Hundreds of hits, all targeting `bl 0x0036788c`. But
`FUN_0036788c` decomp:
```
void FUN_0036788c(void) {
    puVar2 = (undefined4 *)FUN_004175d4();  // takes no arg
    *puVar2 = UNK_003679a0;
    ...
}
```
The callee takes NO arguments — r0 was left in the register by an
earlier pool load; the callee ignores it. All ARG-SETUP hits are
false positives.

### 6. Decomp grep for `+0x11c` writes
Grepped all extracted `.c` decomps under `build/decomp/` for
`0x11c` / `0x11C`. Non-trivial candidates:
- **`FUN_00338c04`** (80 bytes) — writes `param_1+{0x108,0x10c,0x110,
  0x114,0x118,0x11c}` (two Vec3f slots). Callers: 0023d55c, 0023d904,
  0023e11c, 002580b8, 00338680 — **all pass HEAP-allocated
  param_1** from their own arg. None pass `0x005BE5B8`. Wrong struct.
- **`FUN_002e5724`** (728 bytes) — actor-init-shaped fn; writes
  param_1+{0x108,0x10c,0x110,0x114,0x118,0x11c} where param_1 is
  a heap-allocated 0x1BC-byte struct (zeroed at entry by
  `FUN_00343280(param_1, 0x1BC)`). Actor-side, not the fixed global.
- **`FUN_00499194`** — decomp mentions `iVar43 + 0x11c` as a short
  write from `fVar106 / fVar100 + fVar3`. Also heap-based iVar43.

None of the three `+0x11C` writers touch the fixed VA `0x005BE6D4`.

## Conclusion

Writer materializes `0x005BE6D4` via a **heap pointer chain** —
some heap slot was previously initialized to point into the
`0x005BE5B8` struct region, then loaded via `ldr rDst, [rBase, #imm]`
and written via `str rSrc, [rDst, #<remaining offset>]`. Ghidra
cannot resolve the intermediate `ldr` from memory into a constant.

## Attacks NOT tried this session (deferred)

- **JIT memory-write watchpoint** (`title_camera_containing_struct.md`
  §"Follow-up attacks" #2). The `soh3d-harness` skill's `watch` REPL
  primitive fires per-write and reports PC + LR + r0..r3 + sp. This
  is the RE doc's "most robust and least likely to keep chasing red
  herrings" path — user declined in the 2026-07-03 session, preferring
  static Ghidra; all static Ghidra angles exhausted.
- **Ghidra decompiler run over ALL functions searching for
  `*(f32*)(anyVar + 0x11c) = ...`**. Would require decompiling all
  8292 fns (~30 min). If tried, filter to callees of RE'd
  scripted-cam-update chains.

## Reusable primitives added this session (in the repo)

- `build/decomp/0036788c.c` — confirmed void(void) constructor, NOT
  the basis writer despite hot ARG-SETUP hits.
- `build/decomp/00338c04.c` + its five callers — proves the sibling
  `+0x11c` writer pattern is actor-side, not the fixed cam slot.
- `build/decomp/002d9e68.c` — LookAt matrix builder (unchanged from
  the LH-convention proof in `title_view_matrix_lh.md`).
