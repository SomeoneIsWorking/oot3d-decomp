// OoT3D decomp @ 003f1344  name=FUN_003f1344  size=120

void FUN_003f1344(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  if (*(char *)(param_1 + 0x8ab) == '\0') {
    uVar1 = FUN_0036ae14(param_1 + 0x1fc,2);
    uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003f13c4,uVar1,DAT_003f13c0,DAT_003f13bc,param_1 + 0x1fc,2);
    *(undefined4 *)(param_1 + 0x8ac) = 2;
    *(undefined4 *)(param_1 + 0x8b4) = DAT_003f13c8;
    *(undefined4 *)(param_1 + 0x8b0) = DAT_003f13cc;
  }
  else {
    *(char *)(param_1 + 0x8ab) = *(char *)(param_1 + 0x8ab) + -1;
  }
  *(ushort *)(param_1 + 0x8a8) = *(ushort *)(param_1 + 0x8a8) | 8;
  return;
}
