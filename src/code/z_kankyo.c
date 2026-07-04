/**
 * OoT3D z_kankyo — environment/lighting subsystem. Landing shape
 * follows z_scene.c: per-fn VA header + Ghidra decomp cross-ref +
 * N64 twin naming.
 *
 * See docs/env_context_layout.md and docs/scene_command_handler.md
 * for the derivation of the envCtx layout used here (proven via
 * two independent RE anchors, layout LOCKED IN).
 *
 * Environment_Update body itself is not yet ported — 4828 bytes with
 * complex conditional branching. The Ghidra decomp lives at
 * build/decomp/0045dd30.c and per-store data flow was extracted via
 * tools/ghidra_scripts/DataFlowStores.py (soh3d
 * debug_journal/2026-07-04-dataflow-breakthrough.md pins the
 * palette-lookup ARM pattern + the env[0x21] / env[0x22] time-cursor
 * mechanism).
 */

#include "z_types.h"
#include "z_kankyo.h"

/* Env_Init init constants read from .data / .rodata pool.
 * VAs and values RESOLVED via ReadWord.py:
 *
 *   0x00450390 = 0x00588e58   ptr to a global env-parent state block
 *   0x00450394 = 0x00007AAC   u16 gray threshold (used in a compare
 *                              at Env_Init line 131 for setting a
 *                              boolean at global+0xB0-adjacent)
 *   0x00450398 = 0x004590f8   fn pointer installed at *(play + 0x10)
 *   0x0045039C = 0x00000000   0.0f — bulk-init value for env floats
 *   0x004503A0 = 0x3F800000   1.0f — env->lerpWeight init value
 *   0x004503A4 = 0x005a2c60   ptr (used in FUN_0034faa8 struct init)
 *   0x004503A8 = 0x00531eb4   ptr (another struct init arg)
 *   0x004503AC = 0x00588958   ptr
 *   0x004503B0 = -120.0f      light-clamp low
 *   0x004503B4 =  120.0f      light-clamp high
 *   0x004503B8 =   20.0f      some scale (Env_Init line 208 uses it)
 */

/* Helpers called by Env_Init that aren't ported here — semantics
 * summarized from build/decomp/00xxxxxx.c inspection.
 *   FUN_002de738(dst, a,b,c,d,e,f) : 7-byte struct setter, writes
 *                                     dst[0]=1, dst[4..9]=a..f.
 *   FUN_0034faa8(play, subctx, dst): downstream init helper — not
 *                                     yet inspected.
 *   FUN_002cfca0, FUN_00338f60      : sin / cos (already RE'd via
 *                                     z_actor.c cross-reference).
 */
extern void FUN_002de738(u8* dst, u8 a, u8 b, u8 c, u8 d, u8 e, u8 f);
extern void FUN_0034faa8(void* play, void* subctx, void* dst);
extern f32  Math_CosS(s16 binang);       /* FUN_002cfca0 */
extern f32  Math_SinS(s16 binang);       /* FUN_00338f60 */

/* -------------------------------------------------------------------
 * Environment_Init      VA 0x0044ff18   size 2704B
 *
 * N64 twin: Environment_Init in zeldaret/oot z_kankyo.c (which init's
 * envCtx to constants, sets numLightSettings=0, lightSettingsList=NULL,
 * and installs default sun angle / fog values).
 *
 * Call site: FUN_004490d8 (state-1 scene init) line 43:
 *   FUN_0044ff18(play, play + OOT3D_PLAY_ENVCTX_OFFSET, 0);
 *
 * The full 2704B body is longer than what we can meaningfully hand-
 * port in one pass — the tail invokes downstream subsystem init
 * (skybox, letterbox, wind) that isn't in the envCtx footprint.
 * What matters for the port's parity target is the ENVCTX FIELD
 * INITS proper, which are ported here byte-for-byte against the
 * Ghidra decomp at build/decomp/0044ff18.c lines 143-180.
 *
 * The prologue (Ghidra lines 128-142) touches global env-parent
 * state (via ptr at 0x00588e58) + calls the 7-byte struct setter
 * FUN_002de738 twice for `env+0x2C` and `env+0x44` — those are
 * two 24-byte sub-blocks (probably per-lightSlot lerp caches).
 * The tail (Ghidra lines 191-...) sets up float defaults for
 * skybox/wind that don't overlap envCtx.
 *
 * Every write below has a decomp line-number citation.
 * ------------------------------------------------------------------ */
