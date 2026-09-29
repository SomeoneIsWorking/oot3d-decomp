// OoT3D decomp @ 004044a8  name=FUN_004044a8  size=72

int * FUN_004044a8(int *param_1)

{
  if (*(char *)((int)param_1 + 0x15) != '\0') {
    FUN_0030c824(param_1);
  }
  if ((char)param_1[1] == '\0') {
    FUN_003123c0();
  }
  if (*param_1 != 0) {
    software_interrupt(0x23);
    *param_1 = 0;
  }
  return param_1;
}
