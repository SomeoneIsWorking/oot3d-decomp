// OoT3D decomp @ 00400aa0  name=FUN_00400aa0  size=52

int * FUN_00400aa0(int *param_1)

{
  if ((char)param_1[1] == '\0') {
    FUN_003123c0();
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}
