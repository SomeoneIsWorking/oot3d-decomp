// OoT3D decomp @ 003741e4  name=FUN_003741e4  size=72

void FUN_003741e4(undefined4 param_1,uint param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  if (param_5 == 0) {
    param_5 = 300;
  }
  if ((param_2 & 5) != 0) {
    FUN_003620b8(param_1,param_4,0,param_3);
    return;
  }
  FUN_0034de2c(param_1,0,param_3,param_5,param_4);
  return;
}
