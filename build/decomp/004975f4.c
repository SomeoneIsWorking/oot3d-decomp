// OoT3D decomp @ 004975f4  name=FUN_004975f4  size=112

int FUN_004975f4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = 0;
  iVar3 = 0;
  do {
    iVar4 = (char)iVar3 + param_1;
    if (*(char *)(iVar4 + 4) == '\0') {
      iVar4 = 0;
    }
    else {
      iVar4 = (int)*(char *)(iVar4 + 8);
    }
    iVar2 = (int)(char)iVar3 + param_1 + 2;
    iVar3 = iVar3 + 1;
    if (*(char *)(iVar2 + 4) == '\0') {
      iVar2 = 0;
    }
    else {
      iVar2 = (int)*(char *)(iVar2 + 8);
    }
    iVar1 = iVar1 + iVar4 * DAT_00497664 * 0x10 + iVar2 * DAT_00497664 * 0x40;
  } while (iVar3 < 2);
  return iVar1;
}
