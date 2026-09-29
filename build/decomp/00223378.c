// OoT3D decomp @ 00223378  name=FUN_00223378  size=212

void FUN_00223378(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  FUN_00372f38(param_1,param_2,param_1 + 0x1280,0xb,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0xb,0x15,param_1 + 0x228,param_1 + 0xa48,0x15);
  uVar1 = DAT_0022344c;
  uVar2 = FUN_0036ae14(param_1 + 0x1a4,0x15);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00223450,uVar1,uVar2,uVar1,param_1 + 0x1a4,0x15,0);
  FUN_0033387c(param_1,param_2);
  FUN_00372d4c(uVar1,DAT_00223454,param_1 + 0xbc,DAT_00223458);
  *(undefined4 *)(param_1 + 0x126c) = 0xf;
  *(undefined4 *)(param_1 + 0x1270) = 0xd;
  return;
}
