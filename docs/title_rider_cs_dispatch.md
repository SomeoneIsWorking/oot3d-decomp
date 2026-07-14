# Title-demo rider cue DISPATCHER — FUN_0026a30c (EnHorse_CutsceneUpdate)

Decompiled 2026-07-14. Closes the "who consumes the latched cue channel /
who calls PathFollow_Update" open item from `title_writer_chains.md` and
`title_rider_driver.md` §2 — the fn-ptr dispatch that Ghidra's Reference DB
could not resolve statically.

## Derivation trail

1. `PathFollow_Update` (`FUN_003CF3C4`) had ZERO static callers; its only
   .data appearance is the fn-ptr slot at `0x00526DE8`
   (`title_writer_chains.md`).
2. Raw u32 scan over `code.bin` around that slot showed the containing
   structure: TWO 6-entry fn-ptr tables + a 5-pair `{u16 action, u16 idx}`
   map — byte-identical layout to N64 `z_en_horse.c`'s `sCutsceneInitFuncs`
   / `sCutsceneActionFuncs` / `sCsActionTable`:

   | VA | table | contents |
   |----|-------|----------|
   | `0x00526DCC` | init funcs | `{NULL, 0x0016CA48, 0x00190A20, 0x00190B48, 0x002A8AF8, 0x002B6C00}` |
   | `0x00526DE4` | action funcs | `{NULL, 0x003CF3C4, 0x001033D4, 0x0010360C, 0x00230D84, 0x002535F0}` |
   | `0x00526DFC` | action→idx pairs | `{0x24→1, 0x25→2, 0x26→3, 0x40→4, 0x41→5}` |

3. Neither table base has a Reference-DB xref NOR a movw/movt
   materialization (`FindConstInRange.py`, new script, 0 hits). A raw scan
   for u32 words HOLDING the table addresses found the dispatcher's literal
   pool: `0x0026A594/98/9C` hold `0x00526DFC/DCC/DE4`. `FnAt` on the pool →
   **`FUN_0026A30C`** (616 bytes, `build/decomp/0026a30c.c`).

## FUN_0026a30c — the 3DS EnHorse_CutsceneUpdate (1:1 with N64)

Pool constants (raw `code.bin` reads):

| pool VA | value | meaning |
|---------|-------|---------|
| `0x0026A574` | `0x22D8` | latched cue channel: `play + 0x22D8` = csCtx(+0x2298) + 0x40 — channel 0, the op-0x0A player/rider cue slot |
| `0x0026A580` | `0x22B8` | csCtx + 0x20 = curFrame — compared `== 0x45` for a title-only one-shot |
| `0x0026A594/98/9C` | tables above | |

Derived C (field offsets per `title_rider_driver.md` §2; `cutsceneAction` at
horse+0x100E, one-shot flag at +0x1005):

```c
void EnHorse_CutsceneUpdate(EnHorse* this, PlayState* play) {
    CsCmdActorCue* cue = *(CsCmdActorCue**)((u8*)play + 0x22D8); // csCtx.playerCue
    if (CutsceneState(play) == 3) { /* restore player control (N64-identical) */ return; }
    if (cue == NULL) return;

    // Title-only one-shot: at scene 0x51 (spot99) + Epona + csCtx.curFrame == 0x45(69),
    // play two SFX once (flag +0x1005). Audio only — no motion effect.

    s32 idx = GetCsFunctionIndex(cue->action);   // pair table 0x00526DFC; no match -> 0
    if (idx == 0) return;

    if (this->cutsceneAction /*+0x100E*/ != idx) {
        if (this->cutsceneAction == 0) {         // very first cue: seed transform
            this->actor.world.pos = (Vec3f)cue->startPos;   // s32 triple at cue+12 (vcvt)
            this->actor.world.rot.y = cue->rot[1];          // cue+8
            this->actor.shape.rot = this->actor.world.rot;  // +0xBC..C0
            this->actor.prevPos   = this->actor.world.pos;  // +0x108
        }
        this->cutsceneAction = idx;
        sCutsceneInitFuncs[idx](this, play, cue);           // 0x00526DCC
    }
    sCutsceneActionFuncs[idx](this, play, cue);             // 0x00526DE4
}
```

