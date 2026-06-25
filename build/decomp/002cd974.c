// OoT3D decomp @ 002cd974  name=FUN_002cd974  size=388

void FUN_002cd974(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  short local_ec [2];
  short local_e8 [2];
  short local_e4 [2];
  undefined auStack_e0 [4];
  int aiStack_dc [52];
  
  FUN_00371738(aiStack_dc,DAT_002cdaf8,0xd0);
  iVar2 = 0;
  if (*(int *)(param_1 + 4000) != 0) {
    FUN_00363a20(*(int *)(param_1 + 8),*(undefined4 *)(DAT_002cdafc + *(int *)(param_1 + 8)),
                 auStack_e0,local_e4);
    FUN_00363a20(*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 4000),local_e8,local_ec);
    iVar3 = (int)local_e4[0];
    iVar2 = (int)local_ec[0];
    if (iVar3 < iVar2) {
      iVar2 = iVar3 + (iVar2 - iVar3) / 2;
    }
    else {
      iVar2 = iVar2 + (iVar3 - iVar2) / 2;
    }
  }
  if (*(int *)(param_1 + 0xf4c) != 0) goto LAB_002cda74;
  if (((*(short *)(*DAT_002cdb00 + 0x4b2) == 0) &&
      (sVar1 = *(short *)(*(int *)(param_1 + 8) + 0x104), sVar1 != 0x45)) &&
     ((sVar1 != 0x20 && sVar1 != 0x21) && sVar1 != 0x22)) {
    if (0x9f < iVar2) {
LAB_002cda70:
      *(undefined4 *)(param_1 + 0xf4c) = 1;
      goto LAB_002cda74;
    }
  }
  else if (99 < iVar2) goto LAB_002cda70;
  *(undefined4 *)(param_1 + 0xf4c) = 3;
LAB_002cda74:
  uVar4 = DAT_002cdb04;
  iVar2 = aiStack_dc[*(int *)(param_1 + 0xf4c) * 0xd + *(int *)(param_1 + 0xf48)];
  if (*(int *)(param_1 + 4000) != 0) {
    uVar4 = VectorSignedToFloat((int)local_e8[0],(byte)(in_fpscr >> 0x15) & 3);
    iVar2 = (int)local_ec[0];
  }
  uVar5 = VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
  uVar6 = VectorSignedToFloat(aiStack_dc
                              [*(int *)(param_1 + 0xf4c) * 0xd + *(int *)(param_1 + 0xf48)],
                              (byte)(in_fpscr >> 0x15) & 3);
  FUN_004c64c4(uVar4,uVar5,DAT_002cdb04,uVar6,param_1 + 0x44,*(int *)(param_1 + 0xf48),param_2);
  *(undefined *)(param_1 + 0xf38) = 2;
  uVar4 = DAT_002cdb08;
  if (*(int *)(param_1 + 0xf48) < 3) {
    uVar4 = 0;
  }
  *(undefined4 *)(param_1 + 0xfa4) = uVar4;
  return;
}

