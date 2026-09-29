// OoT3D decomp @ 004422a0  name=FUN_004422a0  size=60

undefined4 * FUN_004422a0(undefined4 *param_1,uint param_2)

{
  *param_1 = DAT_004422dc;
  if (param_1[1] != 0) {
    param_2 = (uint)*(byte *)(param_1 + 3);
  }
  if (param_1[1] != 0 && param_2 != 0) {
    FUN_0034fc68();
  }
  param_1[1] = 0;
  param_1[2] = 0;
  *(undefined1 *)(param_1 + 3) = 0;
  return param_1;
}
