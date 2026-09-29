// OoT3D decomp @ 0021a930  name=FUN_0021a930  size=64

undefined4 FUN_0021a930(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  if ((*(uint *)(param_4 + 0x8d0) & 1) != 0) {
    if (param_2 == 7) {
      param_4 = param_4 + 0x8ca;
    }
    else {
      if (param_2 != 0xe) {
        return 0;
      }
      param_4 = param_4 + 0x8c4;
    }
    FUN_0034e01c(param_3,param_4);
  }
  return 0;
}
