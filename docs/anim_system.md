# OoT3D animation system (GREZZO C++) — RE journal

Ground truth for soh3d #87 (drive replacement anims to match what OoT3D actually plays). OoT3D
does NOT use the N64 `SkelAnime`; skeletal actors animate via GREZZO C++ classes (CSAB/CMB).
Reach a populated specimen with `tools/harness_ctl.py warp 0xEE` (Kokiri Forest, 8× En_Ko id=355).

## How to observe (must-read)
- **Distant actors are update-THROTTLED** — a far En_Ko's instance does NOT change frame-to-frame.
  TP Link adjacent first (write his position near the kid) or nothing animates. This is
  why an idle-region diff shows 0 changed words; tp-adjacent shows ~173.
- Enumerate: the harness `actors` command → En_Ko id=355, instSize **0xca8**, update fn 0x1b5f14.
- Saria's intro textbox (entrance 0xEE) PAUSES actor updates — dismiss it (`tap b`×3, `tap a`).

## En_Ko anime-controller struct (offsets into the Actor instance) — VERIFIED live 2026-06-21
Recovered by temporal diff of an animating En_Ko @0990fba0:
- **+0x1e0 f32 = curFrame** — animation playhead; advances by playSpeed each frame and WRAPS at
  animLength (observed 26→38→0.67→2.67, loop length ~40). This is THE field that says where in
  the anim the actor is.
- **+0x1e4 f32 = playSpeed** (1.0 observed).
- **+0x1ec f32 = endFrame** (39.0).
- **+0x1f0 f32 = animLength / frameCount** (40.0).
- +0x1d4 s16 = 2 (mode? — unconfirmed).
- **+0x1ac ptr → C++ object, vtable 0x004ec030** = the skeleton/model object (self-ref: object
  holds back-ptrs to the actor and to gPlayState; same vtable appears at the head of the +0x1b8
  target). Holds 0x09xxxxxx limb pointers.
- **+0x1cc ptr → C++ object, vtable 0x004ec018** = the animation player. Its body is an array of
  arena pointers (track/limb-channel objects: 0x0827e6b4, 0x0827ff28, …) then a count(1) + 1.0f.
- +0x1bc, +0x1c0 = CODE pointers (0x002335b4, 0x00217230) — per-instance callbacks (anim/draw?).

