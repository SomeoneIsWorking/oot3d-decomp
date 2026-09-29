// OoT3D decomp @ 00408190  name=FUN_00408190  size=52

int FUN_00408190(int param_1,int param_2,uint *param_3)

{
  char *pcVar1;

  pcVar1 = (char *)(param_1 + param_2);
  if (*pcVar1 == -2) {
    param_2 = param_2 + 3;
    *param_3 = (uint)CONCAT11(pcVar1[1],pcVar1[2]);
  }
  else {
    *param_3 = 1;
  }
  return param_2;
}
