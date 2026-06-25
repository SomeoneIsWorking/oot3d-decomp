// OoT3D decomp @ 00324154  name=FUN_00324154  size=60

undefined4 * FUN_00324154(undefined4 *param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = param_1[1];
  if (0x31 < iVar1 + 1U) {
    return (undefined4 *)0x0;
  }
  param_1[iVar1 * 8 + 2] = *param_1;
  param_1[iVar1 * 8 + 3] = param_2;
  param_1[1] = param_1[1] + 1;
  return param_1 + iVar1 * 8 + 2;
}

