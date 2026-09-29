// OoT3D decomp @ 0023dec4  name=FUN_0023dec4  size=556

undefined4 FUN_0023dec4(float *param_1)

{
  short *psVar1;
  int iVar2;
  int iVar3;
  short extraout_r1;
  short sVar4;
  float *pfVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float extraout_s0;
  float fVar8;
  float extraout_s1;
  float fVar9;
  float extraout_s2;
  undefined1 auStack_34 [8];
  undefined1 auStack_2c [4];
  undefined2 local_28;
  short local_26;

  pfVar6 = param_1 + 0x23;
  pfVar5 = param_1 + 2;
  psVar1 = *(short **)
            (*(int *)(DAT_0023e0f0 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar7 = (float)VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar7;
  *(short *)(param_1 + 1) = psVar1[2];
  psVar1 = (short *)FUN_00338c5c((int)param_1[0x35] + 0xa98,(int)*(short *)(param_1 + 100),0x32);
  fVar7 = (float)VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat((int)psVar1[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)psVar1[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[0x29] = fVar7;
  param_1[0x2a] = fVar8;
  param_1[0x2b] = fVar9;
  *pfVar6 = param_1[0x29];
  param_1[0x24] = param_1[0x2a];
  param_1[0x25] = param_1[0x2b];
  FUN_0035fb94(auStack_34,psVar1 + 3);
  FUN_00372474(auStack_2c,pfVar6,param_1 + 0x37);
  iVar2 = (int)psVar1[6];
  if (iVar2 == -1) {
    iVar2 = (int)(short)(int)(*param_1 * DAT_0023e0f4);
  }
  sVar4 = extraout_r1;
  if (iVar2 < 0x169) {
    sVar4 = 100;
  }
  if (iVar2 < 0x169) {
    iVar2 = (int)(short)((short)iVar2 * sVar4);
  }
  if (-1 < psVar1[8]) {
    *(undefined1 *)((int)param_1 + 0x1b6) = 0;
    fVar7 = (float)VectorSignedToFloat((int)psVar1[8],(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = fVar7 * DAT_0023e0f8;
    param_1[0x34] = fVar7;
    if ((int)fVar7 < 0x34000001) {
      fVar7 = DAT_0023e0fc;
    }
    param_1[0x34] = fVar7;
  }
  *(int *)(DAT_0023e100 + 0x14) = (int)*(short *)(param_1 + 1);
  fVar7 = DAT_0023e104;
  if (*(short *)((int)param_1 + 0x1a6) == 0) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    fVar8 = DAT_0023e108;
    fVar9 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    param_1[0x51] = fVar9 * fVar7;
    param_1[0x52] = fVar8;
    *(undefined2 *)((int)param_1 + 0x1a2) = 0;
    *(short *)pfVar5 = local_26;
  }
  sVar4 = *(short *)pfVar5;
  iVar3 = (int)(short)(local_26 - sVar4);
  iVar2 = iVar3;
  if (iVar3 < 0) {
    iVar2 = -iVar3;
  }
  fVar7 = (float)VectorSignedToFloat(iVar3,(byte)(in_fpscr >> 0x15) & 3);
  if (1999 < iVar2) {
    sVar4 = sVar4 + (short)(int)(DAT_0023e110 + fVar7 * DAT_0023e10c);
  }
  *(short *)pfVar5 = sVar4;
  fVar7 = (float)FUN_00338f60((int)(short)(local_26 - psVar1[4]));
  fVar8 = (float)VectorSignedToFloat(-(int)psVar1[3],(byte)(in_fpscr >> 0x15) & 3);
  local_28 = (undefined2)(int)(fVar7 * fVar8);
  FUN_00372448(pfVar6,auStack_2c);
  param_1[0x20] = extraout_s0;
  param_1[0x21] = extraout_s1;
  param_1[0x22] = extraout_s2;
  *(ushort *)(param_1 + 0x65) = *(ushort *)(param_1 + 0x65) | 0x400;
  return 1;
}
