// OoT3D decomp @ 00260008  name=FUN_00260008  size=68

void FUN_00260008(int param_1)

{
  int *piVar1;

  piVar1 = DAT_00260050;
  *(undefined1 *)(param_1 + 0x93f) = 1;
  if (*piVar1 == 0) {
    *(undefined4 *)(*(int *)(param_1 + 0x870) + 8) = DAT_0026004c;
    FUN_003586ec();
  }
  *(undefined1 *)(*(int *)(param_1 + 0x870) + 0x10) = 1;
  *(undefined1 *)(*(int *)(param_1 + 0x870) + 0x11) = 0;
  return;
}
