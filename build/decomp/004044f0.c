// OoT3D decomp @ 004044f0  name=FUN_004044f0  size=168

void FUN_004044f0(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;

  iVar1 = (**(code **)(*param_1 + 0x20))(param_1);
  uVar2 = FUN_0030c550();
  iVar3 = FUN_0030b3ac(iVar1 + 4);
  if (iVar3 == 0) {
    FUN_0030c0dc(uVar2,1);
    FUN_0030b304(iVar1 + 4);
  }
  FUN_0030b174(param_1);
  iVar3 = DAT_0040459c;
  iVar1 = DAT_00404598;
  param_1[0x824] = 0;
  iVar4 = 0;
  do {
    iVar5 = iVar4 + 1;
    param_1[iVar4 * 4 + 0x826] = iVar1;
    param_1[iVar4 * 4 + 0x827] = iVar1;
    param_1[iVar4 * 4 + 0x829] = 0;
    param_1[iVar4 * 4 + 0x827] = iVar3;
    param_1[iVar4 * 4 + 0x828] = 1;
    iVar4 = iVar5;
  } while (iVar5 < 4);
  *(undefined1 *)((int)param_1 + 0x22de) = 1;
  return;
}
