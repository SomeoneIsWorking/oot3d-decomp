// OoT3D decomp @ 002fa834  name=FUN_002fa834  size=204

undefined4 FUN_002fa834(int param_1)

{
  uint uVar1;
  short sVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  uint uVar7;
  
  uVar4 = 0;
  uVar7 = 0;
  iVar3 = 0;
  do {
    sVar2 = *(short *)(param_1 + iVar3 * 2);
    uVar5 = uVar7;
    uVar1 = uVar4;
    if (sVar2 == 0x3a) break;
    uVar1 = uVar4 >> 0x18;
    uVar5 = (uint)(char)sVar2;
    iVar3 = iVar3 + 1;
    uVar4 = uVar5 | uVar4 << 8;
    uVar7 = uVar7 << 8 | uVar1 | (int)uVar5 >> 0x1f;
    uVar5 = 0;
    uVar1 = 0;
  } while (iVar3 < 8);
  if (uVar5 != 0 || uVar1 != 0) {
    iVar3 = 0;
    do {
      puVar6 = (uint *)(DAT_002fa900 + iVar3 * 0x10);
      if (uVar5 == puVar6[1] && uVar1 == *puVar6) {
        return *(undefined4 *)(DAT_002fa900 + iVar3 * 0x10 + 8);
      }
      if (uVar5 == puVar6[5] && uVar1 == puVar6[4]) {
        return *(undefined4 *)(DAT_002fa900 + iVar3 * 0x10 + 0x18);
      }
      iVar3 = iVar3 + 2;
    } while (iVar3 < 0x20);
  }
  return 0;
}

