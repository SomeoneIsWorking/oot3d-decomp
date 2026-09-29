// OoT3D decomp @ 0023b428  name=FUN_0023b428  size=2028

undefined4 FUN_0023b428(float *param_1)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  int *piVar4;
  undefined4 uVar5;
  short sVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  float fVar14;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float extraout_s0;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float extraout_s1;
  float extraout_s2;
  float local_b0;
  float local_ac;
  float local_a8;
  float *local_9c;
  float local_98;
  float local_94;
  float local_90;
  float local_8c;
  float local_88;
  float local_84;
  float *local_80;
  undefined1 auStack_7c [20];
  undefined1 auStack_68 [4];
  short local_64;
  short local_62;
  undefined1 auStack_60 [6];
  short local_5a;
  float local_58;
  short local_54;
  short local_52;
  undefined1 auStack_50 [4];
  float *local_4c;
  float *local_48;

  local_48 = param_1 + 0x23;
  pfVar11 = param_1 + 0x29;
  local_4c = param_1 + 0x20;
  fVar13 = (float)FUN_00367ef0(param_1[0x36]);
  fVar3 = DAT_0023b848;
  fVar14 = DAT_0023b844;
  fVar16 = DAT_0023b840;
  fVar13 = fVar13 * DAT_0023b840;
  psVar7 = *(short **)
            (*(int *)(DAT_0023b83c + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar18 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar18 * fVar13;
  fVar18 = (float)VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar18 * fVar13;
  fVar18 = (float)VectorSignedToFloat((int)psVar7[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar18 * fVar13;
  fVar13 = (float)VectorSignedToFloat((int)psVar7[6],(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 7) = (short)(int)(fVar3 + fVar13 * fVar14);
  fVar14 = (float)VectorSignedToFloat((int)psVar7[8],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar14;
  fVar14 = (float)VectorSignedToFloat((int)psVar7[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar14;
  fVar14 = (float)VectorSignedToFloat((int)psVar7[0xc],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar14;
  fVar14 = (float)VectorSignedToFloat((int)psVar7[0xe],(byte)(in_fpscr >> 0x15) & 3);
  param_1[6] = fVar14 * fVar16;
  *(short *)((int)param_1 + 0x1e) = psVar7[0x10];
  FUN_00372474(auStack_60,local_4c,local_48);
  FUN_00372474(auStack_68,local_4c,pfVar11);
  piVar4 = DAT_0023b854;
  fVar14 = DAT_0023b850;
  iVar9 = DAT_0023b84c;
  *(undefined4 *)(DAT_0023b84c + 0x24) = 1;
  fVar13 = DAT_0023b858;
  *(int *)(iVar9 + 0x14) = (int)*(short *)((int)param_1 + 0x1e);
  sVar6 = *(short *)((int)param_1 + 0x1a6);
  if (((sVar6 == 0 || sVar6 == 10) || sVar6 == 0x14) || sVar6 == 0x19) {
    param_1[0xb] = 0.0;
    *(undefined2 *)(param_1 + 0x11) = 0;
    param_1[0xf] = fVar14;
    param_1[0x10] = param_1[0x53];
    *(undefined2 *)(param_1 + 0xe) = 0;
    *(undefined2 *)(param_1 + 0xd) = 0;
    *(undefined2 *)((int)param_1 + 0x36) = 0;
    param_1[0xc] = param_1[3];
    iVar9 = *piVar4;
    fVar18 = (float)VectorSignedToFloat((int)*(short *)(iVar9 + 0x1c2),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar19 = (float)VectorSignedToFloat((int)(short)((*(short *)((int)param_1 + 0xea) + -0x7fff) -
                                                    local_5a),(byte)(in_fpscr >> 0x15) & 3);
    *(short *)((int)param_1 + 0x46) = (short)(int)((fVar13 / fVar18) * fVar19);
    *(undefined2 *)((int)param_1 + 0x4a) = 10;
    *(undefined2 *)(param_1 + 0x12) = *(undefined2 *)(iVar9 + 0x1c2);
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    *(undefined2 *)((int)param_1 + 0x3a) = 0;
  }
  uVar5 = DAT_0023b85c;
  if (*(short *)((int)param_1 + 0x4a) != 0) {
    *(short *)((int)param_1 + 0x4a) = *(short *)((int)param_1 + 0x4a) + -1;
  }
  fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar19 = param_1[0x4a] * fVar18 * fVar16;
  fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1c8),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar18 = param_1[0x4a] * fVar18 * fVar16;
  if (*(short *)((int)param_1 + 0x3a) == 0) {
    fVar20 = (float)FUN_00355780(param_1[3],param_1[0x44],fVar19,uVar5);
    param_1[0x44] = fVar20;
    uVar15 = VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1a2),(byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)FUN_00355780(uVar15,param_1[0x43],fVar18,uVar5);
    param_1[0x43] = fVar20;
  }
  else {
    fVar20 = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x3a) << 1,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)FUN_00355780(param_1[3] + fVar20,param_1[0x44],fVar19,uVar5);
    param_1[0x44] = fVar20;
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1a2),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar21 = (float)VectorSignedToFloat((int)*(short *)((int)param_1 + 0x3a) << 1,
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar20 = (float)FUN_00355780(fVar20 + fVar21,param_1[0x43],fVar18,uVar5);
    param_1[0x43] = fVar20;
    *(short *)((int)param_1 + 0x3a) = *(short *)((int)param_1 + 0x3a) + -1;
  }
  fVar20 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x198),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar19 = (float)FUN_00355780(fVar20 * fVar16,param_1[0x45],fVar19,uVar5);
  param_1[0x45] = fVar19;
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x19a),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar19 = (float)FUN_00355780(fVar19 * fVar16,param_1[0x46],fVar18,uVar5);
  param_1[0x46] = fVar19;
  fVar19 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x19c),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar16 = (float)FUN_00355780(fVar19 * fVar16,param_1[0x47],fVar18,uVar5);
  param_1[0x47] = fVar16;
  sVar6 = FUN_00331480(param_1,(int)(short)(local_5a + -0x7fff),1);
  iVar10 = (int)(short)(sVar6 - *(short *)(param_1 + 0x11));
  fVar16 = (fVar13 / param_1[4]) * fVar3;
  iVar9 = iVar10;
  if (iVar10 < 0) {
    iVar9 = -iVar10;
  }
  fVar18 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
  if (0xe < iVar9) {
    sVar6 = *(short *)(param_1 + 0x11) +
            (short)(int)(fVar3 + fVar18 * (fVar16 + fVar16 * (fVar13 - param_1[0x4a])) *
                                          DAT_0023b860 * DAT_0023b864);
  }
  *(short *)(param_1 + 0x11) = sVar6;
  fVar19 = *param_1;
  local_80 = param_1 + 0x20;
  local_9c = param_1 + 0x54;
  fVar18 = (float)FUN_00367ef0(param_1[0x36]);
  fVar16 = param_1[0x36];
  FUN_00331764(auStack_7c,*(undefined4 *)((int)fVar16 + 0x12b8));
  FUN_00371738(&local_b0,auStack_7c,0x12);
  uVar15 = DAT_0023bbac;
  if ((*(uint *)(*(int *)((int)fVar16 + 0x12b8) + 0xe54) & 4) == 0) {
    fVar16 = (float)FUN_00355780(local_ac,param_1[0x10],fVar3,DAT_0023bbac);
    param_1[0x10] = fVar16;
  }
  else {
    local_ac = local_ac - DAT_0023bbb0;
    fVar16 = (float)FUN_00355780(local_ac,param_1[0x10],uVar5,DAT_0023bbac);
    param_1[0x10] = fVar16;
    fVar16 = (float)FUN_00355780(DAT_0023bbb8,param_1[0x52],uVar15,DAT_0023bbb4);
    param_1[0x52] = fVar16;
  }
  local_88 = fVar18 + fVar19;
  local_8c = fVar14;
  local_84 = fVar14;
  uVar17 = VectorSignedToFloat((int)*(short *)(*piVar4 + 0x1a6),(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)FUN_00367e88(uVar17,local_9c,(int)*(short *)((int)param_1 + 0xea),(int)local_62);
  local_88 = local_88 - fVar16;
  FUN_00367df4(param_1[0x46],param_1[0x45],uVar5,&local_8c,param_1 + 0x4b);
  local_98 = local_b0 + param_1[0x4b];
  local_94 = local_ac + param_1[0x4c];
  local_90 = local_a8 + param_1[0x4d];
  FUN_00367df4(param_1[0x52],param_1[0x52],uVar15,&local_98,local_80);
  fVar16 = param_1[2];
  fVar14 = param_1[1];
  FUN_00372474(&local_58,local_4c,pfVar11);
  local_58 = (float)FUN_0033743c(local_58,param_1[1],param_1[2],param_1,
                                 (int)*(short *)((int)param_1 + 0x4a));
  param_1[0x49] = local_58;
  if (DAT_0023bbbc < (int)param_1[0x48]) {
    local_58 = local_58 + ((fVar16 + fVar14) * fVar3 - local_58) * DAT_0023bbc0;
  }
  local_54 = *(short *)(param_1 + 7) - *(short *)(param_1 + 0x11);
  iVar10 = (int)(short)(local_54 - local_64);
  iVar9 = iVar10;
  if (iVar10 < 0) {
    iVar9 = -iVar10;
  }
  fVar16 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
  if (9 < iVar9) {
    local_54 = local_64 + (short)(int)(fVar3 + fVar16 * (fVar13 / param_1[0x43]));
  }
  sVar6 = *(short *)(*piVar4 + 0x19e);
  if (sVar6 < local_54) {
    local_54 = sVar6;
  }
  sVar6 = *(short *)(*piVar4 + 0x1d8);
  if (local_54 <= sVar6) {
    local_54 = sVar6;
  }
  iVar10 = (int)(short)(*(short *)((int)param_1 + 0xea) - (local_62 + -0x7fff));
  iVar9 = iVar10;
  if ((DAT_0023bbc4 < iVar10 + 11000U) && (iVar9 = DAT_0023bbc8, iVar10 < 1)) {
    iVar9 = ((int)DAT_0023bbc4 >> 1) - DAT_0023bbc4;
  }
  fVar16 = (float)VectorSignedToFloat(iVar9,(byte)(in_fpscr >> 0x15) & 3);
  fVar14 = (fVar13 - param_1[0x4a]) * DAT_0023bbcc;
  fVar16 = ((fVar3 + param_1[0x4a] * fVar3) * fVar16) / param_1[0x44];
  fVar18 = ABS(fVar16);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar18 < fVar14) << 0x1f | (uint)(fVar18 == fVar14) << 0x1e;
  uVar12 = uVar1 | (uint)(NAN(fVar18) || NAN(fVar14)) << 0x1c;
  bVar2 = (byte)(uVar1 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar12 >> 0x1c) & 1)) {
    fVar14 = (float)VectorSignedToFloat((int)local_62,(byte)(uVar12 >> 0x15) & 3);
    local_62 = (short)(int)(fVar14 + fVar16);
  }
  local_52 = local_62;
  if (0 < *(short *)(param_1 + 0x12)) {
    local_52 = *(short *)((int)param_1 + 0x46) + local_62;
    *(short *)(param_1 + 0x12) = *(short *)(param_1 + 0x12) + -1;
  }
  FUN_00372448(local_4c,&local_58);
  *pfVar11 = extraout_s0;
  param_1[0x2a] = extraout_s1;
  param_1[0x2b] = extraout_s2;
  if (*(short *)(param_1 + 0x62) == 7) {
    local_b0 = 0.0;
    FUN_00337624(param_1[1],param_1[3],param_1,&local_58,auStack_50,param_1 + 8);
  }
  else {
    FUN_00367df4(DAT_0023bc64,DAT_0023bc64,uVar5,pfVar11,local_48);
  }
  fVar16 = (float)FUN_00355780(param_1[5],param_1[0x51],param_1[0x47],fVar13);
  param_1[0x51] = fVar16;
  iVar10 = (int)-*(short *)((int)param_1 + 0x1a2);
  iVar9 = iVar10;
  if (iVar10 < 0) {
    iVar9 = -iVar10;
  }
  iVar8 = iVar9;
  if (iVar9 < 10) {
    iVar8 = 0;
  }
  sVar6 = (short)iVar8;
  fVar16 = (float)VectorSignedToFloat(iVar10,(byte)(uVar12 >> 0x15) & 3);
  if (9 < iVar9) {
    sVar6 = *(short *)((int)param_1 + 0x1a2) + (short)(int)(fVar3 + fVar16 * fVar3);
  }
  *(short *)((int)param_1 + 0x1a2) = sVar6;
  fVar16 = (float)FUN_003375bc(param_1[6],param_1);
  param_1[0x52] = fVar16;
  return 1;
}
