/*
 * OoT3D z_scene — ZSI scene-command dispatcher + individual command
 * bodies. The 3DS engine kept the N64 8-byte-per-command format but
 * enlarged and renumbered a few command types. See
 * docs/scene_command_handler.md for the full 26-entry dispatch table.
 *
 * All command handlers share the signature:
 *
 *   int Scene_Cmd*(int segmentBase, PlayState* play, SceneCmdEntry* cmd);
 *
 * segmentBase is the RAM base the scene payload was loaded to; cmd
 * fields at +4 that carry a "segment address" get resolved to an
 * absolute VA via `segmentBase + segAddr`.
 */
#ifndef OOT3D_Z_SCENE_H
#define OOT3D_Z_SCENE_H

#include "z_types.h"

/* Each entry is 8 bytes; layout is per-command-type. First byte is
 * the command id, last 4 bytes are usually a segment offset. Rest
 * varies. See individual Scene_Cmd* handlers. */
typedef struct SceneCmdEntry {
    u8   cmd;           /* +0x00 command id (0x00..0x19) */
    u8   data1;         /* +0x01 command-specific byte */
    u8   data2;         /* +0x02 command-specific byte */
    u8   data3;         /* +0x03 command-specific byte */
    u32  segAddr;       /* +0x04 usually a scene-segment offset */
} SceneCmdEntry;
_Static_assert(sizeof(SceneCmdEntry) == 8, "SceneCmdEntry stride");

/* 3DS ZSI command ids. Matches N64 OoT ordering; 0x14 is END marker. */
enum {
    SCENE_CMD_SPAWN_LIST         = 0x00,
    SCENE_CMD_ACTOR_LIST         = 0x01,
    SCENE_CMD_CAM_LIST           = 0x02,   /* unused N64 slot */
    SCENE_CMD_COLLISION_HEADER   = 0x03,
    SCENE_CMD_ROOM_LIST          = 0x04,
    SCENE_CMD_WIND_SETTINGS      = 0x05,
    SCENE_CMD_ENTRANCE_LIST      = 0x06,
    SCENE_CMD_SPECIAL_FILES      = 0x07,
    SCENE_CMD_ROOM_BEHAVIOR      = 0x08,
    /* 0x09 unused */
    SCENE_CMD_MESH               = 0x0A,
    SCENE_CMD_OBJECT_LIST        = 0x0B,
    SCENE_CMD_LIGHT_LIST         = 0x0C,
    SCENE_CMD_PATH_LIST          = 0x0D,
    SCENE_CMD_TRANSITION_ACTORS  = 0x0E,
    SCENE_CMD_LIGHT_SETTINGS_LIST = 0x0F, /* THE palette loader — see
                                             src/code/z_scene.c */
    SCENE_CMD_TIME_SETTINGS      = 0x10,
    SCENE_CMD_SKYBOX_SETTINGS    = 0x11,
    SCENE_CMD_SKYBOX_DISABLES    = 0x12,
    SCENE_CMD_EXIT_LIST          = 0x13,
    SCENE_CMD_END                = 0x14,   /* terminator */
    SCENE_CMD_SOUND_SETTINGS     = 0x15,
    SCENE_CMD_ECHO_SETTINGS      = 0x16,
    SCENE_CMD_CUTSCENE_DATA      = 0x17,
    SCENE_CMD_ALT_HEADERS        = 0x18,
    SCENE_CMD_MISC_SETTINGS      = 0x19,
    SCENE_CMD_MAX                = 0x1A
};

/* Individual handlers we've decompiled. Full list in the dispatch
 * table at .data 0x0053cc84 (see docs/scene_command_handler.md). */
extern u32 Scene_CmdLightSettingsList(int segBase, void* play, SceneCmdEntry* cmd);
extern u32 Scene_CmdTimeSettings     (int segBase, void* play, SceneCmdEntry* cmd);
extern u32 Scene_CmdCutsceneData     (int segBase, void* play, SceneCmdEntry* cmd);
extern u32 Scene_CmdActorList        (int segBase, void* play, SceneCmdEntry* cmd);
extern u32 Scene_CmdRoomList         (int segBase, void* play, SceneCmdEntry* cmd);
extern u32 Scene_CmdEntranceList     (int segBase, void* play, SceneCmdEntry* cmd);

/* The scene command dispatcher itself (FUN_002e4de4). Reads a
 * command list until it hits SCENE_CMD_END, dispatching each via
 * a static 26-entry function-pointer table. */
extern u32 Scene_ExecuteCommands(int segBase, void* play, u8* cmdList);

#endif /* OOT3D_Z_SCENE_H */
