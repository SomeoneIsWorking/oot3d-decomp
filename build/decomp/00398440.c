// OoT3D decomp @ 00398440  name=FUN_00398440  size=60

void FUN_00398440(undefined4 param_1)

{
  int iVar1;
  short sVar2;

  iVar1 = iRam0039847c;
  if (*(short *)(iRam0039847c + 0x14) == 0x1d) {
    FUN_00375bcc(param_1,uRam00398480);
  }
  if (*(char *)(iVar1 + 9) < '\0') {
    if (*(short *)(iVar1 + 0x14) < 100) {
      sVar2 = *(short *)(iVar1 + 0x14) + 8;
    }
    else {
      sVar2 = 100;
    }
    *(short *)(iVar1 + 0x14) = sVar2;
  }
  return;
}
