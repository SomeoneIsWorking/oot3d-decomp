// OoT3D decomp @ 00181800  name=FUN_00181800  size=100

void FUN_00181800(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0);
  uVar1 = VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_0018186c,DAT_00181868,uVar1,DAT_00181864,param_1 + 0x1a4,0);
  if (*(short *)(DAT_00181870 + param_1) != 0) {
    FUN_0037572c(*(undefined4 *)(param_1 + 0x674),param_1);
  }
  *(undefined4 *)(param_1 + 0x5d0) = DAT_00181874;
  return;
}
