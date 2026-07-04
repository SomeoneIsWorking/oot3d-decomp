/*
 * OoT3D z_cutscene — cutscene byte-stream + CutsceneContext layout.
 *
 * The 3DS engine attaches a per-scene cutscene byte-stream via
 * Scene_CmdCutsceneData (ZSI cmd 0x17 = FUN_0023449c), which stores
 * the pointer at play + 0x229C and resets a state u32 at play +
 * 0x22AC. Runtime cutscene playback code reads back through
 * FUN_00357ea0 (a simple getter).
 *
 * The cutscene BYTES themselves are not yet parsed — one more RE
 * arc (probably starting from the cutscene-runner fn that reads
 * play+0x229C each frame and iterates commands including
 * CS_CMD_SET_LIGHTING).
 */
#ifndef OOT3D_Z_CUTSCENE_H
#define OOT3D_Z_CUTSCENE_H

#include "z_types.h"

/* Two known play-relative offsets for the cutscene context. Anchored
 * by decomp of FUN_0037573c (Scene_CmdCutsceneData's helper) which
 * writes exactly these two fields at scene load. */
#define OOT3D_PLAY_CS_SCRIPT_OFFSET 0x229C  /* u32 = cs byte-stream ptr
                                               (= segBase + cmd->segAddr
                                               from Scene_CmdCutsceneData) */
#define OOT3D_PLAY_CS_STATE_OFFSET  0x22AC  /* u32 = cs runner state
                                               (reset to 0 at attach) */

/* Getter — matches FUN_00357ea0 which returns *(play + 0x229C). */
static inline u32 Cutscene_GetScriptPtr(void* play) {
    return *(u32*)((u8*)play + OOT3D_PLAY_CS_SCRIPT_OFFSET);
}

/* --- CS runner state machine --- pinned via Actor_UpdateAll decomp
 *     (build/decomp/002e2e60.c line 70+):
 *
 *     if (*(char *)((int)param_1 + 0x7f12) == '\0') { ... }
 *     switch (*(u8*)((int)param_1 + 0x7f12)) {
 *         case 1: ...
 *         case 2: goto LAB_002e3438;
 *         case 3: ...  // per-frame advance
 *     }
 *
 * NOTE: `param_1` here is Actor_UpdateAll's arg. Whether it's `play`
 * directly or `play + 0x252C` (an env-parent intermediate) is not
 * yet independently verified; see debug_journal/2026-07-04-envctx-
 * basepointer-shift.md for the ambiguity. If param_1 IS play, then
 * the CS state u8 is at play + 0x7F12 (well inside a typical Play
 * struct). If it's an inner struct, the offset is relative to that.
 *
 * The dispatch table for the CS state machine is at
 * `iRam002e31b8`-adjacent pool constants. NOT yet decompiled.
 */
#define OOT3D_ACTOR_UPDATEALL_CS_STATE_OFFSET 0x7F12  /* u8; UNVERIFIED
                                                         base (see above) */

#endif /* OOT3D_Z_CUTSCENE_H */
