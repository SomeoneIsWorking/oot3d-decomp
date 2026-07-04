# OoT3D Scene ZSI Command Handler — RE'd 2026-07-04

## The dispatcher

`FUN_002e4de4` at VA `0x002e4de4` (168 bytes) is the scene ZSI command
loop. Called from `FUN_004490d8` (state-1 scene init) as
`FUN_002e4de4(*(play + 0x110), play, *(play + 0x110))` where
`*(play + 0x110)` is the scene segment base and `param_3` is the
command pointer.

Body shape (decomp):

```c
undefined4 FUN_002e4de4(int segBase, int play, byte* cmdPtr) {
    do {
        cmd = *cmdPtr;
        if (cmd == 0x14) return 1;        // ZSI_CMD_END
        if (cmd < 0x1a) {
            (*(dispatchTable + cmd * 4))(segBase, play, cmdPtr);
        }
        cmdPtr += 8;                       // each command = 8 bytes
        ...
    } while (...);
}
```

- Max cmd id: **0x1A**
- End marker: **0x14**
- Command entry size: **8 bytes**
- Dispatch table VA: **UNK_002e4e8c = 0x0053cc84**

## The dispatch table at 0x0053cc84

26 fn ptrs (4 bytes each, total 104 bytes). Mapped by cmd id:

| Cmd | Handler VA | Fn         | Purpose (mapped from N64 OoT)         |
|-----|-----------:|:-----------|:--------------------------------------|
| 0x00 | 0x00256bd8 | FUN_00256bd8 | spawnList            |
| 0x01 | 0x0023447c | FUN_0023447c | actorList            |
| 0x02 | 0x00378fe0 | FUN_00378fe0 | camList (unused N64)  |
| 0x03 | 0x00273070 | FUN_00273070 | collisionHeader      |
| 0x04 | 0x0039ded0 | FUN_0039ded0 | roomList             |
| 0x05 | 0x00217c2c | FUN_00217c2c | windSettings         |
| 0x06 | 0x003791a8 | FUN_003791a8 | entranceList         |
| 0x07 | 0x00394550 | FUN_00394550 | specialFiles         |
| 0x08 | 0x002344c4 | FUN_002344c4 | roomBehavior         |
| 0x09 | 0x00256d48 | FUN_00256d48 | (unused N64 slot)     |
| 0x0A | 0x003a590c | FUN_003a590c | mesh                 |
| 0x0B | 0x003a7558 | FUN_003a7558 | objectList           |
| 0x0C | 0x002a9ddc | FUN_002a9ddc | lightList            |
| 0x0D | 0x002985f0 | FUN_002985f0 | pathList             |
| 0x0E | 0x002985d0 | FUN_002985d0 | transitionActors     |
| **0x0F** | **0x00379188** | **FUN_00379188** | **lightSettingsList (palette loader)** |
| 0x10 | 0x00217a5c | FUN_00217a5c | timeSettings         |
| 0x11 | 0x0038a164 | FUN_0038a164 | skyboxSettings       |
| 0x12 | 0x00381d18 | FUN_00381d18 | skyboxDisables       |
| 0x13 | 0x002a9e2c | FUN_002a9e2c | exitList             |
| 0x14 | 0x00000000 |           NULL | (END marker: never dispatched) |
| 0x15 | 0x00273108 | FUN_00273108 | soundSettings        |
| 0x16 | 0x00256c7c | FUN_00256c7c | echoSettings         |
| 0x17 | 0x0023449c | FUN_0023449c | **cutsceneData**     |
| 0x18 | 0x00378ff8 | FUN_00378ff8 | altHeaders           |
| 0x19 | 0x00256ca8 | FUN_00256ca8 | miscSettings         |

## Scene_CmdLightSettingsList = FUN_00379188 (SOLVED)

