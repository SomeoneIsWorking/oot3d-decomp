// OoT3D decomp @ 0043f990  name=FUN_0043f990  size=688

void FUN_0043f990(int param_1,int param_2)

{
  float *pfVar1;
  undefined2 *puVar2;
  float *pfVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;

  fVar4 = DAT_0043fc78;
  pfVar3 = DAT_0043fc74;
  puVar2 = DAT_0043fc68;
  fVar7 = *DAT_0043fc74 - DAT_0043fc74[-6];
  fVar8 = DAT_0043fc74[1] - DAT_0043fc74[-5];
  fVar9 = DAT_0043fc74[2] - DAT_0043fc74[-4];
  fVar5 = *(float *)(DAT_0043fc68 + 0x14);
  pfVar1 = DAT_0043fc74 + 10;
  fVar10 = DAT_0043fc74[0xb];
  fVar11 = DAT_0043fc74[8];
  fVar12 = DAT_0043fc74[7];
  fVar13 = DAT_0043fc74[6];
  param_1 = param_1 - *(int *)(DAT_0043fc68 + 0x10);
  switch(*(undefined4 *)(DAT_0043fc68 + 0x16)) {
  case 1:
    fVar4 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(DAT_0043fc68 + 10) = fVar5 + fVar4 * DAT_0043fc6c;
    break;
  case 2:
    fVar4 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    *(float *)(DAT_0043fc68 + 0xc) = fVar5 + fVar4 * DAT_0043fc70;
    return;
  case 3:
    fVar8 = DAT_0043fc74[9] - fVar13;
    fVar10 = fVar10 - fVar11;
    fVar4 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = *(float *)(DAT_0043fc68 + 0x20) + fVar4 * DAT_0043fc70;
    fVar4 = *pfVar1 - fVar12;
    fVar5 = DAT_0043fc64 / SQRT(fVar8 * fVar8 + fVar4 * fVar4 + fVar10 * fVar10);
    *DAT_0043fc74 = fVar13 + fVar7 * fVar8 * fVar5;
    pfVar3[1] = fVar12 + fVar7 * fVar4 * fVar5;
    pfVar3[2] = fVar11 + fVar7 * fVar10 * fVar5;
    return;
  case 4:
    fVar4 = (float)VectorSignedToFloat(param_1 * 0xf,(byte)(in_fpscr >> 0x15) & 3);
    *DAT_0043fc68 = (short)(int)(fVar4 + fVar5);
    return;
  case 5:
    fVar4 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 + fVar4 * DAT_0043fc6c;
    *(float *)(DAT_0043fc68 + 0xe) = fVar5;
    if ((int)fVar5 < 0x34000000) {
      *(undefined4 *)(puVar2 + 0xe) = DAT_0043fc7c;
    }
    return;
  case 6:
    fVar10 = DAT_0043fc64 / SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
    fVar6 = fVar8 * fVar10 * DAT_0043fc60 - fVar9 * fVar10 * DAT_0043fc64;
    fVar5 = fVar9 * fVar10 * DAT_0043fc60 - fVar7 * fVar10 * DAT_0043fc60;
    fVar7 = fVar7 * fVar10 * DAT_0043fc64 - fVar8 * fVar10 * DAT_0043fc60;
    fVar10 = (float)VectorSignedToFloat(param_2 - *(int *)(DAT_0043fc68 + 0x12),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar10 = fVar10 * DAT_0043fc78;
    fVar5 = DAT_0043fc64 / SQRT(fVar6 * fVar6 + fVar5 * fVar5 + fVar7 * fVar7);
    fVar8 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    DAT_0043fc74[-6] = fVar13 - fVar6 * fVar5 * fVar8 * DAT_0043fc78;
    pfVar3[-5] = fVar12 - fVar10;
    pfVar3[-4] = fVar11 - fVar7 * fVar5 * fVar9 * fVar4;
    return;
  case 7:
    fVar5 = DAT_0043fc64 / SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
    fVar12 = fVar8 * fVar5 * DAT_0043fc60 - fVar9 * fVar5 * DAT_0043fc64;
    fVar9 = fVar9 * fVar5 * DAT_0043fc60 - fVar7 * fVar5 * DAT_0043fc60;
    fVar8 = fVar7 * fVar5 * DAT_0043fc64 - fVar8 * fVar5 * DAT_0043fc60;
    fVar5 = (float)VectorSignedToFloat(param_2 - *(int *)(DAT_0043fc68 + 0x12),
                                       (byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 * DAT_0043fc78;
    fVar7 = DAT_0043fc64 / SQRT(fVar12 * fVar12 + fVar9 * fVar9 + fVar8 * fVar8);
    fVar9 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = (float)VectorSignedToFloat(param_1,(byte)(in_fpscr >> 0x15) & 3);
    *DAT_0043fc74 = DAT_0043fc74[9] - fVar12 * fVar7 * fVar9 * DAT_0043fc78;
    pfVar3[1] = *pfVar1 - fVar5;
    pfVar3[2] = fVar10 - fVar8 * fVar7 * fVar11 * fVar4;
    return;
  }
  return;
}
