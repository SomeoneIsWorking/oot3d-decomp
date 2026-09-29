// OoT3D decomp @ 00308328  name=FUN_00308328  size=52

void FUN_00308328(int param_1,int param_2,int param_3)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;

  if (param_2 != 3 && param_2 != 0) {
    bVar1 = param_2 == 1;
    bVar2 = param_2 == 2;
    bVar3 = param_2 == 4;
    bVar4 = param_2 == 5;
    if (((bVar1 || bVar2) || bVar3) || bVar4) {
      param_2 = param_3 + -1;
    }
    if (((bVar1 || bVar2) || bVar3) || bVar4) {
      *(int *)(param_1 + 0x14) = param_2;
    }
    if (((bVar1 || bVar2) || bVar3) || bVar4) {
      return;
    }
  }
  *(undefined4 *)(param_1 + 0x14) = 0;
  return;
}
