// OoT3D decomp @ 0034f0f4  name=FUN_0034f0f4  size=136

void FUN_0034f0f4(undefined4 param_1,int param_2)

{
  int iVar1;

  if (param_2 != 0x3b) {
    if (param_2 < 0x18) {
      iVar1 = DAT_0034f17c + param_2 * DAT_0034f180 * 4;
      if (*(char *)(iVar1 + 4) == '\x01') {
        *(undefined1 *)(iVar1 + 4) = 2;
      }
    }
    else {
      if (param_2 + -0x18 < 0x19) {
        iVar1 = DAT_0034f17c + (param_2 + -0x18) * 0x28c;
        if (*(char *)(iVar1 + 0x7fe4) == '\x01') {
          *(undefined1 *)(iVar1 + 0x7fe4) = 2;
        }
        return;
      }
      if (param_2 + -0x31 < 10) {
        iVar1 = DAT_0034f17c + (param_2 + -0x31) * 0x1e0;
        if (*(char *)(iVar1 + 0xbf90) == '\x01') {
          *(undefined1 *)(iVar1 + 0xbf90) = 2;
        }
        return;
      }
    }
  }
  return;
}
