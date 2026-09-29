// OoT3D decomp @ 0026e1a0  name=FUN_0026e1a0  size=64

void FUN_0026e1a0(int param_1)

{
  short sVar1;

  FUN_0036b96c();
  sVar1 = *(short *)(param_1 + 0x4aa) + -0x14;
  *(short *)(param_1 + 0x4aa) = sVar1;
  if (sVar1 < 0x14) {
    *(undefined2 *)(param_1 + 0x4aa) = 0;
    FUN_00374428(param_1);
    return;
  }
  return;
}
