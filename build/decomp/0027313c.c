// OoT3D decomp @ 0027313c  name=FUN_0027313c  size=116

void FUN_0027313c(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,6);
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  if (*(float *)(param_1 + 0x1e0) == fVar2) {
    *(undefined4 *)(param_1 + 0xa34) = DAT_002731b0;
    *(undefined4 *)(param_1 + 0x6c) = DAT_002731b4;
    FUN_003686a8(param_1,8);
    FUN_003729b8(param_1,0x13);
    return;
  }
  return;
}
