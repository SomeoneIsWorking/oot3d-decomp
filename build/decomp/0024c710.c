// OoT3D decomp @ 0024c710  name=FUN_0024c710  size=216

void FUN_0024c710(int param_1,int param_2)

{
  int iVar1;

  *(undefined2 *)(param_1 + 0x34) = *(undefined2 *)(param_1 + 0xbc);
  *(undefined2 *)(param_1 + 0x36) = *(undefined2 *)(param_1 + 0xbe);
  *(undefined2 *)(param_1 + 0x38) = *(undefined2 *)(param_1 + 0xc0);
  FUN_0037322c(*(undefined4 *)(param_1 + 0x240),param_1);
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  FUN_00376864(param_1);
  if (*(float *)(param_1 + 0xc4) != DAT_0024c7e8) {
    return;
  }
  FUN_0037632c(param_1,param_1 + 0x244);
  if ((*(byte *)(param_1 + 0x255) & 2) == 0) {
    iVar1 = *(int *)(param_1 + 0x29c);
    if (iVar1 < 1) {
      FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x244);
      goto LAB_0024c7d0;
    }
  }
  else {
    *(byte *)(param_1 + 0x255) = *(byte *)(param_1 + 0x255) & 0xfd;
    iVar1 = 6;
    *(undefined4 *)(param_1 + 0x29c) = 6;
  }
  *(int *)(param_1 + 0x29c) = iVar1 + -1;
LAB_0024c7d0:
  FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x244);
  return;
}
