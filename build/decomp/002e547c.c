// OoT3D decomp @ 002e547c  name=FUN_002e547c  size=408

void FUN_002e547c(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  int iVar4;
  undefined8 uVar5;
  undefined4 extraout_s2;
  undefined auStack_48 [12];
  undefined2 auStack_3c [2];
  undefined4 local_38;
  undefined2 local_34;
  short local_32;
  undefined4 local_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  short local_22;
  
  FUN_00331764(&local_30);
  fVar3 = (float)FUN_00367ef0(param_2);
  *(undefined4 *)(param_1 + 0xd8) = param_2;
  FUN_00371738(param_1 + 0xdc,&local_30,0x12);
  local_38 = DAT_002e5614;
  *(undefined4 *)(param_1 + 0x124) = DAT_002e5614;
  *(short *)(param_1 + 0x17e) = local_22;
  local_32 = local_22 + -0x7fff;
  local_34 = (undefined2)DAT_002e5618;
  *(undefined2 *)(param_1 + 0x17c) = local_34;
  *(undefined2 *)(param_1 + 0x180) = 0;
  FUN_0035fb94(param_1 + 0x182,param_1 + 0x17c);
  uVar1 = DAT_002e561c;
  *(undefined4 *)(param_1 + 0x120) = DAT_002e561c;
  *(undefined4 *)(param_1 + 0x13c) = uVar1;
  *(undefined4 *)(param_1 + 0x80) = local_30;
  *(undefined4 *)(param_1 + 0x84) = uStack_2c;
  *(undefined4 *)(param_1 + 0x88) = uStack_28;
  *(float *)(param_1 + 0x84) = *(float *)(param_1 + 0x84) + fVar3;
  *(undefined4 *)(param_1 + 300) = uVar1;
  *(float *)(param_1 + 0x130) = fVar3;
  *(undefined4 *)(param_1 + 0x134) = uVar1;
  uVar5 = FUN_00372448(param_1 + 0x80,&local_38);
  *(undefined8 *)(param_1 + 0xa4) = uVar5;
  *(undefined4 *)(param_1 + 0xac) = extraout_s2;
  uVar2 = DAT_002e5620;
  *(undefined4 *)(param_1 + 0x8c) = *(undefined4 *)(param_1 + 0xa4);
  *(undefined4 *)(param_1 + 0x90) = *(undefined4 *)(param_1 + 0xa8);
  *(undefined4 *)(param_1 + 0x94) = *(undefined4 *)(param_1 + 0xac);
  *(undefined4 *)(param_1 + 0x98) = uVar1;
  *(undefined4 *)(param_1 + 0x9c) = uVar2;
  *(undefined4 *)(param_1 + 0xa0) = uVar1;
  *(undefined2 *)(param_1 + 0x1a2) = 0;
  iVar4 = FUN_00337518(param_1,auStack_48,param_1 + 0x80,auStack_3c);
  if (iVar4 != -0x39060000) {
    *(undefined2 *)(param_1 + 0x18e) = auStack_3c[0];
  }
  *(undefined4 *)(param_1 + 0x160) = 0xffffffff;
  *(undefined4 *)(param_1 + 0x164) = 0xffffffff;
  *(ushort *)(param_1 + 0x194) = *(ushort *)(param_1 + 0x194) | 4;
  if (*(int *)(param_1 + 0xd4) + 0x364 == param_1) {
    *(undefined4 *)(DAT_002e5624 + 0x14) = 0xb200;
  }
  else {
    *(undefined4 *)(DAT_002e5624 + 0x14) = 0;
  }
  FUN_002c0998(param_1);
  *(undefined4 *)(param_1 + 0x148) = uVar2;
  *(undefined2 *)(param_1 + 0x192) = 0;
  *(undefined2 *)(param_1 + 0x1a4) = 0;
  *(undefined2 *)(param_1 + 0x19e) = 0xffff;
  FUN_002c0a9c(param_1,(int)*(short *)(param_1 + 0x18c));
  if (*(short *)(param_1 + 0x1ac) == 0) {
    FUN_002d06a0(param_1);
  }
  return;
}

