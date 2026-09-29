// OoT3D decomp @ 00426c80  name=FUN_00426c80  size=448

void FUN_00426c80(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;

  iVar3 = FUN_00444c9c();
  uVar2 = DAT_00426e44;
  uVar1 = DAT_00426e40;
  if (iVar3 != 0) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + (iVar3 + 5) * 4 + 0xaf8);
      *(undefined1 *)(iVar4 + 0x6c) = 1;
      FUN_00344670(iVar4,iVar3 + 0xf);
      *(undefined4 *)(iVar4 + 0x80) = uVar1;
      *(undefined4 *)(iVar4 + 0x84) = uVar2;
      FUN_00307840(param_1 + 0x2e0,1,iVar3 + 5,0x14,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 9);
    FUN_00344670(*(undefined4 *)(param_1 + 0xc60),0xcd);
    iVar3 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 0;
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
    *(undefined1 *)(param_1 + 0x1155) = 0;
    iVar3 = 0;
    do {
      FUN_00307840(*(int *)(param_1 + 0x1178) + 0x2e0,1,*(int *)(param_1 + 0x1180) + iVar3,3,1);
      iVar3 = iVar3 + 1;
    } while (iVar3 < 4);
    FUN_00307770(param_1 + 0x1174);
    *(undefined1 *)(param_1 + 0x118d) = 0;
    FUN_00344670(*(undefined4 *)(param_1 + 0xb68),0x26);
    FUN_00344670(*(undefined4 *)(param_1 + 0xb7c),0x27);
    FUN_002fda08(param_1 + 0x1158);
    if (*(int *)(param_1 + 0x10) != -1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    *(undefined1 *)(param_1 + 8) = 0xd;
  }
  return;
}
