// OoT3D decomp @ 00239fd8  name=FUN_00239fd8  size=3152

/* WARNING: Removing unreachable block (ram,0x0023ac5c) */

undefined4 FUN_00239fd8(float *param_1)

{
  ushort uVar1;
  code *pcVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined2 uVar7;
  short sVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  float extraout_r1;
  float extraout_r1_00;
  float *pfVar12;
  bool bVar13;
  uint in_fpscr;
  uint uVar14;
  undefined4 in_cr0;
  undefined4 in_cr1;
  undefined4 in_cr8;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  float extraout_s0;
  float fVar19;
  float extraout_s1;
  float extraout_s2;
  float extraout_s2_00;
  float fVar20;
  float fVar21;
  float fVar22;
  float local_ac;
  float local_a8;
  float local_a4;
  float local_a0;
  float local_9c;
  float local_98;
  float local_94;
  float local_90;
  float *local_8c;
  int local_88;
  undefined4 local_84;
  undefined1 auStack_80 [4];
  short local_7c;
  short local_7a;
  undefined1 auStack_78 [4];
  short sStack_74;
  short local_72;
  float local_70;
  short local_6c;
  short local_6a;
  undefined4 local_68;
  float local_64;
  float fStack_60;
  float fStack_5c;
  float local_58;
  float *local_54;
  float *local_50;
  
  pfVar12 = param_1 + 0x20;
  local_50 = param_1 + 0x23;
  local_54 = param_1 + 0x29;
  fVar15 = (float)FUN_00367ef0(param_1[0x36]);
  fVar5 = DAT_0023a360;
  fVar16 = DAT_0023a35c;
  fVar4 = DAT_0023a358;
  fVar18 = DAT_0023a354;
  piVar3 = DAT_0023a350;
  psVar9 = *(short **)
            (*(int *)(DAT_0023a348 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
             *(short *)(param_1 + 99) * 8 + 4);
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023a350 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar21 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023a350 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar15 = fVar15 * DAT_0023a354 *
           ((DAT_0023a358 + fVar21 * DAT_0023a354) - (DAT_0023a34c / fVar15) * fVar19 * DAT_0023a354
           );
  fVar19 = (float)VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar19 * fVar15;
  fVar19 = (float)VectorSignedToFloat((int)psVar9[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar19 * fVar15;
  fVar19 = (float)VectorSignedToFloat((int)psVar9[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar19 * fVar15;
  fVar15 = (float)VectorSignedToFloat((int)psVar9[6],(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 8) = (short)(int)(fVar5 + fVar15 * fVar16);
  fVar16 = (float)VectorSignedToFloat((int)psVar9[8],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar9[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar9[0xc],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar16 * fVar18;
  fVar16 = (float)VectorSignedToFloat((int)psVar9[0xe],(byte)(in_fpscr >> 0x15) & 3);
  param_1[6] = fVar16;
  fVar16 = (float)VectorSignedToFloat((int)psVar9[0x10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[7] = fVar16 * fVar18;
  sVar8 = psVar9[0x12];
  *(short *)((int)param_1 + 0x22) = sVar8;
  iVar11 = DAT_0023a364;
  *(int *)(DAT_0023a364 + 0x14) = (int)sVar8;
  local_84 = *(undefined4 *)((int)param_1[0x35] + 0x20ac);
  FUN_00372474(auStack_78,pfVar12,local_50);
  FUN_00372474(auStack_80,pfVar12,local_54);
  fVar16 = DAT_0023a368;
  sVar8 = *(short *)((int)param_1 + 0x1a6);
  if (sVar8 == 0 || sVar8 == 10) {
LAB_0023a1c4:
    param_1[0xc] = 0.0;
    *(undefined2 *)(param_1 + 0x12) = 0;
    *(undefined2 *)(param_1 + 0xf) = 0;
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined2 *)((int)param_1 + 0x3a) = 0;
    *(undefined2 *)(param_1 + 0x13) = 0xf;
    param_1[0xd] = param_1[3];
    param_1[0x10] = param_1[0x38];
    param_1[0x11] = param_1[0x48];
    *(undefined2 *)((int)param_1 + 0x3e) = 0;
    *(short *)((int)param_1 + 0x4a) = local_72;
    *(undefined2 *)(param_1 + 0x14) = 0;
    *(undefined4 *)(iVar11 + 0x24) = 0;
    iVar10 = (int)*(short *)(*piVar3 + 0x1fa) + (int)*(short *)(*piVar3 + 0x1f8);
    fVar15 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = fVar15 * fVar16;
    if (iVar10 < 1) {
      fVar19 = fVar15 * fVar5 - fVar5;
    }
    else {
      fVar19 = fVar5 + fVar15 * fVar5;
    }
    *(short *)((int)param_1 + 0x4e) = (short)(int)fVar19;
  }
  else {
    if (sVar8 == 0x14) {
      iVar10 = *piVar3;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0x1ca),
                                          (byte)(in_fpscr >> 0x15) & 3);
      param_1[0x44] = fVar15;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar10 + 0x1ca),
                                          (byte)(in_fpscr >> 0x15) & 3);
      param_1[0x43] = fVar15;
      goto LAB_0023a1c4;
    }
    fVar15 = extraout_s2;
    if (sVar8 == 0x19) goto LAB_0023a1c4;
  }
  *(undefined2 *)((int)param_1 + 0x1a6) = 1;
  *(undefined4 *)(iVar11 + 0x24) = 1;
  iVar10 = DAT_0023a36c;
  local_68 = 0;
  if (*(short *)(param_1 + 0x13) != 0) {
    *(short *)(param_1 + 0x13) = *(short *)(param_1 + 0x13) + -1;
  }
  if (iVar10 < (int)param_1[0x48]) {
    iVar10 = (int)*(short *)(*piVar3 + 0x1fa) + (int)*(short *)(*piVar3 + 0x1f8);
    fVar19 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = fVar19 * fVar16;
    if (iVar10 < 1) {
      fVar16 = fVar19 * fVar5 - fVar5;
    }
    else {
      fVar16 = fVar5 + fVar19 * fVar5;
    }
    *(short *)((int)param_1 + 0x4e) = (short)(int)fVar16;
  }
  else if (0 < *(short *)((int)param_1 + 0x4e)) goto LAB_0023a2e0;
  uVar6 = DAT_0023a6c4;
  fVar19 = DAT_0023a6bc;
  fVar16 = DAT_0023a6b8;
  iVar10 = (int)*(short *)(*piVar3 + 0x1c6);
  fVar21 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
  fVar22 = fVar21 * fVar18 * param_1[0x4a];
  fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1c8),(byte)(in_fpscr >> 0x15) & 3)
  ;
  local_58 = fVar15;
  if (*(short *)(param_1 + 0xf) == 0) {
    local_58 = fVar22;
  }
  fVar15 = fVar21 * fVar18 * param_1[0x4a];
  if (*(short *)(param_1 + 0xf) != 0) {
    local_58 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
    local_58 = local_58 * fVar18;
  }
  fVar20 = param_1[0x11];
  param_1[0x11] = param_1[0x48];
  fVar21 = param_1[0xd];
  fVar16 = (param_1[0x48] - fVar20) * fVar16;
  if ((uint)fVar16 < (uint)fVar19) {
    fVar16 = DAT_0023a6c0;
  }
  if (*(short *)((int)param_1 + 0x3e) == 0) {
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1f6),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)FUN_00355780(fVar21 - fVar21 * fVar19 * fVar18 * fVar16,param_1[0x44],local_58,
                                 uVar6);
    param_1[0x44] = fVar19;
    uVar17 = VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1a2),(byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)FUN_00355780(uVar17,param_1[0x43],fVar15,uVar6);
    param_1[0x43] = fVar19;
  }
  else {
    fVar19 = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x3e) << 1,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)FUN_00355780(fVar21 + fVar19,param_1[0x44],local_58,uVar6);
    param_1[0x44] = fVar19;
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1a2),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar21 = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x3e) << 1,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar19 = (float)FUN_00355780(fVar19 + fVar21,param_1[0x43],fVar15,uVar6);
    param_1[0x43] = fVar19;
    *(short *)((int)param_1 + 0x3e) = *(short *)((int)param_1 + 0x3e) + -1;
  }
  piVar3 = DAT_0023a350;
  uVar17 = VectorSignedToFloat((int)*(short *)(*DAT_0023a350 + 0x1a2),(byte)(in_fpscr >> 0x15) & 3);
  fVar19 = (float)FUN_00355780(uVar17,param_1[0x43],fVar15,uVar6);
  param_1[0x43] = fVar19;
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x198),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar19 = (float)FUN_00355780(fVar19 * fVar18,param_1[0x45],fVar22,uVar6);
  param_1[0x45] = fVar19;
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x19a),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar15 = (float)FUN_00355780(fVar19 * fVar18,param_1[0x46],fVar15,uVar6);
  param_1[0x46] = fVar15;
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x19c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar18 = (float)FUN_00355780(fVar19 * fVar18,fVar15,param_1[0x4a] * DAT_0023a6c8,uVar6);
  param_1[0x47] = fVar18;
  if ((*(ushort *)((int)param_1 + 0x22) & 1) == 0) {
    *(undefined2 *)(param_1 + 0x12) = 0;
    in_fpscr = in_fpscr & 0xfffffff | (uint)(param_1[0x53] == param_1[0x38]) << 0x1e;
    fVar18 = extraout_r1;
    if (SUB41(in_fpscr >> 0x1e,0)) {
      param_1[0x10] = param_1[0x38];
    }
  }
  else {
    uVar17 = FUN_00331480(param_1,(int)(short)(local_72 + -0x7fff),local_68);
    fVar18 = (fVar4 / param_1[4]) * fVar5;
    uVar7 = FUN_002998b0(fVar18 + fVar18 * (fVar4 - param_1[0x4a]),uVar17,
                         (int)*(short *)(param_1 + 0x12),0xf);
    *(undefined2 *)(param_1 + 0x12) = uVar7;
    fVar18 = extraout_r1_00;
  }
  fVar15 = 0.0;
  if (*(short *)(param_1 + 0xf) != 0) {
    fVar18 = *param_1;
    fVar15 = DAT_0023a6cc;
  }
  if (*(short *)(param_1 + 0xf) != 0 && (uint)fVar18 < (uint)fVar15) {
    fVar18 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0xe));
    fVar18 = *param_1 * (fVar4 - fVar18) + fVar18 * DAT_0023a6d0;
  }
  else {
    fVar18 = *param_1;
  }
  fVar15 = DAT_0023a6d4;
  uVar1 = *(ushort *)((int)param_1 + 0x22);
  if ((uVar1 & 0x80) == 0) {
    if ((uVar1 & 0x20) == 0) {
      FUN_00338ac8(param_1,auStack_80,uVar1 & 1);
    }
    else {
      local_88 = (int)*(short *)(param_1 + 0x12);
      local_8c = param_1 + 0x20;
      local_94 = (float)FUN_00367ef0(param_1[0x36]);
      local_94 = local_94 + fVar18;
      local_98 = fVar15;
      local_90 = fVar15;
      fVar18 = (float)FUN_002cfca0(local_88);
      uVar14 = in_fpscr & 0xfffffff | (uint)(fVar15 <= fVar18) << 0x1d;
      iVar10 = (int)(short)(*(short *)((int)param_1 + 0xea) - local_7a);
      if (SUB41(uVar14 >> 0x1d,0)) {
        fVar15 = (float)FUN_00338f60(iVar10);
        fVar15 = -fVar15;
      }
      else {
        fVar15 = (float)FUN_00338f60(iVar10);
      }
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023a350 + 0x1a6),
                                          (byte)(uVar14 >> 0x15) & 3);
      local_94 = local_94 - fVar18 * fVar15 * fVar19;
      FUN_00367df4(param_1[0x46],param_1[0x45],uVar6,&local_98,param_1 + 0x4b);
      local_a4 = param_1[0x37] + param_1[0x4b];
      local_a0 = param_1[0x38] + param_1[0x4c];
      local_9c = param_1[0x39] + param_1[0x4d];
      FUN_00367df4(param_1[0x52],param_1[0x52],DAT_0023aa88,&local_a4,local_8c);
    }
  }
  else {
    FUN_003381e4(param_1,auStack_80,param_1 + 0x10,uVar1 & 1);
  }
  iVar10 = FUN_0036a7a0(param_1[0x35]);
  if ((iVar10 == 0) && (iVar10 = FUN_003fb3e8(local_84), iVar10 != 0)) {
LAB_0023a2e0:
    coprocessor_function(10,0xf,4,in_cr1,in_cr8,in_cr0);
                    /* WARNING: Does not return */
    pcVar2 = (code *)software_udf(0x20,0x23a2e6);
    (*pcVar2)();
  }
  FUN_00372474(&local_70,pfVar12,local_54);
  local_70 = (float)FUN_0033743c(local_70,param_1[1],param_1[2],param_1,
                                 (int)*(short *)(param_1 + 0x13));
  param_1[0x49] = local_70;
  if (*(short *)((int)param_1 + 0x4e) < 1) {
    local_6c = local_7c;
    local_6a = FUN_00331440(fVar4 / param_1[0x44],(int)*(short *)((int)param_1 + 0x4a),(int)local_7a
                            ,10);
  }
  else if (*(short *)(param_1 + 0xf) == 0) {
    local_6a = FUN_003380f0(param_1[5],fVar16,param_1,(int)local_7a,
                            (int)*(short *)((int)param_1 + 0xea));
    local_6c = FUN_00337fdc(param_1,(int)local_7c,(int)*(short *)(param_1 + 8),
                            (int)*(short *)(param_1 + 0x12));
  }
  else {
    local_6a = FUN_00331440(fVar4 / param_1[0x44],(int)*(short *)((int)param_1 + 0x3a),(int)local_7a
                            ,10);
    local_6c = FUN_00331440(fVar4 / param_1[0x43],(int)*(short *)(param_1 + 0xe),(int)local_7c,10);
  }
  if (DAT_0023aa90 < local_6c) {
    local_6c = (short)DAT_0023aa90;
  }
  if (local_6c < DAT_0023aa94) {
    local_6c = (short)DAT_0023aa94;
  }
  FUN_00372448(pfVar12,&local_70);
  uVar17 = DAT_0023aa98;
  *local_54 = extraout_s0;
  local_54[1] = extraout_s1;
  local_54[2] = extraout_s2_00;
  uVar1 = *(ushort *)(param_1 + 0x62);
  bVar13 = uVar1 != 7;
  if (!bVar13) {
    uVar1 = *(ushort *)((int)param_1 + 0x22);
  }
  fVar18 = fVar4;
  if (bVar13 || (uVar1 & 0x10) != 0) {
    param_1[0xd] = param_1[3];
    *(undefined2 *)(param_1 + 0xf) = 0;
    *(undefined4 *)(iVar11 + 0x24) = 0;
    FUN_00367df4(uVar17,uVar17,uVar6,local_54,local_50);
LAB_0023ac0c:
    if (0x10 < *(short *)(DAT_0023ac8c + 0x44)) goto LAB_0023ac28;
  }
  else {
    *(short *)((int)param_1 + 0x4a) = *(short *)((int)param_1 + 0xea) + -0x7fff;
    if (*(short *)((int)param_1 + 0x4e) < 1) {
      local_ac = *local_54;
      local_a8 = local_54[1];
      local_a4 = local_54[2];
      fVar16 = param_1[3] * DAT_0023ac84;
      param_1[0x44] = fVar16;
      param_1[0xd] = fVar16;
      local_64 = local_ac;
      fStack_60 = local_a8;
      fStack_5c = local_a4;
      iVar11 = FUN_003553fc(param_1,pfVar12,&local_ac);
      local_64 = local_ac;
      fStack_60 = local_a8;
      fStack_5c = local_a4;
      if (iVar11 == 0) {
        FUN_00367df4(uVar17,uVar17,uVar6,local_54,local_50);
      }
      else {
        *(short *)((int)param_1 + 0x4a) = local_7a;
        *(undefined2 *)((int)param_1 + 0x4e) = 0xffff;
      }
      *(undefined2 *)(param_1 + 0xf) = 0;
    }
    else {
      FUN_00337624(param_1[1],param_1[3],param_1,&local_70,&local_58,param_1 + 9,0);
    }
    if (*(short *)(param_1 + 0xf) != 0) {
      uVar7 = FUN_00331440(fVar4 - local_58 * DAT_0023ac88,
                           (int)(short)(*(short *)((int)param_1 + 0x3a) + -0x7fff),
                           (int)*(short *)((int)param_1 + 0x17e),10);
      *(undefined2 *)((int)param_1 + 0x17e) = uVar7;
    }
    if ((*(ushort *)((int)param_1 + 0x22) & 4) == 0) {
      FUN_00372474(&local_70,param_1 + 0x23,param_1 + 0x20);
      *(short *)(param_1 + 0x5f) = local_6c;
      sVar8 = local_6a;
    }
    else {
      *(short *)(param_1 + 0x5f) = -sStack_74;
      sVar8 = local_72 + -0x7fff;
    }
    *(short *)((int)param_1 + 0x17e) = sVar8;
    iVar11 = DAT_0023ac8c;
    *(undefined2 *)(param_1 + 0x60) = 0;
    if (0x10 < *(short *)(iVar11 + 0x44)) goto LAB_0023ac28;
    if ((*(uint *)((int)param_1[0x35] + 0xf8) & 0xff) == 0) {
      fVar16 = (float)FUN_003759d0();
      *(short *)((int)param_1 + 0x17e) =
           *(short *)((int)param_1 + 0x17e) + (short)(int)(fVar16 * DAT_0023ac90);
      goto LAB_0023ac0c;
    }
  }
  fVar18 = DAT_0023ac94;
LAB_0023ac28:
  fVar18 = (float)FUN_00355780(param_1[6] * fVar18,param_1[0x51],param_1[0x47],fVar4);
  param_1[0x51] = fVar18;
  uVar7 = FUN_00331440(fVar5,0,(int)*(short *)((int)param_1 + 0x1a2),10);
  *(undefined2 *)((int)param_1 + 0x1a2) = uVar7;
  fVar18 = (float)FUN_003375bc(param_1[7],param_1);
  param_1[0x52] = fVar18;
  return 1;
}

