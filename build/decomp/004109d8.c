// OoT3D decomp @ 004109d8  name=FUN_004109d8  size=148

void FUN_004109d8(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  bool bVar5;

  iVar4 = param_1 + -0x48;
  bVar5 = *(char *)(param_1 + -0x40) != '\0';
  cVar1 = '\0';
  if (bVar5) {
    cVar1 = *(char *)(param_1 + -0x3f);
  }
  if (!bVar5 || cVar1 == '\0') {
    return;
  }
  if ((*(int *)(param_1 + 0x1c) != 0) || (DAT_00410a6c < *(float *)(param_1 + 0x20))) {
    FUN_00407884(iVar4);
  }
  else if (*(char *)(param_1 + -0x3e) == '\0') {
    FUN_00407518(iVar4);
  }
  iVar3 = 0;
  do {
    iVar2 = *(int *)(iVar4 + iVar3 * 4 + 0x84);
    while( true ) {
      if (iVar2 != 0) {
        FUN_0030a0e8();
      }
      iVar3 = iVar3 + 1;
      if (0xf < iVar3) {
        return;
      }
      if (iVar3 < 0x10) break;
      iVar2 = 0;
    }
  } while( true );
}
