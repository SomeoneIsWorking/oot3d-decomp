// OoT3D decomp @ 003078bc  name=FUN_003078bc  size=144

void FUN_003078bc(int *param_1)

{
  char cVar1;
  int iVar2;

  iVar2 = *param_1;
  while (0 < iVar2) {
    iVar2 = 0;
    do {
      cVar1 = *(char *)((int)param_1 + iVar2 * 0xc + 9);
      if (-1 < cVar1) {
        if (cVar1 == '\0') {
          if ((char)param_1[iVar2 * 3 + 2] == '\0') {
            FUN_003525d4(param_1[iVar2 * 3 + 1]);
          }
          else if ((char)param_1[iVar2 * 3 + 2] == '\x01') {
            FUN_0034fc6c(param_1[iVar2 * 3 + 1]);
          }
          *(undefined1 *)((int)param_1 + iVar2 * 0xc + 9) = 0xff;
          param_1[iVar2 * 3 + 1] = 0;
        }
        else {
          *(char *)((int)param_1 + iVar2 * 0xc + 9) = cVar1 + -1;
        }
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < 0x100);
    iVar2 = *param_1;
  }
  return;
}
