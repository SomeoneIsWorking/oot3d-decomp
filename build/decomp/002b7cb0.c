// OoT3D decomp @ 002b7cb0  name=FUN_002b7cb0  size=64

int * FUN_002b7cb0(int *param_1,int param_2)

{
  if (*param_1 == 0) {
    return param_1;
  }
  if (*(char *)(DAT_002b7cf0 + param_2) == '\0') {
    return (int *)0x0;
  }
  if (param_1[param_2 + 1] == 0) {
    FUN_004a3638();
  }
  return (int *)param_1[param_2 + 1];
}

