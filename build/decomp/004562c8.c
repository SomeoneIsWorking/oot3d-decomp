// OoT3D decomp @ 004562c8  name=FUN_004562c8  size=120

undefined4 FUN_004562c8(int *param_1)

{
  int iVar1;

  if (param_1[0x24c] != 0) {
    FUN_00305830();
    (**(code **)(*param_1 + 0x10))(param_1,param_1[0x24c]);
    param_1[0x24c] = 0;
  }
  param_1[0x24d] = -1;
  iVar1 = (**(code **)(*param_1 + 8))(param_1,DAT_00456340);
  param_1[0x24c] = iVar1;
  if (iVar1 != 0) {
    FUN_002f8ee4(iVar1,1,7,0);
  }
  param_1[0x24d] = -1;
  return 1;
}
