// OoT3D decomp @ 00235294  name=FUN_00235294  size=848

undefined4 FUN_00235294(float *param_1)

{
  short sVar1;
  int *piVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short *psVar7;
  int iVar8;
  int iVar9;
  float *pfVar10;
  float *pfVar11;
  float *pfVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float extraout_s0;
  float fVar15;
  float extraout_s1;
  float fVar16;
  float extraout_s2;
  float fVar17;
  undefined1 auStack_48 [8];
  float local_40;
  short local_3c;
  undefined2 local_3a;
  float local_38;
  short local_34;
  undefined2 local_32;

  pfVar11 = param_1 + 0x29;
  pfVar12 = param_1 + 0x20;
  pfVar10 = param_1 + 7;
  fVar13 = (float)FUN_00367ef0(param_1[0x36]);
  fVar4 = DAT_002355fc;
  fVar3 = DAT_002355f4;
  fVar14 = DAT_002355f0;
  piVar2 = DAT_002355ec;
  psVar7 = *(short **)
            (*(int *)(DAT_002355e4 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002355ec + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar17 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002355ec + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar17 = (DAT_002355f4 + fVar17 * DAT_002355f0) - (DAT_002355e8 / fVar13) * fVar15 * DAT_002355f0;
  fVar15 = (float)VectorSignedToFloat((int)*psVar7,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar15 * DAT_002355f0 * fVar13 * fVar17;
  fVar15 = DAT_002355f8;
  fVar16 = (float)VectorSignedToFloat((int)psVar7[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar16 * fVar14 * fVar13 * fVar17;
  fVar13 = (float)VectorSignedToFloat((int)psVar7[4],(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_1 + 2) = (short)(int)(fVar4 + fVar13 * fVar15);
  fVar15 = (float)VectorSignedToFloat((int)psVar7[6],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar15 * fVar14;
  fVar15 = (float)VectorSignedToFloat((int)psVar7[8],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar15;
  fVar15 = (float)VectorSignedToFloat((int)psVar7[10],(byte)(in_fpscr >> 0x15) & 3);
  param_1[5] = fVar15 * fVar14;
  *(short *)(param_1 + 6) = psVar7[0xc];
  FUN_00372474(&local_40,pfVar12,param_1 + 0x23);
  FUN_00372474(auStack_48,pfVar12,pfVar11);
  *(int *)(DAT_00235600 + 0x14) = (int)*(short *)(param_1 + 6);
  sVar1 = *(short *)((int)param_1 + 0x1a6);
  if ((sVar1 == 0 || sVar1 == 10) || sVar1 == 0x14) {
    *(short *)pfVar10 = 0x32;
    *(short *)((int)param_1 + 0x1a6) = *(short *)((int)param_1 + 0x1a6) + 1;
  }
  uVar5 = DAT_00235604;
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar15 = (float)FUN_00355780(param_1[3],param_1[0x44],param_1[0x4a] * fVar15 * fVar14,DAT_00235604
                              );
  param_1[0x44] = fVar15;
  fVar15 = DAT_00235608;
  param_1[0x42] = DAT_00235608;
  param_1[0x43] = fVar15;
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x1c6),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar15 = (float)FUN_00355780(DAT_0023560c,param_1[0x45],fVar15 * fVar14,uVar5);
  param_1[0x45] = fVar15;
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x1c8),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar2 + 0x19a),(byte)(in_fpscr >> 0x15) & 3)
  ;
  fVar14 = (float)FUN_00355780(fVar15 * fVar14,param_1[0x46],param_1[0x4a] * fVar13 * fVar14,uVar5);
  param_1[0x46] = fVar14;
  param_1[0x47] = DAT_00235610;
  FUN_00338ac8(*param_1,param_1,auStack_48,1);
  local_32 = local_3a;
  if (*(short *)pfVar10 == 0) {
    local_34 = *(short *)(param_1 + 2);
    iVar8 = (int)(short)(local_34 - local_3c);
    iVar9 = iVar8;
    if (iVar8 < 0) {
      iVar9 = -iVar8;
    }
    fVar14 = (float)VectorSignedToFloat(iVar8,(byte)(in_fpscr >> 0x15) & 3);
    if (1 < iVar9) {
      local_34 = local_3c + (short)(int)(fVar4 + fVar14 * param_1[3]);
    }
    local_38 = (float)FUN_00355780(param_1[1],local_40,param_1[3],DAT_00235614);
  }
  else {
    local_34 = local_3c;
    local_38 = local_40;
    *(short *)pfVar10 = *(short *)pfVar10 + -1;
  }
  FUN_00372448(pfVar12,&local_38);
  *pfVar11 = extraout_s0;
  param_1[0x2a] = extraout_s1;
  uVar6 = DAT_00235618;
  param_1[0x2b] = extraout_s2;
  FUN_00367df4(uVar6,uVar6,uVar5,pfVar11,param_1 + 0x23);
  param_1[0x49] = local_38;
  fVar14 = (float)FUN_00355780(param_1[4],param_1[0x51],param_1[3],fVar3);
  param_1[0x51] = fVar14;
  *(undefined2 *)((int)param_1 + 0x1a2) = 0;
  fVar14 = (float)FUN_003375bc(param_1[5],param_1);
  param_1[0x52] = fVar14;
  return 1;
}
