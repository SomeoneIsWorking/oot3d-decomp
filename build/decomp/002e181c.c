// OoT3D decomp @ 002e181c  name=FUN_002e181c  size=48

int FUN_002e181c(ushort *param_1,ushort *param_2)

{
  for (; (*param_1 != 0 && (*param_1 == *param_2)); param_1 = param_1 + 1) {
    param_2 = param_2 + 1;
  }
  return (uint)*param_1 - (uint)*param_2;
}
