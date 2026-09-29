// OoT3D decomp @ 002015c0  name=FUN_002015c0  size=624

undefined4 FUN_002015c0(undefined2 *param_1)

{
  short sVar1;
  float fVar2;
  int iVar3;
  short *psVar4;
  undefined4 uVar5;
  float fVar6;
  undefined4 extraout_s0;
  undefined4 uVar7;
  undefined4 extraout_s1;
  undefined4 extraout_s2;
  undefined1 auStack_74 [20];
  short asStack_60 [4];
  float local_58;
  float local_54;
  float local_50;
  undefined4 local_44;
  undefined2 local_40;
  short local_3e;
  undefined1 auStack_3c [20];

  iVar3 = FUN_0036c5bc(*(undefined4 *)(param_1 + 0x6a),0);
  fVar2 = DAT_00201834;
  uVar5 = *(undefined4 *)(param_1 + 0x78);
  asStack_60[1] = 0x53;
  asStack_60[2] = 0x69;
  asStack_60[3] = 0x87;
  psVar4 = param_1 + 2;
  *param_1 = **(undefined2 **)
               (*(int *)(DAT_00201830 + (short)param_1[0xc5] * 8 + 4) + (short)param_1[0xc6] * 8 + 4
               );
  sVar1 = param_1[0xd3];
  if (sVar1 == 0) {
    *(undefined4 *)(param_1 + 0xa2) = DAT_00201838;
    *psVar4 = 0;
    FUN_00342ec0(auStack_74,uVar5);
    FUN_00371738(&local_58,auStack_74,0x12);
    *(float *)(param_1 + 0x40) = local_58;
    *(float *)(param_1 + 0x42) = local_54 + fVar2;
    *(float *)(param_1 + 0x44) = local_50;
    local_44 = DAT_0020183c;
    fVar6 = (float)FUN_003696ec(*(float *)(iVar3 + 0xdc) - local_58,
                                *(float *)(iVar3 + 0xe4) - local_50);
    local_3e = (short)(int)(DAT_00201848 + fVar6 * DAT_00201840 * DAT_00201844) + 2000;
    local_40 = (undefined2)DAT_0020184c;
    FUN_00372448(param_1 + 0x40,&local_44);
    *(undefined4 *)(param_1 + 0x52) = extraout_s0;
    *(undefined4 *)(param_1 + 0x54) = extraout_s1;
    *(undefined4 *)(param_1 + 0x56) = extraout_s2;
    *(undefined4 *)(param_1 + 0x46) = *(undefined4 *)(param_1 + 0x52);
    *(undefined4 *)(param_1 + 0x48) = *(undefined4 *)(param_1 + 0x54);
    *(undefined4 *)(param_1 + 0x4a) = *(undefined4 *)(param_1 + 0x56);
    param_1[0xd3] = param_1[0xd3] + 1;
LAB_00201724:
    if (*psVar4 <= asStack_60[(short)param_1[0xd3]]) goto LAB_002017f8;
    FUN_0036e980(*(undefined4 *)(param_1 + 0x6a),*(undefined4 *)(param_1 + 0x6c),8);
    FUN_00342ec0(auStack_74,uVar5);
    FUN_00371738(&local_58,auStack_74,0x12);
    *(float *)(param_1 + 4) = local_58;
    *(float *)(param_1 + 6) = local_54 - fVar2;
    *(float *)(param_1 + 8) = local_50;
    param_1[0xd3] = param_1[0xd3] + 1;
LAB_0020178c:
    FUN_00367df4(DAT_00201854,DAT_00201854,DAT_00201850,param_1 + 4,param_1 + 0x40);
    if (*psVar4 <= asStack_60[(short)param_1[0xd3]]) goto LAB_002017f8;
    param_1[0xd3] = param_1[0xd3] + 1;
  }
  else {
    if (sVar1 == 1) goto LAB_00201724;
    if (sVar1 == 2) goto LAB_0020178c;
    if (sVar1 != 3) goto LAB_002017f8;
  }
  uVar7 = FUN_00355780(DAT_00201860,*(undefined4 *)(param_1 + 0xa2),DAT_0020185c,DAT_00201858);
  *(undefined4 *)(param_1 + 0xa2) = uVar7;
  if (asStack_60[(short)param_1[0xd3]] < *psVar4) {
    param_1[0xd4] = 0;
    return 1;
  }
LAB_002017f8:
  *psVar4 = *psVar4 + 1;
  FUN_00342ec0(auStack_3c,uVar5);
  FUN_00371738(&local_58,auStack_3c,0x12);
  return 1;
}
