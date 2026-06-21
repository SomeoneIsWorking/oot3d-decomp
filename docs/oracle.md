# The Azahar oracle — scripting OoT3D headless

OoT3D runs headless in a modded [Azahar](https://github.com/azahar-emu/azahar) build, scripted over
Azahar's RPC server (UDP `:45987`). This is how we read/write emulated 3DS RAM, capture framebuffers,
and inject input to drive and observe the real 3DS game as ground truth.

Tooling currently lives in the **soh3d** repo (will migrate here as it matures):
- `tools/azahar_rpc.py` — RPC client lib (read/write/screenshot/input/touch + process select).
- `tools/azahar_repl.py` — interactive console (tap/hold/circle/walk/touch/shot/read/r32/rf).
- `tools/azahar_scan.py` — Cheat-Engine-style RAM search (still/move narrowing).

## Azahar source mods (committed to the local Azahar checkout)
Azahar already had `ReadMemory`/`WriteMemory`/`ProcessList`/`SetGetProcess`. Added packet types:
- **`Screenshot=5`** — `GPU().Renderer().RequestScreenshot` → PPM on the host. (RGB from the GL
  `glReadPixels(GL_BGRA, …_8_8_8_8_REV)` buffer: byte order B,G,R,A → emit R=[2] G=[1] B=[0].)
- **`Input=6`** — held 3DS pad bits + circle pad, OR'd into HID `UpdatePadCallback`.
- **`Touch=7`** — held bottom-screen touch (OoT3D menus are touch-driven).

## Run recipe (headless on Xvfb)
```
source ./.env                     # SOH3D_3DS_ROM = decrypted OoT3D .3ds
# enable_rpc_server=true in <azahar-config>/qt-config.ini ([Debugging])
DISPLAY=:95 QT_QPA_PLATFORM=xcb Azahar/build/bin/Release/azahar "$SOH3D_3DS_ROM" &
tools/azahar_repl.py             # interactive; or -c "cmd; cmd; ..." for batch
```
Verified: drove a New Game from title → name entry → intro → **Link's house, Kokiri Forest**, fully
headless (buttons + touch), then RAM-scanned Link's position. RPC reads ~12 MB/s.

### Fast re-entry (skip the intro)
An **in-game save** was made at Link's house (File 1). After any emulator restart, reload to Kokiri
Forest WITHOUT the ~3-minute intro grind:
`tap start; tap start` (title→file select) → `tap a` (File 1) → `tap a` (Start) → in Kokiri Forest.
(The Savestate RPC packet exists but does NOT work headless — Azahar's savestate file I/O is driven by
the Qt GMainWindow frontend, absent in headless; the signal is set but nothing writes it. Use the
in-game save instead.)

## Limits (why a full sweep needs warp, not walking)
Driving input doesn't scale to every level/NPC. The plan is **warp injection**: write the entrance
index + trigger a scene load via `WriteMemory` (OoT3D mirrors OoT's entrance system), then dump the
actor list + screenshot — looped over all scenes. Complement with static romfs scene-actor-list parsing.
