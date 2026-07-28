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

## OPEN — the flag's POLARITY, and do not assume it

`SetMeshVisible(obj, i, v)` was named from context; all the code actually does is
`flags[i] = (v != 0)`. Which way that reads is **not established**, and the two readings give
opposite ports:

* **flag 1 = visible.** Then the base loop leaves only three meshes drawn and the later calls add a
  few more. That is only sensible if Link's CMB is mostly swappable variant pieces.
* **flag 1 = hidden/skip.** Then the base loop hides exactly the three age-specific variant meshes
  and shows everything else, with the later calls hiding more. This fits a "cull the variants you
  are not currently wearing" design.

Settle it before porting, by finding the consumer: the array is at `*(*(obj+0x27c)+0x14) + 0x6c`
with its count at `+0x68`, so scan for readers of those offsets in the mesh-draw path — or read the
array live out of the oracle for a Link whose visible parts are known. Guessing here inverts the
entire port.
