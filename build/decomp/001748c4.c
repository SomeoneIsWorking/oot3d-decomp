// OoT3D decomp @ 001748c4  name=FUN_001748c4  size=48

void FUN_001748c4(int param_1)

{
  short sVar1;

  if (*(short *)(param_1 + 0x6a6) != 0) {
    sVar1 = *(short *)(param_1 + 0x6a6) + -1;
    *(short *)(param_1 + 0x6a6) = sVar1;
    if (sVar1 != 0) {
      return;
    }
  }
  FUN_00364538();
  return;
}