## The handlers (all decompiled to `build/decomp/<va>.c`)

| idx | init | action | semantics |
|-----|------|--------|-----------|
| 1 (0x24 Move) | `FUN_0016CA48` — **no transform change**; anim slot 7 (gallop), cutsceneAction=1; a conditional landing-nudge gated on actor flags +0xE40&7 (never set mid-demo) | `FUN_003CF3C4` (= the already-RE'd PathFollow_Update) | integrate toward cue endPos |
| 2 (0x25 Jump) | `FUN_00190A20` | `FUN_001033D4` | parabolic jump (unused by title cs) |
| 3 (0x26 Rearing) | `FUN_00190B48` | `FUN_0010360C` | rearing in place (unused by title cs) |
| 4 (0x40 WarpMove) | `FUN_002A8AF8` — **teleports**: pos = cue startPos (cue+0xC, s32→f32), prevPos, yaw = cue rot[1] (cue+8), shape.rot copy; anim: slot 0 if cue extra[0] == 40.0f else slot 7 (gallop) | `FUN_00230D84` — **byte-identical body to PathFollow_Update**: 3D dist to cue endPos (cue+0x18), `<= 8.0` snap+speed 0, else TurnToPoint cap 267 (`0x00230EB4 = 0x10B`) + speed 8.0 (`0x00230EB8 = 0x41000000`) | teleport then integrate |
| 5 (0x41 WarpRearing) | `FUN_002B6C00` — **teleports** (same startPos/yaw/shape/prevPos block); anim slot 3 (rearing), cutsceneAction=5 | `FUN_002535F0` — `speed_xz = 0` every frame; rest is anim/sfx | teleport then rear in place |

**There is NO distance-based teleport heuristic anywhere.** Teleports happen
in exactly two places: the dispatcher's first-cue seed, and the two Warp*
inits — i.e. on the TRANSITION INTO action 0x40/0x41. Consecutive same-index
cues (e.g. the title's chained 0x24 records at f1108) re-run only the action
func with the new record's endPos: if the rider hasn't reached the previous
endPos when the record rolls over, it simply keeps integrating toward the
new target from wherever it is. (This falsified the SoH3D port's `>100u ->
teleport` guess; live A/B showed ~170-200 u divergence on every such
boundary. Fixed in soh3d `title_rider.cpp` 2026-07-14.)

## Latch predicate reminder

The interpreter (`FUN_002c5ba0`) latches a cue record when
`startFrame < curFrame <= endFrame` (`cutscene_format.md`) — strict lower,
inclusive upper. A port using `[start, end)` runs every window one cs frame
early.

## Cross-check vs live oracle

soh3d `tools/title_rider_traj.py` (cs-frame-locked A/B, 2026-07-14): with
the dispatcher semantics ported, SoH's integrated rider trajectory matches
Az's 0x005AFFB0 world-pos mirror to within a ~1-2 cs-frame phase envelope
across the full dense window (cs 925-1130) and all cue-boundary crossings;
before the port, plain-0x24 boundaries diverged 170-200 u. See soh3d
`debug_journal/2026-07-14-title-rider-cs-dispatch-port.md` for the tables.

## Files

- `build/decomp/0026a30c.c` — dispatcher (Ghidra source of truth)
- `build/decomp/0016ca48.c`, `002a8af8.c`, `002b6c00.c`, `00230d84.c`,
  `002535f0.c`, `00190a20.c`, `00190b48.c`, `001033d4.c`, `0010360c.c`
- `tools/ghidra_scripts/SearchU32.py`, `FindConstInRange.py` — new
  reusable scripts (raw-value scan / movw-movt constant scan) written for
  this hunt.
- Port: soh3d `Shipwright/soh/src/zelda3d/behaviors/title/title_rider.cpp`
  (`TitleRider::step`) + `zelda3d_cutscene.cpp` (`Zelda3D_TitleCsRiderCue`
  latch predicate).
