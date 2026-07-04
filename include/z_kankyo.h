/*
 * OoT3D z_kankyo — environment/lighting subsystem types.
 *
 * Layout PROVEN via cross-check between multiple RE anchor points:
 *
 *   (a) FUN_004490d8 (state-1 scene init) calls Env_Init as:
 *         FUN_0044ff18(play, play + 0x3190, 0)
 *       — so `env base = play + 0x3190`.
 *
 *   (b) FUN_00379188 (Scene ZSI cmd 0x0F = LightSettingsList handler)
 *       stores the pointer into `*(play + 0x3230)`, and reads
 *       `*(play + 0x322C) = cmd[1]` for the count.
 *         env + 0x9C = numLightSettings
 *         env + 0xA0 = lightSettingsList  ← ptr to Zelda3dLightSlot array
 *
 *   (c) FUN_0045dd30 (Environment_Update) palette lookup ARM at
 *       PC 0x0045e6c4-0x0045e6c8:
 *         rsb r1, r1, r1, lsl #3          ; r1 = 7 * slot
 *         add r1, r5, r1, lsl #2          ; r1 = paletteBase + 28*slot
 *       — confirms Zelda3dLightSlot stride = 0x1C (28 bytes),
 *       matches the corrected ZSI layout used by the SoH3D scene
 *       lighting generator.
 *
 * See docs/scene_command_handler.md and
 * docs/env_context_layout.md for the full derivation.
 */
#ifndef OOT3D_Z_KANKYO_H
#define OOT3D_Z_KANKYO_H

#include <stddef.h>
#include "z_types.h"

/* ---------- Zelda3dLightSlot (28-byte scene light preset) ----------
 *
 * Stride is proven at 0x1C via the palette-lookup ARM pattern above.
 * Field offsets within a slot are read at Env_Update PC 0x0045ea50..
 * 0x0045eaac in a series of `LDRB [?, #imm]` reads at
 *   +0x0A, +0x0D, +0x10, +0x13, +0x16, +0x19, +0x1A, +0x1B
 * matching the corrected 3DS ZSI slot layout:
 *   amb l0col l0dir l1col l1dir fogEnd drawDist ...
 * Exact field naming continues in the SoH3D scene lighting inc.
 */
typedef struct Zelda3dLightSlot {
    u8   amb[3];        /* +0x00  ambient color */
    u8   pad0;          /* +0x03 */
    u8   l0col[3];      /* +0x04  light 0 color */
    s8   l0dir[3];      /* +0x07  light 0 direction (signed byte octahedron) */
    u8   l1col[3];      /* +0x0A  light 1 color */
    s8   l1dir[3];      /* +0x0D  light 1 direction */
    u8   fog[3];        /* +0x10  fog color */
    u8   pad1;          /* +0x13 */
    u16  fogNear;       /* +0x14  fog near-plane */
    u16  fogFar;        /* +0x16  fog far-plane */
    u16  drawDist;      /* +0x18  draw distance */
    u8   pad2[2];       /* +0x1A..0x1B tail padding */
} Zelda3dLightSlot;                       /* size 0x1C */
_Static_assert(sizeof(Zelda3dLightSlot) == 0x1C, "Zelda3dLightSlot stride");

/* ---------- EnvironmentContext (Grezzo layout, base = play + 0x3190) ----------
 *
 * Field offsets pinned via Env_Init decomp (FUN_0044ff18) writes and
 * Env_Update accesses. Only fields with a resolved anchor point are
 * named; the rest are laid out as opaque `unk_*` at their measured
 * offset. Do not rename opaque fields without an independent RE anchor.
 */
