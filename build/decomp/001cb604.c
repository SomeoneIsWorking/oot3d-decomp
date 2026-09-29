// OoT3D decomp @ 001cb604  name=FUN_001cb604  size=136

void FUN_001cb604(int param_1)

{
  short sVar1;
  int iVar2;

  FUN_003731e0(param_1 + 0x208);
  iVar2 = FUN_003736fc(uRam001cb690,uRam001cb68c,param_1 + 0x208);
  sVar1 = 0;
  if (iVar2 != 0) {
    sVar1 = *(short *)(param_1 + 0x1aa);
  }
  if (iVar2 != 0 && sVar1 != 0) {
    *(short *)(param_1 + 0x1aa) = sVar1 + -1;
  }
  if ((*(int *)(param_1 + 0x98) < iRam001cb694) || (*(short *)(param_1 + 0x1aa) == 0)) {
    FUN_00374a58(uRam001cb698,param_1 + 0x208,*(undefined4 *)(iRam001cb69c + 8));
    FUN_00375bcc(param_1,uRam001cb6a0);
    *(undefined4 *)(param_1 + 0x1a4) = uRam001cb6a4;
  }
  return;
}
