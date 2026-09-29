// OoT3D decomp @ 002fa5ec  name=FUN_002fa5ec  size=448

void FUN_002fa5ec(float param_1,int param_2,float *param_3,int *param_4,float *param_5,int param_6,
                 int param_7)

{
  uint uVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;

  fVar10 = DAT_002fa7b0;
  fVar2 = DAT_002fa7ac;
  *(int *)(param_7 + *(int *)(param_2 + 0x8ac) * 4) = param_6;
  *param_4 = 1;
  fVar9 = *(float *)(param_2 + 0x85c) / param_1;
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar2 <= fVar9) << 0x1d;
  if (SUB41(uVar1 >> 0x1d,0)) {
    fVar9 = fVar9 + fVar10;
  }
  else {
    fVar9 = fVar9 - fVar10;
  }
  iVar6 = (int)fVar9;
  if (iVar6 == 0) {
    iVar6 = 1;
  }
  iVar5 = param_6 - iVar6;
  iVar6 = param_6 + iVar6;
  fVar10 = (float)VectorSignedToFloat(param_6,(byte)(uVar1 >> 0x15) & 3);
  *param_3 = fVar10;
  iVar7 = *(int *)(param_2 + 0x8ac);
  iVar3 = *(int *)(param_2 + 0x860);
  uVar8 = iVar7 - 1U & 0xff;
  do {
    iVar4 = *(int *)(param_7 + uVar8 * 4);
    if ((iVar4 < iVar5) || (iVar6 < iVar4)) break;
    param_6 = param_6 + iVar4;
    uVar8 = uVar8 - 1 & 0xff;
    *param_4 = *param_4 + 1;
  } while (uVar8 != (iVar7 - iVar3 & 0xffU));
  fVar11 = (float)VectorSignedToFloat(param_6,(byte)(uVar1 >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat(*param_4 + -1,(byte)(uVar1 >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat(*(int *)(param_2 + 0x860) + -1,(byte)(uVar1 >> 0x15) & 3);
  fVar10 = (fVar10 / fVar9) * (fVar10 / fVar9);
  fVar9 = (float)VectorSignedToFloat(*param_4,(byte)(uVar1 >> 0x15) & 3);
  fVar10 = fVar10 * fVar10;
  fVar10 = fVar10 * fVar10;
  fVar10 = fVar10 * fVar10;
  fVar10 = fVar10 * fVar10;
  fVar9 = *param_3 + (fVar11 / fVar9 - *param_3) * fVar10;
  *param_3 = fVar9;
  if (*(char *)(param_2 + 0x855) != '\0') {
    *param_5 = *param_5 + (fVar9 - *param_5) * *(float *)(param_2 + 0x864) * fVar10;
  }
  param_1 = (*param_3 - *param_5) * param_1;
  *param_3 = param_1;
  if (*(char *)(param_2 + 0x854) != '\0') {
    fVar10 = *(float *)(param_2 + 0x858);
    if ((param_1 < -fVar10) || (fVar10 < param_1)) {
      *(float *)(param_2 + 0x870) = fVar2;
      return;
    }
    if (param_1 < fVar2) {
      param_1 = -param_1;
    }
    fVar10 = DAT_002fa7b4 - param_1 / fVar10;
    if (*(float *)(param_2 + 0x870) < fVar10) {
      fVar10 = *(float *)(param_2 + 0x870);
    }
    *(float *)(param_2 + 0x870) = fVar10;
    *param_3 = fVar2;
  }
  return;
}
