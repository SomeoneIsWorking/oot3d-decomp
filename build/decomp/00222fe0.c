// OoT3D decomp @ 00222fe0  name=FUN_00222fe0  size=220

void FUN_00222fe0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,4,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,4,0xe,param_1 + 0x228,param_1 + 0xa48,0x12);
  uVar1 = DAT_002230bc;
  FUN_0033391c(DAT_002230bc,param_1,0xe,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,6,0xffffffff,0xffffffff);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_002230c0,param_1 + 0xbc,DAT_002230c4);
  *(undefined4 *)(param_1 + 0x126c) = 0x13;
  *(undefined4 *)(param_1 + 0x1270) = 0xf;
  *(undefined2 *)(DAT_002230c8 + param_1) = 3;
  return;
}
