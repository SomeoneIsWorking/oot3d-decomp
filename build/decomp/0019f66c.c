// OoT3D decomp @ 0019f66c  name=FUN_0019f66c  size=140

void FUN_0019f66c(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;

  uVar2 = DAT_0019f708;
  if (*(short *)(param_1 + 0x1c2) != 0) {
    sVar1 = *(short *)(param_1 + 0x1c2) + -1;
    *(short *)(param_1 + 0x1c2) = sVar1;
    if (5 < sVar1) {
      return;
    }
    uVar2 = DAT_0019f708;
    if (0 < sVar1) {
      if (*(char *)(param_1 + 0x1c1) == *(char *)(param_2 + 0x4c30)) {
        return;
      }
      FUN_0037547c(DAT_0019f700,0,4,DAT_0019f6fc,DAT_0019f6fc,DAT_0019f6f8);
      *(undefined2 *)(param_1 + 0x1c2) = 8;
      uVar2 = DAT_0019f704;
    }
  }
  *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  return;
}
