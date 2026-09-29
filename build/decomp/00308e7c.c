// OoT3D decomp @ 00308e7c  name=FUN_00308e7c  size=52

void FUN_00308e7c(int param_1)

{
  int iVar1;

  for (iVar1 = *(int *)(param_1 + 0xc4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x138)) {
    FUN_0030a3f8(iVar1);
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  return;
}
