// OoT3D decomp @ 0036c950  name=FUN_0036c950  size=148

undefined4 FUN_0036c950(int param_1)

{
  bool bVar1;
  float fVar2;
  undefined4 uVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;

  fVar2 = DAT_0036c9ec;
  fVar4 = *(float *)(param_1 + 0x40);
  uVar3 = 0;
  fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0036c9e4 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  bVar1 = fVar4 < DAT_0036c9ec;
  fVar5 = *(float *)(param_1 + 0x44) + fVar4 * fVar5 * DAT_0036c9e8;
  *(float *)(param_1 + 0x44) = fVar5;
  if ((bVar1) || (fVar5 <= *(float *)(param_1 + 0x3c))) {
    if (fVar2 <= fVar4) goto LAB_0036c9d0;
    if (*(float *)(param_1 + 0x3c) <= fVar5) goto LAB_0036c9d0;
  }
  uVar3 = 1;
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x3c);
LAB_0036c9d0:
  FUN_0030fa1c(*(undefined4 *)(param_1 + 0x44),param_1,*(undefined4 *)(param_1 + 0x34));
  return uVar3;
}
