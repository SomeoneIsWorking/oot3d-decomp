// OoT3D decomp @ 00417f7c  name=FUN_00417f7c  size=96

undefined4 FUN_00417f7c(int *param_1,int param_2)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;

  piVar1 = DAT_00417fdc;
  param_1[3] = param_2;
  piVar2 = param_1;
  if (param_1 != (int *)0x0) {
    piVar2 = param_1 + 1;
  }
  piVar3 = (int *)*piVar1;
  if (piVar3 == (int *)0x0) {
    if (param_1 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      piVar2 = param_1 + 1;
    }
    param_1[2] = (int)piVar2;
    param_1[1] = (int)piVar2;
    if (param_1 == (int *)0x0) {
      param_1 = (int *)0x0;
    }
    else {
      param_1 = param_1 + 1;
    }
    *piVar1 = (int)param_1;
  }
  else {
    piVar2[1] = (int)piVar3;
    *(int **)(*piVar3 + 4) = piVar2;
    *piVar2 = *piVar3;
    *piVar3 = (int)piVar2;
  }
  return 0;
}
