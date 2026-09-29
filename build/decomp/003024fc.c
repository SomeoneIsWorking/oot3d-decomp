// OoT3D decomp @ 003024fc  name=thunk_FUN_0030250c  size=4

int thunk_FUN_0030250c(ushort *param_1,ushort *param_2,int param_3)

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
