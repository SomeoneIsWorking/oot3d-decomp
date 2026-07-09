# `ura.ctxb` identified: it is NOT a fire-glow texture — it's the PRESS-START / file-select UI atlas

Task: find what draws `/misc/us/english/ura.ctxb` on the title screen (the "second billboard
strip" flagged in `title_2d_overlay_logo.md` §1/§2 and hypothesized in `title_logo_fireglow_cmab.md`
§2/§3 as a second fire-glow target paired with `Misc/g_title_fire_ura.cmab`). Prerequisite ruled
out this session (commit `6304d81`, `title_logo_actor.md` §6.4): the title-logo Actor `0x171`'s
draw fn (`FUN_001da4f4`) has exactly 3 draw blocks (backdrop/wordmark/copyright) — no `ura.ctxb`
reference anywhere in it or its callees.

**Headline finding: `ura.ctxb`'s actual pixel content is a file-select / press-start UI sprite
sheet, not a flame/glow gradient.** This corrects a mischaracterization that has stood in the docs
since `title_2d_overlay_logo.md` was written — that doc inferred "fire-glow overlay strip" purely
from the draw-log's screen footprint (a narrow vertical quad) and the coincidence of the filename
pairing with `g_title_fire_ura.cmab`, without ever decoding the texture's actual pixels. Decoding
them changes the analysis substantially.

## 1. Direct pixel decode (static asset inspection, no emulator)

Method: `soh3d:scratch/misc_us_english_ura.ctxb` (already extracted from the ROM in a prior
session) parsed with the CTXB container layout documented in
`soh3d:Shipwright/cmb3d/asset/ctxb.cpp` (header 0x18B, `tex ` chunk at `+0x18`, one entry: 512×256,
`fmt=0x6752`, `data_type=0x8033`), texel data decoded with `soh3d:tools/pica_texture.py`
(`decode(glformat, w, h, data)` — the same PICA200 texture decoder soh3d's native `Ctxb::decodeRGBA`
wraps). One texture, no sub-images, no mipmaps. Rendered to PNG for inspection.

**Content (512×256, single atlas sheet, left-to-right / top-to-bottom):**

1. **Left card** — a grey/stone-bordered portrait of Link (side profile, sword drawn) — the
   standard **"OoT" (normal quest) file-select save-slot card**.
2. **Middle card** — the same Link portrait, purple-bordered, with **"Master Quest"** text
   diagonally overlaid — the **Master Quest file-select save-slot card**.
3. **Right of the two cards, a solid black rectangle** — almost certainly the **"empty save
   file" slot** placeholder (no card art, just a black box — matches N64/3DS OoT's "no file"
   slot rendering).
4. **Far right, a tall, narrow, rounded-rectangle OUTLINE** (unfilled, just a border stroke) —
   spans nearly the full atlas height, very narrow width. This is the **only tall/narrow shape
   in the whole atlas** — see §2, this is what the earlier SW-rasterizer draw-log actually
   sampled.
5. **Bottom-left, a wide horizontal rounded-rect** (black fill, thin yellow/gold border) — a
   **text-entry-style bar** (shape matches a file-name display/input box).
