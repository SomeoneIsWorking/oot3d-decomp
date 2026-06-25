// OoT3D decomp @ 002df4b0  name=FUN_002df4b0  size=20

int FUN_002df4b0(int param_1,int param_2)

{
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = *(int *)(param_1 + 4) + param_2;
  }
  return param_2;
}

