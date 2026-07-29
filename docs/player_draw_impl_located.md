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

**Masks** `0x0053cbc4`: `{0x07, 0x38, 0x1C0, 0xE00, 0x3000, 0x1C000, 0xE0000, 0x700000}`
**Shifts** `0x0053cb1c`: `{0, 3, 6, 9, 12, 14, 17, 20}`

> **CORRECTION.** An earlier revision of this file called these the EQUIP tables "extended from 4
> entries to 8". They are not. They are N64's **`gUpgradeMasks` / `gUpgradeShifts`**, which already
> have eight entries and exactly these values — including the irregular `12 -> 14` step, because the
> wallet field is two bits wide, not three. The equip tables are a different, four-entry pair. The
> giveaway that settled it is that irregular step: a uniform three-bits-per-slot reading cannot
> produce it.

So the selector is `CUR_UPG_VALUE(UPG_STRENGTH)` — index 2 is `UPG_STRENGTH` in N64's `UpgradeType`
enum — and `gSaveContext + 0xb8` is `inventory.upgrades`, not `equips.equipment`.

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

## SOLVED by the N64 Rosetta stone — and this block is NOT what #201 e needs

Both open questions fell to reading N64's `Player_DrawImpl` (`Shipwright/soh/src/code/z_player_lib.c:1051`)
side by side with the 3DS body. The correspondence is exact:

| N64 `Player_DrawImpl` | 3DS `0x004c11f4` |
|---|---|
| `overrideLimbDraw != Player_OverrideLimbDrawGameplayCrawling` | `param_6 != 0x004c5214` |
| `gSaveContext.gameMode != GAMEMODE_END_CREDITS` | `gSaveContext[0x14e4] != 3` |
| `overrideLimbDraw != ...FirstPerson` | `param_6` vs `0x004c5378`, via the `player[0x29b8] & 2` / `player[0x1749] == 2` gate |
| `LINK_IS_ADULT` | `gSaveContext[4] == 0` |
| `strengthUpgrade = CUR_UPG_VALUE(UPG_STRENGTH)` | `iVar4 = (gSaveContext[0xb8] & mask[2]) >> shift[2]` |
| `if (strengthUpgrade >= 2)` — silver/gold gauntlets | `if (1 < iVar4)` |
| `gLinkAdultLeftGauntletPlate1DL` | mesh **4** |
| `gLinkAdultRightGauntletPlate1DL` | mesh **0x11** |
| `sLeftHandType == LH_OPEN ? Plate2 : Plate3` | mesh **5** or **6**, by `cfg[0x3c]` |
| `sRightHandType == RH_OPEN ? Plate2 : Plate3` | mesh **0x12** or **0x13**, by `cfg[0x40] == 8` |
| `if (boots != 0) sBootDListGroups[boots - 1]` | `param_4 != 0`, `base = 0x0053c74c + param_4*8`, read `-8`/`-4` |
| child: `Player_GetStrength() > PLAYER_STR_NONE` -> `gLinkChildGoronBraceletDL` | `else if (iVar4 != 0)` -> mesh **0xf** |

**(a) answered:** index 2 is `UPG_STRENGTH`, not a tunic and not a sword. `cfg` (`0x0053c924`) `+0x3c` /
`+0x40` are `sLeftHandType` / `sRightHandType`.

**(b) answered:** the table at `0x0053c74c` is **`sBootDListGroups`**, indexed `boots - 1`, and N64 has
exactly **two** entries (iron and hover; `boots == 0` is Kokiri and takes the `!= 0` early-out). So
`param_4` is the **boots** argument, the valid rows are `(35, 36)` and `(15, 22)`, and the third row I
read as `(2, 256)` is **past the end** — the `0x00000100` and `0xffcfffff` that looked wrong were
simply not part of this array.

### The important consequence

**This block has nothing to do with Link's sword.** It is gauntlet plates, boot pieces and the child's
Goron bracelet. Porting it would be a real and faithful port of *those* — but it would not fix
kanban **#201 e**, and shipping it as the fix would be a false claim.

