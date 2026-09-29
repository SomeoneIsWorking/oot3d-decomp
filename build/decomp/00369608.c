// OoT3D decomp @ 00369608  name=FUN_00369608  size=52

undefined4 FUN_00369608(int param_1,int param_2)

{
  if (((*(uint *)(*(int *)(param_1 + 0x20ac) + 0x1710) & 0x10) != 0) &&
     (*(char *)(param_2 + 0x114) == '\0')) {
    return 1;
  }
  return 0;
}
