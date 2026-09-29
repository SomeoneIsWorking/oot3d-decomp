// OoT3D decomp @ 00466f28  name=FUN_00466f28  size=48

void FUN_00466f28(undefined4 *param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_002dbc48(*param_1,param_3);
  iVar2 = thunk_FUN_002c83fc(param_2);
  *(uint *)(iVar1 + 0x14) = (uint)(iVar2 << 1) >> 4;
  return;
}
