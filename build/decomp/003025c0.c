// OoT3D decomp @ 003025c0  name=FUN_003025c0  size=168

void FUN_003025c0(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  iVar1 = DAT_00302668;
  iVar3 = *(int *)(DAT_00302668 + 0xa0);
  iVar2 = *(int *)(iVar3 + 0x28);
  iVar4 = *(int *)(iVar3 + 0x18) + iVar2 * 0x1c;
  if ((*(code **)(iVar3 + 0x30) != (code *)0x0) &&
     ((*(char *)(iVar4 + 1) != '\0' ||
      ((iVar2 + 1 == *(int *)(iVar3 + 0x20) && (*(char *)(iVar3 + 0x34) != '\0')))))) {
    (**(code **)(iVar3 + 0x30))(iVar2 + 1);
  }
  FUN_0030e038();
  iVar2 = *(int *)(iVar3 + 0x28) + 1;
  *(int *)(iVar3 + 0x28) = iVar2;
  if (*(char *)(iVar4 + 2) == '\0') {
    if (iVar2 < *(int *)(iVar3 + 0x20)) {
      FUN_003027dc();
    }
    else {
      *(undefined1 *)(iVar1 + 0x11) = 0;
    }
  }
  else {
    *(undefined1 *)(iVar1 + 0x11) = 0;
    *(undefined1 *)(iVar1 + 0x12) = 0;
    *(undefined1 *)(iVar1 + 0x18) = 0;
  }
  FUN_0030dfd8();
  return;
}
