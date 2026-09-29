// OoT3D decomp @ 00202738  name=FUN_00202738  size=1996

undefined4 FUN_00202738(float *param_1)

{
  uint uVar1;
  short sVar2;
  byte bVar3;
  int *piVar4;
  float fVar5;
  undefined4 uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  short sVar10;
  int iVar11;
  float *pfVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;
  undefined4 uVar16;
  float extraout_s0;
  float fVar17;
  float extraout_s1;
  float fVar18;
  float fVar19;
  float extraout_s2;
  float fVar20;
  undefined1 auStack_90 [20];
  undefined4 local_7c;
  short local_78;
  float local_74;
  undefined4 local_70;
  undefined1 auStack_6c [4];
  short local_68;
  short local_66;
  float local_64;
  undefined4 local_60;
  float local_5c;
  float *local_58;
  float *local_54;
  undefined1 auStack_50 [20];

  local_54 = param_1 + 0x23;
  pfVar12 = param_1 + 0x29;
  local_58 = param_1 + 0x20;
  fVar15 = (float)FUN_00367ef0(param_1[0x36]);
  fVar5 = DAT_00202b44;
  fVar18 = DAT_00202b40;
  piVar4 = DAT_00202b3c;
  psVar7 = *(short **)
            (*(int *)(DAT_00202b34 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00202b3c + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar20 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00202b3c + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar17 = (DAT_00202b44 + fVar20 * DAT_00202b40) - (DAT_00202b38 / fVar15) * fVar17 * DAT_00202b40;
  fVar20 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar20 * DAT_00202b40 * fVar15 * fVar17;
  fVar20 = (float)VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar20 * fVar18 * fVar15 * fVar17;
  fVar20 = (float)VectorSignedToFloat((int)psVar7[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar20 * fVar18 * fVar15 * fVar17;
  fVar15 = (float)VectorSignedToFloat((int)psVar7[6],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar15;
  fVar15 = (float)VectorSignedToFloat((int)psVar7[8],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar15 * fVar18;
  fVar15 = (float)VectorSignedToFloat((int)psVar7[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar15;
  fVar15 = (float)VectorSignedToFloat((int)psVar7[0xc],(byte)(in_fpscr >> 0x15) & 3);
  param_1[6] = fVar15 * fVar18;
  *(short *)(param_1 + 7) = psVar7[0xe];
  FUN_00338790(auStack_50,param_1[0x36]);
  FUN_00371738(auStack_90,auStack_50,0x12);
  FUN_00372474(&local_64,local_58,local_54);
  FUN_00372474(auStack_6c,local_58,pfVar12);
  *(int *)(DAT_00202b48 + 0x14) = (int)*(short *)(param_1 + 7);
  sVar10 = *(short *)((int)param_1 + 0x1a6);
  if ((sVar10 == 0 || sVar10 == 10) || sVar10 == 0x14) {
    param_1[0xb] = 0.0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined2 *)((int)param_1 + 0x36) = 0;
    *(undefined2 *)(param_1 + 0x11) = 0;
    *(undefined2 *)((int)param_1 + 0x46) = 200;
    *(undefined2 *)((int)param_1 + 0x3a) = 0;
    param_1[0xc] = param_1[3];
    fVar15 = DAT_00202b4c;
    param_1[0xf] = param_1[0x38] - param_1[0x4f];
    param_1[0x10] = local_64;
    param_1[0x4c] = param_1[0x4c] - param_1[0x4f];
    param_1[0x45] = fVar15;
    *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
  }
  uVar6 = DAT_00202b50;
  if (*(short *)((int)param_1 + 0x3a) == 0) {
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (float)FUN_00355780(param_1[3],param_1[0x44],fVar15 * fVar18,DAT_00202b50);
    param_1[0x44] = fVar15;
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar16 = VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1a2),(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (float)FUN_00355780(uVar16,param_1[0x43],fVar15 * fVar18,uVar6);
    param_1[0x43] = fVar15;
  }
  else {
    fVar15 = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x3a),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (float)FUN_00355780(param_1[3] + fVar15,param_1[0x44],fVar17 * fVar18,DAT_00202b50);
    param_1[0x44] = fVar15;
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1a2),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar17 = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x3a),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (float)FUN_00355780(fVar15 + fVar17,param_1[0x43],fVar20 * fVar18,uVar6);
    param_1[0x43] = fVar15;
    *(short *)((int)param_1 + 0x3a) = *(short *)((int)param_1 + 0x3a) + -1;
  }
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x198),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar15 = (float)FUN_00355780(fVar17 * fVar18,param_1[0x45],fVar15 * fVar18,uVar6);
  param_1[0x45] = fVar15;
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x19a),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar15 = (float)FUN_00355780(fVar17 * fVar18,param_1[0x46],fVar15 * fVar18,uVar6);
  param_1[0x46] = fVar15;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x19c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar15 = (float)FUN_00355780(fVar17 * fVar18,fVar15,DAT_00202b54,uVar6);
  param_1[0x47] = fVar15;
  FUN_003381e4(*param_1,param_1,auStack_6c,param_1 + 0xf,0);
  local_74 = local_64;
  local_70 = local_60;
  FUN_00372474(&local_7c,local_58,local_54);
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1ce),(byte)(in_fpscr >> 0x15) & 3)
  ;
  local_74 = (float)FUN_00355780(local_7c,local_64,fVar15 * fVar18);
  fVar17 = DAT_00202e90;
  fVar15 = DAT_00202e8c;
  iVar11 = (int)(short)(local_78 - (short)local_60);
  fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1ce),(byte)(in_fpscr >> 0x15) & 3)
  ;
  iVar8 = iVar11;
  if (iVar11 < 0) {
    iVar8 = -iVar11;
  }
  fVar19 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
  if (9 < iVar8) {
    local_78 = (short)local_60 + (short)(int)(DAT_00202e8c + fVar19 * fVar20 * fVar18);
  }
  local_70 = CONCAT22(local_70._2_2_,local_78);
  if (*(short *)(param_1 + 0xe) == 0) {
    sVar10 = FUN_003380f0(param_1[4],DAT_00202e90,param_1,(int)local_66,
                          (int)*(short *)((int)param_1 + 0xea));
    fVar20 = param_1[0x35];
    bVar13 = *(short *)((int)fVar20 + 0x104) == 0x5a;
    if (bVar13) {
      fVar20 = (float)(uint)*(byte *)((int)fVar20 + 0x4c30);
    }
    local_70._2_2_ = sVar10;
    if (bVar13 && fVar20 == 0.0) {
      psVar7 = *(short **)(DAT_00202e94 + (int)param_1[0x36]);
      if (((psVar7 != (short *)0x0) && (*psVar7 == 0x19)) &&
         (fVar20 = *(float *)((int)param_1[0x36] + 100),
         in_fpscr = in_fpscr & 0xfffffff | (uint)(fVar20 == fVar17) << 0x1e |
                    (uint)(fVar17 <= fVar20) << 0x1d, bVar3 = (byte)(in_fpscr >> 0x18),
         !(bool)(bVar3 >> 5 & 1) || (bool)(bVar3 >> 6))) {
        local_70._0_2_ =
             FUN_00337fdc(param_1,(int)local_68,
                          (int)(short)(int)(fVar15 + *(float *)(DAT_00202b48 + 0x50) * DAT_00202e98)
                          ,(int)*(short *)(param_1 + 0x11));
      }
    }
  }
  else {
    local_70._2_2_ = *(short *)((int)param_1 + 0x36);
    iVar11 = (int)(short)(local_70._2_2_ - local_66);
    iVar8 = iVar11;
    if (iVar11 < 0) {
      iVar8 = -iVar11;
    }
    fVar17 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
    if (9 < iVar8) {
      local_70._2_2_ = local_66 + (short)(int)(DAT_00202e8c + fVar17 * (fVar5 / param_1[0x44]));
    }
    local_70._0_2_ = *(short *)(param_1 + 0xd);
    iVar11 = (int)(short)((short)local_70 - local_68);
    iVar8 = iVar11;
    if (iVar11 < 0) {
      iVar8 = -iVar11;
    }
    fVar17 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
    if (9 < iVar8) {
      local_70._0_2_ = local_68 + (short)(int)(DAT_00202e8c + fVar17 * (fVar5 / param_1[0x44]));
    }
  }
  uVar14 = in_fpscr & 0xfffffff | (uint)(param_1[1] <= local_74) << 0x1d;
  fVar17 = param_1[1];
  if (SUB41(uVar14 >> 0x1d,0)) {
    fVar20 = param_1[2];
    uVar1 = in_fpscr & 0xfffffff | (uint)(local_74 < fVar20) << 0x1f |
            (uint)(local_74 == fVar20) << 0x1e;
    uVar14 = uVar1 | (uint)(NAN(local_74) || NAN(fVar20)) << 0x1c;
    bVar3 = (byte)(uVar1 >> 0x18);
    fVar17 = local_74;
    if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar14 >> 0x1c) & 1)) {
      fVar17 = fVar20;
    }
  }
  local_74 = fVar17;
  sVar10 = *(short *)(*piVar4 + 0x19e);
  if (((short)local_70 <= sVar10) &&
     (sVar2 = *(short *)(*piVar4 + 0x1da), sVar10 = (short)local_70, (short)local_70 <= sVar2)) {
    sVar10 = sVar2;
  }
  local_70._0_2_ = sVar10;
  FUN_00372448(local_58,&local_74);
  *pfVar12 = extraout_s0;
  param_1[0x2b] = extraout_s2;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1d2),(byte)(uVar14 >> 0x15) & 3);
  param_1[0x2a] = param_1[0x2a] + (extraout_s1 - param_1[0x2a]) * fVar17 * fVar18;
  iVar8 = DAT_00202b48;
  if ((*(short *)(param_1 + 0x62) == 7) && (((uint)param_1[7] & 0x10) == 0)) {
    FUN_00337624(param_1[1],param_1[3],param_1,&local_74,&local_5c,param_1 + 8,0);
    if (((uint)param_1[7] & 4) == 0) {
      FUN_00372474(&local_74,param_1 + 0x23,param_1 + 0x20);
      *(short *)(param_1 + 0x5f) = (short)local_70;
      *(short *)((int)param_1 + 0x17e) = local_70._2_2_;
      *(undefined2 *)(param_1 + 0x60) = 0;
    }
    else {
      *(short *)(param_1 + 0x5f) = -(short)local_60;
      *(short *)((int)param_1 + 0x17e) = local_60._2_2_ + -0x7fff;
      *(undefined2 *)(param_1 + 0x60) = 0;
    }
    if (*(short *)(param_1 + 0xe) != 0) {
      sVar10 = *(short *)((int)param_1 + 0x36) + -0x7fff;
      iVar11 = (int)(short)(sVar10 - *(short *)((int)param_1 + 0x17e));
      iVar8 = iVar11;
      if (iVar11 < 0) {
        iVar8 = -iVar11;
      }
      fVar18 = (float)VectorSignedToFloat(iVar11,(byte)(uVar14 >> 0x15) & 3);
      if (9 < iVar8) {
        sVar10 = *(short *)((int)param_1 + 0x17e) +
                 (short)(int)(fVar15 + fVar18 * (fVar5 - local_5c * DAT_00202e9c));
      }
      *(short *)((int)param_1 + 0x17e) = sVar10;
    }
  }
  else {
    param_1[0xc] = param_1[3];
    uVar16 = DAT_00202f3c;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined4 *)(iVar8 + 0x24) = 0;
    FUN_00367df4(uVar16,uVar16,uVar6,pfVar12,local_54);
  }
  fVar18 = (float)FUN_00338a90(local_58,local_54);
  param_1[0x49] = fVar18;
  iVar11 = (int)-*(short *)((int)param_1 + 0x1a2);
  iVar8 = iVar11;
  if (iVar11 < 0) {
    iVar8 = -iVar11;
  }
  iVar9 = iVar8;
  if (iVar8 < 10) {
    iVar9 = 0;
  }
  sVar10 = (short)iVar9;
  fVar18 = (float)VectorSignedToFloat(iVar11,(byte)(uVar14 >> 0x15) & 3);
  if (9 < iVar8) {
    sVar10 = *(short *)((int)param_1 + 0x1a2) + (short)(int)(fVar15 + fVar18 * fVar15);
  }
  *(short *)((int)param_1 + 0x1a2) = sVar10;
  fVar18 = (float)FUN_003375bc(param_1[6],param_1);
  param_1[0x52] = fVar18;
  return 1;
}
