// OoT3D decomp @ 003aab80  name=FUN_003aab80  size=88

void FUN_003aab80(int param_1)

{
  short sVar1;

  if (*(short *)(param_1 + 0x61a) == 0) {
    if (((int)*(short *)(param_1 + 0x1c) & 0x8000U) == 0) {
      if (((int)*(short *)(param_1 + 0x1c) & 0x4000U) != 0) {
        *(undefined2 *)(param_1 + 0x1c) = 0;
        *(undefined2 *)(param_1 + 0x61a) = 0x2d;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0x22c) = DAT_003aabd8;
    }
  }
  else {
    sVar1 = *(short *)(param_1 + 0x61a) + -1;
    *(short *)(param_1 + 0x61a) = sVar1;
    if (sVar1 == 0) {
      FUN_00374428();
      return;
    }
  }
  return;
}