The sword-and-sheath-on-the-back visibility lives in the **limb-draw override**, not here: on N64 that
is `Player_OverrideLimbDrawGameplayDefault` swapping the sheath/sword display lists per limb. The 3DS
twin is the next locate — `0x004c5378` (FirstPerson) and `0x004c5214` (Crawling) are already known, so
the DEFAULT override is a sibling of those two and should be cheap to find from the same call site in
`Player_Draw`.

## Remaining

1. Locate the 3DS `Player_OverrideLimbDrawGameplayDefault` twin (sibling of `0x004c5378` /
   `0x004c5214`) and RE its sheath/sword mesh selection — that is what #201 e needs.
2. Port that into a dedicated zelda3d module replacing the hand-curated `Zelda3D_LinkComputeMidMask`,
   and verify on the full user path: a Link with no sword must not show one on his back.
3. Separately (not #201 e, but now fully RE'd and cheap): port the gauntlet / boots / bracelet mesh
   selection documented above.

Ghidra sources: `build/decomp/004bf618.c` (Player_Draw), `004c11f4.c` (Player_DrawImpl),
`004c1c90.c` (Player_PostLimbDrawGameplay), `002b9bf8.c` (SetMeshVisible).

---

# The equipment-visibility driver — `0x004c4560` (this IS what #201 e needs)

Located 2026-07-28, after the `Player_DrawImpl` block turned out to be gauntlets/boots/bracelet.

## How it was found (three tools, and the one that worked was the third)

1. **fingerprint_match** correctly declined: `Player_OverrideLimbDrawGameplayDefault`'s literals are
   all common, so it has no constant fingerprint. The tool said so rather than guessing — that is a
   useful answer, not a failure.
2. **A register-write scan** over `Player_Draw` found which register carries `overrideLimbDraw`:
   `r8` is loaded unconditionally at `0x004bf640` with `0x004c2b04`, then conditionally overwritten
   with `0x004c5378` (FirstPerson, `ldrne`) or `0x004c5214` (Crawling, `ldrlo`). Confirmed by
   `0x004bfd00`, which reloads the same pool word and does `cmp r8, r0` — N64's
   `if (overrideLimbDraw == Player_OverrideLimbDrawGameplayDefault)`.
   So **`Player_OverrideLimbDrawGameplayDefault` = `0x004c2b04`** — and it is a FOUR-INSTRUCTION
   STUB (`push {r4,lr}; bl 0x3255f0; mov r0,#0; pop`). Grezzo did **not** port N64's per-limb
   display-list swapping. That is why looking for the sword there would have found nothing.
3. **A `bl` scan for every caller of `SetMeshVisible`** (`0x002b9bf8`) — 20 call sites in five
   functions:

   | function | calls | what it is |
   |---|---|---|
   | `0x004c11f4` | 9 | `Player_DrawImpl` — gauntlets / boots / bracelet (already RE'd) |
   | `0x004c1c90` | 1 | `Player_PostLimbDrawGameplay` |
   | **`0x004c4560`** | **6** | **the equipment-visibility driver — this one** |
   | `0x004c5378` | 2 | the FirstPerson override |
   | `0x004c71dc` | 2 | a helper called by the driver |

`0x004c4560` is called FIRST in `Player_DrawImpl`, before any of the gauntlet work.

## Structure

Anchors: `0x004c478c` -> `0x0053c924` (the `cfg` struct, `+0x38`/`+0x3c`/`+0x40`),
`0x004c4790` -> `0x00587958` (gSaveContext), `0x004c4794` -> `0x004dc388` (the per-mesh rule table),
`0x004c479c` -> `0x0053c5a8`, `0x004c47a0` -> `0x0053c6ec` (two more id tables),
`0x004c47a4` = `0x29b8` (a Player field offset, not an address).

```c
void Player_SetEquipmentVisibility(Player* this) {          // 0x004c4560
    cfg[0x3c] = this[0x1b4];                                 // sLeftHandType
    cfg[0x40] = this[0x1b5];                                 // sRightHandType
    model(this)[0xad] = 1;

    // BASE RULE: walk EVERY mesh and set its flag from a rule table.
    for (u32 i = 0; i < meshCount(this->model); i++) {
        // rule[] is 8 u32s at 0x004dc388, adult/child INTERLEAVED (stride 2 words).
        // i is tested against four of them for this age; any match -> flag 1, else flag 0.
        int a = gSaveContext[4];                       // linkAge: 0 adult, 1 child
        int hit = (rule[a] == i) || (rule[a+2] == i) || (rule[a+4] == i) || (rule[a+6] == i);
        SetMeshVisible(this, i, hit);
    }

    if (this[0x1749] == 1 && linkAge != 0 && this[0x1ac] == 6 && this[0x121c] < 2.25f)
        SetMeshVisible(this, 0x1a, 0);

    helper_004c71dc(this);                                   // 2 more SetMeshVisible calls

    // per-state mesh from a table, indexed by cfg[0x38] (which Player_DrawImpl sets to arg2 << 1)
    base = this[0x1bc];
    if (cfg[0x40] == 10)      base += this[0x1a6] * 0x10;
    else if (this[0x1b5] == 8 && this[0x6c] > 2.0f && !(this[0x1710] & 0x8000000)) {
        base = 0x0053c5a8 + linkAge * 4;  cfg[0x40] = 9;
    }
    SetMeshVisible(this, base[cfg[0x38]], 1);

    if (this[0x1b5] == 0xb || this[0x1b5] == 0xc)
        SetMeshVisible(this, *(u32*)(0x0053c6ec + linkAge * 0x30), 1);
    helper_004c70c4(this);
    if (this[0x1b5] == 0xb || this[0x1b5] == 0xc)
        SetMeshVisible(this, *(u32*)(0x0053c6ec + linkAge * 0x30), 1);
    ...
}
```

This is the real mechanism the hand-curated `Zelda3D_LinkComputeMidMask` stands in for: **every mesh
is hidden or shown from data every frame**, not from a curated list.

## Remaining before the port

1. ~~Decode the rule table at `0x004dc388`~~ **DONE, see below — but read the CORRECTION first.**
2. Decode the id tables at `0x0053c5a8` and `0x0053c6ec`, and the `this[0x1bc]` per-instance table.
3. RE the two helpers `0x004c71dc` and `0x004c70c4`.
4. Identify the Player fields used as selectors: `0x1b4`/`0x1b5` (hand types), `0x1ac`, `0x1a6`,
   `0x1749`, `0x121c`, `0x1710`, `0x6c`, `0x1bc`, `0x29b8`.
5. Port into a dedicated zelda3d module replacing `Zelda3D_LinkComputeMidMask`, and verify on the
   full user path: a Link with no sword must not show one on his back.


## CORRECTION + the rule table decoded

> The section above first described the base loop as "eight u32s per entry, four *is-zero* tests".
> That came from reading Ghidra's output, where the loop counter starts at 0 and the comparison
> renders as `uVar8 == uVar9`. The ARM says otherwise:
>
> ```
> 004c45c4  ldr   r0, [r8, #4]          ; r0 = gSaveContext[4] = linkAge
> 004c45c8  ldr   r1, [r7, r0, lsl #2]  ; rule[linkAge]
> 004c45cc  cmp   r1, r4                ; r4 = THE MESH INDEX, not zero
> ...       ldrne r1, [r0, #8]  / #0x10 / #0x18   ; rule[linkAge+2] / +4 / +6
> ```
>
> The four tests compare the table entries against **the mesh index**, so the table holds MESH
> INDICES, not flags. Also note `r6` (the table pointer) is loaded once before the loop and its
> `ldm r6!` / `sub r6, r6, #0x18` cancel out — the table is a SINGLE 32-byte record re-copied every
> iteration, not one record per mesh.

Contents of `0x004dc388`, read as adult/child interleaved pairs:

| slot | adult | child |
|---|---|---|
| 0 | 45 | 24 |
| 1 | 45 | 24 |
| 2 | 46 | 25 |
| 3 | 47 | 26 |

So the base loop sets the flag to 1 for exactly meshes {45, 46, 47} (adult) or {24, 25, 26} (child),
and 0 for every other mesh. Then the rest of the function turns specific further meshes to 1.

## RESOLVED — the flag is 1 = DRAWN, and the loop is a RESET stage

The apparent contradiction (the gauntlet block implies 1 = drawn; the base loop leaving three meshes
implies 1 = hidden) was an **ordering illusion**. `0x004c4560` does not stop at the loop — the loop is
the RESET stage of a full per-frame visibility rebuild, and everything after it turns meshes back on.

Decisive, and verified directly rather than taken on report:

| VA | body | role |
|----|------|------|
| `0x0037266c` | `if (i < info[0x68]) flags[i] = 1;` | **ShowMesh** |
| `0x0036932c` | `if (i < info[0x68]) flags[i] = 0;` | **HideMesh** |

Both write the same array (`*(*(m+0x14)+0x6c)`, count at `+0x68`) that `0x002b9bf8` writes — so
`0x002b9bf8` is simply `flags[i] = v`, i.e. Show-or-Hide chosen by its third argument.

The tail block of `0x004c4560` settles the polarity on its own: when a mode bit is set
(`player[0x29b8] & 2`, almost certainly first-person) it walks a static list of **0x1b or 0x30 mesh
indices and calls HideMesh on each**. Forcing ~27-48 meshes to 0 in first person is "hide Link's body
when the camera is inside his head" — coherent only if 0 = hidden and 1 = drawn. Under the opposite
reading it would mean "show most of Link only in first person", which is nonsense.

Supporting, same direction: `0x004c70c4` is literally select-one-and-mark-it —
`ldr r1,[r1,r2,lsl #2]; mov r2,#1; b 0x2b9bf8` — a show operation; `0x004c71dc` only ever passes 1;
and the conditional `f(this, 0x1a, 0)` at line 70 is a targeted hide in one state.

**A suspicion of mine was also falsified:** I thought the two call sites might write different arrays
(different `obj+0x27c`). They do not — `004c11f4.c:37` calls `func_0x004c4560(param_8, param_1)` and
the gauntlet calls pass the same `param_8`. Same pointer, same array.

### So the architecture is

Every draw: **reset** all mesh flags to 0 except the three age-specific core meshes
(adult {45,46,47}, child {24,25,26}), then **explicitly enable** what the current age, gear and state
require — the rest of `0x004c4560`, its helpers `0x004c71dc` / `0x004c70c4`, and `Player_DrawImpl`'s
equipment block. Visibility is rebuilt from data each frame; nothing persists.

That is exactly what our hand-curated `Zelda3D_LinkComputeMidMask` stands in for, and it is why a
curated mask can never be right for every state: the real system is a reset plus a set of enable
rules, not a list.

### Optional empirical closure (not required, the static case is closed)

One oracle RAM read: base `*(*(player+0x27c)+0x14)+0x6c`, count at `+0x68`. For adult Link with no
gauntlets, expect mostly 0s with 45/46/47 among the 1s and index 4 (gauntlet plate) at 0; equipping
gauntlets should flip index 4 to 1.


---

# The SWORD selector — helper `0x004c70c4` (this is #201 e's mechanism)

RE'd 2026-07-29. The base loop resets, `Player_DrawImpl` handles gauntlets/boots/bracelet, and THIS
helper is the one that decides which sword/sheath mesh is drawn.

## It decodes the equipped sword

```
004c70dc  ldrh  ip, [lr, #0x8a]     ; gSaveContext + 0x8a = equips.equipment (u16)
004c70e4  and   r3, r3, ip          ; & gEquipMasks[i]
004c70e8  ldrb  ip, [r4]            ; gEquipShifts[i]  -- a BYTE load
004c70ec  lsr   r4, r3, ip          ; >> shift
```

with, at `0x0053cb0c` and `0x0053cb08`:

| table | VA | contents |
|---|---|---|
| `gEquipMasks` (u16) | `0x0053cb0c` | `{0x000F, 0x00F0, 0x0F00, 0xF000}` |
| `gEquipNegMasks` (u16) | `0x0053cb14` | `{0xFFF0, 0xFF0F, 0xF0FF, 0x0FFF}` |
| `gEquipShifts` (**u8**) | `0x0053cb08` | `{0, 4, 8, 12}` |

These are N64's equip tables exactly. The helper uses **index 0**, mask `0x000F`, shift `0` — i.e.
`CUR_EQUIP_VALUE(EQUIP_TYPE_SWORD)`.

> Note the element size: Ghidra typed the shift table as `short` and rendered the read as
> `>> *psRam004c71c0`, which resolves to 1024 and is nonsense as a shift. The ARM is `ldrb` — a byte
> array. Reading the instruction rather than the decompiler's C is what makes this come out right, the
> same lesson as the `cmp r1, r4` correction earlier in this file.

**Do not confuse these with the tables at `0x0053cbc4` / `0x0053cb1c`** documented above: those are
`gUpgradeMasks` / `gUpgradeShifts` (eight 3-bit slots, used for `UPG_STRENGTH`). Two similar-looking
pairs live a few dozen bytes apart, and picking the wrong one silently swaps sword rules for strength
rules.

## It is the SHEATH selector — `player[0x1b6]` is `sSheathType`

The branch values are conclusive against N64's `z64player.h:310-313`:

| value | N64 enum | meaning |
|---|---|---|
| `0x10` | `PLAYER_MODELTYPE_SHEATH_16` | sheathed kokiri/master sword |
| `0x11` | `PLAYER_MODELTYPE_SHEATH_17` | empty sheath |
| `0x12` | `PLAYER_MODELTYPE_SHEATH_18` | sword sheathed **and shield on back** |
| `0x13` | `PLAYER_MODELTYPE_SHEATH_19` | empty sheath and shield on back |

So the helper's `if (cVar1 == 0x12 || cVar1 == 0x13)` is the shield-on-back pair, and the function as a
whole selects **what is worn on Link's back** — which is exactly the subject of #201 e.

That also names the contiguous quartet, matching N64's model-type group set by `Player_SetModelGroup`:

| Player offset | field |
|---|---|
| `+0x1b4` | `sLeftHandType` |
| `+0x1b5` | `sRightHandType` |
| `+0x1b6` | `sSheathType` |
| `+0x1b7` | `sWaistType` |

## The mesh tables it selects from

> **CORRECTION to the previous revision.** I read these as "six (adult, child) pairs". They are not.
> The final lookup is
> ```
> LAB_004c71a4:  iVar3 = *(int*)(iVar4 + cfg[0x38] * 4);   // cfg = 0x0053c924
> ```
> and `Player_DrawImpl` sets `cfg[0x38] = param_2 << 1` — which is N64's `sDListsLodOffset = lod * 2`.
> So the index is **`lod * 2`**, not the age, and `iVar4` is a row BASE chosen by state with a stride
> of **`0x10` (four u32s)**, selected by `player[0x1a6]`: `iVar4 = player[0x1c4] + player[0x1a6] * 0x10`,
> then `+0x40` or `+0x80`, or one of the fixed bases `0x0053c4d8` / `0x0053c4b8` / `0x0053c5e8`.
> Age enters through which BASE is chosen, not through the index.

`-1` is `SetMeshVisible`'s no-op sentinel — "draw nothing for this slot", exactly what an unequipped
sword needs. Rows of four u32s:

`0x0053c4b8`:

| row | adult | child |
|---|---|---|
| 0 | -1 | -1 |
| 1 | -1 | -1 |
| 2 | -1 | 13 |
| 3 | -1 | 13 |
| 4 | 42 | 21 |
| 5 | 42 | 21 |

`0x0053c4d8`:

| row | adult | child |
|---|---|---|
| 0 | 42 | 21 |
| 1 | 42 | 21 |
| 2 | 42 | 12 |
| 3 | 42 | 12 |
| 4 | 1 | 10 |
| 5 | 1 | 10 |

The rows with `-1` in the adult column of `0x0053c4b8` are the reason Link can legitimately have NO
sword mesh drawn — and the hand-curated `Zelda3D_LinkComputeMidMask` has no equivalent, which is why
#201 e shows a sword before it is picked up.

The helper also branches on `player[0x1b6]` (values 0x12 / 0x13), `player[0x1c4]`, `player[0x1a6]`,
`gSaveContext[4]` (linkAge), `gSaveContext[0x80]` and `player[0x29b8] & 0x4000`.

## Remaining before the port

1. ~~Pin the row index~~ **DONE** — `cfg[0x38] = lod * 2` (N64 `sDListsLodOffset`); rows are `0x10`
   apart and selected by `player[0x1a6]`.
2. ~~Which table is the back-worn one~~ **DONE** — this helper IS the back/sheath selector
   (`player[0x1b6]` = `sSheathType`).
3. ~~Name the remaining fields~~ **DONE — see below.**
4. Then port, and verify on the full user path: a Link with no sword must not show one on his back.

## The remaining fields, named off the N64 twin

N64's counterpart is the SHEATH limb case in `Player_OverrideLimbDrawGameplayDefault`
(`Shipwright/soh/src/code/z_player_lib.c:1425-1446`):

```c
if (!LINK_IS_ADULT &&
    ((this->sheathType == PLAYER_MODELTYPE_SHEATH_16) || (this->sheathType == PLAYER_MODELTYPE_SHEATH_17)) &&
    (gSaveContext.equips.buttonItems[0] != ITEM_SWORD_KOKIRI)) {
    dLists = &sSheathWithSwordDLs[PLAYER_SHIELD_MAX * 4];
}
*dList = dLists[sDListsLodOffset];
```

| 3DS | N64 | evidence |
|---|---|---|
| `player[0x1c4]` | `this->sheathDLists` | the per-instance group base the lookup starts from |
| `player[0x1a6]` | `this->currentShield` | row selector at stride `0x10` = 4 entries, matching `sSheathWithSwordDLs[shield * 4]` |
| `cfg[0x38]` | `sDListsLodOffset` | set as `lod * 2` by `Player_DrawImpl` |
| `gSaveContext[0x80]` | `gSaveContext.equips.buttonItems[0]` | compared against `0x3B` = `ITEM_SWORD_KOKIRI`, `0x3D` = `ITEM_SWORD_BGS`, `0x59` = `ITEM_FISHING_POLE` |
| the `+0x40` bump | `&sSheathWithSwordDLs[PLAYER_SHIELD_MAX * 4]` | `PLAYER_SHIELD_MAX` is 4, so that subscript is entry 16 = byte offset **0x40** |

The `cVar2 != ';'` test is therefore `buttonItems[0] != ITEM_SWORD_KOKIRI` — N64 line 1437 verbatim —
and `+0x40` is the same child-without-the-Kokiri-sword fallback row. `cVar2 == '='` in the adult
`SHEATH_16` arm is `buttonItems[0] == ITEM_SWORD_BGS`, the Biggoron's-sword case.

Still unnamed, and NOT needed for the sheath port: the `0x4000` and `0x80000` bits of
`player[0x29b8]` (a flags word; `0x4000` gates the `+0x40` fallback alongside the sword value, and
`0x80000` redirects the base to `0x0053c4d8` / `0x0053c5e8`).

### Port shape

```c
base = this->sheathDLists + this->currentShield * 4;      // u32 mesh ids, 4 per shield
if (<child && sheathType in {16,17} && buttonItems[0] != ITEM_SWORD_KOKIRI>)
    base = &sSheathWithSwordDLs_3ds[PLAYER_SHIELD_MAX * 4];
mesh = base[lod * 2];
if (mesh != -1) ShowMesh(this, mesh);                     // -1 = draw nothing
```

The `-1` rows are the entire point for #201 e: they are how OoT3D expresses "no sword on the back",
and the hand-curated `Zelda3D_LinkComputeMidMask` has no equivalent.

---

# THE #201 e FIX, stated precisely

N64 `z_player_lib.c:192-235` labels the two extra rows of both sheath arrays in a comment:

```c
Gfx* sSheathWithSwordDLs[(PLAYER_SHIELD_MAX + 2) * 4] = {
    ... PLAYER_SHIELD_NONE / DEKU / HYLIAN / MIRROR rows ...
    // PLAYER_SHIELD_NONE (child, no sword)
    NULL, NULL, NULL, NULL,
    // PLAYER_SHIELD_DEKU (child, no sword)
    NULL, gLinkChildDekuShieldWithMatrixDL, NULL, gLinkChildDekuShieldWithMatrixDL,
};
```

Those two rows are **byte-for-byte the 3DS table at `0x0053c4b8`**:

| row | 3DS `0x0053c4b8` | N64 |
|---|---|---|
| 0 | `-1, -1, -1, -1` | `NULL, NULL, NULL, NULL` — child, no sword, no shield -> **nothing on the back** |
| 1 | `-1, 13, -1, 13` | `NULL, ChildDekuShield, NULL, ChildDekuShield` — child, no sword, Deku shield -> **shield only** |

That is a positive identification of the table, not an inference: the NULL/value pattern matches at
every position, and `-1` is exactly `SetMeshVisible`'s no-op sentinel. So `0x0053c4b8` is
`&sSheathWithSwordDLs[PLAYER_SHIELD_MAX * 4]` — the fallback base — which also confirms the `+0x40`
arithmetic from the previous section independently.

## The rule Zelda3D is missing

```
if (child && sheathType in {SHEATH_16, SHEATH_17} && buttonItems[0] != ITEM_SWORD_KOKIRI)
        -> draw NOTHING on the back (Deku shield alone if that shield is equipped)
```

`Shipwright/soh/src/zelda3d/player/zelda3d_link.cpp` (`LinkMidMask::compute` / the shared
`linkAdultMidMask`) maps **every** `sheathType` to some sheath mesh — `SHEATH_17` falls through to
`EmptySheathNoShield`, and there is no "draw nothing" case anywhere in the enum. A `LinkGear`
carrying only {leftHand, rightHand, sheath, shield} cannot express it, because the deciding input —
`gSaveContext.equips.buttonItems[0]` — is not in the POD at all.

**That is why Link wears a sword he has not picked up.** It is not a wrong mesh id; it is a missing
state, and no amount of re-curating the mesh-id map can add it.

## Implementation notes for the port

1. `LinkGear` needs the B-button item (or at least a `hasKokiriSword` boolean) threaded through, since
   both the OoT adapter and the future MM one will need it.
2. The rule is age-specific: it fires only for the child. Adult Link keeps his current behaviour.
3. Prefer porting the TABLE shape (rows of four, indexed `lod*2`, with a `-1` sentinel and the
   fallback-row swap) over adding a special case to the enum chain — the table is what OoT3D actually
   runs, and it generalises to the other rows for free.
4. Verify on the FULL user path, not a forced state: a fresh child Link who has not picked up the
   Kokiri sword must show nothing on his back, and must show it again after he collects it.

---

# The gauntlet TINT — found, and it was in `Player_DrawImpl` all along

RE'd 2026-07-29, correcting my own earlier reading of this function.

I wrote that `Player_DrawImpl` "does not set any gauntlet colour". It does. The call sits in the
gauntlet block immediately BEFORE the visibility calls, and I had skipped over it as unrelated:

```c
iVar4 = 0x0053ca1c + strengthUpgrade * 0x10;
func_0x0033dd8c(iVar4[-0x20], iVar4[-0x1c], iVar4[-0x18], iVar4[-0x14],   // r, g, b, a
                player + 0x254, 0xe, 4, 0);                                // -> colour slot 0xe
```

The table at `0x0053ca1c`, four floats per row, indexed `strengthUpgrade * 0x10` and read at `-0x20`
(so upgrade 2 lands on row 0):

| upgrade | row | value | meaning |
|---|---|---|---|
| 2 — silver | `0x0053ca1c` | `(1.0, 1.0, 1.0, 1.0)` | **white — no tint at all** |
| 3 — gold | `0x0053ca2c` | `(0.996, 0.812, 0.059, 1.0)` = RGB **(254, 207, 15)** | gold |

Rows beyond those two decode as garbage (`7.5, -0.5, 7.5, 2.5`), so the array is exactly two entries
— the same length as N64's `sGauntletColors[strengthUpgrade - 2]`.

## Why our render looks the way it does

**Silver is correct today by accident.** Its tint is white, i.e. the identity, so applying no tint
produces exactly the right result — which is why the silver plates looked right in the verification
screenshots and gave no hint that a colour path was missing. Only gold is wrong, and only because
its tint is the one non-identity entry.

That is worth remembering as a general trap: a missing multiply is invisible wherever the factor
happens to be 1.

## To port

Apply a per-upgrade tint to the gauntlet meshes (4, 17, 5|6, 18|19): identity for silver,
`(254, 207, 15)/255` for gold. Our renderer already has a per-material constant override
(`matConst` -> `Zelda3DMatConstOv` in `Zelda3DRenderer::DrawModel`), which is the natural seam;
the gauntlet material's own TEV declares `combUsesConst=1 constIdx=5`, so that is the slot to fill.
Note OoT3D's target index in the call above is `0xe`, which is a different numbering from the CMB
material's `constIdx` — do not assume they are the same field without checking `func_0x0033dd8c`.
