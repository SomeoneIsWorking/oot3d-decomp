// OoT3D decomp @ 0025b8e4  name=FUN_0025b8e4  size=912

undefined4 FUN_0025b8e4(ushort *param_1)

{
  ushort uVar1;
  undefined4 uVar2;
  short *psVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  uint in_fpscr;
  uint uVar12;
  float extraout_s0;
  undefined4 uVar13;
  float extraout_s0_00;
  float fVar14;
  float extraout_s1;
  undefined4 extraout_s1_00;
  float extraout_s2;
  undefined4 extraout_s2_00;
  float fVar15;
  float fVar16;
  float fVar17;
  short local_68;
  undefined2 local_66;
  float *local_60;
  undefined1 auStack_5c [8];
  float local_54;
  float local_50;
  float local_4c;
  float local_48;
  float local_44;
  float fStack_40;
  undefined4 local_3c;
  short local_38;
  undefined2 local_36;

  pfVar4 = (float *)(param_1 + 0x46);
  pfVar5 = (float *)(param_1 + 0x40);
  pfVar7 = (float *)(param_1 + 0x52);
  local_60 = (float *)(param_1 + 0x6e);
  pfVar6 = (float *)(param_1 + 2);
  *param_1 = **(ushort **)
               (*(int *)(DAT_0025bc74 + (short)param_1[0xc5] * 8 + 4) + (short)param_1[0xc6] * 8 + 4
               );
  FUN_00372474(auStack_5c,pfVar4,pfVar5);
  psVar3 = (short *)FUN_00338c5c(*(int *)(param_1 + 0x6a) + 0xa98,(int)(short)param_1[200],0x32);
  fVar15 = (float)VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorSignedToFloat((int)psVar3[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar17 = (float)VectorSignedToFloat((int)psVar3[2],(byte)(in_fpscr >> 0x15) & 3);
  FUN_0035fb94(&local_68,psVar3 + 3);
  iVar8 = (int)psVar3[6];
  iVar9 = DAT_0025bc78;
  if ((iVar8 != -1) && (iVar9 = iVar8, iVar8 < 0x169)) {
    iVar9 = (int)(short)(psVar3[6] * 100);
  }
  if (-1 < psVar3[8]) {
    *(undefined1 *)(param_1 + 0xdb) = 0;
    fVar14 = (float)VectorSignedToFloat((int)psVar3[8],(byte)(in_fpscr >> 0x15) & 3);
    fVar14 = fVar14 * DAT_0025bc7c;
    *(float *)(param_1 + 0x68) = fVar14;
    if ((int)fVar14 < 0x34000001) {
      fVar14 = DAT_0025bc80;
    }
    *(float *)(param_1 + 0x68) = fVar14;
  }
  iVar8 = DAT_0025bc84;
  uVar1 = *param_1;
  *(int *)(DAT_0025bc84 + 0x14) = (int)(short)uVar1;
  uVar12 = in_fpscr & 0xfffffff | (uint)(*pfVar7 == fVar15) << 0x1e;
  bVar10 = false;
  if (SUB41(uVar12 >> 0x1e,0)) {
    uVar12 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x54) == fVar16) << 0x1e;
    bVar10 = SUB41(uVar12 >> 0x1e,0);
  }
  bVar11 = false;
  if (bVar10) {
    uVar12 = uVar12 & 0xfffffff | (uint)(*(float *)(param_1 + 0x56) == fVar17) << 0x1e;
    bVar11 = SUB41(uVar12 >> 0x1e,0);
  }
  if ((!bVar11) || (param_1[0xd3] == 0)) {
    *(undefined2 *)(*(int *)(param_1 + 0x6c) + 0x118) = 0xc;
    *(uint *)(iVar8 + 0x14) = uVar1 & 0xfffff0ff | 0x300;
    *pfVar6 = local_60[1];
    param_1[4] = 0xc;
    *(float *)(param_1 + 0x56) = fVar17;
    *(float *)(param_1 + 0x54) = fVar16;
    *pfVar7 = fVar15;
    if (param_1[0xd3] == 0) {
      param_1[0xd3] = 1;
    }
  }
  uVar2 = DAT_0025bc94;
  fVar17 = DAT_0025bc90;
  fVar16 = DAT_0025bc8c;
  fVar15 = DAT_0025bc88;
  if ((short)param_1[4] < 1) {
    *(uint *)(iVar8 + 0x14) = *(uint *)(iVar8 + 0x14) & 0xf0ff;
    fStack_40 = *(float *)(param_1 + 0x56);
    local_48 = *pfVar7 + (*local_60 - *pfVar7) * fVar15;
    local_44 = *(float *)(param_1 + 0x54) + (local_60[1] - *pfVar6) * fVar16;
    *pfVar4 = local_48;
    *(float *)(param_1 + 0x48) = local_44;
    *(float *)(param_1 + 0x4a) = fStack_40;
    uVar13 = FUN_00355780(local_44,*(undefined4 *)(param_1 + 0x48));
    *(undefined4 *)(param_1 + 0x48) = uVar13;
    local_3c = uVar2;
    local_36 = local_66;
    local_38 = -local_68;
    FUN_00372448(pfVar4,&local_3c);
    *pfVar5 = extraout_s0_00;
    *(undefined4 *)(param_1 + 0x42) = extraout_s1_00;
    *(undefined4 *)(param_1 + 0x44) = extraout_s2_00;
  }
  else {
    local_4c = *(float *)(param_1 + 0x56);
    fVar15 = (float)VectorSignedToFloat((int)(short)param_1[4],(byte)(uVar12 >> 0x15) & 3);
    local_54 = *pfVar7 + (*local_60 - *pfVar7) * DAT_0025bc88;
    local_50 = *(float *)(param_1 + 0x54) + (local_60[1] - *pfVar6) * DAT_0025bc8c;
    local_48 = local_54;
    local_44 = local_50;
    fStack_40 = local_4c;
    local_50 = (float)FUN_00355780(local_50,*(undefined4 *)(param_1 + 0x48));
    local_3c = uVar2;
    local_36 = local_66;
    local_38 = -local_68;
    FUN_00372448(&local_54,&local_3c);
    fVar15 = DAT_0025bc98 / fVar15;
    *pfVar4 = *pfVar4 + (local_54 - *pfVar4) * fVar15;
    *(float *)(param_1 + 0x48) =
         *(float *)(param_1 + 0x48) + (local_50 - *(float *)(param_1 + 0x48)) * fVar15;
    *(float *)(param_1 + 0x4a) =
         *(float *)(param_1 + 0x4a) + (local_4c - *(float *)(param_1 + 0x4a)) * fVar15;
    *pfVar5 = *pfVar5 + (extraout_s0 - *pfVar5) * fVar15;
    *(float *)(param_1 + 0x42) =
         *(float *)(param_1 + 0x42) + (extraout_s1 - *(float *)(param_1 + 0x42)) * fVar15;
    *(float *)(param_1 + 0x44) =
         *(float *)(param_1 + 0x44) + (extraout_s2 - *(float *)(param_1 + 0x44)) * fVar15;
    fVar15 = (float)VectorSignedToFloat(iVar9,(byte)(uVar12 >> 0x15) & 3);
    fVar16 = (float)VectorSignedToFloat((int)(short)param_1[4],(byte)(uVar12 >> 0x15) & 3);
    *(float *)(param_1 + 0xa2) =
         (fVar15 * fVar17 - *(float *)(param_1 + 0xa2)) / fVar16 + *(float *)(param_1 + 0xa2);
    param_1[4] = param_1[4] - 1;
  }
  return 1;
}
