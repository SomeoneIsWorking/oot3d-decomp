// OoT3D decomp @ 00244e70  name=FUN_00244e70  size=212

void FUN_00244e70(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0x17,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0x17,0x1f,param_1 + 0x228,param_1 + 0xa48,0x14);
  uVar1 = DAT_00244f44;
  FUN_0033391c(DAT_00244f44,param_1,0x1f,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,0x16,0x17,0xffffffff);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00244f48,param_1 + 0xbc,DAT_00244f4c);
  *(undefined4 *)(param_1 + 0x126c) = 0x1c;
  *(undefined4 *)(param_1 + 0x1270) = 0x17;
  return;
}
