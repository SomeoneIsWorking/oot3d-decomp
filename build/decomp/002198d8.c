// OoT3D decomp @ 002198d8  name=FUN_002198d8  size=808

undefined4 FUN_002198d8(float *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  int iVar4;
  short *psVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float extraout_s0;
  float fVar8;
  float fVar9;
  float extraout_s1;
  float fVar10;
  float extraout_s2;
  float local_4c;
  float local_48;
  float fStack_44;
  undefined1 auStack_40 [4];
  short local_3c;
  short local_3a;
  float local_38;
  short local_34;
  short local_32;
  float *local_30;

  pfVar6 = param_1 + 0x23;
  local_30 = param_1 + 0x29;
  fVar7 = (float)FUN_00367ef0(param_1[0x36]);
  psVar5 = *(short **)
            (*(int *)(DAT_00219c00 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  psVar2 = (short *)FUN_00338c5c((int)param_1[0x35] + 0xa98,(int)*(short *)(param_1 + 100),0x32);
  if (-1 < psVar2[8]) {
    *(undefined1 *)((int)param_1 + 0x1b6) = 0;
    fVar8 = (float)VectorSignedToFloat((int)psVar2[8],(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 * DAT_00219c04;
    param_1[0x34] = fVar8;
    if ((int)fVar8 < 0x34000001) {
      fVar8 = DAT_00219c08;
    }
    param_1[0x34] = fVar8;
  }
  fVar8 = (float)VectorSignedToFloat((int)*psVar2,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)psVar2[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat((int)psVar2[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[4] = fVar8;
  param_1[5] = fVar9;
  param_1[6] = fVar10;
  FUN_0035fb94(param_1 + 7,psVar2 + 3);
  fVar8 = DAT_00219c0c;
  *(short *)(param_1 + 9) = psVar2[6];
  fVar9 = (float)VectorSignedToFloat((int)*psVar5,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar9 * fVar8 * fVar7;
  fVar9 = (float)VectorSignedToFloat((int)psVar5[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar9 * fVar8;
  fVar9 = (float)VectorSignedToFloat((int)psVar5[4],(byte)(in_fpscr >> 0x15) & 3);
  param_1[2] = fVar9;
  *(short *)(param_1 + 3) = psVar5[6];
  sVar1 = *(short *)(param_1 + 9);
  if (sVar1 == -1) {
    sVar1 = (short)(int)(param_1[2] * DAT_00219c10);
  }
  else {
    if (0x168 < sVar1) goto LAB_00219a4c;
    sVar1 = sVar1 * 100;
  }
  *(short *)(param_1 + 9) = sVar1;
LAB_00219a4c:
  *(int *)(DAT_00219c14 + 0x14) = (int)*(short *)(param_1 + 3);
  if (*(short *)((int)param_1 + 0x1a6) == 0) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    FUN_00338c04(param_1);
    if (*(short *)(param_1 + 9) != -1) {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 9),(byte)(in_fpscr >> 0x15) & 3);
      param_1[2] = fVar9 * fVar8;
    }
  }
  FUN_00372474(auStack_40,pfVar6,param_1 + 0x20);
  FUN_00367df4(DAT_00219c1c,DAT_00219c1c,DAT_00219c18,param_1 + 4,pfVar6);
  local_4c = param_1[0x37];
  fStack_44 = param_1[0x39];
  local_48 = param_1[0x38] + fVar7;
  local_38 = (float)FUN_00338a90(&local_4c,pfVar6);
  param_1[0x49] = local_38;
  local_34 = -*(short *)(param_1 + 7);
  iVar3 = (int)(short)(local_34 - local_3c);
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  if (4 < iVar4) {
    local_34 = local_3c + (short)(int)(DAT_00219c20 + fVar7 * param_1[1]);
  }
  local_32 = *(short *)((int)param_1 + 0x1e);
  iVar3 = (int)(short)(local_32 - local_3a);
  iVar4 = iVar3;
  if (iVar3 < 0) {
    iVar4 = -iVar3;
  }
  fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  if (4 < iVar4) {
    local_32 = local_3a + (short)(int)(DAT_00219c20 + fVar7 * param_1[1]);
  }
  FUN_00372448(pfVar6,&local_38);
  param_1[0x20] = extraout_s0;
  param_1[0x21] = extraout_s1;
  param_1[0x22] = extraout_s2;
  fVar7 = param_1[0x24];
  fVar9 = param_1[0x25];
  *local_30 = *pfVar6;
  local_30[1] = fVar7;
  local_30[2] = fVar9;
  fVar7 = (float)FUN_00355780(param_1[2],param_1[0x51],param_1[1],fVar8);
  param_1[0x51] = fVar7;
  fVar7 = DAT_00219c24;
  *(undefined2 *)((int)param_1 + 0x1a2) = 0;
  param_1[0x52] = fVar7;
  param_1[0x4b] = param_1[0x20] - param_1[0x37];
  param_1[0x4c] = param_1[0x21] - param_1[0x38];
  param_1[0x4d] = param_1[0x22] - param_1[0x39];
  return 1;
}
