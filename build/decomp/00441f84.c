// OoT3D decomp @ 00441f84  name=FUN_00441f84  size=68

undefined4 * FUN_00441f84(undefined4 *param_1)

{
  *param_1 = DAT_00441fc8;
  FUN_00306994();
  if (*(char *)(param_1 + 1) != '\0') {
    FUN_002e69d0();
    param_1[2] = 0xffffffff;
    param_1[3] = 0xffffffff;
    *(undefined1 *)(param_1 + 1) = 0;
    param_1[4] = 0;
  }
  return param_1;
}
