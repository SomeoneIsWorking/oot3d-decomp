// OoT3D decomp @ 0011419c  name=FUN_0011419c  size=84

undefined1 FUN_0011419c(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_00377a04();
  if (iVar1 == 0) {
    return 3;
  }
  if (*(short *)(param_2 + 0x1dc) <= *(short *)(DAT_001141f0 + 0x48)) {
    iVar1 = FUN_00377a50(0x1d);
    return iVar1 != 0xff;
  }
  return 4;
}
