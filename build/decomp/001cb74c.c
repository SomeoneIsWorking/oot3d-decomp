// OoT3D decomp @ 001cb74c  name=FUN_001cb74c  size=136

void FUN_001cb74c(int param_1)

{
  short sVar1;
  int iVar2;

  FUN_003731e0(param_1 + 0x204);
  iVar2 = FUN_003736fc(uRam001cb7d8,uRam001cb7d4,param_1 + 0x204);
  sVar1 = 0;
  if (iVar2 != 0) {
    sVar1 = *(short *)(param_1 + 0x1a8);
  }
  if (iVar2 != 0 && sVar1 != 0) {
    *(short *)(param_1 + 0x1a8) = sVar1 + -1;
  }
  if ((*(int *)(param_1 + 0x98) < iRam001cb7dc) || (*(short *)(param_1 + 0x1a8) == 0)) {
    FUN_00374a58(uRam001cb7e0,param_1 + 0x204,*(undefined4 *)(iRam001cb7e4 + 4));
    FUN_00375bcc(param_1,uRam001cb7e8);
    *(undefined4 *)(param_1 + 0x1a4) = uRam001cb7ec;
  }
  return;
}
