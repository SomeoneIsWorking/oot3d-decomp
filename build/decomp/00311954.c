// OoT3D decomp @ 00311954  name=FUN_00311954  size=92

void FUN_00311954(void)

{
  int iVar1;
  int iVar2;

  iVar1 = DAT_003119b0;
  iVar2 = *(int *)(DAT_003119b0 + 0x9c);
  if (iVar2 == 0) {
    return;
  }
  if (*(char *)(DAT_003119b0 + 0x11) != '\0') {
    return;
  }
  *(int *)(DAT_003119b0 + 0xa0) = iVar2;
  *(undefined1 *)(iVar1 + 0x12) = 1;
  if (*(int *)(iVar2 + 0x20) <= *(int *)(iVar2 + 0x28)) {
    return;
  }
  *(undefined1 *)(iVar1 + 0x11) = 1;
  if (*(int *)(iVar2 + 0x2c) != 0x300) {
    return;
  }
  FUN_0030e038();
  FUN_003027dc();
  FUN_0030dfd8();
  return;
}
