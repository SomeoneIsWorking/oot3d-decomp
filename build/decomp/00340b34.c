// OoT3D decomp @ 00340b34  name=FUN_00340b34  size=140

undefined4 FUN_00340b34(int param_1,int param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(DAT_00340bc0 + param_2 * 4 + 4);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0xc35) == '\0')) {
    if (*(char *)(DAT_00340bc4 + 0xe) == '\0') {
      iVar2 = DAT_00340bd4;
      if (*(char *)(iVar3 + 0xc3a) == '\x03') {
        iVar2 = DAT_00340bd8;
      }
    }
    else {
      iVar2 = DAT_00340bc8;
      if (*(char *)(iVar3 + 0xc3a) == '\x03') {
        iVar2 = DAT_00340bcc;
      }
    }
    cVar1 = *(char *)(iVar2 + param_2);
    if (*(char *)(param_1 + 0xc3e) == '\x06') {
      *(undefined1 *)(iVar3 + 0xc3f) = 1;
    }
    *(undefined1 *)(iVar3 + 0xc35) = 1;
    FUN_0035e5b4(iVar3 + 0x28,DAT_00340bd0,(int)cVar1);
    return 1;
  }
  return 0;
}
