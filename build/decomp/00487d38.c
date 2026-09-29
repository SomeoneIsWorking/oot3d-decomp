// OoT3D decomp @ 00487d38  name=FUN_00487d38  size=612

void FUN_00487d38(int param_1)

{
  uint *puVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  float *pfVar6;
  int iVar7;
  undefined4 uVar8;
  undefined1 auStack_a8 [48];
  undefined1 auStack_78 [48];
  undefined1 auStack_48 [48];

  uVar3 = DAT_00487fa8;
  puVar2 = DAT_00487fa4;
  uVar8 = DAT_00487fa0;
  puVar1 = DAT_00487f9c;
  if (*(char *)(param_1 + 4) != '\0') {
    if (((*DAT_00487f9c & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00487f9c), iVar4 != 0)) {
      *puVar2 = uVar3;
      puVar2[1] = uVar8;
      puVar2[2] = uVar8;
      puVar2[3] = uVar8;
      puVar2[4] = uVar8;
      puVar2[5] = uVar3;
      puVar2[6] = uVar8;
      puVar2[7] = uVar8;
      puVar2[8] = uVar8;
      puVar2[9] = uVar8;
      puVar2[10] = uVar3;
      puVar2[0xb] = uVar8;
    }
    FUN_00372224(auStack_48,DAT_00487fa4);
    if (((*puVar1 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00487f9c), iVar4 != 0)) {
      *puVar2 = uVar3;
      puVar2[1] = uVar8;
      puVar2[2] = uVar8;
      puVar2[3] = uVar8;
      puVar2[4] = uVar8;
      puVar2[5] = uVar3;
      puVar2[6] = uVar8;
      puVar2[7] = uVar8;
      puVar2[8] = uVar8;
      puVar2[9] = uVar8;
      puVar2[10] = uVar3;
      puVar2[0xb] = uVar8;
    }
    FUN_00372224(auStack_78,DAT_00487fa4);
    iVar4 = *(int *)(param_1 + 0x528);
    if (*(int *)(iVar4 + 0xc) == 0) {
      *(undefined4 *)(param_1 + 0x948) = uVar3;
    }
    else {
      *(float *)(param_1 + 0x948) = *(float *)(iVar4 + 0x18) / *(float *)(iVar4 + 0x1c);
    }
    *(undefined4 *)(param_1 + 0x94c) = *(undefined4 *)(param_1 + 0x940);
    uVar8 = *(undefined4 *)(param_1 + 0x944);
    *(undefined4 *)(param_1 + 0x950) = uVar8;
    puVar2 = DAT_00487fac;
    *(undefined4 *)(iVar4 + 0x80) = *(undefined4 *)(param_1 + 0x94c);
    *(undefined4 *)(iVar4 + 0x84) = uVar8;
    FUN_002f2c88(*puVar2,iVar4,auStack_48);
    uVar8 = FUN_0048c40c(iVar4);
    FUN_00372224(auStack_a8,uVar8);
    iVar7 = 2;
    do {
      iVar5 = *(int *)(param_1 + iVar7 * 4 + 0x524);
      if (iVar5 != 0) {
        FUN_002f2c88(uVar3,iVar5,auStack_a8);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x100);
    if (*(int *)(param_1 + 0x934) != -1) {
      pfVar6 = (float *)FUN_0048c400(iVar4);
      FUN_002e6cd4(*(undefined4 *)(*(int *)(param_1 + 0x528) + 0x88),
                   *(undefined4 *)(param_1 + 0x930),0,(int)(*pfVar6 - DAT_00487fb4),
                   (int)(pfVar6[1] - DAT_00487fb0),0x2a,0x2a);
    }
  }
  return;
}
