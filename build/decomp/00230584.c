// OoT3D decomp @ 00230584  name=FUN_00230584  size=304

void FUN_00230584(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;

  uVar3 = DAT_002306b4;
  uVar4 = 0;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 0) {
    FUN_0037572c(DAT_002306bc,param_1);
  }
  else if (sVar1 == 1) {
    FUN_0037572c(DAT_002306c0,param_1);
  }
  else if (sVar1 == 2) {
    FUN_0037572c(DAT_002306c4,param_1);
  }
  else if (sVar1 == 3) {
    FUN_0037572c(DAT_002306b8,param_1);
  }
  uVar2 = DAT_002306c8;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0xb0) = 0x1e;
  *(undefined2 *)(param_1 + 0xb2) = 0x32;
  FUN_00372d4c(uVar3,uVar2,param_1 + 0xbc,DAT_002306cc);
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  uVar3 = DAT_002306d0;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 0;
  *(undefined4 *)(param_1 + 0x70) = uVar3;
  FUN_00372f38(param_1,param_2,param_1 + 0x1bc,0,0,uVar4);
  uVar3 = FUN_00353fd4(param_1,param_2,3);
  uVar3 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar3);
  *(undefined4 *)(param_1 + 0x1a4) = uVar3;
  return;
}
