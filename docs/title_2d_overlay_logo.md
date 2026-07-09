# OoT3D title-screen 2D overlay / logo — ground truth + SoH3D port spec

> **CORRECTION 2026-07-10 — see `title_ura_ctxb_identified.md`.** This doc's characterization of
> `ura.ctxb` as a "fire-glow overlay strip texture" (§1, §2) is **WRONG** — a direct pixel decode
> shows it is a file-select/press-start UI sprite atlas (OoT + Master Quest save cards, an empty
> card, a cursor-outline shape, and a baked "PRESS START" prompt), with no flame/glow imagery
> anywhere in it. The narrow-vertical-strip draw-log finding in §2 is very likely a UI
> cursor-highlight fade-in (or a file-select-transition frame bleeding into the sampled window),
> not part of the title-logo fire-glow effect. §5 item 1.d ("`ura.ctxb` as the narrow vertical
> strip... alpha driven by `g_title_fire_ura.cmab`") should NOT be ported as written — see the
> correction doc §6 for the revised port guidance.

Scope: the 2D elements OoT3D composites over the title-demo 3D scene — the
"Legend of Zelda: Ocarina of Time 3D" logo, background card, fire-glow effect,
copyright text, and (separately) "PRESS START". Companion to
`title_render_pipeline_scope.md` (3D camera/lighting/moon — already largely
ported) and `soh3d/debug_journal/2026-07-04-title-atmos-scanout-layer.md` (the
open "static top-screen image" question, partially corrected below).

## 1. Ground truth: the En_Mag actor and its ZAR

The title scene (spot99, per `soh3d-title-scene-spot99`) spawns an
`En_Mag` actor — same actor as N64's "Title Screen Manager & Logo"
(`z_en_mag.c`), OBJECT_MAG → `/actor/zelda_mag.zar`. Confirmed by direct ROM
read (`ZELDA3D_OOT3D_ROM`, `tools/ctr_romfs.py` + `tools/zar.py`):

```
actor/zelda_mag.zar (388300 bytes), contains:
  cmb   Model/g_title.cmb            21760B  — decorative/fire-glow base mesh
  cmb   Model/copy_nintendo.cmb      33920B  — "TM & (c) Nintendo" copyright block
  cmb   Model/title_logo_jpeu.cmb   161536B  — JP/EU wordmark (region variant)
  cmb   Model/title_logo_us.cmb     162432B  — US wordmark (region variant; SoH already
                                                auto-loads THIS one — USA ROM)
  csab  Anim/title_test.csab          2092B  — unused/dev leftover (not wired to a cmb by name)
  csab  Anim/title_logo_jpeu.csab     1664B  — logo assembly/idle anim, JP/EU
  csab  Anim/title_logo_us.csab       1812B  — logo assembly/idle anim, US
  cmab  Misc/g_title_fire.cmab        1296B  — material anim (UV/color) driving g_title's flame flicker
  cmab  Misc/g_title_fire_ura.cmab    1296B  — second fire-glow material anim ("ura" = back/reverse pass)
```

`title_logo_us.cmb`: 13 bones (skinned, SkelAnime-style retarget — matches
SoH's auto-load log "bones=13"), 22 groups, 10 textures, model-local height
19.1. This is a fully modeled, ANIMATED 3D logotype (bones = per-letter/piece
transforms), not a flat 2D texture — driven by `title_logo_us.csab`.

Two more textures used as 2D billboards, loaded from OUTSIDE zelda_mag.zar
(shared menu/locale archives, confirmed present + decoded, 512×256 RGBA each):

```
/menu/01_US_ENGLISH/common_bg01.ctxb   65608B (ctxb) — full-screen background card
/misc/us/english/ura.ctxb             262216B (ctxb) — fire-glow overlay strip texture
                                        (paired with g_title_fire_ura.cmab by name)
```

"PRESS START" (and the "NO CONTROLLER" message) is **NOT** part of
zelda_mag.zar or any per-asset ctxb — the ROM has no press-start-specific
texture. It's composed through the shared 3DS **CTR layout-engine** UI system:

```
/message/anim.qan     /message/layout.qly    /message/parts.ctxb
/message/plate.ctxb   /message/sprite.qsp    /message/sys8.qbf (font)
/message/us/ltn16.qbf /message/us/us.qm
```

This is a generic scene-graph-style UI renderer (layout + sprite + font
atlas + animation curves) shared by all of OoT3D's UI (HUD, menus, message
boxes), not a title-specific asset. **RE-ing the layout engine is a separate,
larger arc** — out of scope for this pass; see §5.

## 2. Ground truth: on-screen geometry + timing (SW-rasterizer draw log)

`scratch/task16_lighting.log` / `task16_draws.log` (Azahar SW-rasterizer
`ProcessTriangle` tap, already captured 2026-07-04) directly show the two
billboard textures drawing as REAL, non-black (non-suppressed) triangles —
proof they are visually meaningful, unlike the ~34 landscape textures that
all modulate to primaryColor=0 (see `title_render_pipeline_scope.md` /
`title_lighting_disabled.md`):

```
tex0=2095aa00 (common_bg01.ctxb, 512x256) — 2 tris forming ONE full-screen
    quad, screen-space (0,0)-(240,320) [3DS top-screen internal storage is
    240 wide x 400 tall rotated; this sample region is 240x320 — consistent
    with the title's actual composited frame], blend=(srcAlpha,1-srcA),
    color multiplier CONSTANT (1,1,1,1) across every sample — i.e. opaque,
    non-fading background card.

tex0=2091a900 (ura.ctxb, 512x256) — 2 tris forming a NARROW VERTICAL STRIP,
    screen coords x=[104..136] y=[56..264] (32px wide x 208px tall, roughly
    screen-centered), blend=(srcAlpha,1-srcA), alpha RAMPING linearly across
    the sampled window: 0.067 -> 0.100 -> 0.133 -> 0.167 -> 0.200 -> 0.233 ->
    0.267 -> 0.300 -> 0.333 (+0.033/sample, ~10 samples ~6160 log-lines
    apart). This is the g_title_fire_ura.cmab-driven FADE-IN of the fire-glow
    strip — a warm vertical light-sweep across the logo card, matching the
    classic "torch-lit parchment" Zelda title look.
```

Both draws are UI-style: a fixed 512x256 quad billboarded flat over the
screen, not attached to any 3D world transform — this is the RE evidence
that they are a genuine **2D orthographic overlay pass**, separate from the
3D scene camera.

## 3. Correction to the 2026-07-04 "static scanout image" finding

`2026-07-04-title-atmos-scanout-layer.md` concluded the visible top-screen
picture was a pre-baked STATIC image DMA'd once to VRAM `0x182447C0`, because
no `MemoryFill`/`DisplayTransfer` write touched that region across a 600-frame
probe. That finding predates the same-day, more complete SW-rasterizer draw
log (`task16_lighting.log`), which shows a **480x400 flat black clear quad**
(`tex0=00000000`, sxy=(480,400),(0,400),(480,0)) at the START of every
frame's draw list — exactly the dimensions of the "static" region. This is
strong evidence the top-screen content IS produced by the GPU rasterizer
every frame (clear -> landscape tris (primary=0, i.e. invisible) -> bg card
-> fire strip -> logo model), and the earlier "static/uploaded-once"
conclusion was an artifact of instrumenting only `MemoryFill`/`DisplayTransfer`
and missing the render-target write path. **Do not treat 0x182447C0 as a
boot-time asset to extract** — treat the visible top screen as the composed
output of this same per-frame 2D+3D draw stack. (Flagged here since it
directly bears on the overlay work; not fully re-verified — if a future
session revisits it, confirm via a render-target write watchpoint on
0x182447C0 during a frame, not just Fill/Transfer.)

## 4. Current SoH3D state (the gap)

- `Shipwright/soh/src/overlays/actors/ovl_En_Mag/z_en_mag.c` `EnMag_Draw`
  (the N64 draw path — N64 logo bitmap + "PRESS START" text + copyright)
  early-returns under `gZelda3dInTitleDemo` (task #15) — correct, Az's shot 1
  doesn't show N64 assets.
- `Shipwright/soh/src/code/z_actor.c:2819` routes EVERY actor's draw through
  `Zelda3D_TryDrawActor` BEFORE the legacy N64 `actor->draw` call. For
  En_Mag (OBJECT_MAG), `zelda3d_object_zars.inc` already maps
  `OBJECT_MAG -> /actor/zelda_mag.zar` generically, and the AUTO-replace path
  (`Zelda3D_TryAuto`, default-on, `Zelda3D_AutoMode()==1`) DOES discover and
  load `title_logo_us.cmb` (confirmed via debug log: "auto-loaded model 2012
  .../title_logo_us.cmb") plus the two billboard textures (loaded as
  billboard models 2003/2004 in the same log). **But this generic path
  treats them as an ordinary WORLD-SPACE 3D prop**: positioned at the En_Mag
  actor's `world.pos`, auto-scaled by (measured N64 draw height / OoT3D CMB
  height), billboard-facing the 3D camera — the same machinery used for a
  torch or rock. There is no 2D/orthographic overlay draw path in
  `zelda3d.c` at all.
- Net result: SoH3D currently renders **none of the correct 2D title
  elements** — the logo/bg-card/fire-glow either don't appear (if the AUTO
  measure-and-calibrate cycle stalls, since it needs at least one legacy
  N64 draw call to measure against, and that call is the SAME one task #15
  suppressed) or, if they do fire, they render as a misplaced/mis-scaled
  stray 3D object rather than a fixed full-screen 2D card. Either way this
  is the confirmed, biggest real parity gap: recent work (sky/moon/
  lighting/camera) never touched this layer.

