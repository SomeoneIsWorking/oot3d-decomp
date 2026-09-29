// OoT3D decomp @ 003f59b8  name=FUN_003f59b8  size=108

void FUN_003f59b8(int param_1)

{
  float fVar1;

  FUN_0036e168(DAT_003f5a30,DAT_003f5a2c,DAT_003f5a28,DAT_003f5a24,param_1 + 100);
  fVar1 = (float)FUN_0036e168(*(undefined4 *)(param_1 + 0xc),DAT_003f5a34,
                              *(undefined4 *)(param_1 + 100),DAT_003f5a34,param_1 + 0x2c);
  if ((int)ABS(fVar1) < DAT_003f5a38) {
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 0x1bc) = 0;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xffffffef;
  }
  return;
}
