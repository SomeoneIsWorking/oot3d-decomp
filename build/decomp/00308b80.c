// OoT3D decomp @ 00308b80  name=FUN_00308b80  size=88

void FUN_00308b80(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  *(undefined4 *)(param_1 + 0x40) = param_2;
  uVar1 = FUN_0030c6e0();
  FUN_004059cc(uVar1,param_1);
  if ((*(int *)(param_1 + 0x40) == 1) && (iVar3 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      iVar2 = *(int *)(param_1 + iVar3 * 4);
      if (iVar2 != 0) {
        FUN_00308e34(iVar2,1);
      }
      iVar3 = iVar3 + 1;
    } while (iVar3 < *(int *)(param_1 + 8));
  }
  return;
}
