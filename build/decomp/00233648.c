// OoT3D decomp @ 00233648  name=FUN_00233648  size=52

undefined4 FUN_00233648(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  if (param_2 == 8) {
    param_4 = param_4 + 0x458;
  }
  else {
    if (param_2 != 7) {
      return 0;
    }
    param_4 = param_4 + 0x45e;
  }
  FUN_0034e01c(param_3,param_4);
  return 0;
}

