# OoT3D Player_DrawImpl LOCATED — and the mesh-visibility mechanism found with it

RE'd 2026-07-28. This unblocks soh3d kanban **#201 e** (Link's sword visible on his back before he
picks it up) and frontier row `player.mesh-id-selection`, both of which were recorded as blocked
multi-session RE on a premise that turns out to be false.

## Addresses

| symbol | VA | how established |
|--------|----|-----------------|
| `Player_Draw` (the caller) | `0x004bf618` | contains the pool load below; its tail pool holds the floats `1.05 / 0.95 / 1.1`, which are N64 `Player_Draw`'s `Matrix_Scale(1.1f, 0.95f, 1.05f)` |
| `Player_DrawImpl` | **`0x004c11f4`** | `bl #0x4c11f4` at `0x004bfcfc`, immediately after the argument block below |
| `Player_PostLimbDrawGameplay` | `0x004c1c90` | loaded at `0x004bfcc8`, passed as the 10th argument |
| mesh-visibility setter | `0x002b9bf8` | called repeatedly from `Player_DrawImpl` as `f(player, meshId, 1)` |

## The blocked premise was WRONG, and that is the transferable lesson

`docs/re-frontier.md` recorded: *"the fn-ptr table @0x4bff48 is reached via base+offset, so Ghidra
FindRangeRefs finds zero code refs — needs data-flow or a live watchpoint locate. MULTI-SESSION."*

There is no fn-ptr table. `0x4bff34..0x4bff5c` is an ordinary **literal pool embedded in
`Player_Draw`'s tail**, and `0x4bff48` is one of its entries. It is read by a plain PC-relative load:

```
004bfcc8   ldr  r2, [pc, #0x278]      ; 0x4bfcc8 + 8 + 0x278 = 0x4bff48  -> 0x004c1c90
```

`FindRangeRefs` returned nothing because Ghidra had not disassembled that region **as code** — an
embedded pool in the middle of a function derails auto-analysis, so there were no references in the
Reference DB to find. The absence of refs was an instrument failure, not a property of the binary.

**Method that cracked it, worth reusing:** scan `code.bin` directly for `ldr rX, [pc, #imm]` whose
computed target (`va + 8 ± imm`) equals the address you care about. It is exact, takes seconds, and is
immune to the Reference-DB gap. Two earlier scans that found nothing — pool words pointing near the
table, and `movw`/`movt` pairs materialising its address — were themselves useful: they ruled out the
base+offset story before this scan confirmed the pool-literal one.

## The argument block (confirms the signature is N64's)

```
004bfcc4   add   r5, r4, #0x2000
004bfcc8   ldr   r2, [pc, #0x278]     ; &Player_PostLimbDrawGameplay
004bfccc   ldr   r0, [r5, #0x9b8]
004bfcd0   bic   r0, r0, #0x4000000   ; clears a flag in player[0x29b8]
004bfcd4   str   r0, [r5, #0x9b8]
004bfcd8   ldrsh r0, [r4, #0xc2]
004bfcdc   stm   sp, {r0, r8}         ; [sp+0] , [sp+4]
004bfce0   str   r2, [sp, #8]         ; postLimbDraw
004bfce8   str   r4, [sp, #0xc]       ; arg = this (Player*)
004bfcec   ldrsb r2, [r0, r4]
004bfcf0   ldrb  r3, [r4, #0x1b8]
004bfcf4   ldr   r1, [sp, #0xf8]
004bfcf8   mov   r0, sb
004bfcfc   bl    #0x4c11f4            ; Player_DrawImpl
```

Eleven arguments, the last two being `postLimbDraw` and `this` — matching N64's
`Player_DrawImpl(play, skeleton, jointTable, dListCount, lod, tunic, boots, face, overrideLimbDraw,
postLimbDraw, this)`.

## Mesh visibility — the mechanism #201 e needs

Inside `Player_DrawImpl` (`build/decomp/004c11f4.c`, lines ~39-86) the visibility of individual mesh
pieces is set by repeated calls to one setter:

```c
func_0x002b9bf8(player, <meshId>, 1);
```

Observed in the decompiled body:

- A guard `param_6 != iRam004c168c && *(int*)(iRam004c1690 + 0x14e4) != 3` gates the whole block.
- An index `iVar4 = (player[0xb8] & mask) >> shift` selects a branch — this is the equipment/state
  word being decoded, and it is the thing our hand-curated mask is standing in for.
- When `iVar4 > 1`: ids **4** and **0x11** always; then **5** or **6** by `iVar7[0x3c]`; then **0x12**
  or **0x13** by `iVar7[0x40] == 8`. Each pair is an either/or variant of the same slot.
- A second, TABLE-driven pair when `param_4 != 0`: `base = iRam004c16a0 + param_4*8`, then two ids
  read from `base-8` and `base-4`. `param_4` is the 4th argument (N64 `dListCount`/`lod` position —
  confirm which before porting).
