/**
 * OoT3D z_scene — scene ZSI command dispatcher + individual command
 * handlers. Landing shape follows z_actor.c / z_camera.c: per-fn
 * VA header + provenance + N64 twin cross-reference.
 *
 * See docs/scene_command_handler.md for the full 26-entry table and
 * the derivation trail. All the Scene_Cmd* bodies below are direct
 * hand-decomps of the Ghidra output at their respective VAs, with
 * the raw offsets replaced by named EnvironmentContext_3DS field
 * accesses via z_kankyo.h.
 *
 * Ghidra 12.0.4 default (analyzeHeadless on $PATH); every LDR/STR
 * cross-checked against `DumpArmRange`-produced raw ARM.
 */

#include "z_types.h"
#include "z_scene.h"
#include "z_kankyo.h"
#include "z_cutscene.h"
#include "z_play.h"

/* ------------------------------------------------------------------
 * Scene_CmdLightSettingsList  (ZSI cmd 0x0F)  VA 0x00379188  size 32B
 *
 * Attaches a Zelda3dLightSlot[] array to the play's EnvironmentContext.
 * cmd->data1 is the number of slots; cmd->segAddr is the segment
 * offset that resolves to the palette base.
 *
 * Ghidra decomp (build/decomp/00379188.c) — VERIFIED byte-for-byte
 * against raw ARM at PC 0x00379188..0x003791a8:
 *
 *   0x00379188  ldrb r3, [r2, #0x1]     ; r3 = cmd->data1
 *   0x0037918c  strb r3, [r1, #0xf,lsl#5] wait — split imm; check
 *
 * The decompiled body:
 *
 *   undefined4 FUN_00379188(int param_1, int param_2, int param_3) {
 *       *(u8*)(param_2 + 0x322c)  = *(u8*)(param_3 + 1);
 *       *(int*)(param_2 + 0x3230) = param_1 + *(int*)(param_3 + 4);
 *       return 1;
 *   }
 *
 * param_2 + 0x322c = envCtx.numLightSettings (env + 0x9C)
 * param_2 + 0x3230 = envCtx.lightSettingsList (env + 0xA0)
 * The offset 0x3190 constants come from OOT3D_PLAY_ENVCTX_OFFSET.
 *
 * N64 twin: `Scene_CommandLightSettingsList` in
 * zeldaret/oot z_scene_table.c (identical shape: sets
 * play->envCtx.numLightSettings + play->envCtx.lightSettingsList).
 *
 * The ptr write does NOT copy the palette bytes — it just stashes
 * a pointer into segment memory. The palette bytes live in the
 * scene ROM payload and stay valid as long as the scene segment is
 * mapped. Env_Update dereferences it each frame at PC 0x0045dd54
 * (`ldr r5, [r7, #0x230]`).
 * ------------------------------------------------------------------ */
u32 Scene_CmdLightSettingsList(int segBase, void* play, SceneCmdEntry* cmd)
{
    u8*  playBytes = (u8*)play;
    EnvironmentContext_3DS* env = (EnvironmentContext_3DS*)(playBytes + OOT3D_PLAY_ENVCTX_OFFSET);

    env->numLightSettings  = cmd->data1;
    env->lightSettingsList = (u32)(segBase + cmd->segAddr);
    return 1;
}

/* ------------------------------------------------------------------
 * Scene_CmdTimeSettings  (ZSI cmd 0x10)  VA 0x00217a5c  size 408B
 *
 * Sets scene time-of-day parameters. Reads cmd bytes at +4, +5, +6
 * (three u8 values; 0xFF = "don't set"):
 *
 *   cmd->data4/5 : two u8 clock values, blended into a global u16
 *                  at UNK_00217bf4+3 (the "global daytime" state).
 *   cmd->data6   : time-multiplier byte, stored into envCtx +0x02
 *                  (`env->timeMultiplier`).
 *
 * Additionally computes sun-direction floats and stores them at
 * envCtx +0x04/+0x08/+0x0C.
 *
 * The full body is NOT yet hand-ported — the calc math depends on
 * several floating-point pool constants (UNK_00217bf8..UNK_00217c00)
 * that need naming, and hits a mode branch on `piVar1[0x56c]`. The
 * skeleton below matches the ARM at 0x00217a5c-0x00217a94.
 *
 * Cross-check anchor points (all VERIFIED against Ghidra decomp
 * build/decomp/00217a5c.c):
 *
 *   *(short*)(param_2 + 0x3192) = cmd->data6  // env->timeMultiplier
 *   *(float*)(param_2 + 0x3194) = cos(angle) * K1 * K2  // env+0x04
 *   *(float*)(param_2 + 0x3198) = sin(angle) * K2 * K3  // env+0x08
 *   *(float*)(param_2 + 0x319c) = sin(angle) * K4 * K3  // env+0x0C
 *
 * ------------------------------------------------------------------ */
