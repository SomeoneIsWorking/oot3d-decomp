# OoT3D cutscene format + interpreter (title demo)

Derived 2026-07-07. Interpreter: `FUN_002c5ba0(play, csCtx, script)` —
verified live (harness watchpoint on csCtx endFrame store fired at
pc=0x002c5c20). Camera evaluator verified EXACT (|Δeye| = 0.00) against
Azahar's live title camera at 8 sampled frames.

## Script container (" BDQ")

```
+0x00 u32 magic " BDQ" (LE 0x51444220)
+0x04 u32 version = 3
+0x08 s32 cmd_count       // outer command loop bound
+0x0C s32 end_frame       // stored to csCtx+0x18
+0x10 ... commands
```

Commands: `u32 opcode` then opcode-specific payload; opcode -1 ends
early. Command IDs and entry shapes are N64 z_demo's (player cue = 0xA,
misc = 3, set-time uses 12B entries, destination = 0x3E8=1000, actor
cue channels = various IDs with 48B `CsCmdActorCue` entries), plus new
Grezzo commands — notably **0x97 = camera spline**.

### Opcode → stride (complete map from FUN_002c5ba0's switch)

- cam eye/at point lists (1, 2, 5, 6): 12B header + 16B atoms until
  atom byte0 == 0xFF (N64-style, present but unused by title cs)
- fixed 16B: 0x2D (transition/fade), 0x3E8 (destination)
- fixed 28B: 7, 8
- count + 12B entries: 9, 0x13 (seq/BGM), 0x8C (set-time: u16 ?, u16
  frame, u16 ?, u8 hour, u8 min)
- 0x96: 12 + 32×(u16 at +10); 0x97: 8 + (u32 at +4) camera blob
- everything else incl. default: `u32 count` + count×48B entries
  {u16 action, u16 startFrame, u16 endFrame, u16 rot[3], s32 start[3],
   s32 end[3], f32 tail[3]} — stored to per-channel csCtx slots
  (+0x40..+0x6C) when startFrame < curFrame <= endFrame

### csCtx (= play + 0x2298)

+0x04 script ptr · +0x08 state (2=running, 4=stopping) · +0x18 endFrame
· +0x20 curFrame (u16) · +0x24 subcam id · +0x28/2a/2c/2e cam-applied
frames · +0x34/35 cam-ready flags · +0x38/3c cam at/eye list ptrs ·
+0x40..+0x6C actor-cue channel current-entry ptrs · +0x84 camera segment
idx · +0x88 parsed camera ctx {payload*, flags} · +0x94 evaluated camera
pose (written by FUN_0033cb90, handed to camera via FUN_0033cb1c which
stores the POINTER at camera+0x16C and sets mode bit 4)

## Camera command 0x97 ("ccb" container)

Parsed by FUN_00494600 (validates version==3), segment count via
FUN_0032b69c, per-frame eval FUN_0033cb90, applied by FUN_0033cb1c.
All offsets relative to payload base:

```
+0x00 magic "ccb\0"    +0x04 u32 version = 3   +0x08 u32 total size
+0x10 u32 segment count      +0x14 u32 name-table offset ("C01_0_1500")
+0x18 u32 seg_off[count]
```

Segment ("caad"):

```
+0x08 s32 startFrame   +0x0C s32 endFrame      (absolute cs frames)
+0x18 f32 eye[3]       +0x24 f32 at[3]          (defaults; ×40 world)
+0x30 f32 roll (rad)   +0x3C f32 fov (rad)     +0x44 u32 misc
+0x48 u32 curve sub-blob offset (relative to segment)
```

Sub-blob: `+0x04 s32 trackCount`, `+0x08 u32 track_off[n]` (rel
sub-blob). Track: `+0x04 u8 target` (1=eye, 2=at, 3=roll, 7=fov,
8=misc), `+0x08/+0x0A/+0x0C s16` per-component curve offsets (relative
to TRACK base; 0 = keep default).

Curve = the shared CSAB-family keyframe evaluator `FUN_003087a4`:
`+0x00 u8 type` (1=linear, 2=hermite, 3=step), `+0x04 s32 count`,
keyframes at +0x10 — linear/step `{s32 t, f32 v}` (8B), hermite
`{s32 t, f32 v, f32 tanIn, f32 tanOut}` (16B), cubic hermite with
tangents scaled by segment length.

Output scaling (FUN_0033cb90 globals):
- positions × 40.0 (fRam0033ce70) → world units
- roll × 10430.378 = 32768/π (fRam0033ce68) → binang
- fov × 57.29578 (fRam0033ce6c) → degrees

Segment selection (interpreter case 0x97): find segment with
`start < curFrame < end`; on segment CHANGE the camera frame counter
(global DAT_002c8118+0x18) := curFrame, else ++ — i.e. camFrame tracks
curFrame within a shot. The evaluated pose eye matches Az's camera eye
EXACTLY; Az's stored basis dir = −normalize(at−eye) (left-handed
convention, see soh3d docs/title_view_matrix_lh.md).

## Title cs instance

