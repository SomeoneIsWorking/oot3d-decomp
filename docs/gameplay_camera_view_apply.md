# Gameplay camera → View application (`FUN_002d77dc`)

## Identity

- code address: `0x002d77dc`
- generated decompile: `build/decomp/002d77dc.c`
- size: `0x74` bytes
- role: copy gameplay camera eye/at/up into the live View and mark its matrix dirty

The function takes a View-like owner plus three `Vec3f` inputs. Its field writes are exact:

| View offset | value |
|---|---|
| `+0x30` | eye XYZ |
| `+0x3c` | at XYZ |
| `+0x48` | up XYZ |
| `+0x1d8` | flags byte, OR with 1 |

When eye and at have identical X and Z, it first offsets eye X by the literal at `0x002d7850` to
avoid a degenerate look-at basis. The dirty-bit write is part of the contract: writing only the
vectors does not make the renderer consume them.

## Gameplay layout used by the paired harness camera

The gameplay View begins at `PlayState + 0x188`, so its applied fields are eye `+0x1b8`, at `+0x1c4`,
up `+0x1d0`, and dirty byte `+0x360`. `FUN_002d84c4` supplies the active Camera layout used by the
normal update path: at `+0x80`, eye `+0x8c`, up `+0x98`, FOV `+0x144`, and status `+0x188`; the active
camera index is at `PlayState + 0xa64` and the pointer table begins at `+0xa54`.

The harness `force camera <eye xyz> <at xyz> <fov>` command keeps the Camera active and restores
these fields when normal guest camera code writes them, then seeds the View fields/dirty bit above.
Making the Camera inactive was falsified: it preserves the fields but bypasses the matrix consumer.
Releasing the hold removes the write watchpoint and restores the exact previous status.
