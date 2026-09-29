// OoT3D decomp @ 001521c8  name=FUN_001521c8  size=212

void FUN_001521c8(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  undefined4 local_28;
  float local_24;
  float local_20;
  undefined4 local_1c;
  float local_18;
  undefined4 uStack_14;

  uVar3 = FUN_00367d74(param_2);
  *(undefined2 *)(param_1 + 0xd46) = uVar3;
  sVar1 = *(short *)(DAT_0015229c + param_2);
  *(short *)(param_1 + 0xd48) = sVar1;
  FUN_00320d7c(param_2,(int)sVar1,1);
  FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0xd46),7);
  local_1c = *(undefined4 *)(param_1 + 0x28);
  uStack_14 = *(undefined4 *)(param_1 + 0x30);
  local_28 = *(undefined4 *)(param_1 + 8);
  local_18 = *(float *)(param_1 + 0x2c) + DAT_001522a0;
  local_24 = *(float *)(param_1 + 0xc) + DAT_001522a4;
  local_20 = *(float *)(param_1 + 0x10) + DAT_001522a8;
  FUN_00367b14(param_2,(int)*(short *)(param_1 + 0xd46),&local_1c,&local_28);
  FUN_0036e980(param_2,param_1,8);
  uVar2 = DAT_001522b0;
  *(undefined4 *)(param_1 + 0x6c) = DAT_001522ac;
  *(undefined4 *)(param_1 + 0xcb8) = uVar2;
  return;
}
