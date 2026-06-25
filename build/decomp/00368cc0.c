// OoT3D decomp @ 00368cc0  name=FUN_00368cc0  size=208

void FUN_00368cc0(int param_1,float *param_2,float *param_3,float *param_4)

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
  
  fVar2 = DAT_00368d90;
  fVar5 = *param_2;
  fVar3 = param_2[1];
  fVar4 = param_2[2];
  fVar7 = *(float *)(param_1 + 0x5bc8);
  fVar9 = *(float *)(param_1 + 0x5bc4);
  fVar10 = *(float *)(param_1 + 0x5bcc);
  fVar8 = *(float *)(param_1 + 0x5bd4);
  fVar11 = *(float *)(param_1 + 0x5bd8);
  fVar12 = *(float *)(param_1 + 0x5be8);
  fVar6 = *(float *)(param_1 + 0x5bd0) * DAT_00368d90;
  fVar13 = *(float *)(param_1 + 0x5bdc);
  fVar14 = *(float *)(param_1 + 0x5be4);
  fVar15 = *(float *)(param_1 + 0x5bec);
  fVar1 = *(float *)(param_1 + 0x5be0) * DAT_00368d90;
  fVar16 = *(float *)(param_1 + 0x5bf0);
  *param_3 = *(float *)(param_1 + 0x5bb4) * fVar5 + *(float *)(param_1 + 0x5bb8) * fVar3 +
             *(float *)(param_1 + 0x5bbc) * fVar4 + *(float *)(param_1 + 0x5bc0) * DAT_00368d90;
  param_3[1] = fVar9 * fVar5 + fVar7 * fVar3 + fVar10 * fVar4 + fVar6;
  param_3[2] = -(fVar8 * fVar5 + fVar11 * fVar3 + fVar13 * fVar4 + fVar1);
  fVar6 = fVar14 * fVar5 + fVar12 * fVar3 + fVar15 * fVar4 + fVar16 * fVar2;
  *param_4 = fVar6;
  if ((int)fVar6 < 0x3f800000) {
    *param_4 = fVar2;
    return;
  }
  *param_4 = fVar2 / fVar6;
  return;
}

