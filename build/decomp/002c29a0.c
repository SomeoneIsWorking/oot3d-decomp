// OoT3D decomp @ 002c29a0  name=FUN_002c29a0  size=12

undefined4 FUN_002c29a0(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;

  iVar1 = FUN_00498e14(*(undefined4 *)(*(int *)(param_1 + 4) + 0x3c),param_2,param_3,0);
  if (iVar1 == 0) {
    return 0;
  }
  iVar2 = FUN_00498eb8(iVar1);
  if (iVar2 == 0) {
    iVar1 = FUN_00498edc(iVar1);
    *param_3 = *(undefined4 *)(iVar1 + 8);
    param_3[1] = *(int *)(iVar1 + 4) + 8;
  }
  else if (iVar2 == 1) {
    uVar3 = FUN_00498e8c(iVar1);
    param_3[2] = uVar3;
  }
  else if (iVar2 == 2) {
    return 0;
  }
  return 1;
}
