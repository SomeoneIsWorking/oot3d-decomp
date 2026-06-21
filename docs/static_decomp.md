# OoT3D static decompilation / disassembly

Static RE of the OoT3D executable, complementing the live-RAM oracle (`docs/oracle.md`,
`docs/ram_map.md`). The code is the durable anchor the RAM scan could not reach: it references
the static global context / actor-list head at FIXED virtual addresses, so we find them once in
code and they hold every boot. Started 2026-06-21 after the in-house RAM scan stalled on camera
copies + unreliable headless navigation.

## The code image (VERIFIED)
- ROM: decrypted OoT3D USA, product code **CTR-P-AQEE**, title `0x0004000000033500`.
- Executable = NCCH ExeFS `.code`, **compressed** (exheader SCI "compress code" bit set).
  Compression = Nintendo backward-LZSS ("BLZ", same family as DS overlays).
- `tools/extract_code.py <rom> build/code.bin` extracts + decompresses it.
  - `.code` compressed 0x2a7ea0 → decompressed **0x45b000 bytes**.
  - **Load address 0x00100000** (from exheader text CodeSetInfo). So in `code.bin`,
    `file_offset = vaddr - 0x00100000`. Layout in-image: `.text` [0x00100000, 0x004ca000)
    (padded to 0x3ca000 pages), `.rodata` @0x004ca000 (0x2e348), `.data` @0x004f9000 (0x61220),
    then bss (0x6c3e8, zero-init at runtime by crt0).
- **VERIFIED against live emulated RAM** (`extract_code.py --verify`): `.text`/`.rodata` match
  the running Azahar 64/64–256/256 at 0x00100000/200000/400000/4ca000/550000. `.data` @0x4f9000
  is 52/64 (expected — writable data mutated at runtime; the image holds boot-time values).
- `build/` is gitignored (`*.bin`) — never commit the ROM-derived image.

## Disassembly & xref tools
- `tools/disasm.py <vaddr> [len] [--thumb]` — capstone ARM/Thumb dump of a VA range.
  **CAVEAT: `--thumb` linear-decodes and DESYNCS on Thumb-2 (32-bit) instructions** — it will emit
  garbage after the first 32-bit op. Trust only the first instruction at a known-aligned VA.
- `tools/xref.py <va>` — literal-pool xref (4-byte word == va). Finds globals/asserts. Misses
  PC-relative call targets (BL) and ADR-relative `__FILE__` strings.
- `tools/callers.py <va>` — **call-graph xref**: decodes ARM AND Thumb BL/BLX encodings at every
  alignment to find call sites targeting a function. Use this (not xref.py) to find who CALLS a fn.
  Verified: found the sole caller of the scene-flags getter `0x44e7a0` at `0x448c50`.
- `tools/find_consumer.py <global> [--off N]` — narrow xref: among literal-pool loads of a global
  base, find sites that deref it at a small field offset / use it as an index. ARM+Thumb passes, but
  the Thumb pass has FALSE POSITIVES (ARM/data mis-decoded as Thumb ldr-literal) — verify each hit.
- **Bulk static RE of this mixed ARM/Thumb image needs a real function map.** Linear capstone sweeps
  desync. NEXT: load `build/code.bin` at base `0x00100000` into Ghidra/radare2 (ARM Cortex, auto
  ARM+Thumb) for reliable function boundaries — required to find `Play_Init`/the warp transition fn.
- crt0 at entry: `0x00100000` is a table of `bl` to init routines; `0x00100028` zeroes BSS using
  a pointer-literal pair at `0x00100044/48` (bss_start/bss_end). Confirms VA mapping + decode.
- Code is ARM (A32) at least at entry; expect Thumb in places (CTR libs). objdump/radare2/capstone
  all present on this machine.

## NEXT (the goal: durable anchors via code)
1. Find the **global context / actor-list head**. OoT N64 parallels (zeldaret/oot): `gPlayState`
   (a.k.a. GlobalContext) holds `ActorContext actorCtx` with `ActorListEntry actorLists[12]`
   ({ s32 length; Actor* head }). Approach: locate `Actor_Spawn` / `Actor_UpdateAll` /
   `Actor_AddToList` by their structure, read the fixed address they load the context pointer from.
2. **Actor struct offsets** (id, category, params, world.pos, `next`) — confirm against live RAM
   by reading a known actor through them.
3. **gSaveContext + nextEntranceIndex** for warp injection (a static BSS/data global).
4. Cross-check every code-derived address against the live oracle before trusting it.