typedef struct EnvironmentContext_3DS {
    u8   unk_00[0x02];                    /* +0x00 opaque */
    u16  timeMultiplier;                  /* +0x02 (WRITTEN by
                                             Scene_CmdTimeSettings from
                                             cmd[6], see FUN_00217a5c) */
    f32  sunDirX;                         /* +0x04 (WRITTEN by
                                             Scene_CmdTimeSettings from
                                             cos(angle) * scale) */
    f32  sunDirY;                         /* +0x08 same */
    f32  sunDirZ;                         /* +0x0C same */
    u8   unk_10;                          /* +0x10 (init 99 by Env_Init) */
    u8   unk_11;                          /* +0x11 (init 99 by Env_Init) */
    u8   unk_12[0x03];                    /* +0x12 opaque (init zeros) */
    u8   skybox1Disable;                  /* +0x15 (WRITTEN by
                                             Scene_CmdSkyboxDisables
                                             cmd 0x12 = FUN_00381d18) */
    u8   skybox2Disable;                  /* +0x16 same */
    u8   sunMoonDisable;                  /* +0x17 same */
    u8   skybox1Idx;                      /* +0x18 (WRITTEN by
                                             Scene_CmdSkyboxSettings
                                             cmd 0x11 = FUN_0038a164 —
                                             sets both +0x18 and +0x19 to
                                             cmd[5]) */
    u8   skybox2Idx;                      /* +0x19 same */
    u8   unk_1A;                          /* +0x1A (init 0) */
    u8   unk_1B;                          /* +0x1B (init 0) */
    u16  unk_1C;                          /* +0x1C (init 0) */
    u8   unk_1E[0x02];                    /* +0x1E opaque */
    u8   skyboxUnk20;                     /* +0x20 (WRITTEN by
                                             Scene_CmdSkyboxSettings
                                             cmd 0x11 from cmd[6]) */
    u8   timeCursorA;                     /* +0x21 time-index cursor;
                                             Env_Update reads it as the
                                             first index into a time-
                                             band table (init 0) */
    u8   timeCursorB;                     /* +0x22 next-cursor; Env_Update
                                             copies +0x22 -> +0x21 each
                                             frame (see PC 0x0045e1b0-b4).
                                             Init 0. */
    u8   unk_23;                          /* +0x23 (init 0) */
    u16  unk_24;                          /* +0x24 (init 0; a frame timer;
                                             read at PC 0x0045e170, stored
                                             back at PC 0x0045e19c) */
    u16  unk_26;                          /* +0x26 (read at PC 0x0045e16c) */
    u8   unk_28[0x04];                    /* +0x28 opaque */
    u8   unk_2C[0x18];                    /* +0x2C 24-byte block init'd
                                             via FUN_002de738(env+0x2C,
                                             0x50,0x50,0x50,0x50,0x50,0x50)
                                             then FUN_0034faa8 — a struct
                                             init pattern; see Env_Init
                                             lines 139-140. */
    u8   unk_44[0x18];                    /* +0x44 same shape as +0x2C */
    u8   unk_5C;                          /* +0x5C (init 0) */
    u8   unk_5D[0x03];                    /* +0x5D opaque */
    f32  unk_60;                          /* +0x60 (init uRam0045039c) */
    f32  unk_64;                          /* +0x64 (init uRam0045039c) */
    f32  unk_68;                          /* +0x68 (init uRam0045039c) */
    u8   unk_6C[0x14];                    /* +0x6C u16 array (init 0)
                                             read at Env_Init 0x6C..0x7E */
    u16  unk_80;                          /* +0x80 */
    u16  unk_82;                          /* +0x82 */
    f32  unk_84;                          /* +0x84 (init uRam0045039c) */
    f32  unk_88;                          /* +0x88 (init uRam0045039c) */
    f32  skyboxScale;                     /* +0x8C float (WRITTEN by
                                             Scene_CmdSkyboxSettings from
                                             cmd[7] normalized; init 0
                                             by Env_Init). */
    s16  windDirX;                        /* +0x90 (WRITTEN by
                                             Scene_CmdWindSettings cmd 0x05
                                             = (s8)cmd[4]). Env_Init sets
                                             it to 0x50 (which the
                                             WindSettings scene cmd
                                             overwrites). */
    s16  windDirY;                        /* +0x92 same, cmd[5] */
    s16  windDirZ;                        /* +0x94 same, cmd[6] */
    u16  unk_96;                          /* +0x96 opaque */
    f32  windStrength;                    /* +0x98 (WRITTEN by
                                             Scene_CmdWindSettings from
                                             cmd[7] normalized u8/255).
                                             SoH's z_kankyo.c has an
                                             equivalent envCtx.windSpeed. */
    u8   numLightSettings;                /* +0x9C (WRITTEN by
                                             Scene_CmdLightSettingsList
                                             = cmd[1]) */
    u8   unk_9D[0x03];                    /* +0x9D pad */
    u32  lightSettingsList;               /* +0xA0 3DS VA (guest 32-bit
                                             pointer stored inline; use
                                             OOT3D_LIGHT_SETTINGS_LIST_PTR
                                             below for host access).
                                             WRITTEN by
                                             Scene_CmdLightSettingsList
                                             = segBase + cmd[4:8]. */
    u8   unk_A4;                          /* +0xA4 */
    u8   currentLightSetting;             /* +0xA5 the byte Env_Update
                                             writes each frame at PC
                                             0x0045efcc via strb r0,
                                             [r4, #0x4a]; observed value
                                             is a computed byte, not
                                             necessarily the raw slot idx
                                             — see docs/
                                             env_context_layout.md */
    u8   prevLightSetting;                /* +0xA6 shadow */
    u8   unk_A7;                          /* +0xA7 (init 0, observed
                                             countdown-shape values at
                                             runtime; internal Env_Update
                                             state) */
    u8   unk_A8[0x20];                    /* +0xA8..0xC7 opaque */
    f32  lerpWeight;                      /* +0xC8 (init uRam004503a0;
                                             read at Env_Update line 140
                                             for the 0x3F800000 threshold
                                             gate) */
    u8   unk_CC;                          /* +0xCC mode/flag (init 0) */
    u8   unk_CD[0x11];                    /* +0xCD..0xDD zeros */
    u8   unk_DE[0x18a];                   /* +0xDE opaque (extends
                                             through +0x267 — see
                                             Env_Init writes at +0x268) */
    u32  unk_268;                         /* +0x268 (init 0) */
    /* --- struct continues past +0x268; total size unknown --- */
} EnvironmentContext_3DS;

