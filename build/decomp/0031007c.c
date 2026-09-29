// OoT3D decomp @ 0031007c  name=FUN_0031007c  size=72

void FUN_0031007c(int *param_1)

{
  bool bVar1;

  if (*param_1 == 1) {
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = -2;
  }
  else if (*param_1 == 0) {
    do {
      bVar1 = (bool)hasExclusiveAccess(param_1);
    } while (!bVar1);
    *param_1 = -1;
    return;
  }
  return;
}
