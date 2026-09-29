// OoT3D decomp @ 001ff980  name=FUN_001ff980  size=348

void FUN_001ff980(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 uVar5;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  float local_24;
  float local_20;

  uVar2 = DAT_001ffadc;
  uVar5 = FUN_00367d74(param_2);
  *(undefined2 *)(param_1 + 0x468) = uVar5;
  sVar1 = *(short *)(DAT_001ffae0 + param_2);
  *(short *)(param_1 + 0x46a) = sVar1;
  FUN_00320d7c(param_2,(int)sVar1,1);
  FUN_00320d7c(param_2,(int)*(short *)(param_1 + 0x468),7);
  uVar3 = DAT_001ffae4;
  *(undefined4 *)(param_1 + 0xd70) = uVar2;
  *(undefined4 *)(param_1 + 0xd74) = uVar3;
  *(undefined4 *)(param_1 + 0xd78) = uVar2;
  *(undefined4 *)(param_1 + 0xd7c) = uVar2;
  *(undefined4 *)(param_1 + 0xd80) = uVar3;
  *(undefined4 *)(param_1 + 0xd84) = uVar3;
  local_28 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0xd70);
  local_24 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xd74);
  local_20 = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0xd78);
  local_34 = *(float *)(param_1 + 0x28) + *(float *)(param_1 + 0xd7c);
  local_30 = *(float *)(param_1 + 0x2c) + *(float *)(param_1 + 0xd80);
  local_2c = *(float *)(param_1 + 0x30) + *(float *)(param_1 + 0xd84);
  FUN_00367b14(param_2,(int)*(short *)(param_1 + 0x468),&local_28,&local_34);
  uVar2 = DAT_001ffae8;
  *(short *)(DAT_001ffaec + param_1) = (short)DAT_001ffae8;
  FUN_00367c7c(param_2,uVar2,0);
  *(undefined2 *)(DAT_001ffaf0 + param_1) = 1;
  iVar4 = DAT_001ffaf4;
  *(undefined2 *)(param_1 + 0x474) = 0;
  *(undefined2 *)(iVar4 + param_2) = 0;
  FUN_00338cd8(*DAT_001ffaf8);
  FUN_0034be04(2);
  *(undefined4 *)(param_1 + 0x3fc) = DAT_001ffafc;
  return;
}
