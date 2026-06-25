// OoT3D decomp @ 0025342c  name=FUN_0025342c  size=124

int FUN_0025342c(short *param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  short sVar1;
  
  if ((param_1[1] == 0) || (sVar1 = param_1[1] + -1, param_1[1] = sVar1, sVar1 == 0)) {
    sVar1 = FUN_003702c8(param_2,param_3);
    param_1[1] = sVar1;
  }
  param_4 = param_1[1] - param_4;
  if (param_4 < 1) {
    if ((param_4 + 1 < 0 == SCARRY4(param_4,1)) || (param_1[1] < 2)) {
      sVar1 = 1;
    }
    else {
      sVar1 = 2;
    }
    *param_1 = sVar1;
  }
  else {
    *param_1 = 0;
  }
  return (int)*param_1;
}

