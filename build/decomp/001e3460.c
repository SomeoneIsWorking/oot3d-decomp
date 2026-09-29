// OoT3D decomp @ 001e3460  name=FUN_001e3460  size=88

void FUN_001e3460(int param_1)

{
  FUN_00375a18(param_1 + 0x36,(int)*(short *)(param_1 + 0x92),2,0x400,0x100);
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0x36);
  if (*(short *)(param_1 + 0x36) == *(short *)(param_1 + 0x92)) {
    FUN_00369674(param_1,5);
    *(undefined4 *)(param_1 + 0x6c) = DAT_001e34b8;
    *(undefined1 *)(param_1 + 0x989) = 0x4b;
  }
  return;
}
