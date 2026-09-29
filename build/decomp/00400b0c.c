// OoT3D decomp @ 00400b0c  name=FUN_00400b0c  size=80

undefined4 FUN_00400b0c(undefined4 *param_1,short *param_2)

{
  if (*param_2 == 0x2f) {
    for (; param_2[1] == 0x2f; param_2 = param_2 + 1) {
    }
    *param_1 = param_2;
    param_1[1] = param_2;
    param_2 = param_2 + 1;
    param_1[2] = param_2;
    while (*param_2 == 0x2f) {
      param_2 = param_2 + 1;
      param_1[2] = param_2;
    }
    return 0;
  }
  return DAT_00400b5c;
}
