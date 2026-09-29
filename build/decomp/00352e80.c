// OoT3D decomp @ 00352e80  name=FUN_00352e80  size=88

void FUN_00352e80(undefined4 *param_1)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  uVar1 = DAT_00352ed8;
  *param_1 = 0;
  param_1[1] = 0;
  param_1[2] = uVar1;
  param_1[3] = DAT_00352edc;
  *(undefined1 *)(param_1 + 4) = 0;
  iVar2 = 0;
  *(undefined1 *)((int)param_1 + 0x11) = 0;
  iVar3 = 0;
  do {
    param_1[iVar3 + 5] = 0;
    iVar2 = iVar2 + 2;
    param_1[iVar3 + 6] = 0;
    iVar3 = iVar3 + 2;
  } while (iVar2 < 0x20);
  param_1[0x25] = 0;
  return;
}