The byte-identical " BDQ" script (cmd_count=13, end_frame=2400) is
embedded in TWO scene files: **`spot99_info.zsi + 0x3528`** — the scene
the 3DS actually loads at title (live-verified; spot99 is Grezzo's
dedicated title scene) — and `spot00_info.zsi + 0x203b8` (same bytes;
NOT the 0x28a34 blob, which is a different cutscene). 13 commands: player-cue
channels (Link/Epona ride across Hyrule Field, actions 0x40/0x41/0x24,
f0–3036), 2 misc triggers (types 0x1E@f345, 0x1F@f1930), set-time
04:00, destination @f2400 (loop), transition f2310–2460, camera 0x97
with 8 shots (f0–2455).

Repro tooling (soh3d repo): `tools/walk_oot3d_cs.py` (stride walker),
`tools/oot3d_cs_camera.py` (camera parser + evaluator, A/B-verified — the
file was renamed from `cs_camera_eval.py` at some point; this doc's older
references to that name are stale, use `oot3d_cs_camera.py`),
`tools/dump_oot3d_title_cs.py` (extract blob from RomFS).

## cs-438 segment/interpolation audit (2026-07-10) — camera ruled out

`debug_journal/2026-07-10-title-arc-closing-measurement.md` residual 5 flagged one
frame-matched A/B sweep pair (az_step=700, cs frame 438) where SoH's camera framing
diverges from the oracle (Az: wide hillside + road; SoH: closer grass) despite the cs
cursors being verified frame-EXACT at that pair — and hypothesized "a per-segment
boundary issue in the OP97 camera port (segment active at cs 438)". Static audit of the
byte-exact segment table (spot99's OP97 block, `oot3d_cs_camera.py` dump against
`spot99_info.zsi+0x3980`, the payload start after the `+0x3978 OP97(spline) len=0x2200`
header located via `walk_oot3d_cs.py`):

```
idx=0 start=   0 end= 299   idx=1 start= 300 end= 929   idx=2 start= 930 end=1379
idx=3 start=1380 end=1619   idx=4 start=1620 end=1656   idx=5 start=1657 end=1776
idx=6 start=1777 end=2031   idx=7 start=2032 end=2455
```

**cs 438 sits solidly inside segment 1 (300–929), 138 frames past its start and 491
before its end — not adjacent to any segment boundary.** The two OTHER matched pairs the
same sweep says frame correctly (cs 588, also in segment 1; cs 738, in segment 2,
930–1379) straddle the SAME segment-1→2 boundary that 438 is nowhere near — if a
boundary-selection off-by-one were the mechanism, 738 (11 frames past the 930 boundary)
would be the one to show it, not 438. This alone falsifies "segment selection" as the
cause.

Checked the actual math at and around cs 438 (`oot3d_cs_camera.py` eval, segment 1's
`eyeDef`/`atDef` Hermite tracks, keyframe times 300/303/396/456/462/673/794/932 for the
X-axis track — no keyframe within 5 frames of 438, nearest is 456): eye/at/fwd/up are all
smooth and continuous across f=430..460 (eye moves ~15 world units/frame, forward vector
rotates gradually, `|cross(fwd,worldUp)|` stays in [0.97,0.99] — nowhere near the
near-parallel/gimbal guard SoH's up-vector derivation (`zelda3d_cutscene.cpp:463`, `if (m
< 1e-6f) return 0`) would trip). Roll and FOV are both segment-1 STATIC (no roll/fov
track on this segment — `tracks=[1,2]` only, types eye/at) — fov=45.40° the whole
segment, so a per-frame FOV glitch is also ruled out for this specific pair.

**SoH's port (`zelda3d_cutscene.cpp:421-476`, `Zelda3D_TitleCsCamera`) is a literal,
line-for-line transcription of this evaluator** — same strict `s.start < frame < s.end`
segment-selection inequality (line 426, matches `FUN_002c5ba0` case 0x97's documented
`start < curFrame < end` exactly), same Hermite/Linear/Step `Curve::Eval` formula (lines
33-49, byte-identical to `oot3d_cs_camera.py`'s `Curve.eval`, including the `keys[idx].frame
>= t` bracket search and the `FUN_003087a4` cubic-Hermite form). No divergence found
between the ported C++ and the decompiled/re-derived reference at this frame or its
neighborhood.

**Conclusion: the OP97 camera evaluator (selection + interpolation) is NOT the source of
the cs-438 divergence — ruled out by direct data audit, not by re-running the live
harness (out of this session's static-RE scope).** The residual's own framing is
consistent with this: eye/at position tracks were already "byte-verified previously" at
every OTHER sampled point in this same sweep, and this audit adds the specific frame in
question to that same clean bill. Recommend the next investigation session treat this as
a SCENE/terrain rendering gap at that particular eye position (e.g. a road/hillside mesh
piece not loaded, or a room-streaming boundary the flyover's segment-1 path crosses
around cs 400-470 that segments 0/2+ don't) rather than continuing to audit the camera
math — the camera pose itself is confirmed correct.
