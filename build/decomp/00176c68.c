// OoT3D decomp @ 00176c68  name=FUN_00176c68  size=104

void FUN_00176c68(int param_1,int param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  fVar1 = (float)FUN_00357eac(*(undefined4 *)(DAT_00176cd0 + param_2),param_1);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1c) >> 8,
                                     (byte)(in_fpscr >> 0x15) & 3);
  if (fVar1 < fVar2 * DAT_00176cd4) {
    FUN_003665b4(param_2);
    *(undefined1 *)(param_2 + 0x325f) = 1;
    *(undefined1 *)(param_2 + 0x326e) = 0x19;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_00176cd8;
  }
  return;
}
