// OoT3D decomp @ 0015ed68  name=FUN_0015ed68  size=48

void FUN_0015ed68(int param_1)

{
  short sVar1;

  sVar1 = *(short *)(param_1 + 0x282) + 1;
  *(short *)(param_1 + 0x282) = sVar1;
  if (2 < sVar1) {
    FUN_001eb298();
    *(undefined2 *)(param_1 + 0x280) = 300;
  }
  return;
}
