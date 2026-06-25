// OoT3D decomp @ 004c4d30  name=FUN_004c4d30  size=88

undefined4 FUN_004c4d30(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_0033bd6c();
  if (((iVar1 != 0) && (*(char *)(DAT_004c4d88 + param_2) == '\0')) &&
     (((*(uint *)(param_1 + 0x1710) & DAT_004c4d8c) != 0 || (*(char *)(param_1 + 0x1749) == '\x02'))
     )) {
    return 1;
  }
  return 0;
}

