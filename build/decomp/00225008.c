// OoT3D decomp @ 00225008  name=FUN_00225008  size=228

void FUN_00225008(int param_1)

{
  int iVar1;

  if (*(int *)(param_1 + 0x1b78) != 0) {
    switch(*(undefined2 *)(param_1 + 0x1c)) {
    case 0:
    case 1:
      iVar1 = 0;
      do {
        FUN_00350f34(param_1,param_1 + iVar1 * 4 + 0x1920,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x96);
      return;
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 0xe:
      FUN_00350f34(param_1,param_1 + 0x1920,0);
      return;
    case 7:
      iVar1 = 0;
      do {
        FUN_00350f34(param_1,param_1 + iVar1 * 4 + 0x1920,0);
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x1e);
      return;
    case 0xd:
      FUN_00350f34(param_1,param_1 + 0x1920,param_1 + 0x1924,0);
      return;
    case 0xf:
    case 0x10:
    case 0x11:
    case 0x12:
      if (*(int *)(param_1 + 0x191c) != 0) {
        FUN_0034fc7c();
        FUN_0034fc6c(*(undefined4 *)(param_1 + 0x191c));
      }
      *(undefined4 *)(param_1 + 0x191c) = 0;
      return;
    }
  }
  return;
}
