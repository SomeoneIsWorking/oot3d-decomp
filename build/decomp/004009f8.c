// OoT3D decomp @ 004009f8  name=FUN_004009f8  size=84

undefined4 * FUN_004009f8(undefined4 *param_1)

{
  *param_1 = DAT_00400a4c;
  if (*(char *)(param_1 + 2) != '\0') {
    if (param_1[1] != 0) {
      software_interrupt(0x23);
      param_1[1] = 0;
    }
    *(undefined1 *)(param_1 + 2) = 0;
  }
  if (param_1[1] != 0) {
    software_interrupt(0x23);
    param_1[1] = 0;
  }
  return param_1;
}
