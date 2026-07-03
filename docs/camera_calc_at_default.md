# Camera_CalcAtDefault — OoT3D FUN_00338ac8

Hand-derived from linear disassembly (capstone ARM via `tools/disasm.py`),
2026-07-03. Ghidra project on this workstation is unusable
(`code.bin` was created by a newer Ghidra than the installed 11.0.3),
so the primary decomp for this function is hand-written.

- **OoT3D address:** `0x00338ac8` — end `0x00338bec` (0x124 bytes / 73
  instructions ARM)
- **N64 twin:** `Camera_CalcAtDefault` at
  `Shipwright/soh/src/code/z_camera.c:906` (30 lines of clean C)
- **Callers (via SoH z_camera.c):** `Camera_Normal1`, `Camera_Normal2`,
  `Camera_Jump1`, `func_800458D4` (Normal1's `flags & 0x80` at-branch).
  Any port of this function must satisfy all those call sites — it is
  a shared computation.

## Clean C — derived from disassembly

```c
// Sets camera->at each frame for the default follow-camera shape.
// Blends the camera's "look-at target" toward
//   playerPos + posOffset + optional extra Y bias
// through the yOffset/xzOffset LERP rates.
s32 Camera_CalcAtDefault(Camera* camera, VecSph* eyeAtDir,
                         f32 extraYOffset, s16 calcSlope) {
    Vec3f  posOffsetTarget;
    Vec3f  atTarget;
    f32    playerHeight;
    f32    extraAtY = 0.0f;               // <-- OoT3D-only; SoH has no such term
    PosRot* playerPosRot = &camera->playerPosRot;

    playerHeight = Player_GetHeight(camera->player);           // 0x00367ef0

    posOffsetTarget.x = 0.0f;
    posOffsetTarget.z = 0.0f;
    posOffsetTarget.y = playerHeight + extraYOffset;

    if (calcSlope) {
        // Slope-aware pitch adjust — identical shape to SoH:
        //   posOffsetTarget.y -= OLib_ClampMaxDist(
        //     Camera_CalcSlopeYAdj(&floorNorm, playerPosRot->rot.y,
        //                          eyeAtDir->yaw, OREG(9)),
        //     playerHeight);
        // (bl 0x367e88 then bl 0x355804 in the disasm.)
        f32 slopeAdj = Camera_CalcSlopeYAdj(&camera->floorNorm,
                                            playerPosRot->rot.y,
                                            eyeAtDir->yaw,
                                            OREG(9));
        posOffsetTarget.y -= OLib_ClampMaxDist(slopeAdj, playerHeight);
    }

    // LERP posOffset toward posOffsetTarget through the update rates.
    // Same call shape as SoH's Camera_LERPCeilVec3f.
    Camera_LERPCeilVec3f(&posOffsetTarget, &camera->posOffset,
                         camera->yOffsetUpdateRate,
                         camera->xzOffsetUpdateRate,
                         0.1f);

    // === Δ-A structural addition vs SoH — the "extra Y bias" block ===
    // Absent in SoH's z_camera.c:906. Fires only when a Grezzo-added
    // Player state word has bit 0x100 set (climbing/pull/carry-like
    // states, still to be catalogued).
    if (*(u32*)((u8*)camera->player + 0x29B8) & 0x100) {
        // 3DS-only Player field at +0x1760; beyond N64 Player's 0x14F4
        // total size — added by Grezzo.
        f32 yBiasRaw = *(f32*)((u8*)camera->player + 0x1760);
        extraAtY = yBiasRaw * -0.01f;
    }
    // ================================================================

    atTarget.x = playerPosRot->pos.x + camera->posOffset.x;
    atTarget.y = playerPosRot->pos.y + camera->posOffset.y + extraAtY;  // <-- +extraAtY vs SoH
    atTarget.z = playerPosRot->pos.z + camera->posOffset.z;

    // Final LERP into camera->at, using atLERPStepScale for both axes.
    Camera_LERPCeilVec3f(&atTarget, &camera->at,
                         camera->atLERPStepScale,
                         camera->atLERPStepScale,
                         0.2f);
    return 1;
}
```

## Diff vs SoH's `Camera_CalcAtDefault` (z_camera.c:906)

Only ONE structural difference — the extra Y bias block gated on the
Grezzo-added Player state word:

```
+   f32 extraAtY = 0.0f;
+   if (*(u32*)((u8*)camera->player + 0x29B8) & 0x100) {
+       extraAtY = *(f32*)((u8*)camera->player + 0x1760) * -0.01f;
+   }
    ...
-   atTarget.y = playerPosRot->pos.y + camera->posOffset.y;
+   atTarget.y = playerPosRot->pos.y + camera->posOffset.y + extraAtY;
```

Everything else — Player_GetHeight base, `+ extraYOffset`, slope
adjust with `OLib_ClampMaxDist`, both `LERPCeilVec3f` calls, the
`0.1f`/`0.2f` LERP-rate literals — matches SoH bit-for-bit by shape.

## Instruction-level pin points

Each addr is a raw ARM instruction; PC-relative constant pool derefs
are annotated. Complete function body:

| VA        | Insn                        | Meaning                                            |
|-----------|-----------------------------|----------------------------------------------------|
| 0x338ac8  | push {r4-r8,sb,lr}          | prologue                                           |
| 0x338acc  | mov r4, r0                  | r4 = camera                                        |
| 0x338ad0  | add r6, r0, #0x80           | r6 = &camera->at                                   |
| 0x338ad4  | add sb, r0, #0x150          | sb = camera + 0x150 (&floorNorm on OoT3D)          |
| 0x338ad8  | add r5, r0, #0xdc           | r5 = &camera->playerPosRot                          |
| 0x338adc  | vpush {d8,d9}               | save VFP d8-d9 (s16-s19)                            |
| 0x338ae0  | vmov.f32 s18, s0            | **s0 was extraYOffset (float arg 3)**              |
| 0x338ae4  | sub sp, sp, #0x1c           | locals                                              |
| 0x338ae8  | ldr r0, [r0, #0xd8]         | r0 = camera->player                                 |
| 0x338aec  | mov r7, r1                  | r7 = eyeAtDir (arg 1)                              |
| 0x338af0  | mov r8, r2                  | r8 = calcSlope (arg 2)                             |
| 0x338af4  | bl 0x367ef0                 | s0 = Player_GetHeight(camera->player)              |
| 0x338af8  | vmov.f32 s17, s0            | s17 = playerHeight                                 |
| 0x338afc  | vadd.f32 s0, s0, s18        | s0 = playerHeight + extraYOffset                   |
| 0x338b00  | vldr s16, [pc, #0xe4]       | s16 = 0.0f (const at 0x338bec)                     |
| 0x338b04  | cmp r8, #0                  | calcSlope?                                          |
| 0x338b08  | vstr s16, [sp, #0x10]       | posOffsetTarget.x = 0.0f                            |
| 0x338b0c  | vstr s16, [sp, #0x18]       | posOffsetTarget.z = 0.0f                            |
| 0x338b10  | vstr s0,  [sp, #0x14]       | posOffsetTarget.y = playerHeight + extraYOffset     |
| 0x338b14  | beq 0x338b54                | if !calcSlope → skip slope adjust                   |
| 0x338b18  | ldr r0, [pc, #0xd0]         | r0 = &REG_TABLE (OREG global)                       |
| 0x338b1c  | ldrsh r2, [r7, #6]          | r2 = eyeAtDir->yaw                                  |
| 0x338b20  | ldrsh r1, [r5, #0xe]        | r1 = playerPosRot->rot.y                            |
| 0x338b24  | ldr r0, [r0]                | r0 = *REG_TABLE                                     |
| 0x338b28  | add r0, r0, #0x100          | r0 = REGs base + 0x100 (probably OREG(9) slot base) |
| 0x338b2c  | ldrsh r0, [r0, #0xa6]       | r0 = OREG(9)                                        |
| 0x338b30  | vmov s0, r0                 |                                                     |
| 0x338b34  | mov r0, sb                  | r0 = &camera->floorNorm                             |
| 0x338b38  | vcvt.f32.s32 s0, s0         | s0 = (f32)OREG(9)                                   |
| 0x338b3c  | bl 0x367e88                 | s0 = Camera_CalcSlopeYAdj(...)                      |
| 0x338b40  | vmov.f32 s1, s17            | s1 = playerHeight                                   |
| 0x338b44  | bl 0x355804                 | s0 = OLib_ClampMaxDist(slopeAdj, playerHeight)      |
| 0x338b48  | vldr s1, [sp, #0x14]        | s1 = posOffsetTarget.y                              |
| 0x338b4c  | vsub.f32 s0, s1, s0         | s0 = posOffsetTarget.y - clampedSlopeAdj             |
| 0x338b50  | vstr s0, [sp, #0x14]        | posOffsetTarget.y -= clampedSlopeAdj                 |
| 0x338b54  | vldr s1, [r4, #0x114]       | s1 = camera->yOffsetUpdateRate                      |
| 0x338b58  | vldr s0, [r4, #0x118]       | s0 = camera->xzOffsetUpdateRate                     |
| 0x338b5c  | vldr s2, [pc, #0x90]        | s2 = 0.1f  (const at 0x338bec+? — LERP rate)       |
| 0x338b60  | add r1, r4, #0x12c          | r1 = &camera->posOffset                             |
| 0x338b64  | add r0, sp, #0x10           | r0 = &posOffsetTarget                                |
| 0x338b68  | bl 0x367df4                 | Camera_LERPCeilVec3f(&target, &posOffset, yUR, xzUR, 0.1) |
| 0x338b6c  | ldr r0, [r4, #0xd8]         | r0 = camera->player                                 |
| 0x338b70  | ldr r1, [pc, #0x80]         | r1 = 0x000029b8 (Player struct offset, not ptr)     |
| 0x338b74  | ldr r1, [r1, r0]            | r1 = *(u32*)(camera->player + 0x29b8)               |
| 0x338b78  | tst r1, #0x100              | test the Grezzo state bit                            |
| 0x338b7c  | beq 0x338b90                | if clear → extraAtY stays 0.0f                       |
| 0x338b80  | add r0, r0, #0x1400         | r0 = camera->player + 0x1400                        |
| 0x338b84  | vldr s1, [pc, #0x70]        | s1 = -0.01f  (const at 0x338bfc)                    |
| 0x338b88  | vldr s0, [r0, #0x360]       | s0 = *(f32*)(camera->player + 0x1760)               |
| 0x338b8c  | vmul.f32 s16, s0, s1        | **s16 = extraAtY**                                  |
| 0x338b90  | vldr s0, [r5]               | s0 = playerPosRot->pos.x                            |
| 0x338b94  | vldr s1, [r4, #0x12c]       | s1 = camera->posOffset.x                            |
| 0x338b98  | vldr s2, [pc, #0x60]        | s2 = 0.2f (LERP rate for at)                        |
| 0x338b9c  | mov r1, r6                  | r1 = &camera->at                                    |
| 0x338ba0  | vadd.f32 s0, s0, s1         | s0 = posX + posOffset.x                              |
| 0x338ba4  | add r0, sp, #4              | r0 = &atTarget                                       |
| 0x338ba8  | vstr s0, [sp, #4]           | atTarget.x = posX + posOffset.x                      |
| 0x338bac  | vldr s0, [r5, #4]           | s0 = playerPosRot->pos.y                             |
| 0x338bb0  | vldr s1, [r4, #0x130]       | s1 = camera->posOffset.y                             |
| 0x338bb4  | vadd.f32 s0, s0, s1         |                                                      |
| 0x338bb8  | vadd.f32 s0, s0, s16        | **+ extraAtY**                                       |
| 0x338bbc  | vstr s0, [sp, #8]           | atTarget.y = posY + posOffset.y + extraAtY           |
| 0x338bc0  | vldr s0, [r5, #8]           | s0 = playerPosRot->pos.z                             |
| 0x338bc4  | vldr s1, [r4, #0x134]       | s1 = camera->posOffset.z                             |
| 0x338bc8  | vadd.f32 s0, s0, s1         |                                                      |
| 0x338bcc  | vstr s0, [sp, #0xc]         | atTarget.z = posZ + posOffset.z                      |
| 0x338bd0  | vldr s0, [r4, #0x148]       | s0 = camera->atLERPStepScale                         |
| 0x338bd4  | vmov.f32 s1, s0             | s1 = atLERPStepScale                                 |
| 0x338bd8  | bl 0x367df4                 | Camera_LERPCeilVec3f(&at, &atTarget, s, s, 0.2f)     |
| 0x338bdc  | add sp, sp, #0x1c           | epilogue                                             |
| 0x338be0  | mov r0, #1                  | return 1                                             |
| 0x338be4  | vpop {d8, d9}               |                                                      |
| 0x338be8  | pop {r4-r8, sb, pc}         |                                                      |

Constant pool (all pc-relative from the instructions above):

| VA         | Bytes (LE)   | Value                                             |
|------------|--------------|---------------------------------------------------|
| 0x338bec   | 00 00 00 00  | 0.0f  (default s16 = default posOffsetTarget.x/z) |
| 0x338bfc   | 0a d7 23 bc  | -0.01f (extraAtY scale factor)                    |
| 0x338c00   | cd cc 4c 3e  | 0.2f (at LERPCeilVec3f rate — matches SoH's 0.2f) |
| 0x338bf8   | b8 29 00 00  | 0x000029b8 (Player struct offset, indexed load)   |

## Callee identifications

| VA          | Purpose                            | N64 twin                                    |
|-------------|------------------------------------|---------------------------------------------|
| 0x00367ef0  | Player_GetHeight                   | z_actor.c:1402                              |
| 0x00367e88  | Camera_CalcSlopeYAdj-analog        | z_camera.c func_800420C0 / equivalent       |
| 0x00355804  | OLib_ClampMaxDist-analog           | OLib_ClampMaxDist                           |
| 0x00367df4  | Camera_LERPCeilVec3f-analog        | Camera_LERPCeilVec3f                        |

## Δ-A activation — when does the extra Y bias fire?

Empirically at Kakariko-idle (2026-07-03 sweep, adult SoH vs child
OoT3D savestate parity break notwithstanding):

    state[+0x29B8] = 0x04000000  →  bit 0x100 CLEAR  →  extraAtY = 0

So the block is INERT under normal standing/walking. The state word
at Player+0x29B8 is a Grezzo-added Player-substate bitfield; only
some subset of player states set bit 0x100. Candidate states to
probe next (hypothesis, unverified):

- Climbing a ledge / wall (Link's effective look-at is pulled down
  toward the surface being climbed)
- Pulling / grabbing (block/bomb-flower carry)
- Riding Epona (already handled by SoH's `+32.0f on horse` — likely
  independent)
- Interacting with a tall object (raise camera slightly)

The port unit for this function is:
`Shipwright/soh/src/zelda3d/behaviors/camera/at_default.cpp` (a new
shared module), fed via a thin seam at every SoH `Camera_CalcAtDefault`
call site. Behavior gate on `player+0x29B8 & 0x100`; when clear, the
result must be byte-identical to SoH's `Camera_CalcAtDefault`.

## Companion: Player_GetHeight (FUN_00367ef0)

Hand-derived alongside (also small — 12 ARM instructions):

```c
f32 Player_GetHeight(Player* player) {
    // Player state test at player+0x1710
    f32 base   = (*(u32*)((u8*)player + 0x1710) & 0x800000) ? 32.0f : 0.0f;
    // Age flag at *(0x0058795C) — gSaveContext.linkAge or equivalent
    f32 height = (*(u32*)0x0058795C != 0) ? 44.0f : 68.0f;
    return base + height;
}
```

Identical shape to SoH's `Player_GetHeight` (`z_actor.c:1402`) — same
44/68 adult/child split, same +32 horse offset. Confirmed empirically:
Kakariko sweep at linkAge=1 returns 44.0f exactly. See
gameplay_firstdiv.md "ROOT CAUSE" section for the discovery.

## Cross-refs

- `docs/gameplay_firstdiv.md` — the Δ-A investigation + falsification
  chain that produced this hand-decomp
- `docs/actor_layout.md` — Player struct offsets (Grezzo-side is
  larger than N64's 0x14F4)
- SoH: `Shipwright/soh/src/code/z_camera.c:906` (N64 twin)
- SoH: `Shipwright/soh/src/code/z_actor.c:1402` (Player_GetHeight twin)
