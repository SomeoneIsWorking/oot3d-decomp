// OoT3D decomp @ 003761f0  name=FUN_003761f0  size=132

int FUN_003761f0(undefined4 param_1,short *param_2,int *param_3)

{
  int iVar1;
  
  iVar1 = FUN_00366738();
  if (iVar1 != 1) {
    (**(code **)(DAT_00376274 + (uint)*(byte *)((int)param_3 + 0x15) * 4))(param_1,param_3);
    if ((((*param_3 == 0) || (*(int *)(*param_3 + 0x13c) != 0)) &&
        (iVar1 = (int)*param_2, iVar1 < 0x32)) && ((param_2[1] & 1U) == 0)) {
      *(int **)(param_2 + iVar1 * 2 + 2) = param_3;
      *param_2 = *param_2 + 1;
      return iVar1;
    }
  }
  return -1;
}

