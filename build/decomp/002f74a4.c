// OoT3D decomp @ 002f74a4  name=FUN_002f74a4  size=460

void FUN_002f74a4(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  float local_b4 [4];
  float fStack_a4;
  float fStack_a0;
  float local_9c [4];
  float fStack_8c;
  float fStack_88;
  float local_84 [4];
  float fStack_74;
  float fStack_70;
  float local_6c [4];
  float fStack_5c;
  float fStack_58;
  float local_54 [4];
  float fStack_44;
  float fStack_40;
  float local_3c [4];
  float fStack_2c;
  float fStack_28;

  iVar4 = *(int *)(DAT_002f7670 + 0x24);
  if (iVar4 != 0) {
    *(int *)(DAT_002f7670 + 0x44) = param_1;
  }
  if (iVar4 != 0 && param_1 != 6) {
    local_3c[0] = *DAT_002f7674;
    local_3c[1] = DAT_002f7674[1];
    local_3c[2] = DAT_002f7674[2];
    local_3c[3] = DAT_002f7674[3];
    fStack_2c = DAT_002f7674[4];
    fStack_28 = DAT_002f7674[5];
    local_54[0] = DAT_002f7674[6];
    local_54[1] = DAT_002f7674[7];
    local_54[2] = DAT_002f7674[8];
    local_54[3] = DAT_002f7674[9];
    fStack_44 = DAT_002f7674[10];
    fStack_40 = DAT_002f7674[0xb];
    local_6c[0] = DAT_002f7674[0xc];
    local_6c[1] = DAT_002f7674[0xd];
    local_6c[2] = DAT_002f7674[0xe];
    local_6c[3] = DAT_002f7674[0xf];
    fStack_5c = DAT_002f7674[0x10];
    fStack_58 = DAT_002f7674[0x11];
    local_84[0] = DAT_002f7674[0x12];
    local_84[1] = DAT_002f7674[0x13];
    local_84[2] = DAT_002f7674[0x14];
    local_84[3] = DAT_002f7674[0x15];
    fStack_74 = DAT_002f7674[0x16];
    fStack_70 = DAT_002f7674[0x17];
    local_9c[0] = DAT_002f7674[0x18];
    local_9c[1] = DAT_002f7674[0x19];
    local_9c[2] = DAT_002f7674[0x1a];
    local_9c[3] = DAT_002f7674[0x1b];
    fStack_8c = DAT_002f7674[0x1c];
    fStack_88 = DAT_002f7674[0x1d];
    local_b4[0] = DAT_002f7674[0x1e];
    local_b4[1] = DAT_002f7674[0x1f];
    local_b4[2] = DAT_002f7674[0x20];
    local_b4[3] = DAT_002f7674[0x21];
    fStack_a4 = DAT_002f7674[0x22];
    fStack_a0 = DAT_002f7674[0x23];
    pfVar5 = (float *)FUN_002e11a4(iVar4,0);
    pfVar6 = (float *)FUN_004546f4(*(undefined4 *)(DAT_002f7670 + 0x24),0);
    fVar1 = DAT_002f7678;
    pfVar7 = local_3c + param_1;
    pfVar8 = local_54 + param_1;
    *pfVar5 = *pfVar7;
    pfVar9 = local_9c + param_1;
    pfVar5[1] = *pfVar8;
    pfVar5[2] = fVar1;
    fVar2 = DAT_002f767c;
    pfVar12 = local_b4 + param_1;
    pfVar11 = local_6c + param_1;
    pfVar10 = local_84 + param_1;
    *pfVar6 = *pfVar9 * DAT_002f767c;
    fVar3 = DAT_002f7680;
    pfVar6[1] = (DAT_002f7680 - *pfVar12) * fVar2;
    pfVar5[3] = *pfVar7 + *pfVar11;
    pfVar5[4] = *pfVar8;
    pfVar5[5] = fVar1;
    pfVar6[2] = (*pfVar9 + *pfVar11) * fVar2;
    pfVar6[3] = (fVar3 - *pfVar12) * fVar2;
    pfVar5[6] = *pfVar7;
    pfVar5[7] = *pfVar8 + *pfVar10;
    pfVar5[8] = fVar1;
    pfVar6[4] = *pfVar9 * fVar2;
    pfVar6[5] = (fVar3 - (*pfVar12 + *pfVar10)) * fVar2;
    pfVar5[9] = *pfVar7 + *pfVar11;
    pfVar5[10] = *pfVar8 + *pfVar10;
    pfVar5[0xb] = fVar1;
    pfVar6[6] = (*pfVar9 + *pfVar11) * fVar2;
    pfVar6[7] = (fVar3 - (*pfVar12 + *pfVar10)) * fVar2;
  }
  return;
}
