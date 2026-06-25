// OoT3D decomp @ 00362384  name=FUN_00362384  size=160

int FUN_00362384(int param_1)

{
  int iVar1;
  
  if (param_1 != 0x3b) {
    if (param_1 < 0x18) {
      iVar1 = DAT_00362424 + param_1 * DAT_00362428 * 4;
      if (*(char *)(iVar1 + 4) == '\x01') {
        return iVar1 + 8;
      }
    }
    else if (param_1 + -0x18 < 0x19) {
      iVar1 = DAT_00362424 + (param_1 + -0x18) * 0x28c;
      if (*(char *)(DAT_0036242c + iVar1) == '\x01') {
        return iVar1 + 0x7fe8;
      }
    }
    else if ((param_1 + -0x31 < 10) &&
            (iVar1 = DAT_00362424 + (param_1 + -0x31) * 0x1e0,
            *(char *)(DAT_00362430 + iVar1) == '\x01')) {
      return iVar1 + 0xbf94;
    }
  }
  return 0;
}

