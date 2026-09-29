// OoT3D decomp @ 0025c728  name=FUN_0025c728  size=1584

undefined4 FUN_0025c728(float *param_1)

{
  int *piVar1;
  undefined4 uVar2;
  short sVar3;
  short sVar4;
  int iVar5;
  short *psVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint in_fpscr;
  float fVar11;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  float fVar12;
  float fVar13;
  float extraout_s1;
  float extraout_s1_00;
  float extraout_s1_01;
  float fVar14;
  float extraout_s2;
  float extraout_s2_00;
  float extraout_s2_01;
  float fVar15;
  float fVar16;
  float local_88;
  float fStack_84;
  float fStack_80;
  int local_60;
  float local_5c;
  float local_58;
  float local_54;
  short local_50;
  short local_4e;
  float local_48;
  short local_44;
  short local_42;
  float local_40;
  short local_3c;
  short local_3a;
  float local_38;
  float local_34;
  float local_30;

  pfVar9 = param_1 + 0x23;
  pfVar8 = param_1 + 0x20;
  pfVar10 = param_1 + 0x29;
  FUN_00338790(&local_5c,param_1[0x36]);
  fVar11 = (float)FUN_00367ef0(param_1[0x36]);
  fVar12 = DAT_0025cb64;
  piVar1 = DAT_0025cb60;
  if (*(char *)((int)param_1[0x35] + 0x361) == '\0') {
    *(byte *)((int)param_1[0x35] + 0x361) = (byte)*(undefined2 *)(param_1 + 0x6b) | 0x50;
  }
  else {
    param_1[0x44] = DAT_0025cb5c;
    iVar5 = *piVar1;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1a2),(byte)(in_fpscr >> 0x15) & 3)
    ;
    param_1[0x43] = fVar13;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1a0),(byte)(in_fpscr >> 0x15) & 3)
    ;
    param_1[0x42] = fVar13;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x198),(byte)(in_fpscr >> 0x15) & 3)
    ;
    param_1[0x45] = fVar13 * fVar12;
    iVar7 = DAT_0025cb68;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x19a),(byte)(in_fpscr >> 0x15) & 3)
    ;
    param_1[0x46] = fVar13 * fVar12;
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x19c),(byte)(in_fpscr >> 0x15) & 3)
    ;
    param_1[0x47] = fVar13 * fVar12;
    psVar6 = *(short **)
              (*(int *)(iVar7 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
              *(short *)(param_1 + 99) * 8 + 4);
    fVar13 = (float)VectorSignedToFloat((int)*psVar6,(byte)(in_fpscr >> 0x15) & 3);
    *param_1 = fVar13 * fVar12 * fVar11;
    fVar11 = (float)VectorSignedToFloat((int)psVar6[2],(byte)(in_fpscr >> 0x15) & 3);
    param_1[1] = fVar11;
    fVar11 = (float)VectorSignedToFloat((int)psVar6[4],(byte)(in_fpscr >> 0x15) & 3);
    param_1[2] = fVar11;
    fVar11 = (float)VectorSignedToFloat((int)psVar6[6],(byte)(in_fpscr >> 0x15) & 3);
    param_1[3] = fVar11;
    fVar11 = DAT_0025cb6c;
    fVar13 = (float)VectorSignedToFloat((int)psVar6[8],(byte)(in_fpscr >> 0x15) & 3);
    param_1[4] = fVar13 * DAT_0025cb6c;
    fVar13 = (float)VectorSignedToFloat((int)psVar6[10],(byte)(in_fpscr >> 0x15) & 3);
    param_1[5] = fVar13 * fVar11;
    fVar13 = (float)VectorSignedToFloat((int)psVar6[0xc],(byte)(in_fpscr >> 0x15) & 3);
    param_1[6] = fVar13 * fVar11;
    fVar11 = (float)VectorSignedToFloat((int)psVar6[0xe],(byte)(in_fpscr >> 0x15) & 3);
    param_1[7] = fVar11;
    *(short *)(param_1 + 8) = psVar6[0x10];
    local_40 = param_1[2];
    local_3a = local_4e + -0x7fff;
    local_3c = local_50;
    local_38 = local_5c;
    local_30 = local_54;
    local_34 = local_58 + *param_1;
    FUN_00372448(&local_38,&local_40);
    FUN_00372474(&local_48,pfVar8,pfVar9);
    fVar11 = DAT_0025cb74;
    *(int *)(DAT_0025cb70 + 0x14) = (int)*(short *)(param_1 + 8);
    sVar3 = *(short *)((int)param_1 + 0x1a6);
    if ((sVar3 == 0 || sVar3 == 10) || sVar3 == 0x14) {
      param_1[9] = local_48;
      *(short *)(param_1 + 10) = local_42;
      *(short *)((int)param_1 + 0x2a) = local_44;
      *(undefined2 *)(param_1 + 0xb) = *(undefined2 *)(*piVar1 + 0x1c2);
      param_1[0x49] = param_1[2];
      param_1[0x42] = fVar11;
      *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
    }
    piVar1 = DAT_0025cb60;
    if (*(short *)(param_1 + 0xb) == 0) {
      fVar12 = (float)FUN_002cfca0((int)-local_50);
      fVar13 = (float)FUN_00338f60((int)-local_50);
      local_38 = param_1[4];
      local_34 = param_1[5] * fVar13 - param_1[6] * fVar12;
      local_30 = param_1[5] * fVar12 + param_1[6] * fVar13;
      fVar12 = (float)FUN_002cfca0((int)(short)(local_4e + -0x7fff));
      fVar13 = (float)FUN_00338f60((int)(short)(local_4e + -0x7fff));
      param_1[4] = local_30 * fVar12 + local_38 * fVar13;
      param_1[5] = local_34;
      param_1[6] = local_30 * fVar13 - local_38 * fVar12;
      *pfVar8 = local_5c + param_1[4];
      param_1[0x21] = local_58 + param_1[5];
      param_1[0x22] = local_54 + param_1[6];
      local_48 = param_1[2];
      local_42 = local_4e + -0x7fff;
      local_44 = local_50;
      FUN_00372448(pfVar8,&local_48);
      *pfVar10 = extraout_s0_00;
      param_1[0x2a] = extraout_s1_00;
      param_1[0x2b] = extraout_s2_00;
      local_48 = param_1[1];
      FUN_00372448(pfVar8,&local_48);
      *pfVar9 = extraout_s0_01;
      param_1[0x24] = extraout_s1_01;
      param_1[0x25] = extraout_s2_01;
    }
    else {
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xb),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar13 = fVar11 / fVar13;
      *pfVar8 = *pfVar8 + (local_38 - *pfVar8) * fVar13;
      param_1[0x21] = param_1[0x21] + (local_34 - param_1[0x21]) * fVar13;
      param_1[0x22] = param_1[0x22] + (local_30 - param_1[0x22]) * fVar13;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x1c2),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar15 = (float)VectorSignedToFloat((int)(short)(*(short *)(param_1 + 10) - local_3a),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar13 = fVar11 / fVar13;
      fVar16 = (float)VectorSignedToFloat((int)(short)(*(short *)((int)param_1 + 0x2a) - local_3c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_60 = (int)(short)(int)(fVar16 * fVar13);
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xb),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x1cc),
                                          (byte)(in_fpscr >> 0x15) & 3);
      local_48 = (float)FUN_00355780(local_40 + (param_1[9] - local_40) * fVar13 * fVar14,local_48,
                                     fVar16 * fVar12);
      sVar3 = (short)(int)(fVar15 * fVar13) * *(short *)(param_1 + 0xb) + local_3a;
      iVar5 = (int)(short)(sVar3 - local_42);
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0025cb60 + 0x1cc),
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar7 = iVar5;
      if (iVar5 < 0) {
        iVar7 = -iVar5;
      }
      fVar16 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      if (9 < iVar7) {
        sVar3 = local_42 + (short)(int)(DAT_0025cb78 + fVar16 * fVar13 * fVar12);
      }
      sVar4 = (short)local_60 * *(short *)(param_1 + 0xb) + local_3c;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0025cb60 + 0x1cc),
                                          (byte)(in_fpscr >> 0x15) & 3);
      iVar5 = (int)(short)(sVar4 - local_44);
      iVar7 = iVar5;
      if (iVar5 < 0) {
        iVar7 = -iVar5;
      }
      fVar16 = (float)VectorSignedToFloat(iVar5,(byte)(in_fpscr >> 0x15) & 3);
      if (9 < iVar7) {
        sVar4 = local_44 + (short)(int)(DAT_0025cb78 + fVar16 * fVar13 * fVar12);
      }
      local_44 = sVar4;
      local_42 = sVar3;
      FUN_00372448(pfVar8,&local_48);
      *pfVar10 = extraout_s0;
      param_1[0x2a] = extraout_s1;
      param_1[0x2b] = extraout_s2;
      *pfVar9 = *pfVar10;
      param_1[0x24] = param_1[0x2a];
      param_1[0x25] = param_1[0x2b];
      *(short *)(param_1 + 0xb) = *(short *)(param_1 + 0xb) + -1;
      local_88 = *pfVar9;
      fStack_84 = param_1[0x24];
      fStack_80 = param_1[0x25];
      if (*(char *)((int)param_1[0x35] + 0x31a5) == '\0') {
        FUN_003553fc();
        *pfVar9 = local_88;
        param_1[0x24] = fStack_84;
        param_1[0x25] = fStack_80;
      }
      else {
        FUN_00331ae8(param_1,pfVar8,&local_88);
        *pfVar9 = local_88;
        param_1[0x24] = fStack_84;
        param_1[0x25] = fStack_80;
      }
    }
    uVar2 = DAT_0025cd78;
    param_1[0x4b] = param_1[0x20] - param_1[0x37];
    param_1[0x4c] = param_1[0x21] - param_1[0x38];
    param_1[0x4d] = param_1[0x22] - param_1[0x39];
    fVar12 = (float)FUN_00355780(param_1[7],param_1[0x51],uVar2,fVar11);
    param_1[0x51] = fVar12;
    fVar12 = DAT_0025cd7c;
    *(undefined2 *)((int)param_1 + 0x1a2) = 0;
    param_1[0x52] = fVar12;
  }
  return 1;
}
