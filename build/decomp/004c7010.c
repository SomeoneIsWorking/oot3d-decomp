// OoT3D decomp @ 004c7010  name=FUN_004c7010  size=176

void FUN_004c7010(int param_1,float *param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
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
  float fVar14;
  float fVar15;
  float fVar16;
  
  fVar3 = DAT_004c70c0;
  fVar4 = *param_2;
  fVar5 = param_2[1];
  fVar6 = param_2[2];
  fVar7 = *(float *)(param_1 + 0x5bc8);
  fVar9 = *(float *)(param_1 + 0x5bc4);
  fVar10 = *(float *)(param_1 + 0x5bcc);
  fVar8 = *(float *)(param_1 + 0x5bd4);
  fVar11 = *(float *)(param_1 + 0x5bd8);
  fVar12 = *(float *)(param_1 + 0x5be8);
  fVar1 = *(float *)(param_1 + 0x5bd0) * DAT_004c70c0;
  fVar13 = *(float *)(param_1 + 0x5bdc);
  fVar14 = *(float *)(param_1 + 0x5be4);
  fVar15 = *(float *)(param_1 + 0x5bec);
  fVar2 = *(float *)(param_1 + 0x5be0) * DAT_004c70c0;
  fVar16 = *(float *)(param_1 + 0x5bf0);
  *param_3 = *(float *)(param_1 + 0x5bb4) * fVar4 + *(float *)(param_1 + 0x5bb8) * fVar5 +
             *(float *)(param_1 + 0x5bbc) * fVar6 + *(float *)(param_1 + 0x5bc0) * DAT_004c70c0;
  param_3[1] = fVar9 * fVar4 + fVar7 * fVar5 + fVar10 * fVar6 + fVar1;
  param_3[2] = -(fVar8 * fVar4 + fVar11 * fVar5 + fVar13 * fVar6 + fVar2);
  *param_4 = fVar14 * fVar4 + fVar12 * fVar5 + fVar15 * fVar6 + fVar16 * fVar3;
  return;
}

