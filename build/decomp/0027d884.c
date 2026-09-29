// OoT3D decomp @ 0027d884  name=FUN_0027d884  size=376

void FUN_0027d884(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  short *psVar5;
  short sVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  FUN_0032aee0();
  fVar4 = DAT_0027da14;
  fVar3 = DAT_0027da10;
  fVar9 = DAT_0027da0c;
  piVar2 = DAT_0027d9fc;
  psVar5 = (short *)(param_1 + 0x1ca);
  fVar7 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0027d9fc + 0x14e4),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0027d9fc + 0x14d4),
                                      (byte)(in_fpscr >> 0x15) & 3);
  sVar1 = (short)(int)(fVar8 + DAT_0027da00 + fVar7 * (DAT_0027da08 + fVar10 * DAT_0027da04));
  *(short *)(param_1 + 0x1cc) = sVar1;
  fVar7 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  if (sVar1 < 1) {
    fVar9 = fVar7 * fVar9 * fVar3 - fVar4;
  }
  else {
    fVar9 = fVar4 + fVar7 * fVar9 * fVar3;
  }
  sVar1 = (short)(int)fVar9 + *psVar5;
  *psVar5 = sVar1;
  sVar6 = *(short *)(*piVar2 + 0x14e6) + 0x250;
  if (sVar6 < sVar1) {
    *psVar5 = sVar6;
  }
  FUN_0032ae1c(param_1,param_2,1);
  FUN_0032a998(param_1,1);
  FUN_0032a6f4(param_1,param_2);
  FUN_0037547c(DAT_0027da20,0,4,DAT_0027da1c,DAT_0027da1c,DAT_0027da18);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0027da28 / fVar9 + fVar4) != (uint)*(ushort *)(DAT_0027da24 + param_2)) {
    return;
  }
  FUN_003674e4(0xd);
  return;
}
