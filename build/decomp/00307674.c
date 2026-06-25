// OoT3D decomp @ 00307674  name=FUN_00307674  size=48

int FUN_00307674(int param_1)

{
  if (*(int *)(param_1 + 0x48) != 0) {
    FUN_002d6e20(1,param_1 + 0x48);
    *(undefined4 *)(param_1 + 0x48) = 0;
  }
  return param_1;
}