```c
// FUN_00379188 (32 bytes)
undefined4 FUN_00379188(int segBase, int play, int cmd) {
    *(u8*)(play + 0x322c) = *(u8*)(cmd + 1);         // envCtx.numLightSettings = cmd[1]
    *(int*)(play + 0x3230) = segBase + *(int*)(cmd + 4);  // envCtx.lightSettingsList = segBase + cmd.segAddr
    return 1;
}
```

**envCtx layout (locked in):**
- `envCtx base = play + 0x3190`  (confirmed via FUN_004490d8 line 43 =
  `FUN_0044ff18(param_1, param_1 + 0x3190, 0)` = Env_Init on env base)
- `envCtx.numLightSettings = env + 0x9C`  (play + 0x322C - play + 0x3190)
- `envCtx.lightSettingsList = env + 0xA0`  (play + 0x3230 - play + 0x3190)

Each `Zelda3dLightSlot` is **28 bytes** (stride 0x1C confirmed via the
palette-lookup ARM pattern `rsb r,r,r,lsl#3; add r,R5,r,lsl#2`).

## Scene_CmdTimeSettings = FUN_00217a5c

Writes u16 at play+0x3192 (= env+0x02) = time-multiplier / clock-speed
from cmd[6]. Sets up 3 floats at env+0x04, +0x08, +0x0C (sun direction
components computed from a global angle at UNK_00217bf4+3).

## Scene_CmdCutsceneData = FUN_0023449c

Not yet decompiled in detail — 8-byte cs entry with cs script pointer
at cmd offset +4 likely. This is where the title-demo CS script gets
attached to envCtx if any.

## Env_Init = FUN_0044ff18 (SOLVED)

Called from FUN_004490d8 as `FUN_0044ff18(play, play+0x3190, 0)`.
Initializes the entire envCtx to zeros/defaults. Notable field
initializations (all at env-offset):

- +0x1A = 0 (u8 flag)
- +0x1C = 0 (u16)
- +0x21 = 0 (u8 - time cursor A)
- +0x22 = 0 (u8 - time cursor B)
- +0x23 = 0 (u8 flag)
- +0x24 = 0 (u16)
- +0x2C = FUN_002de738(env+0x2C, 0x50,0x50,0x50,0x50,0x50,0x50) — a 7-byte struct init
- +0x44 = FUN_002de738(env+0x44, 0x50,0x50,0x50,0x50,0x50,0x50) — another 7-byte struct init
- +0x5C = 0 (u8)
- +0x10/11 = 99 (both bytes)
- +0x60/64/68 = uRam0045039c (3 floats)
- +0x8C = uRam0045039c (float)
- +0x88, +0x84 = uRam0045039c (floats)
- +0x7C, +0x7E, +0x76, +0x74, +0x72, +0x70, +0x6E, +0x6C, +0x7A, +0x78 = 0 (u16s)
- +0x90 = 0x50 (u16)
- +0xA5 = 0 (u8 - this is what earlier journals called "unk_BF")
- +0xA6 = 0 (u8 - shadow)
- +0xC8 = uRam004503a0 (float - lerp weight, unk_D8)
- +0xCC..+0xDD = zeros (mode/flag bytes)
- +0x268 = 0 (u32)

## What this means for SoH3D port

- The 3DS envCtx has KNOWN offsets for lightSettingsList / numLightSettings
  now. A port implementation of Zelda3dLightSlot arrays can be loaded
  into env+0xA0 at scene load, matching the 3DS engine's mechanism.
- Scene ZSI CMD 0x0F handler in SoH would set the same pointer.
- Time-based lighting mechanism (env[0x21]/[0x22] cursors) is real
  but stub-init'd to 0; needs further RE to see WHERE per-frame advance
  happens (or if it doesn't advance for the title scene).

## Files

- `build/decomp/002e4de4.c` — scene command dispatcher
- `build/decomp/00379188.c` — Scene_CmdLightSettingsList
- `build/decomp/00217a5c.c` — Scene_CmdTimeSettings
- `build/decomp/0044ff18.c` — Env_Init
- `build/decomp/004490d8.c` — the scene state init that calls both
