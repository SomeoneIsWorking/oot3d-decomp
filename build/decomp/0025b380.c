// OoT3D decomp @ 0025b380  name=FUN_0025b380  size=396

bool FUN_0025b380(short *param_1)

{
  bool bVar1;
  short *psVar2;
  uint in_fpscr;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  float fVar6;
  undefined1 auStack_5c [4];
  undefined1 auStack_58 [12];
  undefined4 local_4c;
  float local_48;
  undefined4 uStack_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 uStack_38;
  short local_32;
  undefined1 auStack_2c [20];

  uVar4 = DAT_0025b510;
  psVar2 = param_1 + 0xd4;
  if (param_1[0xd3] == 0) {
    *(undefined4 *)(DAT_0025b50c + 0x14) = 0xc80;
    *(undefined4 *)(param_1 + 0xa2) = uVar4;
    param_1[0xd3] = 1;
    *param_1 = *psVar2;
  }
  fVar6 = DAT_0025b51c;
  fVar3 = (float)VectorSignedToFloat((int)*psVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar4 = FUN_00355780(DAT_0025b51c,*(undefined4 *)(param_1 + 0xa2),DAT_0025b514 / fVar3,
                       DAT_0025b518);
  *(undefined4 *)(param_1 + 0xa2) = uVar4;
  bVar1 = (int)*param_1 - (int)*psVar2 < 0xf;
  if (bVar1) {
    *psVar2 = *psVar2 + -1;
  }
  else {
    param_1[0xd1] = (short)DAT_0025b520;
    FUN_00342ec0(auStack_2c,*(undefined4 *)(param_1 + 0x78));
    FUN_00371738(&local_40,auStack_2c,0x12);
    fVar3 = DAT_0025b524;
    *(undefined4 *)(param_1 + 0x40) = local_40;
    *(undefined4 *)(param_1 + 0x42) = local_3c;
    *(undefined4 *)(param_1 + 0x44) = uStack_38;
    *(float *)(param_1 + 0x42) = *(float *)(param_1 + 0x42) - fVar3;
    fVar5 = (float)FUN_002cfca0((int)(short)(local_32 + -0x7c17));
    fVar3 = DAT_0025b528;
    fVar5 = *(float *)(param_1 + 0x40) + fVar5 * DAT_0025b528;
    *(float *)(param_1 + 0x52) = fVar5;
    *(float *)(param_1 + 0x46) = fVar5;
    *(undefined4 *)(param_1 + 0x54) = *(undefined4 *)(param_1 + 0x42);
    fVar5 = (float)FUN_00338f60((int)(short)(local_32 + -0x7c17));
    fVar3 = *(float *)(param_1 + 0x44) + fVar5 * fVar3;
    *(float *)(param_1 + 0x56) = fVar3;
    *(float *)(param_1 + 0x4a) = fVar3;
    *(undefined4 *)(param_1 + 0x48) = local_3c;
    local_4c = *(undefined4 *)(param_1 + 0x46);
    uStack_44 = *(undefined4 *)(param_1 + 0x4a);
    local_48 = *(float *)(param_1 + 0x48) + fVar6;
    fVar6 = (float)FUN_00337518(param_1,auStack_58,&local_4c,auStack_5c);
    *(float *)(param_1 + 0x48) = fVar6 + DAT_0025b52c;
    *psVar2 = *psVar2 + -1;
  }
  return !bVar1;
}
