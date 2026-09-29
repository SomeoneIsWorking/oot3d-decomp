// OoT3D decomp @ 004158cc  name=FUN_004158cc  size=56

void FUN_004158cc(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = DAT_00415904;
  if (param_1 == 0x400) {
    *(undefined4 *)(DAT_00415904 + 0x15c) = param_2;
    return;
  }
  if (param_1 == 0x401) {
    *(undefined4 *)(DAT_00415904 + 0x160) = param_2;
    return;
  }
  if (param_1 == 0x402) {
    *(undefined4 *)(DAT_00415904 + 0x15c) = param_2;
    *(undefined4 *)(iVar1 + 0x160) = param_2;
  }
  return;
}
