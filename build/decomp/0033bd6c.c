// OoT3D decomp @ 0033bd6c  name=FUN_0033bd6c  size=44

undefined4 FUN_0033bd6c(uint param_1)

{
  bool bVar1;
  
  bVar1 = (*(uint *)(DAT_0033bd98 + param_1) & 8) != 0;
  if (bVar1) {
    param_1 = (uint)*(ushort *)(param_1 + 0x2218);
  }
  if (!bVar1 || param_1 == 0) {
    return 0;
  }
  return 1;
}

