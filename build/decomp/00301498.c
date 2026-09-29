// OoT3D decomp @ 00301498  name=FUN_00301498  size=196

/* WARNING: Type propagation algorithm not settling */

undefined4 FUN_00301498(int *param_1,short *param_2)

{
  short sVar1;
  int local_20 [5];

  local_20[2] = 0xffffffff;
  local_20[3] = 0xffffffff;
  local_20[1] = 0xffffffff;
  FUN_002fa45c(*(undefined4 *)(*param_1 + 4),param_2,1,local_20,local_20 + 2,local_20 + 1);
  if (0 < local_20[0]) {
    sVar1 = FUN_002fa414((int)*param_2,(int)(short)param_1[2],(int)(short)param_1[1],
                         (int)*(short *)((int)param_1 + 6));
    *param_2 = sVar1;
    *(short *)(param_1 + 2) = sVar1;
    sVar1 = FUN_002fa414((int)param_2[1],(int)*(short *)((int)param_1 + 10),(int)(short)param_1[1],
                         (int)*(short *)((int)param_1 + 6));
    param_2[1] = sVar1;
    *(short *)((int)param_1 + 10) = sVar1;
    sVar1 = FUN_002fa414((int)param_2[2],(int)(short)param_1[3],(int)(short)param_1[1],
                         (int)*(short *)((int)param_1 + 6));
    param_2[2] = sVar1;
    *(short *)(param_1 + 3) = sVar1;
    FUN_00436f3c(param_1,param_2);
    return 1;
  }
  return 0;
}
