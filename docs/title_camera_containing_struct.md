# Title-camera containing struct — LOCATED at 0x005BE5B8 (offset 0x11C)

Ran `tools/ghidra_scripts/FindMovwMovtWriters.py` (new, this session) across
the full binary via Ghidra 12.0.4 headless. The scanner tracks
`{reg → const}` per function through movw/movt/mov/add-imm/pool-load,
and reports every str/stm/vstr/vstm insn whose base register + explicit
offset lands in a target VA range. Complements the existing
`tools/find_indexed_writers.py` (which does the same via capstone linear
scan; substantially slower).

## Direct hits in [0x005BE690, 0x005BE750)

```
002ff61c  str      r1, [r0, #0xfc]   target=0x005be6b4  fn=FUN_002ff5d4
0045940c  str      r4, [r0, #0xfc]   target=0x005be6b4  fn=FUN_004592d0
00471e24  str      r4, [r0, #0xfc]   target=0x005be6b4  fn=FUN_00471b84
00479290  str      r4, [r0, #0xfc]   target=0x005be6b4  fn=FUN_00471b84
004497cc  vstr.32  s0, [r0, #0x164]  target=0x005be71c  fn=FUN_00449420
```

All five have base register **r0 = 0x005BE5B8** materialized inside each
enclosing function.

## What `0x005BE5B8` is

`code.bin` scan: **398 pool literals equal `0x005BE5B8`** — this is a
well-known global (rough analog of an N64 OoT `gGlobalCtx` slot),
loaded via `ldr rX, =0x005BE5B8` at 398 sites and passed to functions
as the first argument.

Structural inference:

| offset | target VA    | interpretation                            |
|--------|--------------|-------------------------------------------|
| +0xFC  | 0x005BE6B4   | Written by 4 fns; 32 bytes before cam eye |
| +0x11C | 0x005BE6D4   | **Cam basis eye** (RE'd; camera_lead)     |
| +0x120 | 0x005BE6D8   | eye.y                                     |
| +0x124 | 0x005BE6DC   | eye.z                                     |
| +0x128 | 0x005BE6E0   | dir.x                                     |
| ...    | ...          | dir.y / dir.z / up.x / up.y / up.z        |
| +0x140 | 0x005BE6F8   | last basis word                           |
| +0x164 | 0x005BE71C   | 40 bytes after cam basis; also written    |

**Cam basis (RE'd Vec3f eye/dir/up) is at struct offset +0x11C** within a
bigger camera/title struct rooted at `0x005BE5B8`.

## Direct writer of cam basis eye at +0x11C — NOT surfaced by the scanner

Zero direct writes with `imm == 0x11C` and `base == 0x005BE5B8` were
found across the whole binary. Yet the cam basis eye evolves per frame
empirically (`(-4070.31, 57.81, 5219.15)` → `(-4064.39, 57.81, 5228.38)`
over 300 frames). Candidate write mechanisms:

1. **Bulk memcpy** — the whole 36-byte basis is copied from a scratch
   buffer via `memcpy(0x5BE6D4, src, 36)`. The destination address
   would be materialized dynamically. Search: `find_indexed_writers.py`
   / `FindMovwMovtWriters.py` extended to track callers of common
   memcpy helpers, then filter by first-arg constant.
2. **Vec3f-taking helper** — a function like
   `f(Vec3f* dest, spline_state* s, f32 t)` is called with `dest =
   &camState[+0x11C]`. r0 is `camState + 0x11C` at the call site; my
   scanner tracks this as a constant if it's computed via
   `add r0, camState, #0x11C` after `ldr camState, =0x005BE5B8`.
   BUT the `add` fold may not have happened in a form my Python +
   Jython patterns handle. Retry with an add-with-larger-imm case.
3. **Alignment/copy via VFP block** — `vldm r_src / vstm r_dst` where
   `r_dst` was loaded from a heap-side pointer (not a constant), so
   my scanner's reg-const tracking can't see it.

## Next attack

1. **Decomp FUN_00471B84** (Ghidra 12.0.4 available). It writes at
   +0xFC of the same struct; if it also writes at +0x11C somewhere,
   the decomp will show it directly (register-const propagation Ghidra
   does much better than my Jython scanner).
2. **Search callers of memcpy-like helpers.** Ghidra can produce a
   caller list; filter to callers whose first-arg constant lands in
   [0x005BE6D4, 0x005BE6F8].
3. **JIT memory-write watchpoint on 0x5BE6D4** — as documented in
   `docs/title_actor_world_pos.md` for the actor slot. Guaranteed to
   catch the writer at emu runtime; not tried yet.

## Candidate writers decomp'd — all red herrings

Batch-decomp'd the four scanner-surfaced writer fns via Ghidra 12.0.4
(`build/decomp/002ff5d4.c`, `00471b84.c`, `004592d0.c`, `00465b34.c`):

- **FUN_002FF5D4** (80 bytes): tiny one-shot — `*(u32*)(0x5BE5B8 + 0xFC) = 0` after a lock-guarded call. A flag clear, not a Vec3f writer.
- **FUN_00449420** (1268 bytes): scene-transition dispatcher — writes ONE word at `+0x164` (`= *(u32*)(param_1 + 0x1B0)`, a single s32 from Play state), not the 3 Vec3f basis at `+0x11C..+0x140`.
- **FUN_00471B84** (1840 bytes): matrix-setup fn — writes `param_1[0x3F]` = base+0xFC (a projection-matrix scratch field) along with dozens of matrix-cell floats. Doesn't touch the camera basis (+0x11C region).
- **FUN_00465B34** (460 bytes): **table initializer** — populates a hardcoded 18-entry × 16-byte lookup table at `0x005AFBC4` (probably a sfx/particle table) with literal constants from `DAT_00465D14..DAT_00465D40`. One-shot at boot, not per-frame. Also NOT the writer of `0x005AFFB0` — it stops writing well before that offset.

**Conclusion**: NONE of the four scanner-surfaced writer candidates are the camera-basis-eye or actor-world-pos writers. All are either flag-clears, single-field bit copies, matrix scratch, or one-shot table inits.

The actual writers use a mechanism the constant-tracker can't see:
- A Vec3f-taking helper whose destination is `add rDst, base_ptr, #0x11C` where `base_ptr` came from a heap chain / callee-arg — the scanner has no visibility into either.
- OR a bulk memcpy pattern where the dest pointer is loaded via `ldr rDst, [rSomeCtx, #imm]` from a runtime state block.

## Follow-up attacks (deferred)

1. **Callee-arg xref graph.** Find all callers of Ghidra-inferred "sink" functions (memcpy-like or Vec3f-copy-like) whose first argument at the call site evaluates to `0x005BE5B8 + 0x11C` = `0x005BE6D4`. This needs a smarter scanner that follows arg-setup blocks BACKWARD from `bl` sites.
2. **JIT memory-write watchpoint.** Attach Azahar's dynarmic hook to `0x005BE6D4..0x005BE6D8` and dump the writer PC at first hit. Guaranteed and cheap.
3. **Ghidra callgraph over `gGlobalCtx = 0x005BE5B8`.** All 398 pool-literal sites deref this struct — filter to those that pass `(0x5BE5B8 + 0x11C)` as an arg. Same idea as #1 but leveraging Ghidra's Reference DB.

Attack (2) is the most robust and least likely to keep chasing red herrings.

## Tool committed

`tools/ghidra_scripts/FindMovwMovtWriters.py` — new; runs in ~10s over
the whole binary and prints direct + near-range writers with resolved
base and offset. Env: `OOT3D_RANGE_LO` / `OOT3D_RANGE_HI`.
