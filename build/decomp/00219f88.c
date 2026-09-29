// OoT3D decomp @ 00219f88  name=FUN_00219f88  size=568

undefined4 FUN_00219f88(short *param_1)

{
  short sVar1;
  short *psVar2;
  int iVar3;
  short *psVar4;
  uint in_fpscr;
  undefined4 extraout_s0;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 extraout_s1;
  undefined4 uVar8;
  undefined4 extraout_s2;
  undefined1 auStack_34 [8];
  undefined4 local_2c;
  short local_28;
  short local_26;

  psVar4 = param_1 + 0x46;
  psVar2 = (short *)FUN_00338c5c(*(int *)(param_1 + 0x6a) + 0xa98,(int)param_1[200],0x32);
  FUN_00372474(auStack_34,psVar4,param_1 + 0x40);
  *param_1 = **(short **)(*(int *)(DAT_0021a1c0 + param_1[0xc5] * 8 + 4) + param_1[0xc6] * 8 + 4);
  uVar6 = VectorSignedToFloat((int)*psVar2,(byte)(in_fpscr >> 0x15) & 3);
  sVar1 = psVar2[2];
  uVar8 = VectorSignedToFloat((int)psVar2[1],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x52) = uVar6;
  uVar6 = VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x54) = uVar8;
  *(undefined4 *)(param_1 + 0x56) = uVar6;
  *(undefined4 *)psVar4 = *(undefined4 *)(param_1 + 0x52);
  *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x54);
  *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_1 + 0x56);
  FUN_0035fb94(param_1 + 1,psVar2 + 3);
  param_1[4] = psVar2[6];
  param_1[6] = psVar2[7];
  if (param_1[4] == -1) {
    param_1[4] = (short)DAT_0021a1c4;
  }
  if (param_1[4] < 0x169) {
    param_1[4] = param_1[4] * 100;
  }
  if (param_1[0xd3] == 0) {
    iVar3 = *DAT_0021a1c8;
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
    param_1[5] = (short)(int)(DAT_0021a1cc / fVar7 + DAT_0021a1d0);
    *(short *)(iVar3 + 0x262) = param_1[4];
    param_1[0xd3] = param_1[0xd3] + 1;
  }
  iVar3 = DAT_0021a1d4;
  if (param_1[6] != psVar2[7]) {
    param_1[6] = psVar2[7];
    param_1[5] = 5;
  }
  if (param_1[5] < 1) {
    *(undefined4 *)(iVar3 + 0x24) = 0;
  }
  else {
    param_1[5] = param_1[5] + -1;
    *(undefined4 *)(iVar3 + 0x24) = 1;
  }
  local_2c = DAT_0021a1d8;
  local_26 = param_1[2];
  local_28 = -param_1[1];
  FUN_00372448(psVar4,&local_2c);
  *(undefined4 *)(param_1 + 0x40) = extraout_s0;
  *(undefined4 *)(param_1 + 0x42) = extraout_s1;
  *(undefined4 *)(param_1 + 0x44) = extraout_s2;
  fVar7 = DAT_0021a1dc;
  *(int *)(iVar3 + 0x14) = (int)*param_1;
  sVar1 = *(short *)(*DAT_0021a1c8 + 0x262);
  param_1[4] = sVar1;
  param_1[0xd1] = 0;
  fVar5 = (float)VectorSignedToFloat((int)sVar1,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0xa2) = fVar5 * fVar7;
  *(undefined4 *)(param_1 + 0xa4) = DAT_0021a1e0;
  if (-1 < psVar2[8]) {
    *(undefined1 *)(param_1 + 0xdb) = 0;
    fVar7 = (float)VectorSignedToFloat((int)psVar2[8],(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = fVar7 * DAT_0021a1e4;
    *(float *)(param_1 + 0x68) = fVar7;
    if ((int)fVar7 < 0x34000001) {
      fVar7 = DAT_0021a1e8;
    }
    *(float *)(param_1 + 0x68) = fVar7;
  }
  return 1;
}
