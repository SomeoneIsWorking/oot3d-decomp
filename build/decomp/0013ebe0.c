// OoT3D decomp @ 0013ebe0  name=FUN_0013ebe0  size=96

void FUN_0013ebe0(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0013ec48,DAT_0013ec44,uVar1,DAT_0013ec40,param_1 + 0x1a4,0);
  if (*(short *)(param_1 + 0x1c) == 4) {
    *(undefined4 *)(param_1 + 0x5d0) = DAT_0013ec4c;
  }
  else {
    uVar1 = DAT_0013ec50;
    if (*(short *)(param_1 + 0x1c) != 0xd) {
      uVar1 = DAT_0013ec54;
    }
    *(undefined4 *)(param_1 + 0x5d0) = uVar1;
  }
  return;
}
