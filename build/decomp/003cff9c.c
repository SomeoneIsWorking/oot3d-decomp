// OoT3D decomp @ 003cff9c  name=FUN_003cff9c  size=84

undefined1 FUN_003cff9c(undefined4 param_1,int param_2)

{
  int iVar1;

  iVar1 = FUN_00377a04();
  if (iVar1 == 0) {
    return 3;
  }
  if (*(short *)(param_2 + 0x1dc) <= *(short *)(iRam003cfff0 + 0x48)) {
    iVar1 = FUN_00377a50(0x18);
    return iVar1 != 0xff;
  }
  return 4;
}
