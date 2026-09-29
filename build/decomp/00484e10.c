// OoT3D decomp @ 00484e10  name=FUN_00484e10  size=292

void FUN_00484e10(int *param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;

  iVar3 = 0;
  do {
    iVar1 = 0;
    do {
      if ((int *)param_1[iVar3 * 4 + iVar1 + 0xd] != (int *)0x0) {
        (**(code **)(*(int *)param_1[iVar3 * 4 + iVar1 + 0xd] + 4))();
      }
      if (param_1[iVar3 * 4 + iVar1 + 0x21] != 0) {
        FUN_0034fc6c();
      }
      param_1[iVar3 * 4 + iVar1 + 0xd] = 0;
      param_1[iVar3 * 4 + iVar1 + 0x21] = 0;
      iVar2 = iVar1 + 1;
      param_1[iVar3 * 4 + iVar1 + 0x2d] = 0;
      param_1[iVar3 * 4 + iVar1 + 0x39] = 0;
      iVar1 = iVar2;
    } while (iVar2 < 4);
    iVar3 = iVar3 + 1;
  } while (iVar3 < 3);
  iVar3 = 0;
  do {
    if ((int *)param_1[iVar3 + 0x1d] != (int *)0x0) {
      (**(code **)(*(int *)param_1[iVar3 + 0x1d] + 4))();
    }
    iVar1 = iVar3 + 1;
    param_1[iVar3 + 0x1d] = 0;
    param_1[iVar3 + 0x19] = 0;
    iVar3 = iVar1;
  } while (iVar1 < 4);
  if (*param_1 != 0) {
    (**(code **)(*(int *)*DAT_00484f34 + 0x10))((int *)*DAT_00484f34,*param_1);
  }
  param_1[1] = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[8] = 0;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  FUN_00343280(param_1 + 0x45,0xc0);
  param_1[0x78] = 0;
  param_1[0x77] = 0;
  param_1[0x76] = 0;
  param_1[0x75] = 0;
  iVar3 = DAT_00484f38;
  param_1[0x7a] = 0;
  param_1[0x79] = 0;
  param_1[0x7b] = iVar3;
  return;
}
