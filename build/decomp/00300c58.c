// OoT3D decomp @ 00300c58  name=FUN_00300c58  size=1272

void FUN_00300c58(float param_1,float param_2,float *param_3,undefined4 param_4,float *param_5,
                 undefined4 param_6,float *param_7,undefined4 param_8)

{
  int iVar1;
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
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  float fVar32;
  
  fVar32 = DAT_00301058;
  if ((param_2 < DAT_00301058) || (0x3f800000 < (int)param_2)) {
    FUN_003123c0();
  }
  param_3[0x14] = param_1;
  fVar6 = param_3[5];
  if (fVar6 <= param_1) {
    param_3[0x17] = fVar32;
    fVar6 = param_3[0x17];
  }
  else {
    fVar6 = (fVar6 / (fVar6 - param_1)) *
            ((ABS(param_3[3] - param_3[2]) * param_1) /
            (param_3[4] * *(float *)(DAT_0030105c + 0xc))) * param_3[0x12];
    param_3[0x17] = fVar6;
  }
  fVar14 = DAT_00301064;
  iVar1 = DAT_00301060;
  param_3[0x17] = fVar6 * param_2;
  if (*(char *)(iVar1 + 0x84) == '\0') {
    fVar32 = *(float *)(iVar1 + 0x80);
  }
  fVar32 = fVar32 * fVar14 * fVar6 * param_2;
  param_3[0x17] = fVar32;
  fVar7 = param_3[0x17];
  fVar16 = param_3[4];
  fVar17 = param_3[0x14];
  fVar18 = param_3[1];
  fVar8 = param_3[0x17];
  fVar19 = param_3[4];
  fVar20 = param_3[0x14];
  fVar21 = *param_3;
  fVar9 = param_3[2];
  fVar10 = param_3[3];
  fVar11 = param_3[4];
  fVar12 = param_3[5];
  fVar6 = param_3[0x17];
  fVar27 = param_3[6] - param_3[9] * fVar6;
  fVar22 = param_3[7] - param_3[10] * fVar6;
  fVar13 = param_3[8] - param_3[0xb] * fVar6;
  fVar30 = param_3[0xf];
  fVar28 = param_3[0x10];
  fVar23 = param_3[0x11];
  fVar6 = param_3[0xc];
  fVar2 = param_3[0xd];
  fVar5 = param_3[0xe];
  fVar14 = param_3[0x17];
  fVar24 = param_3[6] + param_3[9] * fVar14;
  fVar29 = param_3[7] + param_3[10] * fVar14;
  fVar15 = param_3[8] + param_3[0xb] * fVar14;
  fVar31 = param_3[0xf];
  fVar25 = param_3[0x10];
  fVar26 = param_3[0x11];
  fVar14 = param_3[0xc];
  fVar3 = param_3[0xd];
  fVar4 = param_3[0xe];
  param_3[0x15] = param_3[4];
  param_3[0x16] = param_3[5];
  param_3[0x13] = ABS(param_3[1] - *param_3) * (param_3[0x14] / param_3[4]);
  FUN_002fde9c((fVar32 * param_3[4]) / param_1 + *param_3,
               (fVar32 * param_3[4]) / param_1 + param_3[1],fVar9,fVar10,fVar11,fVar12,param_4,
               param_8);
  FUN_002fde9c(fVar21 - (fVar8 * fVar19) / fVar20,fVar18 - (fVar7 * fVar16) / fVar17,fVar9,fVar10,
               fVar11,fVar12,param_6,param_8);
  fVar32 = DAT_00301068;
  fVar7 = fVar27 - (fVar27 + fVar30);
  fVar8 = fVar22 - (fVar22 + fVar28);
  fVar9 = fVar13 - (fVar13 + fVar23);
  fVar10 = DAT_00301068 / SQRT(fVar7 * fVar7 + fVar8 * fVar8 + fVar9 * fVar9);
  fVar9 = fVar9 * fVar10;
  fVar7 = fVar7 * fVar10;
  fVar8 = fVar8 * fVar10;
  fVar10 = fVar2 * fVar9 - fVar5 * fVar8;
  fVar5 = fVar5 * fVar7 - fVar6 * fVar9;
  fVar6 = fVar6 * fVar8 - fVar2 * fVar7;
  fVar2 = DAT_00301068 / SQRT(fVar10 * fVar10 + fVar5 * fVar5 + fVar6 * fVar6);
  fVar6 = fVar6 * fVar2;
  fVar10 = fVar10 * fVar2;
  fVar5 = fVar5 * fVar2;
  *param_5 = fVar10;
  param_5[1] = fVar5;
  param_5[2] = fVar6;
  fVar2 = fVar8 * fVar6 - fVar9 * fVar5;
  fVar11 = fVar9 * fVar10 - fVar7 * fVar6;
  fVar12 = fVar7 * fVar5 - fVar8 * fVar10;
  param_5[4] = fVar2;
  param_5[5] = fVar11;
  param_5[6] = fVar12;
  param_5[8] = fVar7;
  param_5[9] = fVar8;
  param_5[10] = fVar9;
  param_5[3] = -(fVar27 * fVar10 + fVar22 * fVar5) + -(fVar13 * fVar6);
  param_5[7] = -(fVar27 * fVar2 + fVar22 * fVar11) + -(fVar13 * fVar12);
  param_5[0xb] = -(fVar27 * fVar7 + fVar22 * fVar8) + -(fVar13 * fVar9);
  fVar6 = fVar24 - (fVar24 + fVar31);
  fVar2 = fVar29 - (fVar29 + fVar25);
  fVar5 = fVar15 - (fVar15 + fVar26);
  fVar7 = fVar32 / SQRT(fVar6 * fVar6 + fVar2 * fVar2 + fVar5 * fVar5);
  fVar5 = fVar5 * fVar7;
  fVar6 = fVar6 * fVar7;
  fVar2 = fVar2 * fVar7;
  fVar7 = fVar3 * fVar5 - fVar4 * fVar2;
  fVar4 = fVar4 * fVar6 - fVar14 * fVar5;
  fVar14 = fVar14 * fVar2 - fVar3 * fVar6;
  fVar32 = fVar32 / SQRT(fVar7 * fVar7 + fVar4 * fVar4 + fVar14 * fVar14);
  fVar14 = fVar14 * fVar32;
  fVar7 = fVar7 * fVar32;
  fVar4 = fVar4 * fVar32;
  *param_7 = fVar7;
  param_7[1] = fVar4;
  param_7[2] = fVar14;
  fVar32 = fVar2 * fVar14 - fVar5 * fVar4;
  fVar3 = fVar5 * fVar7 - fVar6 * fVar14;
  fVar8 = fVar6 * fVar4 - fVar2 * fVar7;
  param_7[4] = fVar32;
  param_7[5] = fVar3;
  param_7[6] = fVar8;
  param_7[8] = fVar6;
  param_7[9] = fVar2;
  param_7[10] = fVar5;
  param_7[3] = -(fVar24 * fVar7 + fVar29 * fVar4) + -(fVar15 * fVar14);
  param_7[7] = -(fVar24 * fVar32 + fVar29 * fVar3) + -(fVar15 * fVar8);
  param_7[0xb] = -(fVar24 * fVar6 + fVar29 * fVar2 + fVar15 * fVar5);
  return;
}

