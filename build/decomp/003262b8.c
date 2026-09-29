// OoT3D decomp @ 003262b8  name=FUN_003262b8  size=304

int FUN_003262b8(float *param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  int iVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;

  fVar16 = DAT_003263ec;
  iVar5 = 7;
  iVar7 = 0;
  iVar6 = *(int *)(DAT_003263e8 + param_4);
  iVar1 = FUN_00373fa4(iVar6 + 0x28,0xffffffff);
  fVar15 = param_1[1];
  if (DAT_003263f8 < (int)fVar15) {
    fVar16 = DAT_003263fc;
  }
  fVar10 = DAT_003263f4;
  fVar11 = DAT_003263f0;
  if (DAT_003263f8 < (int)fVar15) {
    iVar5 = 0x17;
    iVar7 = 8;
  }
  do {
    pfVar3 = (float *)(DAT_00326400 + iVar5 * 0xc);
    fVar14 = *pfVar3 - *param_1;
    fVar8 = pfVar3[1] - fVar15;
    fVar12 = pfVar3[2] - param_1[2];
    iVar2 = param_2;
    iVar4 = param_3;
    fVar9 = fVar10;
    fVar13 = fVar11;
    if (SQRT(fVar14 * fVar14 + fVar8 * fVar8 + fVar12 * fVar12) <= fVar16) {
      iVar2 = iVar1;
      if (iVar5 == iVar1) break;
      fVar8 = *pfVar3 - *(float *)(iVar6 + 0x28);
      fVar13 = pfVar3[2] - *(float *)(iVar6 + 0x30);
      fVar9 = pfVar3[1] - *(float *)(iVar6 + 0x2c);
      fVar8 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar13 * fVar13);
      iVar2 = iVar5;
      iVar4 = param_2;
      fVar9 = fVar11;
      fVar13 = fVar8;
      if ((fVar11 <= fVar8) &&
         (iVar2 = param_2, iVar4 = param_3, fVar9 = fVar10, fVar13 = fVar11, fVar8 < fVar10)) {
        iVar4 = iVar5;
        fVar9 = fVar8;
      }
    }
    iVar5 = (int)(short)((short)iVar5 + -1);
    param_2 = iVar2;
    param_3 = iVar4;
    fVar10 = fVar9;
    fVar11 = fVar13;
  } while (iVar7 <= iVar5);
  if (param_3 == iVar1) {
    iVar2 = param_3;
  }
  return iVar2;
}
