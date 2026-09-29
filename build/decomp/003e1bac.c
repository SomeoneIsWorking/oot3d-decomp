// OoT3D decomp @ 003e1bac  name=FUN_003e1bac  size=144

void FUN_003e1bac(int param_1)

{
  short sVar1;
  int iVar2;

  FUN_003731e0(param_1 + 0x208);
  iVar2 = FUN_003736fc(DAT_003e1c40,DAT_003e1c3c,param_1 + 0x208);
  if (iVar2 != 0) {
    if ((*(short *)(param_1 + 0x1aa) != 0) &&
       (sVar1 = *(short *)(param_1 + 0x1aa) + -1, *(short *)(param_1 + 0x1aa) = sVar1, sVar1 != 0))
    {
      FUN_0037547c(DAT_003e1c44,param_1 + 0x28,4,DAT_00375c04);
      return;
    }
    FUN_0036e734(param_1 + 0x208,*(undefined4 *)(DAT_003e1c48 + 0x24));
    *(undefined2 *)(param_1 + 0x1aa) = 3;
    *(undefined1 *)(param_1 + 0x1a8) = 0;
    *(byte *)(param_1 + 0x1c1) = *(byte *)(param_1 + 0x1c1) | 1;
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003e1c4c;
  }
  return;
}
