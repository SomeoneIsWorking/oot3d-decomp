// OoT3D decomp @ 00221d70  name=FUN_00221d70  size=400

void FUN_00221d70(int param_1)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  int iStack_58;
  undefined4 uStack_54;
  int iStack_50;
  undefined auStack_4c [48];
  
  FUN_00372224(auStack_4c,param_1 + 0x148);
  iStack_58 = iRam00221f00;
  uStack_54 = uRam00221f04;
  iStack_50 = iRam00221f00;
  FUN_00372070(auStack_4c,auStack_4c,&iStack_58);
  uVar2 = uRam00221f0c;
  fVar1 = fRam00221f08;
  FUN_0033dd8c(*(float *)(param_1 + 0x2a0) * fRam00221f08,*(float *)(param_1 + 0x2a4) * fRam00221f08
               ,*(float *)(param_1 + 0x2a8) * fRam00221f08,uRam00221f0c,param_1 + 0x1a4,1,0);
  uVar3 = uRam00221f10;
  if (*(short *)(param_1 + 0x256) == 0) {
    if (*(short *)(param_1 + 0x254) != 2) {
      FUN_0033dd8c(*(float *)(param_1 + 0x2ac) * fVar1,*(float *)(param_1 + 0x2b0) * fVar1,
                   *(float *)(param_1 + 0x2b4) * fVar1,uVar2,param_1 + 0x1a4,0,0,1);
      goto LAB_00221e74;
    }
  }
  else {
    uVar4 = FUN_003759d0();
    uVar5 = FUN_003759d0();
    uVar6 = FUN_003759d0();
    FUN_0033dd8c(uVar6,uVar5,uVar4,uVar2,param_1 + 0x1a4,0,0,1);
LAB_00221e74:
    if (*(short *)(param_1 + 0x254) != 2) {
      FUN_0033dd8c(uVar3,uVar3,uVar3,uVar2,param_1 + 0x1a4,2,1);
      goto LAB_00221ed4;
    }
  }
  FUN_0033dd8c(uVar3,uVar3,uVar3,uRam00221f14,param_1 + 0x1a4,2,1);
LAB_00221ed4:
  uStack_54 = 0;
  iStack_58 = param_1;
  FUN_0035e240(param_1 + 0x1a4,auStack_4c,uRam00221f1c,uRam00221f18);
  return;
}

