// OoT3D decomp @ 00206004  name=FUN_00206004  size=116

void FUN_00206004(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  fVar1 = (float)FUN_00357eac(*(undefined4 *)(DAT_00206078 + param_2),param_1);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c) >> 8,
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (DAT_00206080 + fVar2 * DAT_0020607c < fVar1) {
    FUN_003666a0(param_2);
    *(undefined1 *)(param_2 + 0x325f) = 2;
    *(undefined1 *)(param_2 + 0x326e) = 0;
    *(undefined1 *)(param_2 + 0x326f) = 10;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00206084;
  }
  return;
}
