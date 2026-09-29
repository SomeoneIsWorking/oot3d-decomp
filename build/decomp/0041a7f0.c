// OoT3D decomp @ 0041a7f0  name=FUN_0041a7f0  size=72

void FUN_0041a7f0(int param_1)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;

  FUN_0041ac34();
  FUN_0041a67c(1);
  if (*(code **)(param_1 + 8) != (code *)0x0) {
    (**(code **)(param_1 + 8))(param_1);
  }
  *(undefined4 *)(param_1 + 0xd4) = 0;
  *(undefined4 *)(param_1 + 0xd8) = 0;
  *(undefined4 *)(param_1 + 0xdc) = 0;
  *(undefined4 *)(param_1 + 0xe0) = 0;
  piVar2 = (int *)(param_1 + 0xe4);
  piVar1 = (int *)*piVar2;
  while (piVar1 != piVar2) {
    piVar3 = (int *)*piVar1;
    FUN_0034fc6c(piVar1);
    piVar1 = piVar3;
  }
  *(int **)(param_1 + 0xf4) = piVar2;
  *piVar2 = (int)piVar2;
  *(int **)(param_1 + 0xe8) = piVar2;
  return;
}
