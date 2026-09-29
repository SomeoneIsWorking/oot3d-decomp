// OoT3D decomp @ 0030d634  name=FUN_0030d634  size=104

int * FUN_0030d634(int *param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;

  piVar1 = param_1;
  if (param_3 == 0) {
    param_1[1] = 0;
  }
  else if ((param_3 != 1) && (param_3 == 2)) {
    piVar1 = (int *)*param_1;
    param_1[1] = (int)piVar1;
  }
  if (param_2 != 0) {
    piVar1 = (int *)param_1[1];
    piVar3 = (int *)*param_1;
    piVar2 = (int *)((int)piVar1 + param_2);
    if (piVar2 <= piVar3) {
      piVar1 = piVar2;
      piVar3 = piVar2;
    }
    param_1[1] = (int)piVar3;
  }
  return piVar1;
}
