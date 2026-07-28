# OoT3D actor shadows — the MATH is faithful to N64; only the DRAW MECHANISM is 3DS-specific

RE'd 2026-07-28 from `build/code.bin` (Ghidra headless + literal-pool signature search), prompted by
soh3d kanban #206 / frontier row `player.shadow-strength`: after #206 restored Link's feet shadow, the
measured contrast was still far short of the oracle (0.91 vs 0.65 of surrounding grass), so the
question was whether OoT3D draws something else.

**It does not.** Every piece of shadow MATH in OoT3D is N64's, unchanged. Only the final draw call is
substituted (a cached 3DS model object instead of a display list), plus a 1.5-unit z-fight lift.

| function | VA | verdict |
|----------|----|---------|
| `ActorShadow_DrawFeet`  | `0x001d04f4` | **faithful port of N64** — same structure, same constants |
| `ActorShadow_DrawCircle`| `0x0033e800` | (called by DrawFeet's `distToFloor > 20` branch) |
| `ActorShadow_DrawFoot`  | `0x0033e450` | **faithful too** — see the correction below |

> **CORRECTION (same day, before anything was built on it).** The first version of this document
> called `0x0033e450` "`ActorShadow`, rewritten by Grezzo", and listed its light-yaw rotation, its
> `4.5 - dir.y*0.035` stretch and its `1 - w*alpha/255` darkening as 3DS-only behaviours to port.
> That was wrong. `0x0033e450` is N64's **`ActorShadow_DrawFoot`**, and SoH already implements all
> three — see `Shipwright/soh/src/code/z_actor.c:160`, which has the same `arg3 * 0.00005f` clamp,
> the same `Math_FAtan2F(light->l.dir[0], light->l.dir[2])`, and the same
> `4.5f - (light->l.dir[1] * 0.035f)` clamped at 1. The two colour encodings are the same quantity:
> N64 blends black at `alpha = min(1, w*5e-5) * shadowAlpha`, giving `dst * (1 - alpha/255)`; the 3DS
> multiplies by `grey = 1 - min(1, w*5e-5) * shadowAlpha/255`. Identical result.
> So the measured 0.91-vs-0.65 contrast gap is **not** explained by this function, and porting from
> the original write-up would have re-implemented code that already exists. The real cause is still
> open — the live INPUTS (light weight, light direction, `shadowAlpha`, the floor query) are the
> place to look, not the formula.

## How they were located

`ActorShadow_DrawFeet`'s literal pool is a fingerprint no other function has: `20.0, 1.0, 0.3, 20.0,
0.02, 200.0, 50.0, 0.0, 0.0333333, 30.0, 0.0142857, -1.0, 500.0, 30.0` at `0x001d0828..0x001d085c`.
`0.0142857` is N64's `1.0f / (30.0f + 40.0f)` and `0.0333333` is its `1.0f / 30.0f` — searching
code.bin for a 4-byte-aligned window holding `500.0f` + `0.02f` + `200.0f` returned exactly two
candidates, and only this one carries the two reciprocals.

The Actor field offsets fall straight out of the body and confirm the ActorShape base independently
of `docs/actor_layout.md` (which stops before ActorShape):

| Actor off | field                | N64 ActorShape off |
|-----------|----------------------|--------------------|
| `+0x2c`   | `world.pos.y`        | —                  |
| `+0x54`   | `scale.x`            | —                  |
| `+0x84`   | `floorHeight`        | —                  |
| `+0x90`   | `bgCheckFlags` (u16) | —                  |
| `+0xbc`   | `shape.rot`          | `+0x00`            |
| `+0xc4`   | `shape.yOffset`      | `+0x08`            |
| `+0xc8`   | `shape.shadowDraw`   | `+0x0c`            |
| `+0xcc`   | `shape.shadowScale`  | `+0x10`            |
| `+0xd0`   | `shape.shadowAlpha`  | `+0x14`            |
| `+0xd1`   | `shape.feetFloorFlags`| `+0x15`           |
| `+0xd4`   | `shape.feetPos[2]`   | `+0x18`            |

(`+0xbe` = `shape.rot.y` and `+0xc4` = `shape.yOffset` were already recorded in `docs/player_port.md`,
so ActorShape base `+0xbc` was the starting guess and the decomp confirms every following field.)

## `ActorShadow_DrawFeet` @ 0x001d04f4 — nothing to port

Structurally identical to N64 `z_actor.c`: the `distToFloor > 20.0f` branch that shrinks the scale by
`0.3` and fades alpha by `(distToFloor - 20.0f) * 0.02f` before calling `ActorShadow_DrawCircle`; the
`distToFloor < 200.0f` branch that raises each `feetPos` by `50.0f` to query the floor, clears and
rebuilds `feetFloorFlags`, rejects feet outside `[-1.0f, 500.0f)`, clamps `distToFloor` to `30.0f`,
and derives `shadowAlpha * (1 - d/30)` and `1 - d/70`; the `bgCheckFlags & 1` / `feetFloorFlags == 3`
tail that picks 1 or 2 by comparing the two feet's floor heights. The light loop splits the same way
(`lights->numLights - 2`, then the last two).

**So the difference is NOT in the feet-shadow logic.** Grezzo left it alone.

## `ActorShadow_DrawFoot` @ 0x0033e450 — same math, substituted draw

N64 ends this function with `gSPDisplayList(gFootShadowDL)`. OoT3D instead draws a **3D model
object**, lazily created and cached in a per-actor slot array at `actor + 0x17c`:

```
slot = actor + shadowIndex*4;          // shadowIndex = foot*3 + k, passed by DrawFeet
if (slot[0x17c] == 0) {                // first draw for this slot: build the model object
    ...
    handle = func_00358ef8(archive + 0x10, 0x51);        // asset id 0x51 out of the archive
    slot[0x17c] = (*factory->vtable[2])(factory, handle, 0);
}
```

Then, per draw (pool constants read out of code.bin, all confirmed):

```
lightFrac = min(1.0f, lightWeight * 5e-05f);             // 5e-05 = 1/20000
grey      = 1.0f - lightFrac * shadowAlpha * (1/255.0f);
if (grey >= 1.0f) return;                                // fully lit -> nothing to draw

setColour(model, {grey, grey, grey, grey});              // MULTIPLICATIVE darkening, not alpha-blend
model->flag_0x0e = 1;

yaw     = atan256(light->dir.x, light->dir.z) * (PI/128) // 0.0245437 = 2*PI/256
stretch = max(1.0f, 4.5f - light->dir.y * 0.035f);       // low light -> up to 4.5x long

M = floorMtx;                                            // from func_800BFCB8's floor query
Matrix_Translate(M, 0.0f, 1.5f, 0.0f);                   // lift off the floor (z-fight guard)
Matrix_RotateY(M, yaw);                                  // point the shadow away from the light
Matrix_Scale(M, s, 1.0f, s * stretch);                   // s = shadowScale * actor->scale.x * (1 - d/70)
model->matrix = M; model->flag_0xac = 1;
pushToRenderQueue(play, model);
```

`atan256` is `FUN_0033f114` — an atan2 whose quadrant constants are `±64` / `±128`, i.e. it returns a
**float in 256-units-per-turn**, which is why the multiplier is `PI/128` and not `PI/32768`.

### What is actually 3DS-specific here

Only two things, and neither is likely to move the contrast much:

1. **The draw target.** A cached model object (asset `0x51`) instead of `gFootShadowDL`. Whatever
   texture that model carries is the one real unknown — a larger or darker shadow sprite would show
   up exactly as the measured gap does.
2. **`Matrix_Translate(0, 1.5, 0)`** before the rotate/scale, which N64 does not do. That is a
   z-fighting guard, not a visual difference.

The rotation, the stretch and the darkening are all N64 behaviour that SoH already has. There is no
soft-shadow pass, no blur and no shadow map anywhere in this path.

### So where does the measured gap come from?

Open. The formula being identical on both sides means the divergence is in the INPUTS or in the
sprite. Ranked candidates for the next session:

- **`lightWeight`** — `DrawFeet` passes `(col.r + col.g + col.b) * dir.y` per light, and
  `min(1, w * 5e-5)` saturates at 20000. If our scene lighting produces a smaller weight (fewer
  lights, dimmer colours, or a different `dir.y`), the shadow fades in exactly this way. Measure it
  live on both sides before touching anything — several lighting rows in `docs/parity-map.md` are
  CLOSED and off-limits to tuning.
- **`light->l.dir[1]`** — also drives the `4.5 - dir.y*0.035` stretch. Our shadow reads round and
  small while the oracle's is long, which is the signature of a different `dir.y`, not of a missing
  formula.
- **`shadow asset 0x51`** vs `gFootShadowDL` — a different sprite (size, softness, opacity ramp).
- **`shape.shadowAlpha` / `shadowScale`** as Player installs them on each side.

## Open

- **Asset `0x51`** — the shadow model handle. Which archive `archive + 0x10` is (`FUN_00358ef8`'s
  first arg comes from `iRam0033e690`-indexed play state), and what the CMB/asset actually is, is not
  yet identified. Needed for a fully faithful port; a port could start from the transform + colour
  math with our existing shadow texture and still capture reasons 1-3 above.
- `ActorShadow_DrawCircle` @ `0x0033e800` is dumped (`build/decomp/0033e800.c`) but not yet read
  through; it feeds the same `ActorShadow`, so it should inherit the same three behaviours.
- `func_00368704` / `func_003687a8` / `func_00372170` (render-queue push, matrix put, release) are
  the generic 3DS draw plumbing, not shadow-specific.

Ghidra sources: `build/decomp/001d04f4.c`, `0033e450.c`, `0033e800.c`, `0033f114.c`.
