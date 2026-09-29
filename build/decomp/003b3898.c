// OoT3D decomp @ 003b3898  name=FUN_003b3898  size=112

void FUN_003b3898(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  if (*DAT_003b3908 == *(char *)(*(short *)(param_1 + 0x1c) + DAT_003b390c)) {
    uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003b3914,DAT_003b3910,uVar1,DAT_003b3910,param_1 + 0x1a4,0,2);
    *(undefined1 *)(param_1 + 0xc41) = 0;
    *(undefined4 *)(param_1 + 0x140) = DAT_003b3918;
    *(undefined4 *)(param_1 + 0xc04) = DAT_003b391c;
  }
  return;
}
