// OoT3D decomp @ 003e3578  name=FUN_003e3578  size=96

void FUN_003e3578(int param_1)

{
  short sVar1;
  int iVar2;

  FUN_003731e0(param_1 + 0x1e4);
  if ((*(short *)(param_1 + 0x8f6) != 0) &&
     (sVar1 = *(short *)(param_1 + 0x8f6) + -1, *(short *)(param_1 + 0x8f6) = sVar1, sVar1 != 0)) {
    return;
  }
  iVar2 = FUN_003736fc(DAT_003e35dc,DAT_003e35d8,param_1 + 0x1e4);
  if (iVar2 == 0) {
    return;
  }
  FUN_00181510(param_1);
  return;
}
