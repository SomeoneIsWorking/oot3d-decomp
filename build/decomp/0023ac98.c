// OoT3D decomp @ 0023ac98  name=FUN_0023ac98  size=1864

undefined4 FUN_0023ac98(float *param_1)

{
  ushort uVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  short sVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  float *pfVar12;
  uint in_fpscr;
  float fVar13;
  float extraout_s0;
  undefined4 uVar14;
  float fVar15;
  float extraout_s0_00;
  float fVar16;
  float extraout_s1;
  float extraout_s1_00;
  float fVar17;
  float extraout_s2;
  float extraout_s2_00;
  float fVar18;
  undefined1 auStack_94 [4];
  short local_90;
  undefined1 auStack_8c [4];
  undefined2 local_88;
  short local_86;
  undefined4 local_84;
  undefined2 local_80;
  short local_7e;
  float local_7c;
  undefined4 uStack_78;
  float local_74;
  undefined4 local_70;
  float local_6c;
  float fStack_68;
  float fStack_64;
  float *local_44;
  float *local_40;

  local_40 = param_1 + 0x23;
  pfVar12 = param_1 + 0x29;
  pfVar11 = param_1 + 8;
  local_44 = param_1 + 0x20;
  fVar13 = (float)FUN_00367ef0(param_1[0x36]);
  fVar4 = DAT_0023b090;
  fVar3 = DAT_0023b084;
  fVar15 = DAT_0023b080;
  piVar2 = DAT_0023b07c;
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023b07c + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar18 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023b07c + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  psVar7 = *(short **)
            (*(int *)(DAT_0023b088 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar18 = (DAT_0023b084 + fVar18 * DAT_0023b080) - (DAT_0023b078 / fVar13) * fVar16 * DAT_0023b080;
  fVar16 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar16 * DAT_0023b080 * fVar13 * fVar18;
  fVar16 = (float)VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar16 * fVar15 * fVar13 * fVar18;
  fVar16 = DAT_0023b08c;
  fVar17 = (float)VectorSignedToFloat((int)psVar7[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar17 * fVar15 * fVar13 * fVar18;
  fVar13 = (float)VectorSignedToFloat((int)psVar7[6],(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 7) = (short)(int)(fVar4 + fVar13 * fVar16);
  fVar16 = (float)VectorSignedToFloat((int)psVar7[8],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar7[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar16 * fVar15;
  fVar16 = (float)VectorSignedToFloat((int)psVar7[0xc],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar7[0xe],(byte)(in_fpscr >> 0x15) & 3);
  param_1[6] = fVar16 * fVar15;
  iVar8 = DAT_0023b094;
  sVar6 = psVar7[0x10];
  *(short *)((int)param_1 + 0x1e) = sVar6;
  *(int *)(iVar8 + 0x14) = (int)sVar6;
  sVar6 = *(short *)((int)param_1 + 0x1a6);
  if (((sVar6 == 0 || sVar6 == 10) || sVar6 == 0x14) || sVar6 == 0x19) {
    psVar7 = (short *)FUN_00338c5c((int)param_1[0x35] + 0xa98,(int)*(short *)(param_1 + 100),0x32);
    fVar16 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
    fVar13 = (float)VectorSignedToFloat((int)psVar7[1],(byte)(in_fpscr >> 0x15) & 3);
    fVar18 = (float)VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
    *pfVar11 = fVar16;
    param_1[9] = fVar13;
    param_1[10] = fVar18;
    *(short *)(param_1 + 0x10) = psVar7[3];
    *(short *)((int)param_1 + 0x42) = psVar7[4];
    param_1[0x11] = param_1[0x38];
    iVar8 = (int)psVar7[6];
    if (iVar8 == -1) {
      fVar16 = param_1[5];
    }
    else {
      fVar16 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
      if (0x168 < iVar8) {
        fVar16 = fVar16 * fVar15;
      }
    }
    param_1[0xf] = fVar16;
    fVar16 = DAT_0023b098;
    sVar6 = psVar7[7];
    if (sVar6 == -1) {
      sVar6 = 0;
    }
    *(short *)(param_1 + 0x12) = sVar6;
    param_1[0xe] = fVar16;
    if ((*(ushort *)((int)param_1 + 0x1e) & 4) != 0) {
      local_80 = *(undefined2 *)(param_1 + 0x10);
      local_7e = *(short *)((int)param_1 + 0x42) + 0x3fff;
      local_84 = DAT_0023b09c;
      FUN_0035579c(&local_84);
      param_1[0xb] = extraout_s0;
      param_1[0xc] = extraout_s1;
      param_1[0xd] = extraout_s2;
    }
    param_1[0x44] = DAT_0023b0a0;
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    if (-1 < psVar7[8]) {
      *(undefined1 *)((int)param_1 + 0x1b6) = 0;
      fVar16 = (float)VectorSignedToFloat((int)psVar7[8],(byte)(in_fpscr >> 0x15) & 3);
      fVar16 = fVar16 * DAT_0023b0a4;
      param_1[0x34] = fVar16;
      if ((int)fVar16 < 0x34000001) {
        fVar16 = DAT_0023b0a8;
      }
      param_1[0x34] = fVar16;
    }
  }
  else {
    in_fpscr = in_fpscr & 0xfffffff | (uint)(param_1[0x53] == param_1[0x38]) << 0x1e;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      param_1[0x11] = param_1[0x38];
    }
  }
  FUN_00372474(auStack_8c,local_44,local_40);
  FUN_00372474(auStack_94,local_44,pfVar12);
  uVar5 = DAT_0023b0ac;
  fVar16 = param_1[0x4a] * fVar4;
  param_1[0x4a] = fVar16;
  iVar8 = (int)*(short *)(*piVar2 + 0x1c6);
  fVar18 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x1c8),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar17 = fVar16 * fVar13 * fVar15;
  fVar13 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)FUN_00355780(param_1[3],param_1[0x44] * fVar16,fVar13 * fVar15,uVar5);
  param_1[0x44] = fVar13;
  uVar14 = VectorSignedToFloat((int)*(short *)(*piVar2 + 0x1a2),(byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)FUN_00355780(uVar14,param_1[0x43],fVar17,uVar5);
  param_1[0x43] = fVar13;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x198),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar16 = (float)FUN_00355780(fVar13 * fVar15,param_1[0x45],fVar16 * fVar18 * fVar15,uVar5);
  param_1[0x45] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x19a),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar16 = (float)FUN_00355780(fVar16 * fVar15,param_1[0x46],fVar17,uVar5);
  param_1[0x46] = fVar16;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x19c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar15 = (float)FUN_00355780(fVar13 * fVar15,fVar16,param_1[0x4a] * DAT_0023b0b0,uVar5);
  param_1[0x47] = fVar15;
  uVar1 = *(ushort *)((int)param_1 + 0x1e);
  if ((uVar1 & 0x80) == 0) {
    FUN_00338ac8(*param_1,param_1,auStack_94,uVar1 & 1);
  }
  else {
    FUN_003381e4(*param_1,param_1,auStack_94,param_1 + 0x11,uVar1 & 1);
  }
  if ((*(ushort *)((int)param_1 + 0x1e) & 4) != 0) {
    *pfVar11 = param_1[0x37] + param_1[0xb];
    param_1[10] = param_1[0x39] + param_1[0xd];
  }
  param_1[9] = param_1[0x38];
  FUN_00372474(&local_84,pfVar11,local_44);
  FUN_00372474(&local_7c,local_44,pfVar12);
  if (((uint)param_1[0x12] & 2) == 0) {
    local_70._2_2_ = *(short *)(param_1 + 7);
  }
  else {
    local_70._2_2_ = *(short *)((int)param_1 + 0x42);
  }
  iVar9 = (int)local_70._2_2_;
  iVar8 = (int)(short)(uStack_78._2_2_ - local_7e);
  if (iVar9 < 0x4000) {
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (iVar8 <= iVar9) {
LAB_0023b258:
      local_74 = local_7c;
      local_70 = uStack_78;
      goto LAB_0023b260;
    }
  }
  else {
    if (iVar8 < 0) {
      iVar8 = -iVar8;
    }
    if (iVar9 <= iVar8) goto LAB_0023b258;
  }
  if ((short)(uStack_78._2_2_ - local_7e) < 0) {
    local_70._2_2_ = -local_70._2_2_;
  }
  local_70._2_2_ = local_70._2_2_ + local_7e;
  iVar9 = (int)(short)(local_70._2_2_ - local_86);
  iVar8 = iVar9;
  if (iVar9 < 0) {
    iVar8 = -iVar9;
  }
  fVar15 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
  if (9 < iVar8) {
    local_70._2_2_ =
         local_86 + (short)(int)(fVar4 + fVar15 * (fVar3 / param_1[0x44]) * param_1[0x4a]);
  }
  if (((uint)param_1[0x12] & 1) != 0) {
    local_88 = FUN_00337fdc(param_1,(int)local_90,(int)*(short *)(param_1 + 0x10),0);
  }
  local_70 = CONCAT22(local_70._2_2_,local_88);
LAB_0023b260:
  local_74 = (float)FUN_0033743c(local_7c,param_1[1],param_1[2],param_1,0);
  param_1[0x49] = local_74;
  if (((uint)param_1[0x12] & 1) == 0) {
    if (DAT_0023b41c < (short)local_70) {
      local_70 = CONCAT22(local_70._2_2_,
                          (short)local_70 +
                          (short)((DAT_0023b41c - (short)local_70) * 0x10000 >> 0x12));
    }
    if ((short)local_70 < 0) {
      local_70 = CONCAT22(local_70._2_2_,
                          (short)local_70 +
                          (short)((DAT_0023b420 - (short)local_70) * 0x10000 >> 0x12));
    }
  }
  FUN_00372448(local_44,&local_74);
  *pfVar12 = extraout_s0_00;
  param_1[0x2a] = extraout_s1_00;
  param_1[0x2b] = extraout_s2_00;
  uVar14 = DAT_0023b424;
  if (*(short *)(param_1 + 0x62) == 7) {
    local_6c = *pfVar12;
    fStack_68 = param_1[0x2a];
    fStack_64 = param_1[0x2b];
    if ((*(char *)((int)param_1[0x35] + 0x31a5) == '\0') ||
       ((*(ushort *)((int)param_1 + 0x1e) & 0x10) != 0)) {
      FUN_003553fc(param_1,local_44,&local_6c);
      FUN_00367df4(uVar14,uVar14,uVar5,&local_6c,local_40);
    }
    else {
      FUN_00331ae8(param_1,local_44,&local_6c);
      FUN_00367df4(uVar14,uVar14,uVar5,&local_6c,local_40);
      FUN_00372474(&local_74,param_1 + 0x23,param_1 + 0x20);
      *(short *)(param_1 + 0x5f) = (short)local_70;
      *(short *)((int)param_1 + 0x17e) = local_70._2_2_;
      *(undefined2 *)(param_1 + 0x60) = 0;
    }
  }
  fVar15 = (float)FUN_00355780(param_1[0xf],param_1[0x51],param_1[0x47],fVar3);
  param_1[0x51] = fVar15;
  iVar9 = (int)-*(short *)((int)param_1 + 0x1a2);
  iVar8 = iVar9;
  if (iVar9 < 0) {
    iVar8 = -iVar9;
  }
  iVar10 = iVar8;
  if (iVar8 < 10) {
    iVar10 = 0;
  }
  sVar6 = (short)iVar10;
  fVar15 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
  if (9 < iVar8) {
    sVar6 = *(short *)((int)param_1 + 0x1a2) + (short)(int)(fVar4 + fVar15 * fVar4);
  }
  *(short *)((int)param_1 + 0x1a2) = sVar6;
  fVar15 = (float)FUN_003375bc(param_1[6],param_1);
  param_1[0x52] = fVar15;
  return 1;
}
