// OoT3D decomp @ 004c9778  name=FUN_004c9778  size=56

void FUN_004c9778(void)

{
  int *piVar1;
  int *piVar2;

  piVar2 = (int *)(DAT_004c97b4 + 0x4c9790);
  for (piVar1 = (int *)(DAT_004c97b0 + 0x4c9788); piVar1 != piVar2; piVar1 = piVar1 + 1) {
    (*(code *)(*piVar1 + (int)piVar1))();
  }
  return;
}
