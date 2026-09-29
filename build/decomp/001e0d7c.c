// OoT3D decomp @ 001e0d7c  name=FUN_001e0d7c  size=300

void FUN_001e0d7c(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;

  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 0) {
    FUN_0037572c(DAT_001e0eac,param_1);
  }
  else if (sVar1 == 1) {
    FUN_0037572c(DAT_001e0eb0,param_1);
  }
  else if (sVar1 == 2) {
    FUN_0037572c(DAT_001e0eb4,param_1);
  }
  else if (sVar1 == 3) {
    FUN_0037572c(DAT_001e0ea8,param_1);
  }
  uVar2 = DAT_001e0eb8;
  *(undefined4 *)(param_1 + 0x1bc) = 1;
  *(undefined4 *)(param_1 + 0x104) = uVar2;
  *(undefined4 *)(param_1 + 0x100) = DAT_001e0ebc;
  *(undefined2 *)(param_1 + 0xb0) = 0x14;
  *(undefined2 *)(param_1 + 0xb2) = 0x32;
  FUN_00372d4c(DAT_001e0ec8,DAT_001e0ec0,param_1 + 0xbc,DAT_001e0ec4);
  *(undefined1 *)(param_1 + 0x1b8) = 0;
  uVar2 = DAT_001e0ecc;
  *(undefined4 *)(param_1 + 0x1b4) = 0;
  *(undefined1 *)(param_1 + 0x1f) = 1;
  *(undefined4 *)(param_1 + 0x70) = uVar2;
  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,0,0);
  uVar2 = FUN_00353fd4(param_1,param_2,1);
  uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
  *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  return;
}
