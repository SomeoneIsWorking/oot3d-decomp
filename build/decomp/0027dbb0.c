// OoT3D decomp @ 0027dbb0  name=FUN_0027dbb0  size=340

void FUN_0027dbb0(int param_1,int param_2)

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

  fVar4 = DAT_0027dd1c;
  fVar3 = DAT_0027dd18;
  fVar8 = DAT_0027dd14;
  piVar2 = DAT_0027dd04;
  psVar5 = (short *)(param_1 + 0x1ca);
  fVar7 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0027dd04 + 0x14f2),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0027dd04 + 0x14d4),
                                      (byte)(in_fpscr >> 0x15) & 3);
  sVar1 = (short)(int)(fVar9 + DAT_0027dd08 + fVar7 * (DAT_0027dd10 + fVar10 * DAT_0027dd0c));
  *(short *)(param_1 + 0x1cc) = sVar1;
  fVar7 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  if (sVar1 < 1) {
    fVar8 = fVar7 * fVar8 * fVar3 - fVar4;
  }
  else {
    fVar8 = fVar4 + fVar7 * fVar8 * fVar3;
  }
  sVar1 = (short)(int)fVar8 + *psVar5;
  *psVar5 = sVar1;
  sVar6 = *(short *)(*piVar2 + 0x14f6) + 0x4000;
  if (sVar6 < sVar1) {
    *psVar5 = sVar6;
  }
  FUN_0032ae1c(param_1,param_2,9);
  FUN_0032a998(param_1,9);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0027dd24 / fVar8 + fVar4) == (uint)*(ushort *)(DAT_0027dd20 + param_2)) {
    FUN_0037547c(DAT_0027dd30,param_1 + 0x28,4,DAT_0027dd2c,DAT_0027dd2c,DAT_0027dd28);
  }
  return;
}
