// OoT3D decomp @ 00222ba8  name=FUN_00222ba8  size=232

void FUN_00222ba8(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,8,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,8,0x12,param_1 + 0x228,param_1 + 0xa48,0xe);
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,0x12);
  uVar1 = DAT_00222c90;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00222c94,DAT_00222c90,uVar2,DAT_00222c90,param_1 + 0x1a4,0x12,0);
  FUN_0035c358(param_1 + 0x1330,param_1 + 0x1a4,7,8,0xffffffff);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00222c98,param_1 + 0xbc,DAT_00222c9c);
  *(undefined4 *)(param_1 + 0x126c) = 3;
  *(undefined4 *)(param_1 + 0x1270) = 3;
  return;
}
