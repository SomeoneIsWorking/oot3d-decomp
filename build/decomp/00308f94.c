// OoT3D decomp @ 00308f94  name=FUN_00308f94  size=108

void FUN_00308f94(int param_1)

{
  int iVar1;

  FUN_0030a0e8();
  for (iVar1 = *(int *)(param_1 + 0xc4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x138)) {
    if (*(char *)(iVar1 + 0xc6) != '\0') {
      FUN_0030a030(iVar1);
    }
  }
  for (iVar1 = *(int *)(param_1 + 0xc4); iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x138)) {
    FUN_0030a3f8(iVar1);
  }
  *(undefined4 *)(param_1 + 0xc4) = 0;
  *(undefined1 *)(param_1 + 5) = 0;
  return;
}
