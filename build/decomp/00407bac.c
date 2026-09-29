// OoT3D decomp @ 00407bac  name=FUN_00407bac  size=68

void FUN_00407bac(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_r4;
  bool bVar4;

  iVar2 = *(int *)(param_1 + 0x40);
  iVar3 = iVar2 + -1;
  bVar4 = iVar2 == 1;
  iVar1 = 1;
  if (!bVar4) {
    iVar3 = *(int *)(param_1 + 8);
    unaff_r4 = 0;
    iVar1 = iVar3;
  }
  if ((!bVar4 && iVar1 != 0) && iVar3 < 0 == (bVar4 && SBORROW4(iVar2,1))) {
    do {
      iVar3 = *(int *)(param_1 + unaff_r4 * 4);
      if (iVar3 != 0) {
        FUN_00308e34(iVar3,*(undefined4 *)(param_1 + 0x40));
      }
      unaff_r4 = unaff_r4 + 1;
    } while (unaff_r4 < *(int *)(param_1 + 8));
  }
  return;
}
