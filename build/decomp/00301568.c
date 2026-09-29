// OoT3D decomp @ 00301568  name=FUN_00301568  size=188

void FUN_00301568(uint param_1,uint param_2)

{
  uint *puVar1;
  int *piVar2;
  int iVar3;
  bool bVar4;

  iVar3 = *(int *)(DAT_00301624 + 8);
  piVar2 = *(int **)(iVar3 + (param_1 & 0x1ff) * 4 + 8);
  if (piVar2 != (int *)0x0) {
    do {
      puVar1 = (uint *)(piVar2 + 1);
      if (*puVar1 != param_1) {
        piVar2 = (int *)*piVar2;
      }
    } while (*puVar1 != param_1 && piVar2 != (int *)0x0);
  }
  *(undefined1 *)(piVar2 + 5) = 1;
  if (param_2 == 0xffffffff) {
    piVar2[2] = -1;
  }
  else {
    iVar3 = *(int *)(iVar3 + (param_2 & 0x1ff) * 4 + 0x808);
    if (iVar3 != 0) {
      do {
        bVar4 = *(uint *)(iVar3 + 8) != param_2;
        if (bVar4) {
          iVar3 = *(int *)(iVar3 + 0x18);
        }
      } while (bVar4 && iVar3 != 0);
    }
    if (*(int *)(iVar3 + 0xc) == 0x8b31) {
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      piVar2[3] = iVar3;
      return;
    }
    if (*(int *)(iVar3 + 0xc) == 0x6001) {
      *(int *)(iVar3 + 0x10) = *(int *)(iVar3 + 0x10) + 1;
      piVar2[4] = iVar3;
      return;
    }
  }
  return;
}
