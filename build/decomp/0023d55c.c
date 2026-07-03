// OoT3D decomp @ 0023d55c  name=FUN_0023d55c  size=876

undefined4 FUN_0023d55c(float *param_1)

{
  short sVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  short *psVar5;
  float *pfVar6;
  int iVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  uint in_fpscr;
  uint uVar12;
  float fVar13;
  float extraout_s0;
  float extraout_s0_00;
  float fVar14;
  float fVar15;
  float extraout_s1;
  float extraout_s1_00;
  float fVar16;
  float extraout_s2;
  float extraout_s2_00;
  float fVar17;
  float local_74;
  float fStack_70;
  float fStack_6c;
  undefined1 auStack_4c [6];
  short local_46;
  float local_44;
  undefined2 local_40;
  short local_3e;
  float local_3c;
  float local_38;
  float local_34;
  
  pfVar11 = param_1 + 0x23;
  pfVar9 = param_1 + 0x20;
  pfVar6 = param_1 + 0x29;
  pfVar10 = param_1 + 4;
  fVar13 = (float)FUN_00367ef0(param_1[0x36]);
  FUN_00372474(auStack_4c,pfVar9,pfVar11);
  fVar14 = DAT_0023d8d8;
  psVar5 = *(short **)
            (*(int *)(DAT_0023d8c8 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023d8d0 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0023d8d0 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar16 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar16 * DAT_0023d8d4 * fVar13 *
             ((DAT_0023d8d8 + fVar17 * DAT_0023d8d4) -
             (DAT_0023d8cc / fVar13) * fVar15 * DAT_0023d8d4);
  fVar15 = (float)VectorSignedToFloat((int)psVar5[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar15;
  iVar8 = DAT_0023d8dc;
  fVar15 = (float)VectorSignedToFloat((int)psVar5[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar15;
  sVar1 = psVar5[6];
  *(short *)(param_1 + 3) = sVar1;
  *(int *)(iVar8 + 0x14) = (int)sVar1;
  if (((*(short *)((int)param_1 + 0x1a6) == 0) || ((int)*(short *)(param_1 + 5) != (int)sVar1)) &&
     (*(short *)(param_1 + 5) = sVar1, *(short *)((int)param_1 + 0x1a6) == 0)) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    FUN_00338c04(param_1);
    *pfVar10 = DAT_0023d8e0;
    if (((uint)param_1[3] & 0x10) != 0) {
      *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) & 0xfffb;
    }
  }
  uVar4 = DAT_0023d8fc;
  uVar2 = DAT_0023d8f4;
  fVar15 = DAT_0023d8e4;
  local_3c = param_1[0x37];
  local_38 = param_1[0x38];
  local_34 = param_1[0x39];
  fVar16 = fVar14;
  if (((uint)param_1[3] & 1) == 0) {
    fVar16 = param_1[0x4a];
  }
  *pfVar9 = *pfVar9 + (local_3c - *pfVar9) * fVar16 * DAT_0023d8e4;
  fVar3 = DAT_0023d8f8;
  param_1[0x21] = param_1[0x21] + ((local_38 + *param_1 + fVar13) - param_1[0x21]) * DAT_0023d8e8;
  fVar17 = DAT_0023d8f0;
  fVar13 = DAT_0023d8ec;
  param_1[0x22] = param_1[0x22] + (local_34 - param_1[0x22]) * fVar16 * fVar15;
  *pfVar10 = *pfVar10 + (fVar13 - *pfVar10) * fVar17;
  if (((uint)param_1[3] & 1) == 0) {
    if (((uint)param_1[3] & 2) == 0) goto LAB_0023d858;
    fVar13 = (float)FUN_00367e60(pfVar9,pfVar6);
    uVar12 = in_fpscr & 0xfffffff | (uint)(param_1[1] <= fVar13) << 0x1d;
    if (!SUB41(uVar12 >> 0x1d,0)) {
      FUN_00372474(&local_44,pfVar9,pfVar6);
      iVar7 = (int)(short)(local_3e - local_46);
      iVar8 = iVar7;
      if (iVar7 < 0) {
        iVar8 = -iVar7;
      }
      fVar13 = (float)VectorSignedToFloat(iVar7,(byte)(uVar12 >> 0x15) & 3);
      if (9 < iVar8) {
        local_3e = local_46 + (short)(int)(DAT_0023d900 + fVar13 * fVar3);
      }
      local_44 = param_1[1];
      local_40 = 0;
      FUN_00372448(pfVar9,&local_44);
      *pfVar11 = extraout_s0_00;
      param_1[0x24] = extraout_s1_00;
      param_1[0x25] = extraout_s2_00;
      param_1[0x24] = param_1[0x2a];
      goto LAB_0023d858;
    }
  }
  else {
    FUN_00372474(&local_44,pfVar9,pfVar6);
    local_44 = param_1[1];
    FUN_00372448(pfVar9,&local_44);
    pfVar6 = &local_3c;
    local_3c = extraout_s0;
    local_38 = extraout_s1;
    local_34 = extraout_s2;
  }
  FUN_00367df4(uVar2,uVar2,uVar4,pfVar6,pfVar11);
LAB_0023d858:
  local_74 = *pfVar11;
  fStack_70 = param_1[0x24];
  fStack_6c = param_1[0x25];
  FUN_003553fc(param_1,pfVar9,&local_74);
  *pfVar11 = local_74;
  param_1[0x24] = fStack_70;
  param_1[0x25] = fStack_6c;
  fVar13 = (float)FUN_00338a90(pfVar9,pfVar11);
  param_1[0x49] = fVar13;
  *(undefined2 *)((int)param_1 + 0x1a2) = 0;
  fVar13 = (float)FUN_00355780(param_1[2],param_1[0x51],uVar4,fVar3);
  param_1[0x51] = fVar13;
  fVar14 = (float)FUN_003375bc(fVar14,param_1);
  param_1[0x52] = fVar14;
  return 1;
}

