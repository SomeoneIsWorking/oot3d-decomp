// OoT3D decomp @ 0024a080  name=FUN_0024a080  size=212

void FUN_0024a080(int param_1,int param_2)

{
  int iVar1;

  iVar1 = DAT_0024a154;
  if (*(int *)(param_1 + 0x1a4) != DAT_0024a154) {
    if (*(int *)(*(int *)(param_1 + 0x124) + 0x13c) != 0) {
      if ((*(byte *)(param_1 + 0x1b9) & 2) == 0) {
        if ((*(byte *)(param_1 + 0x1bb) & 1) == 0) goto LAB_0024a0d8;
        *(byte *)(param_1 + 0x1bb) = *(byte *)(param_1 + 0x1bb) & 0xfe;
      }
      else {
        *(byte *)(param_1 + 0x1b9) = *(byte *)(param_1 + 0x1b9) & 0xfd;
      }
    }
    *(int *)(param_1 + 0x1a4) = iVar1;
  }
LAB_0024a0d8:
  FUN_0036b96c(param_1);
  (**(code **)(param_1 + 0x1a4))(param_1,param_2);
  FUN_00376340(DAT_0024a160,DAT_0024a15c,DAT_0024a158,param_2,param_1,5);
  if (*(int *)(param_1 + 0x1a4) == iVar1) {
    return;
  }
  FUN_0037632c(param_1,param_1 + 0x1a8);
  FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  return;
}
