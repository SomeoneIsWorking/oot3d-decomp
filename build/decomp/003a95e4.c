// OoT3D decomp @ 003a95e4  name=FUN_003a95e4  size=100

void FUN_003a95e4(undefined4 param_1,int param_2)

{
  FUN_00358dfc(DAT_003a9648,param_2 + 0x254,param_1,DAT_003a964c);
  FUN_003603f8(param_1,param_2,0x9d);
  if (*(char *)(param_2 + 2) == '\x02') {
    FUN_0036f59c(param_2,DAT_003a9650 + (uint)*(ushort *)(*(int *)(DAT_003a9654 + param_2) + 0xf4));
    return;
  }
  FUN_0037547c(DAT_003a9650,param_2 + 0x28,4,DAT_0036aee8 + 0x60);
  return;
}
