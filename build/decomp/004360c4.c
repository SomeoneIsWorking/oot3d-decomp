// OoT3D decomp @ 004360c4  name=FUN_004360c4  size=340

undefined4 FUN_004360c4(int param_1,int param_2,int param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  ushort uVar6;
  int iVar7;
  uint uVar8;
  undefined4 uVar9;
  
  if (param_2 == 0) {
    param_2 = 1;
  }
  uVar8 = param_2 + 3U & 0xfffffffc;
  uVar6 = ~*(ushort *)(param_1 + 0x36) & 1;
  if (param_3 < 0) {
    iVar7 = *(int *)(param_1 + 0x28);
    iVar1 = 0;
    uVar3 = 0xffffffff;
    if (iVar7 == 0) {
      return 0;
    }
    uVar2 = 0;
    do {
      uVar4 = *(uint *)(iVar7 + 4);
      uVar5 = (uVar4 + iVar7 + 0x10) - uVar8 & ~(0xffffffffU - param_3);
      if (((-1 < (int)(uVar5 - (iVar7 + 0x10))) && (uVar4 < uVar3)) &&
         ((iVar1 = iVar7, uVar6 != 0 || (uVar2 = uVar5, uVar3 = uVar4, uVar4 == uVar8)))) break;
      uVar5 = uVar2;
      iVar7 = *(int *)(iVar7 + 8);
      uVar2 = uVar5;
    } while (iVar7 != 0);
    if (iVar1 == 0) {
      return 0;
    }
    uVar9 = 1;
  }
  else {
    iVar1 = 0;
    iVar7 = *(int *)(param_1 + 0x24);
    uVar3 = 0xffffffff;
    if (iVar7 == 0) {
      return 0;
    }
    uVar2 = 0;
    do {
      uVar5 = (iVar7 + 0x10 + param_3) - 1U & ~(param_3 - 1U);
      uVar4 = *(uint *)(iVar7 + 4);
      if ((((uVar5 - (iVar7 + 0x10)) + uVar8 <= uVar4) && (uVar4 < uVar3)) &&
         ((iVar1 = iVar7, uVar6 != 0 || (uVar3 = uVar4, uVar2 = uVar5, uVar4 == uVar8)))) break;
      uVar5 = uVar2;
      iVar7 = *(int *)(iVar7 + 0xc);
      uVar2 = uVar5;
    } while (iVar7 != 0);
    if (iVar1 == 0) {
      return 0;
    }
    uVar9 = 0;
  }
  uVar9 = FUN_0044a2a0(param_1 + 0x24,iVar1,uVar5,uVar8,uVar9);
  return uVar9;
}