_Static_assert(offsetof(EnvironmentContext_3DS, timeMultiplier)      == 0x02, "");
_Static_assert(offsetof(EnvironmentContext_3DS, timeCursorA)         == 0x21, "");
_Static_assert(offsetof(EnvironmentContext_3DS, timeCursorB)         == 0x22, "");
_Static_assert(offsetof(EnvironmentContext_3DS, numLightSettings)    == 0x9C, "");
_Static_assert(offsetof(EnvironmentContext_3DS, lightSettingsList)   == 0xA0, "");
_Static_assert(offsetof(EnvironmentContext_3DS, currentLightSetting) == 0xA5, "");
_Static_assert(offsetof(EnvironmentContext_3DS, prevLightSetting)    == 0xA6, "");
_Static_assert(offsetof(EnvironmentContext_3DS, lerpWeight)          == 0xC8, "");
_Static_assert(offsetof(EnvironmentContext_3DS, unk_CC)              == 0xCC, "");

/* envCtx sits inside the 3DS play struct at a fixed offset. Anchored
 * by two independent decomp cross-checks:
 *
 *   FUN_004490d8 line 43: `FUN_0044ff18(play, play + 0x3190, 0)`
 *   FUN_00379188 (Scene_CmdLightSettingsList):
 *     `play + 0x3230 = envCtx.lightSettingsList` and 0x3230 - 0x3190 = 0xA0
 *
 * So env base offset within play = 0x3190.
 */
#define OOT3D_PLAY_ENVCTX_OFFSET 0x3190
#define OOT3D_PLAY_ENVCTX_NUMLIGHTS_VA(play)  ((play) + 0x322C)
#define OOT3D_PLAY_ENVCTX_LIGHTLIST_VA(play)  ((play) + 0x3230)

/* Extract typed pointer from the u32 VA field (host-mapped via a
 * caller-supplied translator). */
#define OOT3D_LIGHT_SETTINGS_LIST_PTR(env, guest_to_host) \
    ((Zelda3dLightSlot*)(guest_to_host)((env)->lightSettingsList))

/* Environment_Init: initialize envCtx from defaults. Reversed as
 * FUN_0044ff18. Not yet a full port body; see src/code/z_kankyo.c
 * for the partial hand-decomp. */
extern void Environment_Init(void* play, EnvironmentContext_3DS* env, u32 flags);

#endif /* OOT3D_Z_KANKYO_H */
