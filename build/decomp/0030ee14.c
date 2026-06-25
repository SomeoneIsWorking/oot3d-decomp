// OoT3D decomp @ 0030ee14  name=FUN_0030ee14  size=144

int ** FUN_0030ee14(int **param_1,int **param_2)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *unaff_r6;
  
  *param_1 = (int *)0x0;
  piVar1 = DAT_0030eea4;
  if (param_2 != (int **)0x0) {
    unaff_r6 = *param_2;
  }
  if (param_2 != (int **)0x0 && unaff_r6 != (int *)0x0) {
    piVar2 = (int *)(**(code **)*unaff_r6)(unaff_r6);
    do {
      if (piVar2 == piVar1) goto LAB_0030ee64;
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)0x0);
    unaff_r6 = (int *)0x0;
LAB_0030ee64:
    if (unaff_r6 != (int *)0x0) {
      *param_1 = unaff_r6;
      iVar3 = (**(code **)(*unaff_r6 + 0x18))();
      if (iVar3 != 0) {
        (**(code **)(**param_1 + 0x1c))();
      }
      (*param_1)[0x7b] = (int)param_1;
    }
  }
  return param_1;
}

