# The OoT3D oracle — scripting the real game headless

OoT3D runs inside an **embedded** [Azahar](https://github.com/azahar-emu/azahar) core: the emulator
is linked as a library into `soh3d_harness`, a headless C++ program that loads the ROM and exposes a
line REPL over stdin/stdout. No window, no separate emulator process, no IPC. This is how we read
emulated 3DS RAM, capture framebuffers, and drive the real 3DS game as ground truth.

The tooling lives in the superproject (`<zelda3d>/tools`):

- `tools/soh3d_harness.sh` — configures + builds the harness (`Azahar/build-harness`) and runs it.
- `tools/harness_ctl.py` — the driver: `spawn()`, `send()`, `boot_to_gameplay()`, plus a CLI
  (`repl`, `send`, `warp`, `boot-to-play`, `peek`).
- `tools/link_sweep.py` — `OracleSession`, a booted oracle held open across a whole sweep.
- `tools/oracle_shot.py` — a verified gameplay screenshot (refuses to write a title frame).

## REPL surface

    run <n>              advance n frames            mem <va> <n>     hexdump guest RAM
    r / w                read/write a word           input <mask>     held pad bits
    loadstate/savestate  emulator state              snapshot <base>  PPM framebuffer readback
    playstate            PlayState ptr + mode=play|title
    gameplay             ok yes|no — a real gameplay scene, NOT the title demo
    scene                current scene number        actors           walk the live actor list
    warp <entrance>      scene transition (see below)
    soh_boot / soh_step / step / compare / force     the side-by-side SoH3D half
    watch / hits / unwatch                           write watchpoints (writer PC + LR + regs)

## Reaching gameplay, and warping

Warping uses the game's own mechanism — `nextEntranceIndex` (s16 @ `play+0x5C32`) plus
`transitionTrigger` (s8 @ `play+0x5C2D`) = `TRANS_TRIGGER_START` (20); see `ram_map.md`. It works
**only from a loaded save**: at the title there is nothing for the transition driver to spawn into.

`harness_ctl.boot_to_gameplay(h, entrance=…)` handles that. It loads
`scratch/gameplay_settled.state` (**no input driving at all**) or, the first time, drives the title
once with short rapid taps and saves that state so the cold path never runs again. Then it warps and
verifies the game stayed in gameplay.

    python3 tools/harness_ctl.py warp 0xEE        # -> scene 0x0055 (Kokiri Forest)

`gameplay`, not `playstate`, is the readiness check: `playstate` deliberately falls back to the
title demo's PlayState so introspection works there, so it answers ok on the title screen.

## Harness modifications to Azahar

`Azahar/` is gitignored; the patches to re-apply after a fresh clone are recorded in
`<zelda3d>/tools/soh3d_harness/AZAHAR_PATCH.md` (currently the `MemorySystem::Write<T>` write-hook
backing the `watch`/`hits` watchpoint commands).

## Limits

Driving input does not scale to every scene and NPC — warp injection plus an actor-list dump does,
which is what the sweep tools do. Static romfs scene-actor-list parsing (`tools/scene_actors.py`)
complements it for anything that need not run.
