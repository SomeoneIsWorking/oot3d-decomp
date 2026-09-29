// OoT3D decomp @ 0030250c  name=FUN_0030250c  size=64

int FUN_0030250c(ushort *param_1,ushort *param_2,int param_3)

{
  while( true ) {
    if (param_3 == 0) {
      return 0;
    }
    if ((*param_1 == 0) || (*param_1 != *param_2)) break;
    param_3 = param_3 + -1;
    param_1 = param_1 + 1;
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}
