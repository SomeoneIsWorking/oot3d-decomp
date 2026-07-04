// OoT3D decomp @ 00378ff8  name=FUN_00378ff8  size=376

undefined4 FUN_00378ff8(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  int extraout_r1;
  int extraout_r1_00;
  int iVar6;
  byte *pbVar7;
  undefined8 uVar8;
  
  puVar2 = puRam00379178;
  iVar1 = iRam00379174;
  iVar3 = *(int *)(iRam00379170 + 0x4e8);
  if (iVar3 == 0) {
    return 1;
  }
  iVar6 = param_1 + *(int *)(param_3 + 4);
  iVar5 = *(int *)(iVar6 + iVar3 * 4 + -4);
  if (iVar5 == 0) {
    if (iVar3 != 3) {
      return 1;
    }
    iVar3 = *(int *)(iVar6 + 4);
    if (iVar3 == 0) {
      return 1;
    }
    pbVar7 = (byte *)(param_1 + iVar3);
    iVar3 = 0;
    while (uVar4 = (uint)*pbVar7, uVar4 != 0x14) {
      if (uVar4 < 0x1a) {
        uVar8 = (**(code **)(iVar1 + uVar4 * 4))(param_1,param_2,pbVar7);
        iVar3 = (int)((ulonglong)uVar8 >> 0x20);
        if ((int)uVar8 == 0) {
          return 0;
        }
      }
      pbVar7 = pbVar7 + 8;
      if ((*puVar2 & 1) == 0) {
        uVar8 = FUN_003679b4(puRam00379178);
        iVar3 = (int)((ulonglong)uVar8 >> 0x20);
        if ((int)uVar8 != 0) {
          FUN_0031ff30(uRam0037917c);
          iVar3 = iRam00379184;
        }
      }
      FUN_0031fe84(uRam0037917c,iVar3);
      iVar3 = extraout_r1_00;
    }
  }
  else {
    pbVar7 = (byte *)(param_1 + iVar5);
    while (uVar4 = (uint)*pbVar7, uVar4 != 0x14) {
      if (uVar4 < 0x1a) {
        uVar8 = (**(code **)(iVar1 + uVar4 * 4))(param_1,param_2,pbVar7);
        iVar5 = (int)((ulonglong)uVar8 >> 0x20);
        if ((int)uVar8 == 0) {
          return 0;
        }
      }
      pbVar7 = pbVar7 + 8;
      if ((*puVar2 & 1) == 0) {
        uVar8 = FUN_003679b4(puRam00379178);
        iVar5 = (int)((ulonglong)uVar8 >> 0x20);
        if ((int)uVar8 != 0) {
          FUN_0031ff30(uRam0037917c);
          iVar5 = iRam00379184;
        }
      }
      FUN_0031fe84(uRam0037917c,iVar5);
      iVar5 = extraout_r1;
    }
  }
  return 0;
}

