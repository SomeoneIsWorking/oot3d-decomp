// OoT3D decomp @ 0039bb60  name=FUN_0039bb60  size=96

void FUN_0039bb60(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0039bbc4,uVar1,uVar1,DAT_0039bbc0,param_1 + 0x1a4,0,2);
  *(undefined2 *)(param_1 + 0x4e4) = 0;
  *(undefined2 *)(param_1 + 0x4e2) = 0;
  *(undefined4 *)(param_1 + 0x4a4) = 0xf;
  *(undefined4 *)(param_1 + 0x498) = DAT_0039bbc8;
  *(undefined4 *)(param_1 + 0x4a0) = 0;
  return;
}
