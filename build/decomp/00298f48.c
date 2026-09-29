// OoT3D decomp @ 00298f48  name=FUN_00298f48  size=76

void FUN_00298f48(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x22c,4);
  uVar1 = DAT_00298f94;
  *(short *)(param_1 + 0x1c0) = (short)uVar2;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_00298f9c,DAT_00298f98,uVar2,uVar1,param_1 + 0x22c,4,2);
  *(undefined4 *)(param_1 + 0x1a4) = DAT_00298fa0;
  return;
}
