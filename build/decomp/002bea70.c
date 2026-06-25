// OoT3D decomp @ 002bea70  name=FUN_002bea70  size=140

int ** FUN_002bea70(int **param_1)

{
  int iVar1;
  int **ppiVar2;
  
  iVar1 = *param_1[2] + -1;
  *param_1[2] = iVar1;
  if (iVar1 == 0) {
    ppiVar2 = (int **)param_1[1];
    if (ppiVar2 != (int **)0x0) {
      if (0 < (int)ppiVar2[2] - (int)ppiVar2[1]) {
        for (iVar1 = (int)ppiVar2[2] - (int)ppiVar2[1] >> 1; iVar1 != 0; iVar1 = iVar1 + -1) {
        }
      }
      (**(code **)(**ppiVar2 + 4))();
      (**(code **)(**param_1 + 4))(*param_1,param_1[1]);
    }
    (**(code **)(**param_1 + 4))(*param_1,param_1[2]);
  }
  return param_1;
}

