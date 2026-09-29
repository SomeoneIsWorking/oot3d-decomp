// OoT3D decomp @ 0025cd80  name=FUN_0025cd80  size=1596

undefined4 FUN_0025cd80(short *param_1)

{
  uint uVar1;
  undefined2 uVar2;
  byte bVar3;
  float fVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint unaff_r10;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  int iVar14;
  float fVar15;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined4 uVar16;
  float extraout_s1;
  undefined4 extraout_s1_00;
  float extraout_s1_01;
  float fVar17;
  undefined4 uVar18;
  float extraout_s2;
  undefined4 extraout_s2_00;
  float extraout_s2_01;
  float fVar19;
  undefined1 auStack_a8 [4];
  float local_a4;
  undefined4 local_94;
  undefined4 local_90;
  undefined1 auStack_8c [20];
  undefined1 auStack_78 [20];
  float local_64;
  short local_60;
  short local_5e;
  float local_5c;
  undefined2 local_58;
  short local_56;
  undefined1 auStack_54 [12];
  short local_48;
  short local_46;
  float local_40;
  float local_3c;
  float local_38;

  pfVar10 = (float *)(param_1 + 0x46);
  pfVar9 = (float *)(param_1 + 0x40);
  pfVar11 = (float *)(param_1 + 0x52);
  pfVar8 = (float *)(param_1 + 2);
  *param_1 = **(short **)(*(int *)(DAT_0025d164 + param_1[0xc5] * 8 + 4) + param_1[0xc6] * 8 + 4);
  if (*(char *)(*(int *)(param_1 + 0x6a) + 0x361) == '\0') {
    *(byte *)(*(int *)(param_1 + 0x6a) + 0x361) = (byte)param_1[0xd6] | 0x50;
    *(undefined4 *)(param_1 + 0x14) = *(undefined4 *)(param_1 + 0x90);
    return 1;
  }
  FUN_00331764(auStack_78,*(undefined4 *)(param_1 + 0x6c));
  FUN_00371738(auStack_54,auStack_78,0x12);
  FUN_00372474(&local_64,pfVar9,pfVar10);
  uVar16 = DAT_0025d170;
  fVar19 = DAT_0025d16c;
  *(int *)(DAT_0025d168 + 0x14) = (int)*param_1;
  fVar4 = DAT_0025d174;
  uVar2 = (undefined2)uVar16;
  if (param_1[0xd3] == 0) {
    FUN_00331764(auStack_a8,*(undefined4 *)(param_1 + 0x6c));
    fVar13 = (float)FUN_00367ef0(*(undefined4 *)(param_1 + 0x6c));
    local_a4 = fVar13 + local_a4;
    iVar14 = FUN_00358410(*(int *)(param_1 + 0x6a) + 0xa98,&local_90,&local_94,auStack_a8);
    if (iVar14 == -0x39060000) {
      iVar14 = 0;
    }
    else {
      unaff_r10 = FUN_00394628(*(int *)(param_1 + 0x6a) + 0xa98,local_90,local_94);
      iVar14 = FUN_002a9e90(*(int *)(param_1 + 0x6a) + 0xa98,local_90,local_94);
    }
    fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar14 + 6),(byte)(in_fpscr >> 0x15) & 3);
    uVar16 = VectorSignedToFloat((int)*(short *)(iVar14 + 8),(byte)(in_fpscr >> 0x15) & 3);
    iVar6 = iVar14 + (unaff_r10 & 0xffff) * 6;
    uVar18 = VectorSignedToFloat((int)*(short *)(iVar14 + 10),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 6) = uVar18;
    *(undefined4 *)(param_1 + 4) = uVar16;
    *pfVar8 = fVar13;
    local_40 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + -0xc),(byte)(in_fpscr >> 0x15) & 3
                                         );
    local_3c = (float)VectorSignedToFloat((int)*(short *)(iVar6 + -10),(byte)(in_fpscr >> 0x15) & 3)
    ;
    local_38 = (float)VectorSignedToFloat((int)*(short *)(iVar6 + -8),(byte)(in_fpscr >> 0x15) & 3);
    local_5c = fVar19;
    local_58 = uVar2;
    fVar13 = (float)FUN_003696ec(*pfVar8 - local_40,*(float *)(param_1 + 6) - local_38);
    local_56 = (short)(int)(fVar4 + fVar13 * DAT_0025d178 * DAT_0025d17c);
    fVar13 = (float)FUN_00338a90(param_1 + 0x6e,pfVar8);
    fVar15 = (float)FUN_00338a90(param_1 + 0x6e,&local_40);
    uVar12 = in_fpscr & 0xfffffff | (uint)(fVar13 < fVar15) << 0x1f |
             (uint)(fVar13 == fVar15) << 0x1e;
    in_fpscr = uVar12 | (uint)(NAN(fVar13) || NAN(fVar15)) << 0x1c;
    bVar3 = (byte)(uVar12 >> 0x18);
    if ((bool)(bVar3 >> 6 & 1) || bVar3 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      *(float *)(param_1 + 8) = local_40 - *pfVar8;
      *(float *)(param_1 + 10) = local_3c - *(float *)(param_1 + 4);
      *(float *)(param_1 + 0xc) = local_38 - *(float *)(param_1 + 6);
      local_56 = local_56 + -0x7fff;
    }
    else {
      *(float *)(param_1 + 8) = *pfVar8 - local_40;
      *(float *)(param_1 + 10) = *(float *)(param_1 + 4) - local_3c;
      *(float *)(param_1 + 0xc) = *(float *)(param_1 + 6) - local_38;
      *pfVar8 = local_40;
      *(float *)(param_1 + 4) = local_3c;
      *(float *)(param_1 + 6) = local_38;
    }
    uVar16 = DAT_0025d180;
    param_1[0x1a] = local_56;
    param_1[0x1b] = 10;
    param_1[0x18] = 0;
    param_1[0x19] = 0;
    *(undefined4 *)(param_1 + 0x16) = uVar16;
    param_1[0xd3] = param_1[0xd3] + 1;
  }
  if (param_1[0x1b] == 0) {
    if (0x3effffff < *(int *)(param_1 + 0x14)) {
      FUN_00331764(auStack_8c,*(undefined4 *)(param_1 + 0x6c));
      FUN_00371738(auStack_54,auStack_8c,0x12);
      FUN_00330e1c(pfVar8,auStack_54,pfVar11);
      *pfVar9 = *pfVar11 + *(float *)(param_1 + 8);
      *(float *)(param_1 + 0x42) = *(float *)(param_1 + 0x54) + *(float *)(param_1 + 10);
      *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x56) + *(float *)(param_1 + 0xc);
      local_5c = DAT_0025d3e0;
      *pfVar10 = *pfVar11;
      *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x54);
      *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_1 + 0x56);
      local_56 = param_1[0x1a];
      local_58 = uVar2;
      FUN_00372448(pfVar11,&local_5c);
      param_1[0x18] = param_1[0x18] + 3000;
      local_40 = extraout_s0_01;
      local_3c = extraout_s1_01;
      local_38 = extraout_s2_01;
      fVar13 = (float)FUN_00338f60();
      fVar15 = ABS(fVar13);
      *pfVar10 = *pfVar10 + (local_40 - *pfVar10) * fVar15;
      *(float *)(param_1 + 0x48) =
           *(float *)(param_1 + 0x48) + (local_3c - *(float *)(param_1 + 0x48)) * fVar15;
      *(float *)(param_1 + 0x4a) =
           *(float *)(param_1 + 0x4a) + (local_38 - *(float *)(param_1 + 0x4a)) * fVar15;
      fVar15 = *(float *)(param_1 + 0x16);
      uVar12 = in_fpscr & 0xfffffff | (uint)(fVar13 <= fVar15) << 0x1d;
      if ((SUB41(uVar12 >> 0x1d,0)) || (param_1[0x19] != 0)) {
        uVar1 = in_fpscr & 0xfffffff | (uint)(fVar15 < fVar13) << 0x1f |
                (uint)(fVar15 == fVar13) << 0x1e;
        uVar12 = uVar1 | (uint)(NAN(fVar15) || NAN(fVar13)) << 0x1c;
        bVar3 = (byte)(uVar1 >> 0x18);
        if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(uVar12 >> 0x1c) & 1)) {
          param_1[0x19] = 0;
        }
      }
      else {
        iVar14 = *(int *)(param_1 + 0x6c);
        param_1[0x19] = 1;
        uVar16 = FUN_0040cc18(iVar14);
        FUN_0032d700(DAT_0025d3e8,iVar14 + 0x28,*(int *)(DAT_0025d3e4 + iVar14) + 0x10000b1,uVar16);
      }
      *(float *)(param_1 + 0x16) = fVar13;
      fVar15 = DAT_0025d3ec;
      iVar14 = *(int *)(param_1 + 0x6c);
      uVar16 = *(undefined4 *)(param_1 + 0x54);
      uVar18 = *(undefined4 *)(param_1 + 0x56);
      *(float *)(iVar14 + 0x28) = *pfVar11;
      *(undefined4 *)(iVar14 + 0x2c) = uVar16;
      *(undefined4 *)(iVar14 + 0x30) = uVar18;
      *(undefined4 *)(*(int *)(param_1 + 0x6c) + 0x2c) = *(undefined4 *)(param_1 + 0xa6);
      *(short *)(*(int *)(param_1 + 0x6c) + 0xbe) = local_56;
      fVar17 = (float)VectorSignedToFloat((int)param_1[0x1a],(byte)(uVar12 >> 0x15) & 3);
      iVar14 = (int)(short)(int)(fVar17 + *(float *)(param_1 + 0x14) * fVar13 * fVar15);
      fVar13 = (float)FUN_002cfca0(iVar14);
      *pfVar9 = *pfVar10 + fVar13 * fVar19;
      *(undefined4 *)(param_1 + 0x42) = *(undefined4 *)(param_1 + 0x48);
      fVar13 = (float)FUN_00338f60(iVar14);
      *(float *)(param_1 + 0x44) = *(float *)(param_1 + 0x4a) + fVar13 * fVar19;
      iVar6 = (int)-param_1[0xd1];
      iVar14 = iVar6;
      if (iVar6 < 0) {
        iVar14 = -iVar6;
      }
      iVar7 = iVar14;
      if (iVar14 < 10) {
        iVar7 = 0;
      }
      sVar5 = (short)iVar7;
      fVar19 = (float)VectorSignedToFloat(iVar6,(byte)(uVar12 >> 0x15) & 3);
      if (9 < iVar14) {
        sVar5 = param_1[0xd1] + (short)(int)(fVar4 + fVar19 * fVar4);
      }
      param_1[0xd1] = sVar5;
      return 1;
    }
    return 0;
  }
  local_5c = fVar19;
  local_56 = param_1[0x1a];
  local_58 = uVar2;
  FUN_00372448(auStack_54,&local_5c);
  fVar19 = (float)VectorSignedToFloat((int)param_1[0x1b],(byte)(in_fpscr >> 0x15) & 3);
  fVar19 = fVar19 + DAT_0025d184;
  *pfVar9 = (extraout_s0 - *pfVar9) / fVar19 + *pfVar9;
  *(float *)(param_1 + 0x42) =
       (extraout_s1 - *(float *)(param_1 + 0x42)) / fVar19 + *(float *)(param_1 + 0x42);
  *(float *)(param_1 + 0x44) =
       (extraout_s2 - *(float *)(param_1 + 0x44)) / fVar19 + *(float *)(param_1 + 0x44);
  local_64 = local_64 - local_64 / fVar19;
  sVar5 = FUN_00368d94((int)(short)((local_46 + -0x7fff) - local_5e),(int)param_1[0x1b]);
  local_5e = sVar5 + local_5e;
  sVar5 = FUN_00368d94((int)(short)(local_48 - local_60),(int)param_1[0x1b]);
  local_60 = sVar5 + local_60;
  FUN_00372448(pfVar9,&local_64);
  *pfVar11 = extraout_s0_00;
  *(undefined4 *)(param_1 + 0x54) = extraout_s1_00;
  *(undefined4 *)(param_1 + 0x56) = extraout_s2_00;
  *pfVar10 = *pfVar11;
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_1 + 0x56);
  param_1[0x1b] = param_1[0x1b] + -1;
  return 0;
}
