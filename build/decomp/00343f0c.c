// OoT3D decomp @ 00343f0c  name=FUN_00343f0c  size=52

undefined4 FUN_00343f0c(uint param_1,int param_2)

{
  bool bVar1;
  
  bVar1 = *(char *)(DAT_00343f40 + param_1) == '\0';
  if (bVar1) {
    param_1 = (uint)*(ushort *)(param_1 + 0x225e);
  }
  if (bVar1 && param_1 == 0) {
    return 1;
  }
  *(undefined *)(param_2 + 0x10) = 0;
  *(undefined *)(param_2 + 0x11) = 0;
  return 0;
}

