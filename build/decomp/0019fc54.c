// OoT3D decomp @ 0019fc54  name=FUN_0019fc54  size=60

void FUN_0019fc54(int param_1)

{
  if (*(short *)(param_1 + 0x1c4) != 0) {
    *(short *)(param_1 + 0x1c4) = *(short *)(param_1 + 0x1c4) + -1;
  }
  FUN_0036d940(param_1,(int)*(short *)(param_1 + 0x1c4));
  if (*(short *)(param_1 + 0x1c4) == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0019fc90;
  }
  return;
}
