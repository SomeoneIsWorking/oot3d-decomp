// OoT3D decomp @ 00427a18  name=FUN_00427a18  size=144

void FUN_00427a18(int param_1,int param_2)

{
  int iVar1;

  if (*(char *)(param_2 + 0x100) == '\x03') {
    if (*(char *)(param_2 + 0x101) != '\x02' && *(char *)(param_2 + 0x101) != '\0') {
      return;
    }
    FUN_00441638(param_2 + 0x601c);
  }
  if ((*(char *)(param_1 + 10) != '\0') && (*(char *)(param_1 + 0xb) == '\0')) {
    if (*(int *)(param_1 + 0x2e4) != 0) {
      iVar1 = 0;
      do {
        if (*(int *)(param_1 + iVar1 * 4 + 0x6f8) != 0) {
          FUN_002f1280();
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < 0x100);
    }
    return;
  }
  return;
}
