// OoT3D decomp @ 004a1c2c  name=FUN_004a1c2c  size=248

undefined4 FUN_004a1c2c(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_002bfffc(*(undefined4 *)(param_1 + 4));
  if (iVar1 == 0) {
    return 0xe;
  }
  iVar1 = *(int *)(iVar1 + 0x74);
  iVar2 = *(int *)(iVar1 + 4);
  if (iVar2 != 1) {
    if (iVar2 == 2) {
      *param_3 = 1;
      param_3[1] = *(undefined4 *)(iVar1 + 0x10);
      param_3[2] = *(undefined4 *)(iVar1 + 0x14);
      param_3[3] = *(undefined4 *)(iVar1 + 0x18);
      return 0;
    }
    if (iVar2 != 3) {
      if (iVar2 == 4) {
        *param_3 = 2;
        param_3[1] = *(undefined4 *)(iVar1 + 0x10);
        return 0;
      }
      return 7;
    }
  }
  *param_3 = 0;
  param_3[1] = *(undefined4 *)(iVar1 + 0x10);
  param_3[3] = *(undefined4 *)(iVar1 + 0x14);
  param_3[4] = *(undefined4 *)(iVar1 + 0x18);
  param_3[5] = *(undefined4 *)(iVar1 + 0x1c);
  param_3[6] = *(undefined4 *)(iVar1 + 0x20);
  param_3[7] = *(undefined4 *)(iVar1 + 0x24);
  param_3[8] = *(undefined4 *)(iVar1 + 0x28);
  if (*(int *)(iVar1 + 4) == 3) {
    param_3[2] = *(undefined4 *)(iVar1 + 0x2c);
    param_3[9] = *(undefined4 *)(iVar1 + 0x30);
  }
  else {
    param_3[2] = 6;
    param_3[9] = 0;
  }
  return 0;
}
