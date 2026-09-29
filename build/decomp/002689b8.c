// OoT3D decomp @ 002689b8  name=FUN_002689b8  size=100

void FUN_002689b8(int param_1,undefined4 param_2)

{
  *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x51b;
  (**(code **)(param_1 + 0x1a4))(param_1);
  if (*(short *)(param_1 + 0x1ae) != 0) {
    *(short *)(param_1 + 0x1ae) = *(short *)(param_1 + 0x1ae) + -1;
  }
  FUN_00376864(param_1);
  FUN_00376340(DAT_00268a20,DAT_00268a20,DAT_00268a1c,param_2,param_1,0x1c);
  return;
}