## 5. Port spec (ready to apply)

Ordered by dependency, not size:

1. **New dedicated 2D overlay draw path — do NOT route En_Mag through
   `Zelda3D_TryAuto`.** Add an actor-id branch for `ACTOR_EN_MAG` in
   `Zelda3D_TryDrawActor` (same pattern as the existing `ACTOR_OBJ_HANA` /
   `ACTOR_EN_ISHI` forced branches) that:
   - Skips the generic per-object AUTO/billboard machinery entirely for this
     actor (return early from the `Zelda3D_TryAuto` auto-replace fallback
     for `OBJECT_MAG`, or gate it out via the existing forced-slot table).
   - Draws through a NEW ortho/screen-space pass (a "Zelda3D 2D overlay"
     draw call, analogous to how the HUD glyphs / kbd glyphs already draw
     screen-space quads in `zelda3d_hud_tex.cpp` — reuse that seam/API
     rather than inventing a second one), independent of the 3D camera:
     a. `common_bg01.ctxb` as a full-screen quad (screen (0,0)-(240,320) in
        the log's coordinate space — map to SoH's actual output resolution
        proportionally), alpha=1 constant.
     b. `title_logo_us.cmb` (US ROM) driven by `title_logo_us.csab`,
        rendered via an ORTHOGRAPHIC camera fixed at whatever eye/at/proj
        the 3DS uses for its 2D layer (derive by reading the CMB's
        authored local-space bounds — height 19.1 — against its expected
        on-screen size; a fixed ortho box sized to those bounds, not a
        world-space scale-by-height like the other AUTO props).
     c. `g_title.cmb` + its two `.cmab` material animations
        (`g_title_fire.cmab`, `g_title_fire_ura.cmab`) for the fire-glow
        effect — needs a CMAB (material-animation) player; check whether
        `zelda3d_model.cpp` already has one (skim for "cmab"/material-anim
        handling) before writing a new one.
     d. `ura.ctxb` as the narrow vertical strip (104,56)-(136,264) in the
        logged coordinate space, alpha driven by `g_title_fire_ura.cmab`
        (fade-in ramp measured at +0.033/sample — get the real per-frame
        rate from the CMAB's keyframe data, not the log's sample spacing).
     e. `copy_nintendo.cmb` — the copyright block, likely faded in after
        the logo settles (N64's own En_Mag sequences logo -> copyright ->
        press-start; check `EnMag_Update`'s N64 timers — `sDelayTimer`,
        `copyrightAlpha`, `textFadeTimer` in `z_en_mag.c` — for the
        ANALOGOUS N64 timing to structure the 3DS sequence's phases; the
        3DS demo almost certainly follows the same beat even though the
        assets differ).
