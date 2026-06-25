// OoT3D decomp @ 002d5ac4  name=FUN_002d5ac4  size=100

int ** FUN_002d5ac4(int **param_1)

{
  undefined4 uVar1;
  
  if (param_1[2] != (int *)0x0) {
    uVar1 = FUN_003685a0();
    (**(code **)(**DAT_002d5b28 + 0x10))(*DAT_002d5b28,uVar1);
    param_1[2] = (int *)0x0;
  }
  if (*param_1 != (int *)0x0) {
    (**(code **)(**param_1 + 4))();
    *param_1 = (int *)0x0;
  }
  param_1[1] = (int *)0x0;
  return param_1;
}

