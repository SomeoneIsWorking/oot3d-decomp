// OoT3D decomp @ 001002c4  name=FUN_001002c4  size=84

undefined1 FUN_001002c4(undefined4 param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_00377a04();
  if (iVar1 == 0) {
    return 3;
  }
  if (*(short *)(param_2 + 0x1dc) <= *(short *)(DAT_00100318 + 0x48)) {
    iVar1 = FUN_00377a50(0x17);
    return iVar1 != 0xff;
  }
  return 4;
}

