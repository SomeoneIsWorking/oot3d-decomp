// OoT3D decomp @ 00198168  name=FUN_00198168  size=88

void FUN_00198168(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x1a4,1);
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_001981c8,DAT_001981c4,uVar2,DAT_001981c0,param_1 + 0x1a4,1,0);
  uVar2 = DAT_001981cc;
  *(undefined2 *)(param_1 + 0x8be) = 0x1e;
  uVar1 = DAT_001981d0;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x8a8) = uVar1;
  return;
}
