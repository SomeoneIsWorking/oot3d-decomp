# OoT3D actor shadows — `ActorShadow_DrawFeet` is faithful, `ActorShadow` is a Grezzo REWRITE

RE'd 2026-07-28 from `build/code.bin` (Ghidra headless + literal-pool signature search), prompted by
soh3d kanban #206 / frontier row `player.shadow-strength`: after #206 restored Link's feet shadow, the
measured contrast was still far short of the oracle (0.91 vs 0.65 of surrounding grass), so the
question was whether OoT3D draws something else. It does — but not where you would expect.

| function | VA | verdict |
|----------|----|---------|
| `ActorShadow_DrawFeet`  | `0x001d04f4` | **faithful port of N64** — same structure, same constants |
| `ActorShadow_DrawCircle`| `0x0033e800` | (called by DrawFeet's `distToFloor > 20` branch) |
| `ActorShadow`           | `0x0033e450` | **REWRITTEN for the 3DS** — this is the whole difference |

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

## `ActorShadow` @ 0x0033e450 — the rewrite

N64's `ActorShadow` sets a primitive colour and `gSPDisplayList(gCircleShadowDL)` — a flat
alpha-blended texture quad on an ortho-ish floor matrix. OoT3D throws that out and draws a **3D model
object**, lazily created and cached per shadow slot:

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

### Why this reads darker AND longer than ours

Three separate reasons, all absent from the N64 path SoH inherits:

1. **Multiplicative grey, not an alpha-blended black texture.** `grey = 1 - lightFrac*alpha/255` is
   applied as a colour on a model whose blend darkens what is under it. At full light weight and
   `shadowAlpha = 255` that is a hard `0.0` — pure black — where the N64 texture's own alpha ramp
   never gets there.
2. **Directional stretch up to 4.5x.** The shadow elongates along the light's azimuth as the light
   drops. Ours is always a circle. This is the large soft region visible to Link's lower-left in
   `soh3d scratch/screenshots/oracle_kday.png` — not terrain shading, as it first appears.
3. **It rotates to face the light** (`atan256(dir.x, dir.z)`), so the stretch points the right way.

There is no soft-shadow / blur pass and no shadow map; the softness is the model's own texture.

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
