// OoT3D decomp @ 004a3074  name=FUN_004a3074  size=40

undefined4 FUN_004a3074(int param_1,int param_2,undefined2 param_3)

{
  if (param_2 == -1) {
    param_2 = (int)*(short *)(DAT_004a309c + param_1);
  }
  *(undefined2 *)(*(int *)(param_1 + param_2 * 4 + 0xa54) + 0x1a2) = param_3;
  return 1;
}

