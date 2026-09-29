// OoT3D decomp @ 003329d8  name=FUN_003329d8  size=60

void FUN_003329d8(int param_1,uint param_2)

{
  if (param_2 != 0) {
    if (0x1f < (int)param_2) {
      *(uint *)(param_1 + 0x2248) = *(uint *)(param_1 + 0x2248) | 1 << (param_2 - 0x20 & 0xff);
      return;
    }
    *(uint *)(param_1 + 0x2244) = *(uint *)(param_1 + 0x2244) | 1 << (param_2 & 0xff);
  }
  return;
}
