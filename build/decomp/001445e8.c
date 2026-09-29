// OoT3D decomp @ 001445e8  name=FUN_001445e8  size=44

void FUN_001445e8(int param_1)

{
  short sVar1;

  *(undefined4 *)(param_1 + 0x1bc) = DAT_00144614;
  *(undefined2 *)(param_1 + 0x1c0) = 0;
  sVar1 = *(short *)(param_1 + 0x16) + *(short *)(param_1 + 0x1c4) * 0x2000;
  *(short *)(param_1 + 0x36) = sVar1;
  *(short *)(param_1 + 0xbe) = sVar1;
  return;
}
