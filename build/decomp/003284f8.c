// OoT3D decomp @ 003284f8  name=FUN_003284f8  size=336

void FUN_003284f8(int param_1)

{
  int iVar1;
  short sVar2;
  int iVar3;
  short *psVar4;
  int iVar5;
  int iVar6;
  float *pfVar7;
  float *pfVar8;
  uint in_fpscr;
  float fVar9;
  undefined4 uVar10;
  float fVar11;

  uVar10 = DAT_00328648;
  psVar4 = (short *)0x0;
  sVar2 = *(short *)(param_1 + 0xbe);
  *(int *)(param_1 + 0x1028) = *(int *)(param_1 + 0x1028) + 1;
  *(undefined2 *)(param_1 + 0x1058) = 0;
  *(undefined4 *)(param_1 + 0x1074) = uVar10;
  *(undefined4 *)(param_1 + 0x1078) = uVar10;
  *(undefined4 *)(param_1 + 0x107c) = uVar10;
  iVar6 = *(int *)(param_1 + 0x2c);
  pfVar8 = (float *)(param_1 + 0x105c);
  pfVar7 = (float *)(param_1 + 0x1068);
  *pfVar8 = *(float *)(param_1 + 0x28);
  *(int *)(param_1 + 0x1060) = iVar6;
  *(undefined4 *)(param_1 + 0x1064) = *(undefined4 *)(param_1 + 0x30);
  iVar5 = *(int *)(param_1 + 0x1020);
  iVar3 = *(int *)(param_1 + 0x1028);
  iVar1 = 0;
  if (iVar5 != 0) {
    iVar6 = *(int *)(param_1 + 0x1024);
    iVar1 = iVar3 - iVar6;
  }
  if (iVar1 < 0 != (iVar5 != 0 && SBORROW4(iVar3,iVar6))) {
    psVar4 = (short *)(*(int *)(iVar5 + 4) + iVar3 * 6);
  }
  if (psVar4 == (short *)0x0) {
    fVar11 = (float)FUN_002cfca0((int)sVar2);
    fVar9 = DAT_0032864c;
    *pfVar7 = *pfVar8 + fVar11 * DAT_0032864c;
    *(undefined4 *)(param_1 + 0x106c) = *(undefined4 *)(param_1 + 0x1060);
    fVar11 = (float)FUN_00338f60((int)sVar2);
    *(float *)(param_1 + 0x1070) = *(float *)(param_1 + 0x1064) + fVar11 * fVar9;
  }
  else {
    fVar9 = (float)VectorSignedToFloat((int)*psVar4,(byte)(in_fpscr >> 0x15) & 3);
    *pfVar7 = fVar9;
    uVar10 = VectorSignedToFloat((int)psVar4[1],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x106c) = uVar10;
    uVar10 = VectorSignedToFloat((int)psVar4[2],(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1070) = uVar10;
  }
  fVar9 = *(float *)(param_1 + 0x1070) - *(float *)(param_1 + 0x1064);
  fVar11 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00328650 + 0x1460),
                                      (byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 0x105a) =
       (short)(int)(SQRT((*pfVar7 - *pfVar8) * (*pfVar7 - *pfVar8) + fVar9 * fVar9) /
                   ((fVar11 + DAT_00328654) * DAT_00328658 * DAT_0032865c));
  return;
}
