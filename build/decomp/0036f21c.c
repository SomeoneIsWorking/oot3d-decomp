// OoT3D decomp @ 0036f21c  name=FUN_0036f21c  size=180

void FUN_0036f21c(int param_1)

{
  uint in_fpscr;
  uint uVar1;
  float fVar2;
  float fVar3;

  fVar2 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0x9c);
  fVar3 = DAT_0036f2d4;
  if (*(int *)(param_1 + 0x664) == DAT_0036f2d0) {
    fVar3 = DAT_0036f2d8;
  }
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar2 <= *(float *)(param_1 + 0x84)) << 0x1d;
  if (SUB41(uVar1 >> 0x1d,0)) {
    fVar2 = *(float *)(param_1 + 0x84);
  }
  FUN_003705a0(fVar3 + fVar2,DAT_0036f2dc,param_1 + 0xc);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(DAT_0036f2e0 + param_1),
                                     (byte)(uVar1 >> 0x15) & 3);
  if (*(short *)(DAT_0036f2e0 + param_1) < 1) {
    fVar2 = fVar2 * DAT_0036f2e4 * DAT_0036f2e8 - DAT_0036f2ec;
  }
  else {
    fVar2 = DAT_0036f2ec + fVar2 * DAT_0036f2e4 * DAT_0036f2e8;
  }
  fVar2 = (float)VectorSignedToFloat((int)fVar2,(byte)(uVar1 >> 0x15) & 3);
  fVar2 = (float)FUN_003727f0(fVar2 * DAT_0036f2f0);
  *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0xc) + fVar2 * DAT_0036f2f4;
  if ((*(ushort *)(param_1 + 0x90) & 8) != 0) {
    *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0x82);
  }
  return;
}
