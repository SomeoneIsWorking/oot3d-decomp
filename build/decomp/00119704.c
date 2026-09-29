// OoT3D decomp @ 00119704  name=FUN_00119704  size=96

void FUN_00119704(int param_1)

{
  FUN_003731e0(param_1 + 0x1a4);
  if ((DAT_00119764[*(short *)(*DAT_00119764 + 0x1c) + -0x14] == 0) &&
     (DAT_00119764[*(short *)(DAT_00119764[1] + 0x1c) + -0x14] == 0)) {
    *(undefined2 *)(param_1 + 0x234) = 0xc5;
    *(undefined1 *)(param_1 + 0x231) = 0;
    *(undefined4 *)(param_1 + 0x22c) = DAT_00119768;
  }
  return;
}
