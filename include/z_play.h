/*
 * OoT3D z_play — PlayState layout anchors.
 *
 * The 3DS PlayState is a large struct we've been pinning field-by-field
 * via Ghidra decomp of specific fns that touch known offsets. Each
 * offset carries a citation to the decomp that anchors it.
 */
#ifndef OOT3D_Z_PLAY_H
#define OOT3D_Z_PLAY_H

#include "z_types.h"

/* --- Anchored fields (verified via decomp of the fn that reads/writes) ---
 *
 *  play + 0x0104  sceneNum (u16)                — read in Env_Init line 131,
 *                                                Scene_CmdSpawnList line 12.
 *  play + 0x0110  segment/RAM base for scene    — used by Scene_ExecuteCommands
 *                                                and passed as segBase param to
 *                                                all Scene_Cmd* handlers.
 *  play + 0x229C  cutscene script ptr           — Scene_CmdCutsceneData
 *                                                (FUN_0037573c).
 *  play + 0x22A0  cutscene flag byte            — FUN_0037571c getter.
 *  play + 0x22AC  cutscene state u32            — reset to 0 by FUN_0037573c.
 *  play + 0x3190  envCtx (EnvironmentContext_3DS) — Env_Init caller passes
 *                                                (see z_kankyo.h).
 *  play + 0x5C00  spawn count (u8)              — Scene_CmdSpawnList line 17.
 *  play + 0x5C02  current spawn entrance byte   — Scene_CmdSpawnList line 13.
 *  play + 0x5C03  numActors (u8)                — Scene_CmdActorList line 4.
 *  play + 0x5C04  numRooms (u8)                 — Scene_CmdRoomList line 4.
 *  play + 0x5C08  roomList ptr (u32 VA)         — Scene_CmdRoomList line 5.
 *  play + 0x5C0C  spawnList ptr (u32 VA)        — Scene_CmdSpawnList line 15.
 *  play + 0x5C10  actorList ptr (u32 VA)        — Scene_CmdActorList line 5.
 *  play + 0x5C18  entranceList ptr (u32 VA)     — Scene_CmdEntranceList
 *                                                line 4 (and read by
 *                                                Scene_CmdSpawnList line 13).
 *  play + 0x5C2D  transitionTrigger (u8)        — memory-index note (needs
 *                                                per-fn decomp confirmation).
 *  play + 0x5C32  nextEntranceIndex (u16)       — memory-index note.
 *
 *  Actor_UpdateAll (FUN_002e2e60) references these fields with param_1
 *  = play, so param_1 for that fn IS play directly (contradicting an
 *  earlier speculation that Actor_UpdateAll takes play+0x252C — the
 *  ambiguity note in z_cutscene.h can now be resolved on the play
 *  side).
 */

#define OOT3D_PLAY_SCENE_NUM_OFFSET       0x0104   /* u16 */
#define OOT3D_PLAY_SEGMENT_BASE_OFFSET    0x0110   /* void* */
#define OOT3D_PLAY_CS_SCRIPT_PTR_OFFSET   0x229C   /* u32 VA (= z_cutscene.h) */
#define OOT3D_PLAY_CS_FLAG_OFFSET         0x22A0   /* u8 */
#define OOT3D_PLAY_CS_STATE_OFFSET_A      0x22AC   /* u32 */
#define OOT3D_PLAY_ENVCTX_OFFSET_ANCHOR   0x3190   /* = z_kankyo.h */
#define OOT3D_PLAY_SCENE_CTX_OFFSET       0x5C00   /* start of "scene ctx"
                                                     substruct */
#define OOT3D_PLAY_SPAWN_COUNT_OFFSET     0x5C00   /* u8 */
#define OOT3D_PLAY_SPAWN_INDEX_OFFSET     0x5C02   /* u8 */
#define OOT3D_PLAY_NUM_ACTORS_OFFSET      0x5C03   /* u8 */
#define OOT3D_PLAY_NUM_ROOMS_OFFSET       0x5C04   /* u8 */
#define OOT3D_PLAY_ROOM_LIST_OFFSET       0x5C08   /* u32 VA */
#define OOT3D_PLAY_SPAWN_LIST_OFFSET      0x5C0C   /* u32 VA */
#define OOT3D_PLAY_ACTOR_LIST_OFFSET      0x5C10   /* u32 VA */
#define OOT3D_PLAY_ENTRANCE_LIST_OFFSET   0x5C18   /* u32 VA */
#define OOT3D_PLAY_EXIT_LIST_OFFSET       0x5C1C   /* u32 VA (Scene_CmdExitList) */
#define OOT3D_PLAY_CAM_LIST_OFFSET        0x5C14   /* u32 VA (Scene_CmdCamList) */
#define OOT3D_PLAY_COLLISION_CTX_OFFSET   0x0A98   /* Scene_CmdCollisionHeader
                                                     calls FUN_001311d0 on this */
#define OOT3D_PLAY_LIGHT_CTX_OFFSET       0x0A70   /* Scene_CmdLightList passes
                                                     this to per-light init */
#define OOT3D_PLAY_PATH_LIST_OFFSET       0x5C20   /* u32 VA
                                                     (Scene_CmdPathList sets
                                                     this via iRam00298680) */
#define OOT3D_PLAY_TRANSITION_TRIG_OFFSET 0x5C2D   /* u8 */
#define OOT3D_PLAY_NEXT_ENTRANCE_OFFSET   0x5C32   /* u16 */

#endif /* OOT3D_Z_PLAY_H */
