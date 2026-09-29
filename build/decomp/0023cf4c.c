// OoT3D decomp @ 0023cf4c  name=FUN_0023cf4c  size=1468

undefined4 FUN_0023cf4c(float *param_1)

{
  uint uVar1;
  byte bVar2;
  int *piVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  short sVar8;
  short *psVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  float *pfVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;
  float fVar16;
  undefined4 extraout_s0;
  float extraout_s0_00;
  float fVar17;
  undefined4 extraout_s1;
  float extraout_s1_00;
  float fVar18;
  undefined4 extraout_s2;
  float extraout_s2_00;
  float fVar19;
  float local_b4;
  float fStack_b0;
  float fStack_ac;
  undefined1 auStack_a0 [20];
  undefined1 auStack_8c [20];
  undefined1 auStack_78 [4];
  short local_74;
  short local_72;
  undefined1 auStack_70 [6];
  short local_6a;
  undefined1 auStack_68 [6];
  short local_62;
  float local_60;
  undefined2 local_5c;
  short local_5a;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  float *local_4c;
  undefined4 local_48;
  undefined4 local_44;
  undefined4 local_40;

  pfVar12 = param_1 + 0x23;
  local_4c = param_1 + 0x20;
  pfVar13 = param_1 + 0x29;
  fVar15 = (float)FUN_00367ef0(param_1[0x36]);
  iVar10 = DAT_0023d2d8;
  fVar5 = DAT_0023d2d4;
  fVar4 = DAT_0023d2cc;
  fVar16 = DAT_0023d2c8;
  piVar3 = DAT_0023d2c4;
  psVar9 = *(short **)
            (*(int *)(DAT_0023d2bc + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023d2c4 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023d2c4 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar19 = (DAT_0023d2cc + fVar19 * DAT_0023d2c8) - (DAT_0023d2c0 / fVar15) * fVar17 * DAT_0023d2c8;
  fVar17 = (float)VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar17 * DAT_0023d2c8 * fVar15 * fVar19;
  fVar17 = (float)VectorSignedToFloat((int)psVar9[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar17 * fVar16 * fVar15 * fVar19;
  fVar17 = DAT_0023d2d0;
  fVar18 = (float)VectorSignedToFloat((int)psVar9[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar18 * fVar16 * fVar15 * fVar19;
  fVar15 = (float)VectorSignedToFloat((int)psVar9[6],(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 6) = (short)(int)(fVar5 + fVar15 * fVar17);
  fVar17 = (float)VectorSignedToFloat((int)psVar9[8],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar17;
  fVar17 = (float)VectorSignedToFloat((int)psVar9[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar17 * fVar16;
  *(short *)((int)param_1 + 0x1a) = psVar9[0xc];
  *(undefined4 *)(iVar10 + 0x24) = 1;
  FUN_00372474(auStack_70,local_4c,pfVar12);
  FUN_00372474(auStack_78,local_4c,pfVar13);
  *(int *)(iVar10 + 0x14) = (int)*(short *)((int)param_1 + 0x1a);
  if (*(short *)((int)param_1 + 0x1a6) == 0) {
    param_1[0x4c] = param_1[0x4c] - param_1[0x4f];
    fVar17 = DAT_0023d2dc;
    *(short *)(param_1 + 8) = local_72;
    param_1[7] = fVar17;
    fVar17 = param_1[0x36];
    local_58 = *(undefined4 *)((int)fVar17 + 0x2340);
    uStack_54 = *(undefined4 *)((int)fVar17 + 0x2344);
    uStack_50 = *(undefined4 *)((int)fVar17 + 0x2348);
    FUN_00372474(auStack_68,param_1 + 0x37,&local_58);
    uVar14 = DAT_0023d2e8;
    sVar8 = *(short *)(*piVar3 + DAT_0023d2e0);
    *(short *)(param_1 + 9) = sVar8;
    if (uVar14 < (uint)(DAT_0023d2e4 + (short)(local_62 - local_6a))) {
      sVar8 = FUN_00368d94((int)(short)(local_62 - local_6a),(int)sVar8 << 2);
      *(short *)((int)param_1 + 0x22) = sVar8 * 3;
    }
    else {
      *(undefined2 *)((int)param_1 + 0x22) = 0;
    }
    *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
  }
  FUN_00338790(auStack_a0,param_1[0x36]);
  FUN_00371738(auStack_8c,auStack_a0,0x12);
  uVar7 = DAT_0023d2f0;
  uVar6 = DAT_0023d2ec;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar17 = (float)FUN_00355780(DAT_0023d2f0,param_1[0x44],fVar17 * fVar16,DAT_0023d2ec);
  param_1[0x44] = fVar17;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar17 = (float)FUN_00355780(uVar7,param_1[0x43],fVar17 * fVar16,uVar6);
  param_1[0x43] = fVar17;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar17 = (float)FUN_00355780(DAT_0023d2f4,param_1[0x45],fVar17 * fVar16,fVar16);
  param_1[0x45] = fVar17;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1c8),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar17 = (float)FUN_00355780(fVar16,param_1[0x46],fVar17 * fVar16,fVar16);
  param_1[0x46] = fVar17;
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x19c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar17 = (float)FUN_00355780(fVar17 * fVar16,param_1[0x47],DAT_0023d2f8,uVar6);
  param_1[0x47] = fVar17;
  FUN_00338ac8(*param_1,param_1,auStack_78,1);
  FUN_00372474(&local_60,local_4c,pfVar13);
  fVar17 = param_1[2];
  uVar14 = in_fpscr & 0xfffffff | (uint)(param_1[1] <= local_60) << 0x1d;
  if (SUB41(uVar14 >> 0x1d,0)) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(local_60 < fVar17) << 0x1f |
            (uint)(local_60 == fVar17) << 0x1e;
    uVar14 = uVar1 | (uint)(NAN(local_60) || NAN(fVar17)) << 0x1c;
    bVar2 = (byte)(uVar1 >> 0x18);
    fVar15 = fVar4;
    fVar19 = local_60;
    if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar14 >> 0x1c) & 1)) {
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1a0),
                                          (byte)(uVar14 >> 0x15) & 3);
      fVar19 = fVar17;
    }
  }
  else {
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1a0),(byte)(uVar14 >> 0x15) & 3)
    ;
    fVar19 = param_1[1];
  }
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x1c6),(byte)(uVar14 >> 0x15) & 3);
  fVar16 = (float)FUN_00355780(fVar15,param_1[0x42],fVar17 * fVar16,uVar6);
  param_1[0x42] = fVar16;
  fVar16 = (float)FUN_00355780(fVar19,param_1[0x49],fVar4 / fVar16,DAT_0023d548);
  param_1[0x49] = fVar16;
  sVar8 = *(short *)(param_1 + 6);
  iVar11 = (int)(short)(sVar8 - local_74);
  iVar10 = iVar11;
  if (iVar11 < 0) {
    iVar10 = -iVar11;
  }
  fVar16 = (float)VectorSignedToFloat(iVar11,(byte)(uVar14 >> 0x15) & 3);
  if (9 < iVar10) {
    sVar8 = local_74 + (short)(int)(fVar5 + fVar16 * (fVar4 / param_1[0x43]));
  }
  iVar11 = (int)*(short *)(*piVar3 + 0x19e);
  iVar10 = (int)sVar8;
  if (iVar11 < sVar8) {
    iVar10 = iVar11;
  }
  iVar11 = -(int)*(short *)(*piVar3 + 0x19e);
  if (iVar10 <= iVar11) {
    iVar10 = iVar11;
  }
  local_5c = (undefined2)iVar10;
  if (*(short *)(param_1 + 9) != 0) {
    *(short *)(param_1 + 8) = *(short *)(param_1 + 8) + *(short *)((int)param_1 + 0x22);
    *(short *)(param_1 + 9) = *(short *)(param_1 + 9) + -1;
  }
  iVar11 = (int)(short)(*(short *)(param_1 + 8) - local_72);
  iVar10 = iVar11;
  if (iVar11 < 0) {
    iVar10 = -iVar11;
  }
  fVar16 = (float)VectorSignedToFloat(iVar11,(byte)(uVar14 >> 0x15) & 3);
  if (DAT_0023d54c <= iVar10) {
    local_72 = local_72 + (short)(int)(fVar5 + fVar16 * fVar5);
  }
  local_5a = local_72;
  FUN_00372448(local_4c,&local_60);
  uVar7 = DAT_0023d550;
  local_48 = extraout_s0;
  local_44 = extraout_s1;
  local_40 = extraout_s2;
  FUN_00367df4(DAT_0023d550,DAT_0023d550,uVar6,&local_48,pfVar12);
  *pfVar13 = *pfVar12;
  param_1[0x2a] = param_1[0x24];
  param_1[0x2b] = param_1[0x25];
  local_b4 = *pfVar12;
  fStack_b0 = param_1[0x24];
  fStack_ac = param_1[0x25];
  FUN_003553fc(param_1,local_4c,&local_b4);
  *pfVar12 = local_b4;
  param_1[0x24] = fStack_b0;
  param_1[0x25] = fStack_ac;
  FUN_00372474(&local_60,local_4c,pfVar12);
  if (local_60 < param_1[1] * DAT_0023d554) {
    local_60 = param_1[1] * DAT_0023d554;
    FUN_00372448(local_4c,&local_60);
    *pfVar12 = extraout_s0_00;
    param_1[0x24] = extraout_s1_00;
    param_1[0x25] = extraout_s2_00;
    FUN_00367df4(uVar7,uVar7,uVar6,pfVar13,pfVar12);
  }
  fVar16 = (float)FUN_00355780(param_1[4],param_1[0x51],param_1[0x47],fVar4);
  param_1[0x51] = fVar16;
  *(undefined2 *)((int)param_1 + 0x1a2) = 0;
  fVar16 = (float)FUN_003375bc(param_1[5],param_1);
  param_1[0x52] = fVar16;
  return 1;
}
