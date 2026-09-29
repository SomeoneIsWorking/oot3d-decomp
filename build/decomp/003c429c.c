// OoT3D decomp @ 003c429c  name=FUN_003c429c  size=156

void FUN_003c429c(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,8);
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  if ((DAT_003c4338 <= *(int *)(param_1 + 0x1e0)) && (*(int *)(param_1 + 0x1e0) < DAT_003c433c)) {
    FUN_00375bcc(param_1,DAT_003c4340);
  }
  if (*(float *)(param_1 + 0x1e0) != fVar2) {
    return;
  }
  *(undefined1 *)(param_1 + 0xa16) = 1;
  FUN_003729b8(param_1,9);
  return;
}
