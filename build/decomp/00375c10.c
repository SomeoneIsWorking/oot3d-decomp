// OoT3D decomp @ 00375c10  name=FUN_00375c10  size=52

void FUN_00375c10(int param_1,uint param_2)

{
  if ((int)param_2 < 0x20) {
    *(uint *)(param_1 + 0x2228) = *(uint *)(param_1 + 0x2228) | 1 << (param_2 & 0xff);
    return;
  }
  *(uint *)(param_1 + 0x222c) = *(uint *)(param_1 + 0x222c) | 1 << (param_2 - 0x20 & 0xff);
  return;
}
