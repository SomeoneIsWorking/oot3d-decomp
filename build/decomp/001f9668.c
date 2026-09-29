// OoT3D decomp @ 001f9668  name=FUN_001f9668  size=96

void FUN_001f9668(int param_1,undefined4 param_2)

{
  int *piVar1;

  piVar1 = *(int **)(param_1 + 0x20c);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 4))(piVar1,*(code **)(*piVar1 + 4),param_2);
  }
  *(undefined4 *)(param_1 + 0x20c) = 0;
  if (*(int **)(param_1 + 0x210) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x210) + 4))();
  }
  *(undefined4 *)(param_1 + 0x210) = 0;
  return;
}
