// OoT3D decomp @ 00338654  name=FUN_00338654  size=44

undefined4 FUN_00338654(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined auStack_20 [20];
  
  uVar5 = DAT_00338780;
  if (param_3 == -1) {
    param_3 = (int)*(short *)(param_1 + 0xa64);
  }
  if (param_2 == -1) {
    param_2 = (int)*(short *)(param_1 + 0xa64);
  }
  iVar4 = *(int *)(param_1 + param_3 * 4 + 0xa54);
  iVar3 = *(int *)(param_1 + param_2 * 4 + 0xa54);
  *(undefined4 *)(iVar3 + 0x134) = DAT_00338780;
  *(undefined4 *)(iVar3 + 0x130) = uVar5;
  *(undefined4 *)(iVar3 + 300) = uVar5;
  *(undefined4 *)(iVar3 + 0x148) = DAT_00338784;
  uVar5 = *(undefined4 *)(iVar4 + 0x84);
  uVar6 = *(undefined4 *)(iVar4 + 0x88);
  *(undefined4 *)(iVar3 + 0x80) = *(undefined4 *)(iVar4 + 0x80);
  *(undefined4 *)(iVar3 + 0x84) = uVar5;
  *(undefined4 *)(iVar3 + 0x88) = uVar6;
  uVar5 = *(undefined4 *)(iVar4 + 0x90);
  uVar6 = *(undefined4 *)(iVar4 + 0x94);
  *(undefined4 *)(iVar3 + 0xa4) = *(undefined4 *)(iVar4 + 0x8c);
  *(undefined4 *)(iVar3 + 0xa8) = uVar5;
  *(undefined4 *)(iVar3 + 0xac) = uVar6;
  *(undefined4 *)(iVar3 + 0x8c) = *(undefined4 *)(iVar3 + 0xa4);
  *(undefined4 *)(iVar3 + 0x90) = *(undefined4 *)(iVar3 + 0xa8);
  *(undefined4 *)(iVar3 + 0x94) = *(undefined4 *)(iVar3 + 0xac);
  uVar5 = FUN_00338a90(iVar3 + 0x80,iVar3 + 0x8c);
  iVar1 = DAT_00338788;
  *(undefined4 *)(iVar3 + 0x124) = uVar5;
  iVar2 = DAT_00338788;
  *(undefined4 *)(iVar3 + 0x144) = *(undefined4 *)(iVar4 + 0x144);
  *(undefined2 *)(iVar2 + iVar3) = *(undefined2 *)(iVar1 + iVar4);
  FUN_00338c04(iVar3);
  if (*(int *)(iVar3 + 0xd8) != 0) {
    FUN_00342ec0(auStack_20);
    FUN_00371738(iVar3 + 0xdc,auStack_20,0x12);
    *(float *)(iVar3 + 300) = *(float *)(iVar3 + 0x80) - *(float *)(iVar3 + 0xdc);
    *(float *)(iVar3 + 0x130) = *(float *)(iVar3 + 0x84) - *(float *)(iVar3 + 0xe0);
    *(float *)(iVar3 + 0x134) = *(float *)(iVar3 + 0x88) - *(float *)(iVar3 + 0xe4);
    uVar5 = FUN_00338a90(iVar3 + 0xdc,iVar3 + 0x8c);
    *(undefined4 *)(iVar3 + 0x124) = uVar5;
    uVar5 = DAT_0033878c;
    *(undefined4 *)(iVar3 + 0x114) = DAT_0033878c;
    *(undefined4 *)(iVar3 + 0x118) = uVar5;
  }
  return 1;
}

