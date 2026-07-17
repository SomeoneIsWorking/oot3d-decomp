// OoT3D decomp @ 0036c5bc  name=FUN_0036c5bc  size=24

undefined4 FUN_0036c5bc(int param_1,int param_2)

{
  if (param_2 == -1) {
    param_2 = (int)*(short *)(iRam0036c5d4 + param_1);
  }
  return *(undefined4 *)(param_1 + param_2 * 4 + 0xa54);
}

