// OoT3D decomp @ 004367dc  name=FUN_004367dc  size=1188

float FUN_004367dc(int param_1,float *param_2,float *param_3)

{
  undefined4 uVar1;
  bool bVar2;
  bool bVar3;
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
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float local_40;
  float local_3c;
  float local_38;
  float local_34;
  float local_30;

  uVar1 = DAT_00436c94;
  fVar7 = *param_3;
  fVar8 = param_3[1];
  fVar9 = param_3[2];
  fVar4 = SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  if (fVar4 == DAT_00436bd4) {
    return DAT_00436bd4;
  }
  fVar5 = *(float *)(param_1 + 0x86c);
  if ((int)fVar4 < 0x3f800000) {
    if (fVar4 <= DAT_00436bdc - fVar5) {
      return DAT_00436bd4;
    }
    fVar5 = (DAT_00436bdc / fVar5) * (fVar4 - (DAT_00436bdc - fVar5));
  }
  else {
    if (fVar5 + DAT_00436bdc <= fVar4) {
      return DAT_00436bd4;
    }
    fVar5 = (DAT_00436bd8 / fVar5) * (fVar4 - (fVar5 + DAT_00436bdc));
  }
  fVar5 = *(float *)(param_1 + 0x868) * fVar5 * fVar5;
  fVar4 = DAT_00436bdc / fVar4;
  fVar7 = fVar7 * fVar4;
  fVar8 = fVar8 * fVar4;
  fVar9 = fVar9 * fVar4;
  fVar14 = fVar7 * *param_2 + fVar8 * param_2[3] + fVar9 * param_2[6];
  fVar15 = fVar7 * param_2[1] + fVar8 * param_2[4] + fVar9 * param_2[7];
  fVar8 = fVar7 * param_2[2] + fVar8 * param_2[5] + fVar9 * param_2[8];
  local_38 = fVar14 - fVar14 * fVar5;
  local_34 = fVar15 + (DAT_00436bd8 - fVar15) * fVar5;
  local_30 = fVar8 - fVar8 * fVar5;
  fVar4 = local_38 * local_38 + local_34 * local_34 + local_30 * local_30;
  if (fVar4 == DAT_00436bd4) {
    local_38 = *DAT_00436be0;
    local_34 = DAT_00436be0[1];
    local_30 = DAT_00436be0[2];
  }
  else {
    fVar4 = DAT_00436bdc / SQRT(fVar4);
    local_38 = local_38 * fVar4;
    local_34 = local_34 * fVar4;
    local_30 = local_30 * fVar4;
  }
  bVar2 = false;
  if (local_38 == *DAT_00436be0) {
    bVar2 = local_34 == DAT_00436be0[1];
  }
  bVar3 = false;
  if (bVar2) {
    bVar3 = local_30 == DAT_00436be0[2];
  }
  fVar4 = DAT_00436bd4;
  if (!bVar3) {
    fVar4 = fVar15 * local_30 - fVar8 * local_34;
    fVar7 = fVar14 * local_34 - fVar15 * local_38;
    fVar9 = fVar8 * local_38 - fVar14 * local_30;
    if (SQRT(fVar4 * fVar4 + fVar9 * fVar9 + fVar7 * fVar7) == DAT_00436bd4) {
      local_5c = *DAT_00436be4;
      local_58 = DAT_00436be4[1];
      local_54 = DAT_00436be4[2];
      local_50 = DAT_00436be4[3];
      local_4c = DAT_00436be4[4];
      local_48 = DAT_00436be4[5];
      local_44 = DAT_00436be4[6];
      local_40 = DAT_00436be4[7];
      local_3c = DAT_00436be4[8];
    }
    else {
      fVar5 = DAT_00436bdc / SQRT(fVar4 * fVar4 + fVar9 * fVar9 + fVar7 * fVar7);
      fVar7 = fVar7 * fVar5;
      fVar4 = fVar4 * fVar5;
      fVar9 = fVar9 * fVar5;
      fVar5 = fVar15 * fVar7 - fVar8 * fVar9;
      fVar12 = local_30 * fVar4 - local_38 * fVar7;
      fVar13 = local_38 * fVar9 - local_34 * fVar4;
      fVar6 = fVar8 * fVar4 - fVar14 * fVar7;
      fVar10 = fVar14 * fVar9 - fVar15 * fVar4;
      fVar11 = local_34 * fVar7 - local_30 * fVar9;
      local_5c = fVar4 * fVar4 + fVar11 * fVar5 + local_38 * fVar14;
      local_50 = fVar9 * fVar4 + fVar11 * fVar6 + fVar15 * local_38;
      local_58 = fVar9 * fVar4 + fVar12 * fVar5 + fVar14 * local_34;
      local_44 = fVar7 * fVar4 + fVar11 * fVar10 + fVar8 * local_38;
      local_54 = fVar7 * fVar4 + fVar13 * fVar5 + fVar14 * local_30;
      local_4c = fVar9 * fVar9 + fVar12 * fVar6 + local_34 * fVar15;
      local_48 = fVar7 * fVar9 + fVar13 * fVar6 + fVar15 * local_30;
      local_40 = fVar7 * fVar9 + fVar12 * fVar10 + fVar8 * local_34;
      local_3c = fVar7 * fVar7 + fVar13 * fVar10 + local_30 * fVar8;
    }
    fVar4 = *param_2;
    fVar7 = *param_2;
    fVar10 = param_2[1];
    fVar11 = param_2[3];
    fVar12 = param_2[3];
    fVar13 = param_2[4];
    fVar5 = param_2[6];
    fVar9 = param_2[6];
    fVar6 = param_2[7];
    *param_2 = *param_2 * local_5c + param_2[1] * local_50 + param_2[2] * local_44;
    param_2[1] = fVar4 * local_58 + param_2[1] * local_4c + param_2[2] * local_40;
    param_2[2] = fVar7 * local_54 + fVar10 * local_48 + param_2[2] * local_3c;
    param_2[3] = param_2[3] * local_5c + param_2[4] * local_50 + param_2[5] * local_44;
    param_2[4] = fVar11 * local_58 + param_2[4] * local_4c + param_2[5] * local_40;
    param_2[5] = fVar12 * local_54 + fVar13 * local_48 + param_2[5] * local_3c;
    param_2[6] = param_2[6] * local_5c + param_2[7] * local_50 + param_2[8] * local_44;
    param_2[7] = fVar5 * local_58 + param_2[7] * local_4c + param_2[8] * local_40;
    param_2[8] = fVar9 * local_54 + fVar6 * local_48 + param_2[8] * local_3c;
    FUN_002ea458(uVar1,param_2);
    fVar4 = SQRT((fVar14 - local_38) * (fVar14 - local_38) +
                 (fVar15 - local_34) * (fVar15 - local_34) + (fVar8 - local_30) * (fVar8 - local_30)
                );
  }
  return fVar4;
}
