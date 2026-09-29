// OoT3D decomp @ 0021a1ec  name=FUN_0021a1ec  size=912

undefined4 FUN_0021a1ec(float *param_1)

{
  float fVar1;
  undefined4 uVar2;
  short *psVar3;
  float *pfVar4;
  float *pfVar5;
  float *pfVar6;
  float *pfVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float extraout_s0;
  float extraout_s0_00;
  float extraout_s0_01;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  float extraout_s1_01;
  float fVar12;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  float extraout_s2_01;
  float fVar13;
  float local_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  float local_48;
  undefined4 local_44;
  float local_40;
  float local_3c;
  float local_38;

  pfVar7 = param_1 + 0x20;
  pfVar5 = param_1 + 0x29;
  pfVar6 = param_1 + 5;
  fVar9 = (float)FUN_00367ef0(param_1[0x36]);
  fVar1 = DAT_0021a58c;
  fVar11 = DAT_0021a588;
  psVar3 = *(short **)
            (*(int *)(DAT_0021a57c + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar12 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0021a584 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar13 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0021a584 + 0x1f0),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar10 * DAT_0021a588 * fVar9 *
             ((DAT_0021a58c + fVar13 * DAT_0021a588) -
             (DAT_0021a580 / fVar9) * fVar12 * DAT_0021a588);
  fVar10 = (float)VectorSignedToFloat((int)psVar3[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar10 * fVar11;
  fVar10 = (float)VectorSignedToFloat((int)psVar3[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar10 * fVar11;
  fVar11 = (float)VectorSignedToFloat((int)psVar3[6],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar11;
  *(short *)(param_1 + 4) = psVar3[8];
  psVar3 = (short *)FUN_00338c5c((int)param_1[0x35] + 0xa98,(int)*(short *)(param_1 + 100),0x32);
  if (psVar3 == (short *)0x0) {
    *pfVar6 = param_1[0x23];
    param_1[6] = param_1[0x24];
    param_1[7] = param_1[0x25];
  }
  else {
    fVar11 = (float)VectorSignedToFloat((int)*psVar3,(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = (float)VectorSignedToFloat((int)psVar3[1],(byte)(in_fpscr >> 0x15) & 3);
    fVar12 = (float)VectorSignedToFloat((int)psVar3[2],(byte)(in_fpscr >> 0x15) & 3);
    *pfVar6 = fVar11;
    param_1[6] = fVar10;
    param_1[7] = fVar12;
  }
  if (-1 < psVar3[8]) {
    *(undefined1 *)((int)param_1 + 0x1b6) = 0;
    fVar11 = (float)VectorSignedToFloat((int)psVar3[8],(byte)(in_fpscr >> 0x15) & 3);
    fVar11 = fVar11 * DAT_0021a590;
    param_1[0x34] = fVar11;
    if ((int)fVar11 < 0x34000001) {
      fVar11 = DAT_0021a594;
    }
    param_1[0x34] = fVar11;
  }
  pfVar4 = (float *)(int)*(short *)(param_1 + 4);
  *(float **)(DAT_0021a598 + 0x14) = pfVar4;
  if (*(short *)((int)param_1 + 0x1a6) == 0) {
    bVar8 = ((uint)pfVar4 & 4) == 0;
    if (bVar8) {
      pfVar4 = param_1;
    }
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    if (bVar8) {
      FUN_00338c04(pfVar4);
    }
    param_1[8] = param_1[2];
  }
  *pfVar5 = *pfVar5 + (*pfVar6 - *pfVar5) * param_1[1];
  param_1[0x2a] = param_1[0x2a] + (param_1[6] - param_1[0x2a]) * param_1[1];
  param_1[0x2b] = param_1[0x2b] + (param_1[7] - param_1[0x2b]) * param_1[1];
  local_4c = DAT_0021a59c;
  param_1[0x23] = *pfVar5;
  param_1[0x24] = param_1[0x2a];
  param_1[0x25] = param_1[0x2b];
  local_48 = *param_1 + fVar9;
  local_44 = local_4c;
  FUN_00367df4(DAT_0021a5a0,DAT_0021a5a0,DAT_0021a5a0,&local_4c,param_1 + 0x4b);
  local_40 = *pfVar7 + ((param_1[0x37] + param_1[0x4b]) - *pfVar7) * DAT_0021a5a4;
  local_3c = param_1[0x21] + ((param_1[0x38] + param_1[0x4c]) - param_1[0x21]) * DAT_0021a5a4;
  local_38 = param_1[0x22] + ((param_1[0x39] + param_1[0x4d]) - param_1[0x22]) * DAT_0021a5a4;
  FUN_00334af8(pfVar5,pfVar7);
  local_58 = extraout_s0;
  local_54 = extraout_s1;
  local_50 = extraout_s2;
  FUN_00334af8(pfVar5,&local_40);
  uVar2 = DAT_0021a5a8;
  local_58 = local_58 + (extraout_s0_00 - local_58) * param_1[8];
  local_54 = FUN_00355780(extraout_s1_00,local_54,param_1[8] * param_1[0x4a],DAT_0021a5a8);
  local_50 = FUN_00355780(extraout_s2_00,local_50,param_1[8] * param_1[0x4a],uVar2);
  FUN_00133620(&local_58);
  *pfVar7 = *pfVar5 + extraout_s0_01;
  param_1[0x21] = param_1[0x2a] + extraout_s1_01;
  param_1[0x22] = param_1[0x2b] + extraout_s2_01;
  fVar11 = (float)FUN_00338a90(pfVar7,param_1 + 0x23);
  param_1[0x49] = fVar11;
  *(undefined2 *)((int)param_1 + 0x1a2) = 0;
  param_1[0x51] = param_1[3];
  fVar11 = (float)FUN_003375bc(fVar1,param_1);
  param_1[0x52] = fVar11;
  return 1;
}
