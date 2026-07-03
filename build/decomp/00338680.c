// OoT3D decomp @ 00338680  name=FUN_00338680  size=256

undefined4 FUN_00338680(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined1 auStack_20 [20];
  
  uVar3 = DAT_00338780;
  *(undefined4 *)(param_1 + 0x134) = DAT_00338780;
  *(undefined4 *)(param_1 + 0x130) = uVar3;
  *(undefined4 *)(param_1 + 300) = uVar3;
  *(undefined4 *)(param_1 + 0x148) = DAT_00338784;
  uVar3 = *(undefined4 *)(param_2 + 0x84);
  uVar4 = *(undefined4 *)(param_2 + 0x88);
  *(undefined4 *)(param_1 + 0x80) = *(undefined4 *)(param_2 + 0x80);
  *(undefined4 *)(param_1 + 0x84) = uVar3;
  *(undefined4 *)(param_1 + 0x88) = uVar4;
  uVar3 = *(undefined4 *)(param_2 + 0x90);
  uVar4 = *(undefined4 *)(param_2 + 0x94);
  *(undefined4 *)(param_1 + 0xa4) = *(undefined4 *)(param_2 + 0x8c);
  *(undefined4 *)(param_1 + 0xa8) = uVar3;
  *(undefined4 *)(param_1 + 0xac) = uVar4;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xac);
  uVar3 = FUN_00338a90(param_1 + 0x80,param_1 + 0x8c);
  iVar1 = DAT_00338788;
  *(undefined4 *)(param_1 + 0x124) = uVar3;
  iVar2 = DAT_00338788;
  *(undefined4 *)(param_1 + 0x144) = *(undefined4 *)(param_2 + 0x144);
  *(undefined2 *)(iVar2 + param_1) = *(undefined2 *)(iVar1 + param_2);
  FUN_00338c04(param_1);
  if (*(int *)(param_1 + 0xd8) != 0) {
    FUN_00342ec0(auStack_20);
    FUN_00371738(param_1 + 0xdc,auStack_20,0x12);
    *(float *)(param_1 + 300) = *(float *)(param_1 + 0x80) - *(float *)(param_1 + 0xdc);
    *(float *)(param_1 + 0x130) = *(float *)(param_1 + 0x84) - *(float *)(param_1 + 0xe0);
    *(float *)(param_1 + 0x134) = *(float *)(param_1 + 0x88) - *(float *)(param_1 + 0xe4);
    uVar3 = FUN_00338a90(param_1 + 0xdc,param_1 + 0x8c);
    *(undefined4 *)(param_1 + 0x124) = uVar3;
    uVar3 = DAT_0033878c;
    *(undefined4 *)(param_1 + 0x114) = DAT_0033878c;
    *(undefined4 *)(param_1 + 0x118) = uVar3;
  }
  return 1;
}

