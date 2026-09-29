// OoT3D decomp @ 001ffdf8  name=FUN_001ffdf8  size=748

undefined4 FUN_001ffdf8(float *param_1)

{
  short *psVar1;
  int iVar2;
  float *pfVar3;
  float *pfVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float extraout_s0;
  float fVar7;
  float fVar8;
  float extraout_s1;
  float extraout_s2;
  float fVar9;
  float local_58;
  float local_54;
  float fStack_50;
  short *local_4c;
  undefined1 auStack_48 [8];
  undefined4 local_40;
  short local_3c;
  short local_3a;
  undefined4 local_38;
  short local_34;
  short local_32;
  float *local_30;

  pfVar3 = param_1 + 0x23;
  pfVar4 = param_1 + 0x20;
  local_30 = param_1 + 0x29;
  local_4c = (short *)((int)param_1 + 0x176);
  fVar5 = (float)FUN_00367ef0(param_1[0x36]);
  fVar8 = DAT_002000f0;
  psVar1 = *(short **)
            (*(int *)(DAT_002000e4 + *(short *)((int)param_1 + 0x18a) * 8 + 4) +
            *(short *)(param_1 + 99) * 8 + 4);
  fVar7 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002000ec + 0x1f0),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002000ec + 0x1f0),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
  *param_1 = fVar6 * DAT_002000f0 * fVar5 *
             ((DAT_002000f4 + fVar9 * DAT_002000f0) - (DAT_002000e8 / fVar5) * fVar7 * DAT_002000f0)
  ;
  fVar6 = (float)VectorSignedToFloat((int)psVar1[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[1] = fVar6;
  *(short *)(param_1 + 2) = psVar1[4];
  psVar1 = (short *)FUN_00338c5c((int)param_1[0x35] + 0xa98,(int)*(short *)(param_1 + 100),0x32);
  fVar6 = (float)VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat((int)psVar1[1],(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat((int)psVar1[2],(byte)(in_fpscr >> 0x15) & 3);
  param_1[3] = fVar6;
  param_1[4] = fVar7;
  param_1[5] = fVar9;
  FUN_0035fb94(param_1 + 6,psVar1 + 3);
  iVar2 = (int)psVar1[6];
  *(short *)(param_1 + 10) = psVar1[6];
  if (iVar2 != -1) {
    fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    if (0x168 < iVar2) {
      fVar6 = fVar6 * fVar8;
    }
    param_1[1] = fVar6;
  }
  *(short *)((int)param_1 + 0x2a) = psVar1[7];
  *pfVar3 = param_1[3];
  param_1[0x24] = param_1[4];
  param_1[0x25] = param_1[5];
  if (-1 < psVar1[8]) {
    *(undefined1 *)((int)param_1 + 0x1b6) = 0;
    fVar8 = (float)VectorSignedToFloat((int)psVar1[8],(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar8 * DAT_002000f8;
    param_1[0x34] = fVar8;
    if ((int)fVar8 < 0x34000001) {
      fVar8 = DAT_002000fc;
    }
    param_1[0x34] = fVar8;
  }
  *(int *)(DAT_00200100 + 0x14) = (int)*(short *)(param_1 + 2);
  if (*(short *)((int)param_1 + 0x1a6) == 0) {
    *(undefined2 *)((int)param_1 + 0x1a6) = 1;
    FUN_00338c04(param_1);
  }
  FUN_00372474(auStack_48,pfVar4,local_30);
  FUN_00338ac8(*param_1,param_1,auStack_48,0);
  FUN_00372474(&local_38,pfVar3,pfVar4);
  local_40 = local_38;
  if ((*(ushort *)((int)param_1 + 0x2a) & 1) != 0) {
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x5d),(byte)(in_fpscr >> 0x15) & 3)
    ;
    local_32 = *(short *)((int)param_1 + 0x1a) + (short)(int)(DAT_00200108 + fVar8 * DAT_00200104);
  }
  if ((*(ushort *)((int)param_1 + 0x2a) & 2) != 0) {
    fVar8 = (float)VectorSignedToFloat((int)*local_4c,(byte)(in_fpscr >> 0x15) & 3);
    local_34 = *(short *)(param_1 + 6) + (short)(int)(DAT_00200108 + fVar8 * DAT_00200104);
  }
  local_3c = local_34;
  local_3a = local_32;
  FUN_00372448(pfVar3,&local_40);
  *pfVar4 = extraout_s0;
  param_1[0x21] = extraout_s1;
  param_1[0x22] = extraout_s2;
  local_58 = param_1[0x37];
  fStack_50 = param_1[0x39];
  local_54 = param_1[0x38] + fVar5;
  fVar8 = (float)FUN_00338a90(&local_58,pfVar3);
  param_1[0x49] = fVar8;
  fVar8 = DAT_0020010c;
  param_1[0x48] = DAT_0020010c;
  *(undefined2 *)((int)param_1 + 0x1a2) = 0;
  param_1[0x51] = param_1[1];
  param_1[0x52] = fVar8;
  return 1;
}
