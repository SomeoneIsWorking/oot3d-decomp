# OoT3D animation system (GREZZO C++) — RE journal

Ground truth for soh3d #87 (drive replacement anims to match what OoT3D actually plays). OoT3D
does NOT use the N64 `SkelAnime`; skeletal actors animate via GREZZO C++ classes (CSAB/CMB).
Reach a populated specimen with `tools/link_ctl.py warp 0xEE` (Kokiri Forest, 8× En_Ko id=355).

## How to observe (must-read)
- **Distant actors are update-THROTTLED** — a far En_Ko's instance does NOT change frame-to-frame.
  TP Link adjacent first (`link_ctl.py tp <x> <z> <y>` near the kid) or nothing animates. This is
  why an idle-region diff shows 0 changed words; tp-adjacent shows ~173.
- Enumerate: `tools/actors.py` → En_Ko id=355, instSize **0xca8**, update fn 0x1b5f14.
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
Player-position writes (`link_ctl.py tp`) get clobbered by the per-frame player update, so
framing a distant kid for a screenshot needs a frozen player or a free camera (not built yet).

## NEXT (refine the #87 deliverable)
- Name the exact CSAB per type. The anim binding chain is `actor+0x1cc (anim-player) -> +0x14
  (binding obj, vtable 0x4ebd98) -> +0x10 (per-instance CSAB descriptor) -> +0x00 (shared
  skeleton resource, e.g. 0x080a6e50)`. The LINEAR (0x14xxxxxx) ptrs inside the binding obj are
  TRANSIENT per-frame pose buffers (they shift every frame) — NOT a stable CSAB id; do not use
  them as a fingerprint. animLength+endFrame is the stable per-anim discriminator today.
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
