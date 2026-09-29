// OoT3D decomp @ 00415160  name=FUN_00415160  size=104

void FUN_00415160(uint param_1)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;

  if (param_1 != 0) {
    piVar2 = (int *)(*(int **)(DAT_004151c8 + 8))[(param_1 & 0x1ff) + 2];
    if (piVar2 != (int *)0x0) {
      do {
        puVar1 = (uint *)(piVar2 + 1);
        if (*puVar1 != param_1) {
          piVar2 = (int *)*piVar2;
        }
      } while (*puVar1 != param_1 && piVar2 != (int *)0x0);
    }
    iVar3 = **(int **)(DAT_004151c8 + 8);
    if ((iVar3 == 0) || (*(uint *)(iVar3 + 4) != param_1)) {
      FUN_00303280();
      return;
    }
    *(undefined1 *)(iVar3 + 0x15) = 1;
  }
  return;
}
