// OoT3D decomp @ 00365560  name=FUN_00365560  size=112

void FUN_00365560(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined4 uVar1;

  if (param_5 == 0) {
    param_5 = 300;
  }
  if ((param_2 & 5) != 0) {
    uVar1 = param_4;
    FUN_003620b8(param_1,param_4,0,param_3);
    FUN_0031dc3c(param_1,0xffffffff,param_4);
    FUN_0031dc3c(param_1,0xffffffff,param_4,uVar1);
    return;
  }
  FUN_0034de2c(param_1,0xffffffff,param_3,param_5,param_4);
  return;
}