- The `else if (iVar4 != 0)` arm sets id **0xf** only.
- Both arms are further gated by `player[0x29b8] & 2` and, when set, `player[0x1749] == 2`.

## `func_0x002b9bf8` @ 0x002b9bf8 — it IS SetMeshVisible (step 1, DONE)

```c
void SetMeshVisible(void* obj, int meshIndex, int visible) {
    if (meshIndex == -1) return;                      // sentinel: "no mesh"
    int info = *(int*)(*(int*)(obj + 0x27c) + 0x14);  // obj -> model -> mesh info
    if (meshIndex < *(int*)(info + 0x68))             // bounds-check against mesh count
        *(u8*)(*(int*)(info + 0x6c) + meshIndex) = visible ? 1 : 0;   // one byte per mesh
}
```

So visibility is a plain **byte array, one entry per mesh, indexed by the mesh's position in the CMB**
— not an opaque id space. That matters for the port: no id-translation table should be needed, our
CMB `mesh_id` is the same index. `-1` is the "nothing here" sentinel and appears in the data tables,
so the port must honour it rather than treating it as index 0xFFFF.

## Pool anchors resolved (step 2, mostly DONE)

| Ghidra name | value | what it is |
|---|---|---|
| `iRam004c1684` | `0x0053c924` | config struct (`+0x38` written, `+0x3c`/`+0x40` read as selectors) |
| `iRam004c1688` | `0x004c5378` | a function address, compared against arg 6 — the `overrideLimbDraw == default` test |
| `iRam004c168c` | `0x004c5214` | a second function address, same kind of comparison |
| `iRam004c1690` | `0x00587958` | **gSaveContext** (`+4` = linkAge, `+0xb8` = the equipment bitfield) |
| `iRam004c1694` | `0x0053cbc4` | **equip MASK table** |
| `iRam004c1698` | `0x0053cb1c` | **equip SHIFT table** |
| `iRam004c169c` | `0x0053ca1c` | a 0x10-stride table indexed by the equip value |
| `iRam004c16a0` | `0x0053c74c` | **the mesh-id PAIR table** |

**Equip masks** `0x0053cbc4`: `{0x07, 0x38, 0x1C0, 0xE00, 0x3000, 0x1C000, 0xE0000, 0x700000}`
**Equip shifts** `0x0053cb1c`: `{0, 3, 6, 9, 12, 14, 17, 20}`

These are N64's `gEquipMasks` / `gEquipShifts` (`{0x0007,0x0038,0x01C0,0x0E00}` / `{0,3,6,9}`)
**extended from 4 entries to 8** — the first four are identical, so the encoding is the same
three-bits-per-slot bitfield, with four extra slots Grezzo added.

The selector in `Player_DrawImpl` reads **index 2** of both tables:
`equipValue = (gSaveContext[0xb8] & 0x1C0) >> 6`.

**Mesh-id pair table** `0x0053c74c`, entries of 8 bytes (two u32 mesh indices), addressed as
`base + n*8` then read at `-8` and `-4`, i.e. **1-based**:

| n | pair |
|---|------|
| 1 | (35, 36) |
| 2 | (15, 22) |
| 3 | (2, 256) |

The `256` and the `0xffcfffff` at `+0x1c` suggest the table ends at n=2 or n=3 and the later words
belong to something else — **bound it before porting** (find the other reader, or the array's
declared length).

## OPEN — resolve before porting

**Which equip slot is index 2?** On N64 the enum is `SWORD=0, SHIELD=1, TUNIC=2, BOOTS=3`, which would
make this the TUNIC — but the block it gates sets back-worn meshes and reads `linkAge`, which is
sword/sheath behaviour, and OoT3D's table has 8 slots so the enum is demonstrably NOT N64's. Do not
assume; identify slot 2 from another call site of the same mask/shift tables (scan `code.bin` for pool
words equal to `0x0053cbc4` / `0x0053cb1c` and read the contexts), or from a live `gSaveContext[0xb8]`
with known equipment. A wrong guess here silently swaps sword rules onto the tunic.

## Remaining

3. Bound the pair table, settle the equip-slot question, and map the branch structure:
   adult (`linkAge == 0`) with `equipValue > 1` sets meshes 4 and 0x11 always, then 5 **or** 6 by
   `cfg[0x3c]`, then 0x12 **or** 0x13 by `cfg[0x40] == 8`; child sets mesh 0xf when `equipValue != 0`.
   Both arms are additionally gated by `player[0x29b8] & 2` and, when set, `player[0x1749] == 2`.
4. Port into a zelda3d module replacing the hand-curated `Zelda3D_LinkComputeMidMask`, and verify on
   the full user path: a Link with no sword must not show one on his back.

Ghidra sources: `build/decomp/004bf618.c` (Player_Draw), `004c11f4.c` (Player_DrawImpl),
`004c1c90.c` (Player_PostLimbDrawGameplay).
