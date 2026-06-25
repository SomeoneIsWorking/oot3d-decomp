// OoT3D decomp @ 002dd484  name=FUN_002dd484  size=60

uint FUN_002dd484(int *param_1,int *param_2,undefined4 param_3,undefined4 param_4)

{
  uint uVar1;
  
  uVar1 = (**(code **)(*param_1 + 8))(param_1,param_2,param_3,0,param_4);
  if ((uVar1 & 0xff) == 0) {
    if (*param_2 != 0) {
      FUN_002d3d38();
    }
    uVar1 = 0;
  }
  return uVar1;
}

