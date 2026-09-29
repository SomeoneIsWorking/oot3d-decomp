// OoT3D decomp @ 001c5f20  name=FUN_001c5f20  size=112

void FUN_001c5f20(int param_1)

{
  FUN_003731e0(param_1 + 0x1a4);
  FUN_00370378(param_1 + 0xbc,DAT_001c5f94,(int)*(short *)(DAT_001c5f90 + param_1));
  FUN_003705a0(DAT_001c5f9c,DAT_001c5f98,param_1 + 0x2c);
  if (*(int *)(*(int *)(DAT_001c5fa0 + 0x30) + 0x22c) == DAT_001c5fa4) {
    FUN_00374a58(DAT_001c5fac,param_1 + 0x1a4,
                 *(undefined4 *)(DAT_001c5fa8 + *(short *)(param_1 + 0x1c) * 4));
    *(undefined4 *)(param_1 + 0x22c) = DAT_001c5fb0;
  }
  return;
}
