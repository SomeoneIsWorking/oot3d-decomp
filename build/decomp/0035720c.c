// OoT3D decomp @ 0035720c  name=FUN_0035720c  size=136

void FUN_0035720c(int param_1)

{
  int *piVar1;
  
  func_0x00350f34(param_1,param_1 + 0x21c,param_1 + 0x220,0);
  piVar1 = (int *)(param_1 + 0x224);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      *(int *)(iRam00357294 + 0xc) = *(int *)(iRam00357294 + 0xc) + -1;
      if ((int *)*piVar1 != (int *)0x0) {
        (**(code **)(*(int *)*piVar1 + 4))();
      }
      *piVar1 = 0;
    }
    return;
  }
  return;
}

