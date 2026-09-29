// OoT3D decomp @ 00200490  name=FUN_00200490  size=2164

undefined4 FUN_00200490(undefined4 *param_1)

{
  ushort uVar1;
  bool bVar2;
  float *pfVar3;
  short sVar4;
  undefined2 uVar5;
  short *psVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float *pfVar11;
  undefined4 *puVar12;
  uint in_fpscr;
  float fVar13;
  undefined4 uVar14;
  float fVar15;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined4 extraout_s2_02;
  undefined4 extraout_s2_03;
  float local_9c;
  float fStack_98;
  float fStack_94;
  float local_74;
  float local_70;
  float local_6c;
  float local_68;
  float local_64;
  float local_60;
  float local_5c;
  float local_58;
  float local_54;
  float local_50;
  short local_4c;
  short local_4a;
  float local_48;
  short local_44;
  short local_42;
  undefined4 local_40;
  short local_3c;
  short local_3a;
  undefined4 *local_38;

  local_38 = param_1 + 0x23;
  puVar12 = param_1 + 0x20;
  bVar2 = false;
  fVar13 = (float)FUN_00367ef0(param_1[0x36]);
  iVar7 = DAT_0020086c;
  *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xffef;
  pfVar11 = (float *)(param_1 + 3);
  psVar6 = *(short **)
            (*(int *)(iVar7 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  uVar14 = VectorSignedToFloat((int)*psVar6,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = uVar14;
  uVar14 = VectorSignedToFloat((int)psVar6[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = uVar14;
  *(short *)(param_1 + 2) = psVar6[4];
  FUN_00372474(&local_40,puVar12,local_38);
  uVar14 = DAT_00200874;
  iVar7 = DAT_00200870;
  *(int *)(DAT_00200870 + 0x14) = (int)*(short *)(param_1 + 2);
  sVar4 = *(short *)((int)param_1 + 0x1a6);
  if (sVar4 == 4) {
    local_48 = DAT_00200bcc;
    local_42 = local_3a;
    local_44 = 0;
    param_1[6] = uVar14;
    *(undefined4 *)(iVar7 + 0x14) = 0x3400;
    if ((((*(short *)(param_1 + 7) < 0) || (DAT_00200bd0 < (int)param_1[0x48])) ||
        (iVar8 = FUN_003389e0(), iVar8 != 0)) && ((*(ushort *)(param_1 + 0x65) & 8) != 0)) {
LAB_00200b84:
      *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xfff7 | 0x14;
      if (*(short *)((int)param_1 + 0x1ae) < 0) {
        FUN_00338864(param_1,(int)*(short *)(param_1 + 0x67),2);
      }
      else {
        FUN_003387a8(param_1);
        *(undefined2 *)((int)param_1 + 0x1ae) = 0xffff;
      }
      *(undefined4 *)(iVar7 + 0x14) = 0;
    }
LAB_00200ae0:
    bVar2 = true;
  }
  else {
    if (4 < sVar4) {
      if (sVar4 != 10 && sVar4 != 0x14) {
        if (sVar4 != 0x1e) goto LAB_00200b84;
        uVar1 = *(ushort *)(param_1 + 0x65);
        *(ushort *)(param_1 + 0x65) = uVar1 | 0x400;
        if ((uVar1 & 8) != 0) {
          *(undefined2 *)((int)param_1 + 0x1a6) = 4;
        }
      }
      goto LAB_00200ae0;
    }
    if (sVar4 == 0) {
      *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xfff3;
      FUN_00338c04(param_1);
      param_1[0x51] = *param_1;
      *(undefined2 *)(param_1 + 7) = 0;
      *(undefined2 *)((int)param_1 + 0x1a2) = 0;
      *pfVar11 = (float)param_1[0x37];
      param_1[4] = param_1[0x38];
      param_1[5] = param_1[0x39];
      if (param_1[0x53] != -0x39060000) {
        param_1[4] = param_1[0x53];
      }
      sVar4 = *(short *)((int)param_1 + 0xea);
      fVar15 = (float)FUN_002cfca0((int)sVar4);
      fVar13 = DAT_00200888;
      local_68 = *pfVar11 + fVar15 * DAT_00200888;
      local_64 = (float)param_1[4] + DAT_00200888;
      fVar15 = (float)FUN_00338f60((int)sVar4);
      local_60 = (float)param_1[5] + fVar15 * fVar13;
      if ((*(uint *)(param_1[0x35] + 0xf8) & 1) == 0) {
        *(undefined2 *)((int)param_1 + 0x1e) = 0xffff;
        sVar4 = sVar4 + 0x3fff;
      }
      else {
        *(undefined2 *)((int)param_1 + 0x1e) = 1;
        sVar4 = sVar4 + -0x3fff;
      }
      fVar13 = (float)FUN_002cfca0((int)sVar4);
      local_5c = local_68 + DAT_00200880[2] * fVar13;
      local_58 = (float)param_1[4] + DAT_0020088c;
      fVar13 = (float)FUN_00338f60((int)sVar4);
      fStack_94 = local_60 + DAT_00200880[2] * fVar13;
      local_9c = local_5c;
      fStack_98 = local_58;
      local_54 = fStack_94;
      iVar7 = FUN_003553fc(param_1,&local_68,&local_9c);
      pfVar3 = DAT_00200878;
      local_5c = local_9c;
      local_58 = fStack_98;
      local_54 = fStack_94;
      if (iVar7 != 0) {
        *(short *)((int)param_1 + 0x1e) = -*(short *)((int)param_1 + 0x1e);
      }
      FUN_00342e8c(&local_50,pfVar3);
      local_4a = *(short *)((int)param_1 + 0xea) + local_4a;
      FUN_00372448(pfVar11,&local_50);
      pfVar11 = DAT_00200880;
      *puVar12 = extraout_s0_00;
      param_1[0x21] = extraout_s1_00;
      param_1[0x22] = extraout_s2_00;
      local_48 = *pfVar11;
      local_44 = *(short *)(pfVar11 + 1);
      local_42 = *(short *)((int)pfVar11 + 6) * *(short *)((int)param_1 + 0x1e) +
                 *(short *)((int)param_1 + 0xea);
      fVar13 = DAT_00200890;
    }
    else {
      if (sVar4 == 1) {
        fVar13 = (float)VectorSignedToFloat(*(short *)(param_1 + 7) + -3,
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar13 = fVar13 * DAT_00200bbc;
        local_74 = *DAT_00200878 + (DAT_00200878[3] - *DAT_00200878) * fVar13;
        local_70 = DAT_00200878[1] + (DAT_00200878[4] - DAT_00200878[1]) * fVar13;
        local_6c = DAT_00200878[2] + (DAT_00200878[5] - DAT_00200878[2]) * fVar13;
        FUN_00342e8c(&local_50,&local_74);
        local_4a = local_4a * *(short *)((int)param_1 + 0x1e) + *(short *)((int)param_1 + 0xea);
        FUN_00372448(pfVar11,&local_50);
        pfVar11 = DAT_00200880;
        *puVar12 = extraout_s0_01;
        param_1[0x21] = extraout_s1_01;
        param_1[0x22] = extraout_s2_01;
        local_48 = *pfVar11 + (pfVar11[2] - *pfVar11) * fVar13;
        fVar15 = (float)VectorSignedToFloat((int)(short)(*(short *)(pfVar11 + 3) -
                                                        *(short *)(pfVar11 + 1)),
                                            (byte)(in_fpscr >> 0x15) & 3);
        local_44 = *(short *)(pfVar11 + 1) + (short)(int)(fVar15 * fVar13);
        fVar15 = (float)VectorSignedToFloat((int)(short)(*(short *)((int)pfVar11 + 0xe) -
                                                        *(short *)((int)pfVar11 + 6)),
                                            (byte)(in_fpscr >> 0x15) & 3);
        local_4a = *(short *)((int)pfVar11 + 6) + (short)(int)(fVar15 * fVar13);
        local_42 = local_4a * *(short *)((int)param_1 + 0x1e) + *(short *)((int)param_1 + 0xea);
        fVar15 = (float)param_1[6];
        fVar13 = DAT_00200bc0;
      }
      else {
        if (sVar4 != 2) {
          if (sVar4 != 3) goto LAB_00200b84;
          fVar15 = (float)VectorSignedToFloat(*(short *)(param_1 + 7) + -0xef,
                                              (byte)(in_fpscr >> 0x15) & 3);
          fVar15 = fVar15 * DAT_0020087c;
          local_74 = DAT_00200878[6] + (DAT_00200878[9] - DAT_00200878[6]) * fVar15;
          local_70 = DAT_00200878[7] + (DAT_00200878[10] - DAT_00200878[7]) * fVar15 + fVar13;
          local_6c = DAT_00200878[8] + (DAT_00200878[0xb] - DAT_00200878[8]) * fVar15;
          FUN_00342e8c(&local_50,&local_74);
          local_4a = local_4a * *(short *)((int)param_1 + 0x1e) + *(short *)((int)param_1 + 0xea);
          FUN_00372448(pfVar11,&local_50);
          pfVar11 = DAT_00200880;
          *puVar12 = extraout_s0;
          param_1[0x21] = extraout_s1;
          param_1[0x22] = extraout_s2;
          local_50 = pfVar11[4] + (pfVar11[6] - pfVar11[4]) * fVar15;
          fVar13 = (float)VectorSignedToFloat((int)(short)(*(short *)(pfVar11 + 7) -
                                                          *(short *)(pfVar11 + 5)),
                                              (byte)(in_fpscr >> 0x15) & 3);
          local_4c = *(short *)(pfVar11 + 5) + (short)(int)(fVar13 * fVar15);
          fVar13 = (float)VectorSignedToFloat((int)(short)(*(short *)((int)pfVar11 + 0x1e) -
                                                          *(short *)((int)pfVar11 + 0x16)),
                                              (byte)(in_fpscr >> 0x15) & 3);
          local_4a = *(short *)((int)pfVar11 + 0x16) + (short)(int)(fVar13 * fVar15);
          local_42 = local_4a * *(short *)((int)param_1 + 0x1e) + *(short *)((int)param_1 + 0xea);
          fVar13 = (float)param_1[6] + DAT_00200884;
          local_48 = local_50;
          local_44 = local_4c;
          goto LAB_0020069c;
        }
        fVar15 = (float)VectorSignedToFloat(*(short *)(param_1 + 7) + -0xde,
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar15 = fVar15 * DAT_00200bc4;
        local_74 = DAT_00200878[3] + (DAT_00200878[6] - DAT_00200878[3]) * fVar15;
        local_70 = (DAT_00200878[4] - fVar13) +
                   (DAT_00200878[7] - (DAT_00200878[4] - fVar13)) * fVar15 + fVar13;
        local_6c = DAT_00200878[5] + (DAT_00200878[8] - DAT_00200878[5]) * fVar15;
        FUN_00342e8c(&local_50,&local_74);
        local_4a = local_4a * *(short *)((int)param_1 + 0x1e) + *(short *)((int)param_1 + 0xea);
        FUN_00372448(pfVar11,&local_50);
        pfVar11 = DAT_00200880;
        *puVar12 = extraout_s0_02;
        param_1[0x21] = extraout_s1_02;
        param_1[0x22] = extraout_s2_02;
        local_48 = pfVar11[2] + (pfVar11[4] - pfVar11[2]) * fVar15;
        fVar13 = (float)VectorSignedToFloat((int)(short)(*(short *)(pfVar11 + 5) -
                                                        *(short *)(pfVar11 + 3)),
                                            (byte)(in_fpscr >> 0x15) & 3);
        local_44 = *(short *)(pfVar11 + 3) + (short)(int)(fVar13 * fVar15);
        fVar13 = (float)VectorSignedToFloat((int)(short)(*(short *)((int)pfVar11 + 0x16) -
                                                        *(short *)((int)pfVar11 + 0xe)),
                                            (byte)(in_fpscr >> 0x15) & 3);
        local_4a = *(short *)((int)pfVar11 + 0xe) + (short)(int)(fVar13 * fVar15);
        local_42 = local_4a * *(short *)((int)param_1 + 0x1e) + *(short *)((int)param_1 + 0xea);
        fVar15 = (float)param_1[6];
        fVar13 = DAT_00200bc8;
      }
      fVar13 = fVar15 - fVar13;
      local_50 = local_48;
      local_4c = local_44;
    }
LAB_0020069c:
    param_1[6] = fVar13;
  }
  sVar4 = *(short *)(param_1 + 7) + 1;
  *(short *)(param_1 + 7) = sVar4;
  if (sVar4 == 1) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 10;
  }
  else {
    if (sVar4 == 3) {
      uVar5 = 1;
    }
    else if (sVar4 == 0xde) {
      uVar5 = 2;
    }
    else if (sVar4 == 0xed) {
      uVar5 = 0x14;
    }
    else if (sVar4 == 0xef) {
      uVar5 = 3;
    }
    else if (sVar4 == 0xfc) {
      uVar5 = 0x1e;
    }
    else {
      if (sVar4 != 0x156) goto LAB_00200c24;
      uVar5 = 4;
    }
    *(undefined2 *)((int)param_1 + 0x1a6) = uVar5;
  }
LAB_00200c24:
  if (!bVar2) {
    local_48 = (float)FUN_00355780(local_48,local_40,param_1[6],DAT_00200d44);
    iVar8 = (int)(short)(local_44 - local_3c);
    iVar7 = iVar8;
    if (iVar8 < 0) {
      iVar7 = -iVar8;
    }
    fVar13 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    if (9 < iVar7) {
      local_44 = local_3c + (short)(int)(DAT_00200d48 + fVar13 * (float)param_1[6]);
    }
    iVar8 = (int)(short)(local_42 - local_3a);
    iVar7 = iVar8;
    if (iVar8 < 0) {
      iVar7 = -iVar8;
    }
    fVar13 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    if (9 < iVar7) {
      local_42 = local_3a + (short)(int)(DAT_00200d48 + fVar13 * (float)param_1[6]);
    }
    FUN_00372448(puVar12,&local_48);
    param_1[0x29] = extraout_s0_03;
    param_1[0x2a] = extraout_s1_03;
    param_1[0x2b] = extraout_s2_03;
    uVar9 = param_1[0x2a];
    uVar10 = param_1[0x2b];
    *local_38 = param_1[0x29];
    local_38[1] = uVar9;
    local_38[2] = uVar10;
  }
  uVar9 = FUN_00338a90(puVar12,local_38);
  param_1[0x49] = uVar9;
  param_1[0x52] = uVar14;
  param_1[0x4b] = (float)param_1[0x20] - (float)param_1[0x37];
  param_1[0x4c] = (float)param_1[0x21] - (float)param_1[0x38];
  param_1[0x4d] = (float)param_1[0x22] - (float)param_1[0x39];
  return 1;
}
