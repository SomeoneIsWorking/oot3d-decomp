# oot3d-decomp

Reverse-engineering / decompilation lab for **The Legend of Zelda: Ocarina of Time 3D** (Nintendo 3DS,
title `0x0004000000033500`). The goal is to recover OoT3D's structures and behavior as ground truth —
starting with the data needed to make [SoH3D](https://github.com/SomeoneIsWorking/soh3d) (Ship of
Harkinian rendering OoT3D assets) match the 3DS game instead of guessing from the N64 version.

OoT3D has **no public decompilation or symbols**. Everything here is derived empirically:
- **Live RAM RE** via the *Azahar oracle* — OoT3D runs headless in a modded build of the
  [Azahar](https://github.com/azahar-emu/azahar) emulator, scripted over its RPC server (read/write
  emulated 3DS RAM, capture framebuffers, inject input). See `docs/oracle.md`.
- **Static RE** of the romfs (scenes, actor data, CSAB/CMB assets) — parsers in `tools/`.

OoT3D is a Grezzo port of OoT; its engine mirrors the well-documented N64 OoT decompilation
([zeldaret/oot](https://github.com/zeldaret/oot)), which guides the search (Actor struct, SkelAnime,
scene/actor lists, gSaveContext) — but layouts differ (32-bit ARM, 3DS-specific fields, PICA200 GPU).

## Status
Early. Standing up the oracle + RAM map. See `docs/`:
- `docs/oracle.md` — the headless-Azahar scripting oracle (how to run + drive OoT3D).
- `docs/ram_map.md` — the OoT3D emulated-RAM reverse-engineering journal (addresses, structs, methods).

## Relationship to SoH3D
The oracle tooling currently lives in the soh3d repo (`tools/azahar_*.py`, plus Azahar source mods);
this repo is the home for the **findings** and OoT3D-specific RE. Tooling may migrate here as it matures.

ROMs/assets are never committed (copyrighted). The decrypted OoT3D ROM is provided via env (see soh3d
`.env`: `SOH3D_3DS_ROM`).
