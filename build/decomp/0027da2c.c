// OoT3D decomp @ 0027da2c  name=FUN_0027da2c  size=340

void FUN_0027da2c(int param_1,int param_2)

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

  fVar4 = DAT_0027db98;
  fVar3 = DAT_0027db94;
  fVar8 = DAT_0027db90;
  piVar2 = DAT_0027db80;
  psVar5 = (short *)(param_1 + 0x1ca);
  fVar7 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0027db80 + 0x14ec),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0027db80 + 0x14d4),
                                      (byte)(in_fpscr >> 0x15) & 3);
  sVar1 = (short)(int)(fVar9 + DAT_0027db84 + fVar7 * (DAT_0027db8c + fVar10 * DAT_0027db88));
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
  sVar6 = *(short *)(*piVar2 + 0x14f4) + 0x4000;
  if (sVar6 < sVar1) {
    *psVar5 = sVar6;
  }
  FUN_0032ae1c(param_1,param_2,7);
  FUN_0032a998(param_1,7);
  fVar8 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
  if ((int)(DAT_0027dba0 / fVar8 + fVar4) == (uint)*(ushort *)(DAT_0027db9c + param_2)) {
    FUN_0037547c(DAT_0027dbac,param_1 + 0x28,4,DAT_0027dba8,DAT_0027dba8,DAT_0027dba4);
  }
  return;
}