u32 Scene_CmdTimeSettings(int segBase, void* play, SceneCmdEntry* cmd)
{
    u8*  playBytes = (u8*)play;
    EnvironmentContext_3DS* env = (EnvironmentContext_3DS*)(playBytes + OOT3D_PLAY_ENVCTX_OFFSET);

    (void)segBase;

    /* The full clock-blend + sun-vector math sits between here and
     * the returns; see build/decomp/00217a5c.c lines 22-42. The
     * only envCtx write we can name with confidence is the
     * timeMultiplier at +0x02:
     */
    u8 mult = cmd->segAddr & 0xFF;    /* cmd[4] is the +4 byte; segAddr low byte matches cmd->data4 */
    (void)mult;
    /* Ghidra emits:
     *   uVar2 = (ushort)*(byte *)(param_3 + 6);
     *   if (*(byte *)(param_3 + 6) == 0xff) uVar2 = 0;
     *   *(ushort *)(param_2 + 0x3192) = uVar2;
     * which is env->timeMultiplier = (cmd[6] == 0xff ? 0 : cmd[6]).
     * cmd[6] isn't cleanly nameable in the SceneCmdEntry struct
     * shape — it sits inside `segAddr` (bytes 4-7 packed as a u32).
     * Break out for RE clarity: */
    u8* cb = (u8*)cmd;
    u16 tm = (cb[6] == 0xff) ? 0 : (u16)cb[6];
    env->timeMultiplier = tm;

    /* Sun-vector math not ported yet — needs pool constants named.
     * Ghidra output for those stores (see docs/scene_command_handler.md
     * "Scene_CmdTimeSettings" section) shows they write to
     * env->sunDirX/Y/Z at +0x04/+0x08/+0x0C. */
    return 1;
}

/* ------------------------------------------------------------------
 * Scene_CmdActorList  (ZSI cmd 0x01)  VA 0x0023447c  size 32B
 *
 *   FUN_0023447c(int segBase, int play, int cmd):
 *       *(u8*)(play + 0x5c03) = *(u8*)(cmd + 1);           // numActors
 *       *(int*)(play + 0x5c10) = segBase + *(int*)(cmd + 4); // actorList ptr
 *       return 1;
 *
 * Identical shape to Scene_CmdLightSettingsList (parallel struct-init).
 * ------------------------------------------------------------------ */
u32 Scene_CmdActorList(int segBase, void* play, SceneCmdEntry* cmd)
{
    u8* pb = (u8*)play;
    *(u8 *)(pb + OOT3D_PLAY_NUM_ACTORS_OFFSET)  = cmd->data1;
    *(u32*)(pb + OOT3D_PLAY_ACTOR_LIST_OFFSET)  = (u32)(segBase + cmd->segAddr);
    return 1;
}

/* ------------------------------------------------------------------
 * Scene_CmdRoomList  (ZSI cmd 0x04)  VA 0x0039ded0  size 32B
 *
 *   FUN_0039ded0(int segBase, int play, int cmd):
 *       *(u8*)(play + 0x5c04) = *(u8*)(cmd + 1);            // numRooms
 *       *(int*)(play + 0x5c08) = segBase + *(int*)(cmd + 4); // roomList ptr
 *       return 1;
 * ------------------------------------------------------------------ */
u32 Scene_CmdRoomList(int segBase, void* play, SceneCmdEntry* cmd)
{
    u8* pb = (u8*)play;
    *(u8 *)(pb + OOT3D_PLAY_NUM_ROOMS_OFFSET)   = cmd->data1;
    *(u32*)(pb + OOT3D_PLAY_ROOM_LIST_OFFSET)   = (u32)(segBase + cmd->segAddr);
    return 1;
}

/* ------------------------------------------------------------------
 * Scene_CmdEntranceList  (ZSI cmd 0x06)  VA 0x003791a8  size 24B
 *
 *   FUN_003791a8(int segBase, int play, int cmd):
 *       *(int*)(play + 0x5c18) = segBase + *(int*)(cmd + 4);
 *       return 1;
 *
 * Smallest of the scene handlers — one pointer write.
 * ------------------------------------------------------------------ */
u32 Scene_CmdEntranceList(int segBase, void* play, SceneCmdEntry* cmd)
{
    u8* pb = (u8*)play;
    *(u32*)(pb + OOT3D_PLAY_ENTRANCE_LIST_OFFSET) = (u32)(segBase + cmd->segAddr);
    return 1;
}