2. **Timing/sequencing**: RE (or re-derive from `title_logo_us.csab`'s
   keyframe count/duration) exactly which title-cs frame range shows the
   logo phase vs. the "no overlay, pure demo pan" phase vs. eventual
   "PRESS START" — Az's examined "shot 1" (used to justify task #15) shows
   NEITHER logo nor press-start, meaning the captured sample was mid-loop,
   after the intro logo fades and before Press Start engages. Confirm the
   full cs-frame windows for: [boot] -> [logo+bg+fire, ~1-3s] -> [logo
   fades, pure demo] -> [Press Start blinking, demo continues] using
   `tools/walk_oot3d_cs.py` / the harness's `soh_titlecs` against the
   csab's own frame range as the anchor.
3. **"PRESS START" text — separate, larger RE arc.** No per-asset texture
   exists; it's composed via the shared CTR layout-engine
   (`/message/layout.qly` + `/message/sprite.qsp` + `/message/parts.ctxb` +
   `/message/us/sys8.qbf,ltn16.qbf` font atlases + `/message/us/us.qm`
   string table). This is the SAME system likely used for all in-game
   message boxes / HUD text, so RE-ing it pays off beyond the title screen.
   Do not port PRESS START as a one-off hardcoded string texture — that
   would be the exact "asset difference is out of scope" bandaid the
   project rule forbids. Scope this as its own task: decompile the
   layout-engine's rendering entry point, identify title's specific
   layout/message ID, and build a generic QLYT-style renderer (a real
   subsystem, not a shortcut).

## 6. What NOT to do (bandaid list)

- Do NOT special-case-skip the AUTO billboard path by just disabling
  drawing for OBJECT_MAG (that's what task #15 already effectively did to
  the N64 side) — the fix is to draw the REAL 3DS overlay, not to draw
  nothing.
- Do NOT approximate "PRESS START" with a hand-authored font/texture — the
  real ROM asset path is the layout-engine text system; render that.
- Do NOT re-litigate the atmos-scanout "static image" theory as settled —
  §3 above shows real evidence it's wrong; a future fix should verify via a
  write-watchpoint on the render target, not by trusting the old doc.
