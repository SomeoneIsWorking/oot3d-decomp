// OoT3D decomp @ 0019fc94  name=FUN_0019fc94  size=72

void FUN_0019fc94(int param_1)

{
  if (*(short *)(param_1 + 0x1c2) != 0) {
    *(short *)(param_1 + 0x1c2) = *(short *)(param_1 + 0x1c2) + -1;
  }
  FUN_0036d940(param_1,(int)*(short *)(param_1 + 0x1c2));
  if (*(short *)(param_1 + 0x1c2) == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0019fcdc;
    *(undefined4 *)(param_1 + 0x230) = 0;
  }
  return;
}