## En_Ko ground truth (soh3d #87) — VERIFIED live 2026-06-21, Kokiri Forest (scene 85)
Tool: **`tools/enko_anim.py`** (walks the actor list, prints each En_Ko's ENKO_TYPE +
anim-controller state). The 8 Kokiri carry 8 distinct ENKO_TYPEs and 8 distinct animLengths,
so **OoT3D plays a DIFFERENT animation per type** — the kids are NOT all on one shared idle.
soh3d collapsing them to a single idle CSAB (the #87 complaint) is therefore a soh3d bug.

| type | sex  | endF | animLen | (the kid) |
|------|------|------|---------|-----------|
| 0    | boy  | 18   | 19      | (-292,0,-430) |
| 1    | girl | 24   | 25      | (45,0,-272) |
| 2    | boy  | 19   | 20      | (-608,120,1021) |
| 3    | boy  | 13   | 14      | (-1471,-80,-294) |
| 4    | boy  | 18   | 19      | (669,0,521) |
| 5    | girl | 20   | 21      | (853,100,-311) |
| 6    | girl | 24   | 25      | (-678,1,-179) |
| 12=FADO | FADO | 39 | 40    | (-10,180,-22) (idle, next to spawn) |

ENKO_TYPE = `actor.params & 0xFF` (verified vs z_en_ko.c `#define ENKO_TYPE`).

**CRITICAL — live OoT3D selection DIVERGES from the N64 `sOsAnimeLookup` table.** N64
`sOsAnimeLookup[CHILD_5]` = `ENKO_ANIM_STANDUP_2` (gKokiriStandUpAnim, end=2.0, ANIMMODE_ONCE —
a ~2-frame one-shot). But the LIVE OoT3D CHILD_5 girl runs a **looping 21-frame** anim
(endF=20, playSpeed=1.0, curFrame wraps). So soh3d must source each kid's anim/CSAB from
**OoT3D ground truth (this oracle)**, not from the N64 sOsAnimeLookup table — they differ.
(GREZZO re-authored the Kokiri anim set / selection; the N64 decomp is not authoritative here.)

GOTCHA: curFrame only advances for kids near Link (others update-throttled) — animLength /
endFrame / type are valid regardless, so SELECTION is fully readable without tp-ing around.
Player-position writes get clobbered by the per-frame player update, so
framing a distant kid for a screenshot needs a frozen player or a free camera (not built yet).

## En_Ko CSAB binding chain — static RE (2026-06-23)

This section documents the complete static RE of how En_Ko selects its idle CSAB per
ENKO_TYPE. Three types are fully resolved; five remain ambiguous and require an oracle
session. See `docs/enko_csab_binding.md` for the full analysis.

### What the static binary encodes

`EnKo_Init` (`FUN_00165684` @ `0x00165684`, ARM32, size=680):
- Calls `ObjectCtx_GetSlotByObjectId` (`FUN_00363c10` @ `0x00363c10`) 4 times:
  - Slot 0: obj 0xC5 = 197 (shared Kokiri base model — zelda_km1/kw1 CMB/skel)
  - Slots 1..3: obj 0xFC/0xFD/0x13D per sex (0xFC=km1 boy, 0xFD=kw1 girl, 0x13D=fa Fado)
  - Stored in actor+0x22f / +0x22e / +0x22d / +0x22c (s8, object slot indices)
- 11-byte-stride type table @ `0x0052bc65`: b[0] selects body ZAR (0=km1,1=kw1,2=fa),
  b[1] and b[6] select secondary slots

Initial action handler (`FUN_003ac990` @ `0x003ac990`, ARM32, size=940):
- r5 = actor+0x200, so all [r5, #N] accesses are really actor+(N+0x200)
- First 4 calls check all object slots are loaded (`FUN_00373074`)
- **CSAB selection table** (`sEnKoCsabTable`) @ `0x0052bc24`, stride=5, one row per ENKO_TYPE:
  - Row index = ENKO_TYPE (0..12)
  - Columns: [idle, talk_a, talk_b, pose_c, pose_d] (state indices)
  - Values: 0..27 = runtime CSAB pool indices (populated from ZAR at load)
- **CSAB param table** @ `0x0052b8dc`, 28 entries × 24 bytes:
  - +0x00: CSAB ptr (zero in static image; filled by ZAR loader at runtime)
  - +0x04: playSpeed (f32, default 1.0; entry[20]=1.5)
  - +0x08: startFrame (f32, 0.0 = start from beginning)
  - +0x0c: loopMode (f32, -1.0 = loop)
  - +0x14: Y-offset (f32; entry[6]=-10.0, entry[7]=-10.0, rest=0.0)
- `FUN_003717ac` @ `0x003717ac`: applies CSAB to skeleton using the param table entry.
  Takes (skel_anim, csab_param_table, runtime_csab_index).

**The stride-5 table (`sEnKoCsabTable`) values:**
```
type  sex   [idle, talk_a, talk_b, pose_c, pose_d]
  0   boy    [8,  9,  9, 14, 11]
  1   girl   [2, 12,  2, 13, 13]
  2   boy   [11, 11, 11, 15,  9]
  3   boy    [0, 16, 16, 17, 18]
  4   boy   [19, 19, 20, 10,  9]
  5   girl   [3,  3,  3,  3,  3]
  6   girl   [4, 22, 22,  4, 23]
  7   boy   [24, 16, 16, 25, 16]
  8   boy   [26, 15, 15, 26, 15]
  9   girl   [3,  3,  3, 27, 27]
 10   girl   [2,  2,  2,  2, 22]
 11   boy   [14, 14, 14, 14, 14]
 12  FADO    [5,  5,  5,  5,  5]
```

The runtime CSAB pool is populated from the loaded ZAR at load time. The static binary
cannot tell us which ZAR-local CSAB index maps to which runtime pool index — that
mapping is done dynamically. However, the oracle `animLength` gives definitive answers
for types with unique frame counts:

### CSAB name resolution (oracle animLength + ZAR catalog)

| type | sex  | ZAR         | animLen | CSAB name            | status   |
|------|------|-------------|---------|----------------------|----------|
| 0    | boy  | zelda_km1   | 19      | km1_ishi_wait **OR** km1_kusakari | AMBIGUOUS |
| 1    | girl | zelda_kw1   | 25      | km1_udekumi_pose / kw1_out_in_pose1/3/4 / km1_out_in_pose2 | AMBIGUOUS |
| 2    | boy  | zelda_km1   | 20      | km1_asekaki_wait / km1_ijiiji / km1_osiete_wait / km1_utsumuki_pose | AMBIGUOUS |
| 3    | boy  | zelda_km1   | 14      | **km1_out_in_pose3** | RESOLVED |
| 4    | boy  | zelda_km1   | 19      | km1_ishi_wait **OR** km1_kusakari | AMBIGUOUS |
| 5    | girl | zelda_kw1   | 21      | **kw1_out_in_pose2** | RESOLVED |
| 6    | girl | zelda_kw1   | 25      | km1_udekumi_pose / kw1_out_in_pose1/3/4 / km1_out_in_pose2 | AMBIGUOUS |
| 12   | FADO | zelda_fa    | 40      | **fad_n_wait**       | RESOLVED |

Types 7-11 have no live oracle data from the Kokiri Forest scene (they appear in other
scenes). The stride-5 table above gives their CSAB runtime indices.

**To resolve ambiguous types:** Run the oracle, tp Link adjacent to each En_Ko type in
turn, dump the CSAB name via the binding chain `actor+0x1cc → vtable 0x4ebd98 → CSAB ptr`
(the transient ptrs are readable while the actor is animating), or use a different
discriminator (e.g., walk the ZAR name table after the ZAR is mapped into RAM).

## NEXT (refine the #87 deliverable)
- All 13 En_Ko CSAB types FULLY RESOLVED via pool-index technique (see enko_csab_binding.md,
  2026-06-23). The animLength-ambiguous cases (types 0/2/4/7/8 etc.) were resolved by reading
  the live pool-index from the global CSAB param table @ 0x0052b8dc.
- **Generic live CSAB-name readout BUILT** (2026-06-23): `tools/zar_ram_csab.py`
  (`LiveCsabResolver`) resolves any skeletal actor's current CSAB by reading the ZAR directory
  from RAM (ObjectCtx slot scan → ZAR base → file directory → CSAB duration match). Wired into
  `oracle_export.py` as Tier-2 (activate with `--live-zar`).
- Build a frozen-player / free-camera primitive so distant kids can be framed + screenshotted.

## (historical) original NEXT — vtable RE, partially superseded by the table above
1. **Identify which animation (CSAB) curFrame is playing.** The +0x1cc anim-player object (vtable
   0x4ec018) binds a CSAB. RE that class: dump the array entries, find the field that names the
   CSAB / animation id, and correlate to the CMB skeleton at +0x1ac. Goal: a stable "this actor is
   playing CSAB #N at frame +0x1e0" readout.
2. RE vtables **0x4ec018** (anim player) and **0x4ec030** (skeleton) — dump entries with r2
   (`r2 -a arm -b 32 -m 0x100000 build/code.bin`, the vtable is rodata at file_off vaddr-0x100000)
   and disassemble the methods to name fields.
3. Cross-check vs Link (id=0): Link's anim state is partly IN-instance (183 changed words idle) —
   different path; compare to generalize the controller layout.
4. Feed the curFrame/CSAB readout back to soh3d so replacement anims track the real OoT3D playhead.

## Link (PLAYER id 0) base-animation controller + MORPH — VERIFIED live 2026-06-21

Ground truth for soh3d #70/#83/#86 ("3d3 morph-blindness"). Unlike En_Ko (controller at
actor+0x1e0), Link's base-animation GREZZO controller is IN the PLAYER actor instance at:

| off | field | notes |
|-----|-------|-------|
| **+0x288** f32 | **morphWeight** | 1.0 on a transition, decrements by morphRate each frame to 0.0 |
| **+0x28c** f32 | **morphRate**   | = 1.0/morphFrames (0.1667 = 1/6 observed for walk-stop) |
| **+0x290** f32 | **curFrame**    | animation playhead; RESETS to 0.0 when a new anim starts |
| **+0x294** f32 | **playSpeed**   | (0.667 observed) |
| +0x29c/+0x2a0 s32 | anim selectors / bounds | jump on transition (28/29 -> 10/11 -> 88/89) |

Captured by tracing the morph fields per-frame across a transition.

**THE MORPH (what soh3d 3d3 is missing).** OoT3D Link cross-fades every animation transition
exactly like N64 SkelAnime: on a transition the OUTGOING pose is frozen, the incoming CSAB
starts at curFrame 0, and `morphWeight` ramps **linearly 1.0 -> 0.0** over `morphFrames`; each
rendered frame the pose = `lerp(incoming_CSAB_pose, frozen_outgoing_pose, morphWeight)`.

Reproduced live (walk -> stop), morphWeight per frame:
```
1.00  0.83  0.67  0.50  0.33  0.17  0.00     (exact k/6 steps => morphFrames = 6, LINEAR)
```
curFrame simultaneously: 72 (old anim) -> 0 -> 0.7 -> 1.3 -> 2.0 ... (new anim from frame 0).

CONSEQUENCE for soh3d: OoT3D's morph model is the SAME decrementing-weight linear lerp the SoH
engine already computes (N64 `SkelAnime.morphWeight`, set per `Animation_Change` morphFrames).
The 3d3 named-CSAB path is missing only the APPLICATION: it binds the incoming CSAB and renders
it at full weight on frame 0 (hard cut) instead of lerping from the frozen outgoing pose by the
live morphWeight. Fix = in the 3d3 draw path, when engine morphWeight > 0, blend per-bone LOCAL
rotations from the previous (outgoing) pose toward the incoming CSAB by morphWeight. No new
OoT3D data needed — the durations already live in the N64 anim calls; the oracle just confirms
the blend is faithful (linear, same model). Gate on `soh3d/tools/soh3d_anim_qa.py` before/after.
