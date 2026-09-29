// OoT3D decomp @ 001cb6a8  name=FUN_001cb6a8  size=136

void FUN_001cb6a8(int param_1)

{
  short sVar1;
  int iVar2;

  FUN_003731e0(param_1 + 0x5b0);
  iVar2 = FUN_003736fc(uRam001cb734,uRam001cb730,param_1 + 0x5b0);
  sVar1 = 0;
  if (iVar2 != 0) {
    sVar1 = *(short *)(param_1 + 0x1a8);
  }
  if (iVar2 != 0 && sVar1 != 0) {
    *(short *)(param_1 + 0x1a8) = sVar1 + -1;
  }
  if ((*(int *)(param_1 + 0x98) < iRam001cb738) || (*(short *)(param_1 + 0x1a8) == 0)) {
    FUN_00374a58(uRam001cb73c,param_1 + 0x5b0,*(undefined4 *)(iRam001cb740 + 8));
    FUN_00375bcc(param_1,uRam001cb744);
    *(undefined4 *)(param_1 + 0x1a4) = uRam001cb748;
  }
  return;
}
