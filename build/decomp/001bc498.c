// OoT3D decomp @ 001bc498  name=FUN_001bc498  size=528

void FUN_001bc498(int param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined1 auStack_20 [4];

  FUN_003510b0(param_1,DAT_001bc6a8);
  FUN_00372d4c(DAT_001bc6b4,DAT_001bc6ac,param_1 + 0xbc,DAT_001bc6b0);
  *(undefined1 *)(param_1 + 0xd0) = 0x9b;
  uVar1 = DAT_001bc6b8;
  *(undefined4 *)(param_1 + 0x8bc) = DAT_001bc6b8;
  *(undefined4 *)(param_1 + 0x8c0) = uVar1;
  *(undefined4 *)(param_1 + 0x8c4) = uVar1;
  uVar2 = FUN_00372f38(param_1,param_2,param_1 + 0x808,0,param_1 + 0x80c,2,param_1 + 0x810,1,
                       param_1 + 0x814,3,param_1 + 0x818,3,param_1 + 0x81c,3,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x464,0xb);
  uVar3 = *(undefined4 *)(*(int *)(param_1 + 0x80c) + 0x10);
  uVar2 = FUN_00372f0c(uVar2,0);
  *(undefined4 *)(param_1 + 0x820) = uVar3;
  FUN_00372d94(param_1 + 0x820,uVar2);
  *(undefined1 *)(param_1 + 0x830) = 1;
  *(undefined4 *)(param_1 + 0x82c) = uVar1;
  *(undefined1 *)(param_1 + 0x8b8) = 0;
  FUN_00350a98(param_2,param_1 + 0x6b0);
  FUN_00350914(param_2,param_1 + 0x6b0,param_1,DAT_001bc6bc);
  FUN_00350a98(param_2,param_1 + 0x730);
  FUN_00350914(param_2,param_1 + 0x730,param_1,DAT_001bc6bc);
  FUN_00353dd0(param_2,param_1 + 0x7b0);
  FUN_00353d24(param_2,param_1 + 0x7b0,param_1,DAT_001bc6c0);
  FUN_00350d20(param_1 + 0xa0,DAT_001bc6c4 + 0x90);
  FUN_0036e734(param_1 + 0x1a4,0);
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(byte *)(param_1 + 0x7c1) = *(byte *)(param_1 + 0x7c1) & 0xfe;
  *(undefined4 *)(param_1 + 0x6a0) = DAT_001bc6c8;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  iVar4 = FUN_0036e81c(param_2 + 0xa98,param_1 + 0x7c,auStack_20,param_1,param_1 + 0x28);
  *(int *)(param_1 + 0x84) = iVar4;
  *(undefined2 *)(param_1 + 0x1c) = 0;
  if (iVar4 == -0x39060000) {
    FUN_00374428(param_1);
  }
  return;
}
