// OoT3D decomp @ 003c3790  name=FUN_003c3790  size=156

void FUN_003c3790(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  uint in_fpscr;

  if (((*(ushort *)(param_1 + 0x1c) & 0xff) == 0xc) && (*(short *)(param_1 + 0x28c) != 0)) {
    if (*(short *)(DAT_003c382c + param_1) == 0x10b9) {
      uVar1 = FUN_0036ae18(param_1 + 0x1a4,1);
      uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(DAT_003c3834,DAT_003c3830,uVar1,DAT_003c3830,param_1 + 0x1a4,1,2);
      *(undefined4 *)(param_1 + 0x228) = DAT_003c3838;
    }
    else if (*(short *)(param_1 + 0x28c) == 2) {
      *(undefined4 *)(param_1 + 0x228) = DAT_003c383c;
      FUN_00371680(param_2,4,0);
      return;
    }
  }
  return;
}
