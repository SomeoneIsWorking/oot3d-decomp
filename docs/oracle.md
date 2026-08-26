# The OoT3D oracle — scripting the real game headless

OoT3D runs inside an **embedded** [Azahar](https://github.com/azahar-emu/azahar) core: the emulator
is linked as a library into `soh3d_harness`, a headless-by-default C++ program that loads the ROM and
exposes a line REPL over stdin/stdout. There is no separate emulator process: the Python client talks
to the harness process, while the Azahar core and the SoH side both run inside that process. This is
how we read emulated 3DS RAM, capture framebuffers, and drive the real 3DS game as ground truth.

The tooling lives in the superproject (`<zelda3d>/tools`):

- `tools/soh3d_harness.py` — executable launcher that configures, builds, prepares, and runs the
  harness (`Azahar/build-harness`).
- `tools/harness_cli.py` — the public CLI (`repl`, `send`, `warp`, `boot-to-play`, `peek`).
- `tools/harness_process.py`, `harness_transport.py`, and `harness_gameplay.py` — focused Python
  APIs owning process creation, REPL framing/lifecycle, and `boot_to_gameplay()` respectively.
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

`harness_gameplay.boot_to_gameplay(h, entrance=…)` handles that. It loads
`scratch/gameplay_settled.state` (**no input driving at all**) or, the first time, drives the title
once with short rapid taps and saves that state so the cold path never runs again. Then it warps and
verifies the game stayed in gameplay.

    uv run --frozen python tools/harness_cli.py warp 0xEE  # -> scene 0x0055 (Kokiri Forest)

For Python callers, import the focused owners rather than the CLI:

```python
from harness_gameplay import boot_to_gameplay
from harness_process import spawn

with spawn() as harness:
    if not boot_to_gameplay(harness, entrance=0xEE):
        raise RuntimeError("oracle did not reach Kokiri Forest")
```

`gameplay`, not `playstate`, is the readiness check: `playstate` deliberately falls back to the
title demo's PlayState so introspection works there, so it answers ok on the title screen.

## Harness modifications to Azahar

`Azahar/` is gitignored; the patches to re-apply after a fresh clone are recorded in
`<zelda3d>/tools/soh3d_harness/AZAHAR_PATCH.md`. That document is the complete patch manifest; do
not infer the current patch set from an older oracle note.

## Comparator verification status

`tools/test_boss_fd_comparison_policy.py` compiles and runs the production BossFd comparison policy
against required MATCH, DIVERGED, exact-tolerance, wrapped-rotation, invalid-snapshot, and profile-
tolerance cases. The live forced-profile certification on 2026-08-26 then paired 270 authored ticks,
reached exact zero-delta for the producer and sampled 150-entry history, changed one oracle history X
value by 1000 to force `DIVERGED` (`meanPos=50`, `maxPos=1000`), and returned to exact `MATCH` after
restoration. This trusts the forced action-0 producer comparator; it does not extend that verdict to
general action/death sequencing or rendered-image parity.

## Limits

Driving input does not scale to every scene and NPC — warp injection plus an actor-list dump does,
which is what the sweep tools do. Static romfs scene-actor-list parsing (`tools/scene_actors.py`)
complements it for anything that need not run.