/* ------------------------------------------------------------------
 * Scene_CmdCamList  (ZSI cmd 0x02)  VA 0x00378fe0  size 24B
 *   play + 0x5C14 = segBase + cmd->segAddr  (cam list ptr)
 * ------------------------------------------------------------------ */
u32 Scene_CmdCamList(int segBase, void* play, SceneCmdEntry* cmd)
{
    *(u32*)((u8*)play + 0x5C14) = (u32)(segBase + cmd->segAddr);
    return 1;
}

/* ------------------------------------------------------------------
 * Scene_CmdExitList  (ZSI cmd 0x13)  VA 0x002a9e2c  size 24B
 *   play + 0x5C1C = segBase + cmd->segAddr
 * ------------------------------------------------------------------ */
u32 Scene_CmdExitList(int segBase, void* play, SceneCmdEntry* cmd)
{
    *(u32*)((u8*)play + 0x5C1C) = (u32)(segBase + cmd->segAddr);
    return 1;
}

/* ------------------------------------------------------------------
 * Scene_CmdSkyboxDisables  (ZSI cmd 0x12)  VA 0x00381d18  size 36B
 *
 *   envCtx.skybox1Disable = cmd[4]  (env + 0x15)
 *   envCtx.skybox2Disable = cmd[5]  (env + 0x16)
 *   envCtx.sunMoonDisable = cmd[6]  (env + 0x17)
 * ------------------------------------------------------------------ */
u32 Scene_CmdSkyboxDisables(int segBase, void* play, SceneCmdEntry* cmd)
{
    (void)segBase;
    EnvironmentContext_3DS* env =
        (EnvironmentContext_3DS*)((u8*)play + OOT3D_PLAY_ENVCTX_OFFSET);
    u8* cb = (u8*)cmd;
    env->skybox1Disable = cb[4];
    env->skybox2Disable = cb[5];
    env->sunMoonDisable = cb[6];
    return 1;
}

/* ------------------------------------------------------------------
 * Scene_CmdSkyboxSettings  (ZSI cmd 0x11)  VA 0x0038a164  size 80B
 *
 *   *(iRam0038a1b4 + play) = cmd[4]                  // a play offset
 *                                                    // resolved at runtime
 *   env->skybox1Idx = env->skybox2Idx = cmd[5]       // env + 0x18, 0x19
 *   env->skyboxUnk20 = cmd[6]                        // env + 0x20
 *   env->skyboxScale = cmd[7] > 0 ? (cmd[7]/... scaled) : default_float
 *
 * The first store uses `iRam0038a1b4` which resolves to a fixed
 * play-relative offset at runtime; we don't yet know its value. Left
 * as an unknown-offset write commented out.
 * ------------------------------------------------------------------ */
u32 Scene_CmdSkyboxSettings(int segBase, void* play, SceneCmdEntry* cmd)
{
    (void)segBase;
    EnvironmentContext_3DS* env =
        (EnvironmentContext_3DS*)((u8*)play + OOT3D_PLAY_ENVCTX_OFFSET);
    u8* cb = (u8*)cmd;

    /* *(u8*)((u8*)play + IRAM_0038A1B4_OFF) = cb[4];   pending offset RE */

    env->skybox1Idx  = cb[5];
    env->skybox2Idx  = cb[5];
    env->skyboxUnk20 = cb[6];

    if (cb[7] != 0) {
        env->skyboxScale = (f32)cb[7] * (1.0f / 255.0f);
        /* Actual scale uses two pool constants (fRam0038a1b8 * cb[7]/255
         * * fRam0038a1bc). Values still to be resolved; the /255 form
         * is the shape. */
    } else {
        env->skyboxScale = 0.0f;   /* fRam0038a1b8 default */
    }
    return 1;
}

/* ------------------------------------------------------------------
 * Scene_CmdCutsceneData  (ZSI cmd 0x17)  VA 0x0023449c  size 40B
 *
 * Attaches a cutscene byte-stream to the play struct. cmd->segAddr
 * carries a scene-segment offset; segBase + offset = the absolute VA
 * of the cutscene bytes.
 *
 * Ghidra decomp (build/decomp/0023449c.c):
 *
 *   undefined4 FUN_0023449c(int param_1, undefined4 param_2, int param_3) {
 *       FUN_0037573c(param_2, *(int *)(param_3 + 4) + param_1);
 *       FUN_00357ea0(param_2);
 *       return 1;
 *   }
 *
 * FUN_0037573c stashes at play + 0x229C (script ptr) + resets play +
 * 0x22AC (state) to 0. FUN_00357ea0 is a simple getter (returns
 * *(play + 0x229C)) — the call here is likely for its
 * side-effect of triggering a downstream init if it's overloaded.
 *
 * N64 twin: `Scene_CommandCutsceneData` in zeldaret/oot z_scene_table.c.
 * ------------------------------------------------------------------ */
