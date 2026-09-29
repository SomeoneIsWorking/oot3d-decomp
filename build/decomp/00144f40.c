// OoT3D decomp @ 00144f40  name=FUN_00144f40  size=168

void FUN_00144f40(int param_1)

{
  short sVar1;

  sVar1 = *(short *)(param_1 + 0xc00);
  if ((sVar1 != 0) && (sVar1 = sVar1 + -1, *(short *)(param_1 + 0xc00) = sVar1, sVar1 == 0)) {
    FUN_00369c88(param_1,2);
  }
  if ((*(short *)(param_1 + 0xc0c) != 0) &&
     (sVar1 = *(short *)(param_1 + 0xc0c) + -1, *(short *)(param_1 + 0xc0c) = sVar1, sVar1 == 0)) {
    FUN_00369c88(param_1,2);
  }
  if (*(float *)(param_1 + 0x2c) < *(float *)(param_1 + 0x84) + *(float *)(param_1 + 0xc18)) {
    FUN_0036e168(DAT_00144ff8,DAT_00144ff4,DAT_00144ff0,DAT_00144fec,param_1 + 100);
    return;
  }
  *(undefined4 *)(param_1 + 0x978) = DAT_00144fe8;
  *(undefined2 *)(param_1 + 0xc08) = 0;
  return;
}
