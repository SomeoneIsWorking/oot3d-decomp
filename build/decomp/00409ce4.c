// OoT3D decomp @ 00409ce4  name=FUN_00409ce4  size=544

void FUN_00409ce4(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar3 = 0;
  do {
    iVar5 = param_1 + 0x2e0 + iVar3 * 4;
    iVar3 = iVar3 + 1;
    iVar4 = *(int *)(iVar5 + 0x418);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0x6c) = 0;
    }
    iVar4 = *(int *)(iVar5 + 0x818);
    if (iVar4 != 0) {
      *(undefined1 *)(iVar4 + 0x6c) = 0;
    }
    uVar2 = DAT_00409f08;
    uVar1 = DAT_00409f04;
  } while (iVar3 < 0x100);
  iVar3 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xafc) + 0x6c) = 0;
  do {
    iVar4 = *(int *)(param_1 + (iVar3 + 5) * 4 + 0xaf8);
    if (iVar3 - 3U < 3) {
      *(undefined1 *)(iVar4 + 0x6c) = 0;
    }
    else {
      *(undefined1 *)(iVar4 + 0x6c) = 1;
      FUN_00344670(iVar4,iVar3 + 5);
      *(undefined4 *)(iVar4 + 0x80) = uVar1;
      *(undefined4 *)(iVar4 + 0x84) = uVar2;
    }
    iVar3 = iVar3 + 1;
  } while (iVar3 < 9);
  FUN_00344670(*(undefined4 *)(param_1 + 0xb68),0x23);
  FUN_00344670(*(undefined4 *)(param_1 + 0xb7c),0x24);
  FUN_00344670(*(undefined4 *)(param_1 + 0xc60),200);
  *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 0;
  uVar1 = DAT_00409f0c;
  *(undefined4 *)(param_1 + 0x1134) = DAT_00409f0c;
  *(undefined4 *)(param_1 + 0x1150) = uVar1;
  *(undefined4 *)(param_1 + 0x116c) = uVar1;
  iVar3 = 0;
  *(undefined4 *)(DAT_00409f10 + param_1) = 0xffffffff;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1124) + 0x2e0,1,*(int *)(param_1 + 0x112c) + iVar3,5,1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_00307770(param_1 + 0x1120);
  *(undefined1 *)(param_1 + 0x1139) = 0;
  iVar3 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1140) + 0x2e0,1,*(int *)(param_1 + 0x1148) + iVar3,5,1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_00307770(param_1 + 0x113c);
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x1155) = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x115c) + 0x2e0,1,*(int *)(param_1 + 0x1164) + iVar3,3,1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  FUN_00307770(param_1 + 0x1158);
  iVar3 = 0;
  *(undefined1 *)(param_1 + 0x1171) = 0;
  do {
    FUN_00307840(param_1 + 0x2e0,1,iVar3 + 0x41,iVar3 + 9,1);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 4);
  *(undefined1 *)(param_1 + 8) = 3;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  return;
}
