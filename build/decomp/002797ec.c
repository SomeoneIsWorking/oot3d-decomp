// OoT3D decomp @ 002797ec  name=FUN_002797ec  size=236

void FUN_002797ec(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  float fVar1;
  undefined4 uVar2;
  int iVar3;

  FUN_003510b0(param_1,DAT_002798d8,param_3,param_4,param_4);
  FUN_00372f38(param_1,param_2,param_1 + 0x224,0,0);
  FUN_00350eb8(param_2,param_1 + 0x1a8);
  FUN_00350d48(param_2,param_1 + 0x1a8,param_1,DAT_002798dc,param_1 + 0x1c8);
  fVar1 = DAT_002798e0;
  iVar3 = *(int *)(param_1 + 0x1c4);
  *(undefined4 *)(iVar3 + 0x38) = *(undefined4 *)(param_1 + 0x28);
  uVar2 = DAT_002798e8;
  *(float *)(iVar3 + 0x3c) = *(float *)(param_1 + 0x2c) + fVar1;
  *(undefined4 *)(iVar3 + 0x40) = *(undefined4 *)(param_1 + 0x30);
  *(undefined4 *)(*(int *)(param_1 + 0x1c4) + 0x44) = DAT_002798e4;
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0xbe) = 0;
  *(undefined2 *)(param_1 + 0xbc) = 0;
  FUN_00350d20(param_1 + 0xa0,0,uVar2);
  FUN_00372d4c(DAT_002798f4,DAT_002798ec,param_1 + 0xbc,DAT_002798f0);
  *(undefined1 *)(param_1 + 0xd0) = 0x80;
  uVar2 = DAT_002798fc;
  *(undefined4 *)(param_1 + 0x1a4) = DAT_002798f8;
  *(byte *)(param_1 + 0x1b8) = *(byte *)(param_1 + 0x1b8) | 1;
  *(undefined2 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x218) = uVar2;
  return;
}
