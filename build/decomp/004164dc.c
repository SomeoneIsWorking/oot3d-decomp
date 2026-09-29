// OoT3D decomp @ 004164dc  name=FUN_004164dc  size=76

void FUN_004164dc(void)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;

  FUN_00416cc4();
  piVar2 = DAT_00416528;
  iVar3 = *DAT_00416528;
  piVar1 = (int *)0x0;
  piVar4 = DAT_00416528;
  while (iVar3 != 0) {
    piVar4 = (int *)((int)piVar4 + iVar3);
    if ((code *)piVar4[1] != (code *)0x0) {
      (*(code *)piVar4[1])();
    }
    iVar3 = *piVar4;
    *piVar4 = (int)piVar1;
    piVar1 = piVar4;
  }
  *piVar2 = (int)piVar1;
  return;
}
