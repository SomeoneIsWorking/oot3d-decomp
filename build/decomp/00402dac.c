// OoT3D decomp @ 00402dac  name=FUN_00402dac  size=112

void FUN_00402dac(int *param_1,undefined4 param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint uVar1;
  byte bVar2;

  uVar1 = *(uint *)(param_3 + 0x18);
  bVar2 = (uVar1 & 1) != 0;
  if ((uVar1 & 2) != 0) {
    bVar2 = bVar2 | 2;
  }
  if ((uVar1 & 4) != 0) {
    bVar2 = bVar2 | 4;
  }
  if ((uVar1 & 8) != 0) {
    bVar2 = bVar2 | 8;
  }
  if ((uVar1 & 0x10) != 0) {
    bVar2 = bVar2 | 0x10;
  }
  if (*(char *)(param_3 + 0x29) != '\0') {
    bVar2 = bVar2 | 0x20;
  }
  (**(code **)(*param_1 + 0x10))(param_1,param_2,param_3,param_4,bVar2,param_5);
  return;
}
