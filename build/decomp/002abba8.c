// OoT3D decomp @ 002abba8  name=FUN_002abba8  size=124

void FUN_002abba8(int param_1,int param_2)

{
  int iVar1;

  (**(code **)(param_1 + 0x1bc))();
  iVar1 = FUN_0036adf4(param_1);
  if (iVar1 == 0) {
    iVar1 = FUN_0036adf4(param_1);
    if (iVar1 == 0) {
      if (*(short *)(param_1 + 0x1c2) != 0) {
        FUN_0033885c(*(undefined4 *)(param_2 + 0xa54),3);
      }
      *(undefined2 *)(param_1 + 0x1c2) = 0;
    }
    return;
  }
  if (*(short *)(param_1 + 0x1c2) == 0) {
    *(undefined2 *)(param_1 + 0x1c2) = 3;
  }
  FUN_0033885c(*(undefined4 *)(param_2 + 0xa54),0x30);
  return;
}
