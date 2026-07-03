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

## Tool committed

`tools/ghidra_scripts/FindMovwMovtWriters.py` — new; runs in ~10s over
the whole binary and prints direct + near-range writers with resolved
base and offset. Env: `OOT3D_RANGE_LO` / `OOT3D_RANGE_HI`.
