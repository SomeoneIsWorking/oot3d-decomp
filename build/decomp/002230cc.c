// OoT3D decomp @ 002230cc  name=FUN_002230cc  size=208

void FUN_002230cc(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0x11,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0x11,0x1c,param_1 + 0x228,param_1 + 0xa48,8);
  uVar1 = DAT_0022319c;
  FUN_0033391c(DAT_0022319c,param_1,0x1c,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,0xf,0xffffffff,0xffffffff);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_002231a0,param_1 + 0xbc,DAT_002231a4);
  *(undefined4 *)(param_1 + 0x126c) = 0x18;
  *(undefined4 *)(param_1 + 0x1270) = 0x13;
  return;
}
