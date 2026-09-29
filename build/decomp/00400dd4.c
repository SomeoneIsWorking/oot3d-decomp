// OoT3D decomp @ 00400dd4  name=FUN_00400dd4  size=160

int * FUN_00400dd4(int *param_1)

{
  FUN_0030e324(param_1 + 0xb);
  if (param_1[0x10] != 0) {
    software_interrupt(0x23);
    param_1[0x10] = 0;
  }
  if (param_1[9] != 0) {
    software_interrupt(0x23);
    param_1[9] = 0;
  }
  if (param_1[7] != 0) {
    software_interrupt(0x23);
    param_1[7] = 0;
  }
  if (param_1[4] != 0) {
    software_interrupt(0x23);
    param_1[4] = 0;
  }
  if (param_1[2] != 0) {
    software_interrupt(0x23);
    param_1[2] = 0;
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}
