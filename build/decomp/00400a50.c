// OoT3D decomp @ 00400a50  name=FUN_00400a50  size=40

int * FUN_00400a50(int *param_1)

{
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}
