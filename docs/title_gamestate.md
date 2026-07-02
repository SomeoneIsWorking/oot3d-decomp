# OoT3D title-screen gamestate — key finding + open questions

**Status:** partial — the key structural fact is verified; the exact
title-demo context struct + its accessors are OPEN.

## Verified fact

**OoT3D's title screen — both the initial logo phase AND the Hyrule-field
flyover demo — is NOT a Play gamestate on 3DS.** `gPlayState @ 0x0050AF34`
stays `0` throughout title. It only becomes a valid PlayState pointer
(e.g. `0x0871e840`) after the game enters an actual gameplay scene via
file-select.

Verified 2026-07-03 via `soh3d_harness`:
1. Cold-boot Azahar's OoT3D libretro core. Run 800 frames — visible
   window shows Hyrule-field title demo (Link on Epona under the moon).
2. `r32 0x0050AF34` reads `0x00000000`.
3. Also holds at 1000, 1400, 2400 frames (multiple demo loops).
4. Contrast: after `loadstate` into Link's House, same VA reads
   `0x0871e840` → sceneNum 0x0034.
5. Mirror at `0x0050AF44` behaves the same (0 at title, 0x0871e840 at
   Link's House).

**This diverges from N64 OoT** (see zeldaret/oot, `z_title.c` /
`z_opening.c` where the title/demo IS a Play state with a scripted
demo scene, sceneNum=0x51). GREZZO refactored the title path on 3DS.

Consequence for the SoH3D two-engine parity harness
(`<engine>/tools/soh3d_harness/`): structural `compare`
(scene/player/actors/camera/lighting) at title is meaningless on the
OoT3D side — every field reads `n/a (no playstate)` because there
literally is none. SoH3D at title IS Play, so the mismatch isn't a
divergence to chase, it's a fundamental gamestate-machinery difference.

## What "title" IS on OoT3D — open

The 3DS demo has to be SOMETHING at runtime — a rendering pipeline is
active, actors are drawing (Link + Epona), camera is animating on a
spline. So there's a gamestate context struct somewhere. Not found yet.

Ruled OUT by dumping/comparing `.data` (RW-Private, VA 0x004F9000 ..
0x005C8000, 0xCF000 bytes) between title-demo and Link's-House states:

- **No `.data` slot holds a "current gamestate" pointer.** Diffed all
  4-byte-aligned words; found zero VAs where title held a HEAP pointer
  AND Link's-House held `0x0871e840`. So OoT3D — like N64 — keeps the
  current-gamestate pointer stack-scoped inside its `Graph_ThreadEntry`
  equivalent, not in a fixed `.data` global.
- **No gGameStateOverlayTable-shaped array found.** Scanned for 4–8
  consecutive 0x30-stride entries with `{code-ptr@+0x18, code-ptr@+0x1C,
  size@+0x2C}` layout (SoH N64 shape). Filtering to entries with
  DISTINCT init pointers per slot found only false positives falling in
  asset data. The 3DS binary is monolithic (no overlays to load), so
  the compact overlay table may not exist at all — dispatch may be
  hardcoded via IF/switch, or use a different struct.
- **HEAP scan for GameState-header signature** (`+0x04` = code fn ptr,
  `+0x08` = code fn ptr) hit `0x0871e840` (the reserved PlayState slot
  with Play_Main preserved from boot) as the ONLY plausible match. No
  second heap struct with the same signature that could be the
  title-demo's own live gamestate. Either the signature is different
  on 3DS (maybe fn ptrs at different offsets), or the demo is driven
  by a controller that doesn't share this shape.

## What worked partially

Dynamic-value scan across title-demo snapshots at 600 vs 900 frames
found frame counters embedded in `.data` at (among others):

- `0x54ad04`, `0x54ad20` — both +300 delta over the 300-frame gap
- `0x54cc3c` — +300 delta
- `0x5a7084`, `0x5a7088` — +300 delta
- `0x5b9518`, `0x5b951c` — +300 delta
- `0x5be644` — +300 delta

The one at `0x54cc3c` sits inside a struct that ALSO changes across
gamestate (title vs Link's-House) at nearby fields:
`0x54cc40`, `0x54cc44` (another counter, DECREASING — could be a
countdown), `0x54cc4c` (FCRAM ptr, changes), `0x54cc50` (FCRAM ptr,
changes). But the low fields (`0x54cc00 .. 0x54cc27`) are constant
pointers to `.rodata` strings across both states — looks like a
per-subsystem structure (probably a rendering/GX dispatch context,
not the gamestate root).

**Warning:** the memory-scan approach has yielded facts (VAs, counters,
struct boundaries) but not the answer. What's needed is the code
side: decompile `Graph_ThreadEntry`-equivalent and read the dispatch.
Everything below is what should happen next.

## Next-session plan — Graph_ThreadEntry decomp

Setup ready at `<repo>/`:
- `build/decomp/functions.csv` — 8266 functions.
- Ghidra 12 project at `build/ghidra/oot3d.gpr` — analyzed.
- `tools/ghidra_scripts/DecompDump.py` — headless decomp; run via
  `OOT3D_REPO=$PWD DECOMP_TARGETS=<targets.txt> <ghidra>/support/analyzeHeadless build/ghidra oot3d -process code.bin -noanalysis -scriptPath tools/ghidra_scripts -postScript DecompDump.py`

Confirmed Play anchor from earlier RE:
`Play_Main @ 0x0045238c` (matches header `[0x0871e840 + 4]`).

Find `Graph_ThreadEntry` — the only function that:
- Contains an inner loop
- Does an indirect call `blx Rx` where `Rx = [state+0x04]` or `[state+0x0C]`
- Writes a heap pointer into gPlayState at some point in its body

Not directly xrefable (uses fn ptr), so approach via:
1. `tools/callers.py 0x0045238c` — currently returns 0 (called via fn
   ptr, not BL). Extend it to also find code that reads `[Rx + 0x04]`
   and then blx's Rx.
2. Alternative: decompile several LARGE functions that reference
   gPlayState (`FUN_0042df18` = 21 KB, `FUN_004439a4` = 8 KB — from
   the 19-function xref list) — one of them is Graph_ThreadEntry or
   its main loop.
3. Rosetta stone: SoH's N64 `Shipwright/soh/src/code/graph.c`,
   specifically `Graph_ThreadEntry` and `Graph_GetNextGameState`.
   Match branch shape, malloc/free pattern, indirect calls.

Once found:
- Read the `gGameStateOverlayTable` or equivalent dispatch (may be a
  large switch instead of a table on 3DS).
- Find the title/opening init functions and their context struct
  sizes.
- Read struct fields (frame counter, camera keyframe pointer, actor
  draw list if any) and map to symbols.

Then land the accessors in
`<engine>/tools/soh3d_harness/soh_state.cpp`: add
`SohState_TitleCamera` / `SohState_TitleActors` / etc. that read the
OoT3D title-demo state through the RE'd offsets, alongside the existing
SoH3D-side accessors. The `Compare*Impl` functions in `main.cpp`
already have the SoH branch and print `n/a (offset not RE'd yet)` on
the 3ds side — just add the 3ds branch there.

## Rejected as ways to answer this

- Memory-scan for a fixed `.data` slot ("gCurrentGameState") — no
  matching VA exists; the pointer is stack-scoped inside the loop.
- Pattern-hunt for a compact gGameStateOverlayTable — 3DS binary is
  monolithic (no overlay loading), so a compact table may not exist.
- HEAP-scan for GameState-header signature — false positives dominate
  once you go beyond the single reserved 0x0871e840 slot.
- Input-driving Azahar past title into an actual Play scene as a
  workaround — that's a different goal (arbitrary-scene parity), not
  title parity. Loadstate is the RE-driven way; already have
  `linkhouse.state`.
