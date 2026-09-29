// OoT3D decomp @ 002fbfa8  name=FUN_002fbfa8  size=276

undefined4 FUN_002fbfa8(int param_1)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  int iVar9;
  undefined1 auStack_28 [4];
  undefined1 auStack_24 [4];
  undefined4 local_20;

  iVar9 = 0;
  uVar5 = 0;
  uVar8 = 0;
  iVar3 = 0;
  do {
    uVar4 = (uint)*(char *)(param_1 + iVar3);
    if (uVar4 == 0x3a) goto LAB_002fbff4;
    uVar1 = uVar8 >> 0x18;
    iVar3 = iVar3 + 1;
    uVar8 = uVar4 | uVar8 << 8;
    uVar5 = uVar5 << 8 | uVar1 | (int)uVar4 >> 0x1f;
  } while (iVar3 < 8);
  uVar8 = 0;
  uVar5 = 0;
LAB_002fbff4:
  if (uVar5 != 0 || uVar8 != 0) {
    iVar6 = 0;
    do {
      puVar7 = (uint *)(DAT_002fc0bc + iVar6 * 0x10);
      if (uVar5 == puVar7[1] && uVar8 == *puVar7) {
        iVar9 = *(int *)(DAT_002fc0bc + iVar6 * 0x10 + 8);
        break;
      }
      if (uVar5 == puVar7[5] && uVar8 == puVar7[4]) {
        iVar9 = *(int *)(DAT_002fc0bc + iVar6 * 0x10 + 0x18);
        break;
      }
      iVar6 = iVar6 + 2;
    } while (iVar6 < 0x20);
  }
  if (iVar9 != 0) {
    local_20 = *(undefined4 *)(DAT_002fc0c4 + 0xc);
    uVar2 = FUN_00435dfc(&local_20,iVar3,*(undefined4 *)(iVar9 + 8),*(undefined4 *)(iVar9 + 0xc),0,
                         auStack_24,1,auStack_28,1);
    return uVar2;
  }
  return DAT_002fc0c0;
}
