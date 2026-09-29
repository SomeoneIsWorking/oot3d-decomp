// OoT3D decomp @ 00422274  name=FUN_00422274  size=28

void FUN_00422274(undefined4 param_1,undefined2 *param_2)

{
  int iVar1;

  iVar1 = DAT_00422290;
  *(undefined4 *)(DAT_00422290 + 0xd4) = param_1;
  *(undefined2 *)(iVar1 + 0x4a) = *param_2;
  *(undefined2 *)(iVar1 + 0x4c) = param_2[1];
  return;
}