6. **Bottom-right, four colorful controller-button glyphs followed by white "PRESS START" text
   on a black background** — the literal **"PRESS START" prompt**, rendered as a baked sprite
   here (contradicts `title_2d_overlay_logo.md` §1's claim that "the ROM has no
   press-start-specific texture" — see §4 below).

This is unambiguously a **file-select-screen UI sprite sheet**, reused (per the shared-asset
convention already established for `common_bg01.ctxb`, loaded from `/menu/`) across the
title→file-select flow, not a title-logo effect asset.

## 2. The narrow-vertical-strip draw-log finding now has an obvious explanation

`title_2d_overlay_logo.md` §2 measured a real SW-rasterizer draw of `ura.ctxb`: a 32px-wide ×
208px-tall screen quad (x=[104..136] y=[56..264] in the log's 240×320 reference frame),
alpha ramping 0.067→0.333 across the sample window, and — for lack of any better read at the
time — called it a "fire-glow strip" fade-in.

Given §1's pixel content, the far simpler, evidence-consistent read is: **that draw samples
the tall/narrow rounded-rect OUTLINE element (item 4 in §1)** — the atlas's only shape whose
aspect ratio (narrow width, near-full height) matches a 32×208 screen quad. A rounded-rect
outline that fades in via alpha is exactly the shape of a **UI cursor/selection-highlight
border** — e.g. the outline that appears around a save-file card once the player has one
selected, or a blinking "ready" frame around the file cards during the transition into
file-select. This reading is *consistent with, not contradicted by*, the alpha-ramp behavior
already measured (a UI highlight fading in over ~10 frames is an ordinary UI polish detail);
it requires no additional asset (no flame gradient anywhere in the sheet to justify "fire-glow"),
whereas the old reading required inventing a glow texture the pixels don't contain.

**This does not by itself prove the draw is file-select-context rather than title-demo context**
— the captured sample (`scratch/task16_lighting.log`, prior session) may have spanned into the
title→file-select transition, which is exactly the ambiguity `title_2d_overlay_logo.md` §5 item 2
already flagged ("Az's examined shot 1 shows NEITHER logo nor press-start, meaning the captured
sample was mid-loop"). Given the pixel content, the far more likely explanation is that the log
sampled a frame during/near the file-select transition, not a "title-logo fire-glow" frame at all.

## 3. Correction to `title_logo_fireglow_cmab.md`'s "two draw targets" hypothesis

That doc's §2/§3/§5 treated `g_title_fire.cmab` and `g_title_fire_ura.cmab`'s duplicated
`(Translation, ConstColor)` entry pairs as evidence the engine drives **two separate draw
targets from one CMAB file** — `g_title.cmb`'s single material for entries 0–1, and (guessed)
the `ura.ctxb` billboard quad for entries 2–3, purely because the *filenames* pair up
(`g_title_fire_ura.cmab` / `ura.ctxb`).

That guess is now directly contradicted by content: **`ura.ctxb` is a UI atlas with no fire/glow
imagery anywhere in it — there is nothing in the texture a `ConstColor` gold-flicker curve would
be tinting.** CMAB material animations drive **CMB materials** (per `title_logo_fireglow_cmab.md`
§1's own format spec: `mmad.materialIndex` indexes into "the target CMB's material list" — a
CTXB has no material list at all, only raw texture entries, so a CMAB cannot target a CTXB
directly in the first place). The far more likely reading of the duplicate `(Translation,
ConstColor)` pairs in each `.cmab` is that **both target `g_title.cmb`'s own material**, e.g.
one pair for the base tint and one for a second TEV combiner stage or the unaccounted-for
second embedded texture (`g_title_mable_t`, flagged as "unresolved" in that doc's §5) — i.e. the
"two targets" are two aspects of the *same* mesh's shading, not two separate draw calls. This
should be treated as the new working hypothesis; it is not yet confirmed (the runtime CMAB
binder function is still not located, per that doc's own open item 1), but the "second target =
`ura.ctxb`" reading specifically is now **ruled out** by the pixel evidence above, independent of
whether the binder function is ever found.

## 4. Static search for `ura.ctxb`'s draw site: negative (as expected — same shape as `zelda_mag`)

Per the task's suggested attack (string-reference / xref search, same technique that resolved the
object-id table for spot99): `code.bin` contains **zero** occurrences of any of `"ura.ctxb"`,
`"g_title_fire_ura"`, `"misc/us/english"`, `"us/english"`, or `"english/ura"` — no filename literal
exists anywhere in the binary for this asset (a raw `grep`-equivalent scan of all 4 strings came
back empty; a coincidental byte-match on `/misc/` at VA `0x00450fa8` was checked and is not a real
string — surrounding bytes are code/data noise, not ASCII). This is the **same negative result**
`title_logo_actor.md` §1 already got for `zelda_mag.zar`'s per-file names inside the ZAR (only the
ZAR's own top-level `rom:/actor/zelda_mag.zar` path is a literal; individual files are addressed by
index into the ZAR's internal directory, not by string) — `ura.ctxb` and its sibling misc/menu
assets are evidently loaded the same way: through a **numeric resource-id table**, not string
lookups reachable by a code.bin string scan.

The one concrete lead toward that table: `title_logo_actor.md` §2 already found the non-Actor
title-2D-overlay-context initializer `FUN_0046ac98` (`build/decomp/0046ac98.c`) ends with three
back-to-back resource registrations at **sequential ids `0x53`, `0x54`, `0x55`**
(`FUN_002fc534(handle, &rect, &zero, 1, 0x53/0x54/0x55)`), which that session flagged as
"plausibly registering 3 textures/sprite-resources in a row (candidates: `common_bg01.ctxb` bg
card, `ura.ctxb` fire strip, and one more)". Given §1–§3 above, the more accurate candidate list
is now **`common_bg01.ctxb` (bg card) / `ura.ctxb` (file-select+press-start atlas) / a third,
unidentified misc asset** — still not confirmed which id binds which file (`FUN_002fc534` doesn't
carry names either), but the registration site itself remains real and is the best static anchor
for a future session.

### 4.1 The matched sub-object pair (`+0x1C`/`+0x20`) is a weaker fire-glow-target match than previously thought

`title_logo_actor.md` §2 flagged `FUN_0046ac98`'s two identically-constructed sub-objects at
struct offsets `+0x1C`/`+0x20` (both `FUN_002db6a0(x, 4)`, the only duplicated allocation shape
among the 8 sub-objects) as reinforcing evidence for "two fire-glow draw targets". This session
traced both call sites at the disassembly level (`build/decomp/002db6a0.c`,
`build/decomp/002fcc88.c` — newly decompiled this session) and found each sub-object is
immediately positioned by a call to `FUN_002fcc88(x, y, batchObjPtr)` (a quad-row layout
function — builds `param_3[1]` quads spaced by a global stride, ARM EABI: `s0`=x, `s1`=y, `r0`
implicit = the just-created object):

| sub-object | position call | (x, y) literal |
|---|---|---|
| `+0x1C` | `FUN_002fcc88` @ `0x46af5c` | `(20.0, 110.0)` (`0x46b0a4`, `0x46b0a0`) |
| `+0x20` | `FUN_002fcc88` @ `0x46af84` | `(320.0, 240.0)` (`0x46b0ac`, `0x46b0a8`) |

These positions do **not** match the measured `ura.ctxb` draw footprint (`x=[104..136]
y=[56..264]` in the same 240×320 reference frame per §2 above) — `320,240` in particular looks
like a full-frame dimension pair (close to the 3DS's own 400×240/240×320-ish screen extents),
not a centered-strip position. This weakens (does not fully refute — `FUN_002fcc88`'s quad-row
semantics aren't fully understood; it may reposition sub-rows independent of a single (x,y)
anchor) the `+0x1C`/`+0x20` pair as *the* ura.ctxb draw target; combined with §3's material-level
argument, the balance of evidence now favors "the `+0x1C`/`+0x20` pair is unrelated to
`ura.ctxb`" over the prior session's reading.

## 5. Answer to the task

- **What `ura.ctxb` is**: a 512×256 RGBA UI sprite atlas for the title→file-select transition —
  OoT file-select card, Master Quest file-select card, an empty-slot black card, a tall narrow
  cursor/highlight border outline, a file-name entry bar, and a baked "PRESS START" prompt
  (button glyphs + text). **Not** a fire-glow/flame texture.
- **Who draws it / where**: **not found this session** (static-only, no live probing per task
  constraint) — but it is now confidently **ruled out** of the title-logo Actor `0x171`'s draw
  fn (§6.4 of `title_logo_actor.md`, prior finding, unaffected) and **ruled out** of the
  `g_title_fire.cmab`/`g_title_fire_ura.cmab` material-animation mechanism (§3 above — CMABs
  target CMB materials, `ura.ctxb` has no CMB/material to target). The most likely owner is the
  same generic **file-select / press-start UI subsystem** `title_2d_overlay_logo.md` §5 item 3
  already scoped as "a separate, larger arc" (the shared CTR layout-engine: `/message/layout.qly`
  + `/message/sprite.qsp` + font atlases) — `ura.ctxb`'s content (file cards + PRESS START) is
  exactly that subsystem's asset shape. Whether it's fed through the generic layout-engine path
  or a title-specific shortcut (the non-Actor `0x0050AF34` context's sprite factories, §4 above)
  is still open; the `0x53/0x54/0x55` resource-id registration in `FUN_0046ac98` is the
  concrete next static lead.
- **Top/bottom screen**: not determined this session (would need the layout-engine's screen
  target field, not reached). Given the content is file-select UI (traditionally 3DS top-screen
  content for this game, mirroring N64), there's no positive evidence pointing at the bottom
  screen either — flagging as genuinely unresolved rather than guessing.

## 6. Port implications for SoH3D (flag only — no fix made this session)

- **`Shipwright/soh/src/zelda3d/behaviors/title/title_logo.cpp`'s "fire-glow (deferred, phase 3)"
  stub should NOT be built as a two-target (`g_title.cmb` + `ura.ctxb`) effect.** Per §3, the
  fire-glow is (most likely) entirely within `g_title.cmb`'s own material — a single-mesh
  additive-glow effect, no second billboard quad. Building a second billboard from `ura.ctxb` as
  "the other half of the fire-glow" would be porting a texture that has no fire content at all —
  a straightforward asset-content bug the decomp now prevents.
- **`ura.ctxb` is very likely NOT part of the title-demo overlay pass at all** — it's file-select
  UI. SoH3D's existing AUTO-replace path currently loads `ura.ctxb` as one of the "billboard
  models 2003/2004" alongside `common_bg01.ctxb` per `title_2d_overlay_logo.md` §4's own gap
  writeup — that generic path has no way to know this texture belongs to a *different* screen
  (file-select) than the title-demo overlay it's currently being billboarded into. This is a
  second, independent reason (beyond §5's existing "generic 3D-prop billboarding is wrong for a
  2D overlay" finding) that the AUTO path must not be the mechanism used for the title's 2D
  layer — confirms rather than changes the existing port-spec direction in `title_2d_overlay_logo.md`
  §5 (dedicated 2D overlay draw path, not `Zelda3D_TryAuto`), but narrows its item 1.d (`ura.ctxb`
  fade-in strip) to: **do not port it as part of the title fire-glow at all** until/unless a
  future session actually locates its draw call and confirms it fires during the title-demo
  scene (not just during file-select).
- Port target for the *real* fire-glow effect: single mesh (`g_title.cmb`), additive blend
  (already documented, `title_logo_fireglow_cmab.md` §3), driven by one or both CMABs' curves on
  that mesh's own material — no second draw target, no second texture.

## 7. Anchors (this session)

- `soh3d:scratch/misc_us_english_ura.ctxb` decoded via `soh3d:tools/pica_texture.py` +
  `soh3d:Shipwright/cmb3d/asset/ctxb.cpp`'s documented container layout (this session's decode
  script inlined the same header parse in Python, `w=512 h=256 fmt=0x6752 data_type=0x8033`,
  single texture entry) → `soh3d:scratch/ura_decoded.png` (not committed — regenerate from the
  `.ctxb` if needed, decode is deterministic and cheap).
- String-literal scan of `build/code.bin` for `"ura.ctxb"`, `"g_title_fire_ura"`,
  `"misc/us/english"`, `"us/english"`, `"english/ura"`: **0 hits**, all — negative result, §4.
- `FUN_002db6a0` (`build/decomp/002db6a0.c`) + `FUN_002fcc88` (`build/decomp/002fcc88.c`, newly
  decompiled this session) + `FUN_002fc534` (`build/decomp/002fc534.c`, newly decompiled) — the
  `+0x1C`/`+0x20` sub-object construction+placement call chain in `FUN_0046ac98`, disassembled at
  `0x46af3c..0x46af88` (capstone, this session) to recover the literal (x,y) placement args
  `(20,110)` / `(320,240)` — §4.1.
- `FUN_0046ac98`'s three sequential resource registrations at ids `0x53/0x54/0x55`
  (`build/decomp/0046ac98.c` lines 151–153) — unresolved name-to-id binding, best remaining
  static lead for a future session (needs either a broader `FUN_002fc534` callee trace to see how
  ids resolve to file handles, or live-harness confirmation).