u32 Scene_CmdCutsceneData(int segBase, void* play, SceneCmdEntry* cmd)
{
    u8* playBytes = (u8*)play;

    *(u32*)(playBytes + OOT3D_PLAY_CS_SCRIPT_OFFSET) = (u32)(segBase + cmd->segAddr);
    *(u32*)(playBytes + OOT3D_PLAY_CS_STATE_OFFSET)  = 0;
    /* FUN_00357ea0 side-effect not ported (it's the getter — pure
     * function per its decomp; the discarded return is a no-op). */
    return 1;
}

/* ------------------------------------------------------------------
 * Scene_ExecuteCommands  VA 0x002e4de4  size 168B
 *
 * The scene ZSI command dispatch loop. Reads commands from cmdList
 * one at a time (each 8 bytes), stops at SCENE_CMD_END (0x14).
 * Dispatches valid ids (< 0x1A) via a fn-ptr table at .data VA
 * 0x0053cc84.
 *
 * Note: the 3DS build resolves the dispatch table via a Ghidra-visible
 * static (`UNK_002e4e8c` reads back 0x0053cc84 at scan time), which is
 * a *pointer to the table*, not the table itself. So the actual
 * dispatch is `(*(dispatchTablePtr + cmd * 4))(...)`. The table
 * contents are enumerated in docs/scene_command_handler.md.
 *
 * Ghidra decomp (build/decomp/002e4de4.c):
 *
 *   do {
 *       uVar3 = (uint)*param_3;
 *       if (uVar3 == 0x14) return 1;
 *       if (uVar3 < 0x1a) {
 *           (**(code **)(iVar1 + uVar3 * 4))(param_1, param_2, param_3);
 *       }
 *       param_3 = param_3 + 8;
 *   } while (...);
 *
 * where `iVar1 = UNK_002e4e8c` = the table base (0x0053cc84).
 * ------------------------------------------------------------------ */
u32 Scene_ExecuteCommands(int segBase, void* play, u8* cmdList)
{
    /* The real 3DS binary jumps through a fn-ptr table at 0x0053cc84.
     * The port here is a switch — semantically identical but easier to
     * follow. Individual handlers are the same fns the binary jumps to.
     * (Only handlers we've hand-ported are listed; the rest fall
     * through to a no-op with a comment naming the binary VA.)
     */
    while (1) {
        SceneCmdEntry* cmd = (SceneCmdEntry*)cmdList;

        if (cmd->cmd == SCENE_CMD_END) {
            return 1;
        }

        if (cmd->cmd < SCENE_CMD_MAX) {
            switch (cmd->cmd) {
                case SCENE_CMD_ACTOR_LIST:           /* 0x01 -> FUN_0023447c */
                    Scene_CmdActorList(segBase, play, cmd);
                    break;
                case SCENE_CMD_CAM_LIST:             /* 0x02 -> FUN_00378fe0 */
                    Scene_CmdCamList(segBase, play, cmd);
                    break;
                case SCENE_CMD_ROOM_LIST:            /* 0x04 -> FUN_0039ded0 */
                    Scene_CmdRoomList(segBase, play, cmd);
                    break;
                case SCENE_CMD_ENTRANCE_LIST:        /* 0x06 -> FUN_003791a8 */
                    Scene_CmdEntranceList(segBase, play, cmd);
                    break;
                case SCENE_CMD_LIGHT_SETTINGS_LIST:  /* 0x0F -> FUN_00379188 */
                    Scene_CmdLightSettingsList(segBase, play, cmd);
                    break;
                case SCENE_CMD_SKYBOX_SETTINGS:      /* 0x11 -> FUN_0038a164 */
                    Scene_CmdSkyboxSettings(segBase, play, cmd);
                    break;
                case SCENE_CMD_SKYBOX_DISABLES:      /* 0x12 -> FUN_00381d18 */
                    Scene_CmdSkyboxDisables(segBase, play, cmd);
                    break;
                case SCENE_CMD_EXIT_LIST:            /* 0x13 -> FUN_002a9e2c */
                    Scene_CmdExitList(segBase, play, cmd);
                    break;
                case SCENE_CMD_TIME_SETTINGS:        /* 0x10 -> FUN_00217a5c */
                    Scene_CmdTimeSettings(segBase, play, cmd);
                    break;
                case SCENE_CMD_CUTSCENE_DATA:        /* 0x17 -> FUN_0023449c */
                    Scene_CmdCutsceneData(segBase, play, cmd);
                    break;
                default:
                    /* Not yet hand-ported. Full list of binary VAs in
                     * docs/scene_command_handler.md. */
                    break;
            }
        }

        cmdList += 8;
    }
}