void Environment_Init(void* play, EnvironmentContext_3DS* env, u32 flags)
{
    (void)play; (void)flags;
    u8*  envBytes = (u8*)env;

    /* --- 24-byte sub-blocks at env+0x2C and env+0x44 (decomp lines
     *     139, 141) — init'd via the 7-byte struct setter to a
     *     0x50-marker pattern, then handed to FUN_0034faa8 for
     *     downstream slot-shape init. Not fully ported until we
     *     inspect FUN_0034faa8's body. */
    FUN_002de738(envBytes + 0x2C, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50);
    FUN_0034faa8(play, ((u8*)play) + 0x29c, envBytes + 0x2C);
    FUN_002de738(envBytes + 0x44, 0x50, 0x50, 0x50, 0x50, 0x50, 0x50);
    FUN_0034faa8(play, ((u8*)play) + 0x29c, envBytes + 0x44);

    /* --- envCtx byte fields --- decomp lines 143-180 --- */
    env->unk_1A          = 0;               /* line 143 */
    env->unk_1C          = 0;               /* line 144 (u16) */
    env->unk_23          = 0;               /* line 145 */
    env->unk_24          = 0;               /* line 146 (u16) */
    env->unk_5C          = 0;               /* line 147 */
    env->unk_10          = 99;              /* line 148 */
    env->unk_11          = 99;              /* line 150 */

    /* --- envCtx float triple at env+0x60/64/68 --- decomp lines
     *     149, 151-153. uVar15 = uRam0045039c = 0.0f. */
    {
        f32 defaultF = 0.0f;                /* uRam0045039c */
        env->unk_60 = defaultF;             /* line 151 */
        env->unk_64 = defaultF;             /* line 153 (offset "100" = 0x64) */
        env->unk_68 = defaultF;             /* line 152 */
    }

    /* --- The time-cursor pair. Both init to 0. This is the state
     *     that Env_Update reads each frame at PC 0x0045e6ac
     *     (env[0x21]) and PC 0x0045e604 (env[0x22]) to index a
     *     54-byte time-band table. Since Env_Init sets both to 0
     *     AND no per-frame code writes env[0x22] anywhere the
     *     memlog probes have surfaced, the title lighting looks
     *     STATIC — always using the first time-band entry. See
     *     debug_journal/2026-07-04-daytime-not-driver.md.
     */
    env->timeCursorA     = 0;               /* line 154 */
    env->timeCursorB     = 0;               /* line 155 */

    /* --- The famous unk_BF / unk_BD pair. Both init 0 = "no
     *     lightSetting selected yet, fall through to whatever
     *     Env_Update's per-frame math computes." */
    env->currentLightSetting = 0;           /* line 157 */
    env->prevLightSetting    = 0;           /* line 158 */

    /* --- The lerp weight at env+0xC8 gets init'd to 1.0f. That's
     *     the "lerp complete" state that gates Env_Update's shadow
     *     catch-up at decomp lines 140-143. */
    {
        union { u32 u; f32 f; } cvt;
        cvt.u = 0x3f800000u;                /* uRam004503a0 = 1.0f */
        env->lerpWeight = cvt.f;            /* line 159 */
    }

    /* --- Mode/flag bytes at env+0xCC..0xDD, all zero. Bulk init
     *     — decomp emits them as individual STRBs, we mirror. */
    env->unk_CC          = 0;               /* line 160 */
    envBytes[0xCD]       = 0;               /* line 161 */
    envBytes[0xCE]       = 0;               /* line 162 */
    envBytes[0xCF]       = 0;               /* line 163 */
    envBytes[0xD0]       = 0;               /* line 164 */
    envBytes[0xD1]       = 0;               /* line 165 */
    envBytes[0xD2]       = 0;               /* line 166 */
    envBytes[0xD3]       = 0;               /* line 167 */
    envBytes[0xD4]       = 0;               /* line 168 */
    envBytes[0xD5]       = 0;               /* line 169 */
    envBytes[0xD9]       = 0;               /* line 170 */
    envBytes[0xDA]       = 0;               /* line 171 */
    envBytes[0xDB]       = 0;               /* line 172 */
    envBytes[0xDC]       = 0;               /* line 173 */
    envBytes[0xDD]       = 0;               /* line 174 */
    env->unk_1B          = 0;               /* line 175 */
    envBytes[0xD6]       = 0;               /* line 176 */
    envBytes[0xD7]       = 0;               /* line 178 */
    envBytes[0xD8]       = 0;               /* line 179 */
    envBytes[0x268]      = 0;               /* line 180 (u32=0) */

    /* --- Remaining Env_Init body writes to fields outside envCtx
     *     (skybox / wind / letterbox defaults + downstream helper
     *     calls). NOT PORTED. See build/decomp/0044ff18.c lines
     *     181-end for the full text. Landing them requires naming
     *     the destination subsystems' structs first.
     */
}

/* -------------------------------------------------------------------
 * Notes for future ports (Environment_Update)
 * -------------------------------------------------------------------
 *
 * FUN_0045dd30 (Environment_Update, 4828 bytes) has been partially
 * RE'd but not yet ported here. Known confirmed facts:
 *
 *   - Sole caller: FUN_002e2e60 (Actor_UpdateAll) at PC 0x002e43cc
 *     with signature:
 *       FUN_0045dd30(param_1, param_1+0xc64, param_1+0x29c,
 *                    param_1+0xa28, param_1+0xc63);
 *
 *   - Prologue at PC 0x0045dd30-0x0045dd54:
 *       R7 (initial) = param_1 + 0x3000
 *       R5           = *(R7 + 0x230) = *(param_1 + 0x3230)
 *                    = env->lightSettingsList (via env+0xA0
 *                      pinned in this header).
 *       R9           = param_5 (loaded from stack) = param_1 + 0xc63.
 *
 *   - The per-frame slot-committing store is at PC 0x0045efcc:
 *       strb r0, [r4, #0x4a]
 *     where R4 = param_2 = env base (VA 0x087219D0 on Az's live
 *     layout, matches env+0xA5 = play+0x31DA).
 *
 *   - The palette lookup is at PC 0x0045e790-0x0045e79c:
 *       rsb r3, r3, r3, lsl #3     ; r3 = 7 * slot
 *       add r3, r5, r3, lsl #2     ; r3 = paletteBase + 28*slot
 *     Stride 0x1C confirmed. Slot idx from an intermediate 54-byte
 *     time-band table entry's byte @ +5. Table base is R9 + 2*R7,
 *     but R7 is REASSIGNED before this site (via `ldr r7, [pc,
 *     #imm]` at PC 0x0045ddac which loads pool = 0x00588e58 = a
 *     global env-parent state block), so the effective table base
 *     is 0x00588e58 + 2 = 0x00588E5A ... TBD.
 *
 * The DataFlowStores.py script surfaces every LDR/STR site with
 * base-reg provenance in one pass; run it with OOT3D_DFS_FN=0x0045dd30
 * for the full 267-op table.
 */
