// OoT3D decomp @ 00418b10  name=FUN_00418b10  size=100

void FUN_00418b10(int param_1)

{
  int iVar1;
  
  if (param_1 == 0x400) {
    if (((*puRam00418b74 & 1) == 0) && (iVar1 = FUN_003679b4(puRam00418b74), iVar1 != 0)) {
      FUN_0031ff30(iRam00418b78);
    }
    if (*(char *)(iRam00418b84 + iRam00418b78) < 'x') {
      *(char *)(iRam00418b78 + 0x489) = *(char *)(iRam00418b84 + iRam00418b78) + '\x01';
    }
    return;
  }
  return;
}

