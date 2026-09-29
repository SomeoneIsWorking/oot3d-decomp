// OoT3D decomp @ 00334914  name=FUN_00334914  size=60

void FUN_00334914(int param_1,uint param_2)

{
  if (param_2 != 0) {
    if (0x1f < (int)param_2) {
      *(uint *)(param_1 + 0x2248) = *(uint *)(param_1 + 0x2248) & ~(1 << (param_2 - 0x20 & 0xff));
      return;
    }
    *(uint *)(param_1 + 0x2244) = *(uint *)(param_1 + 0x2244) & ~(1 << (param_2 & 0xff));
  }
  return;
}
