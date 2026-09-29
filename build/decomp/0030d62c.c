// OoT3D decomp @ 0030d62c  name=FUN_0030d62c  size=8

int * FUN_0030d62c(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int *piVar2;
  int *piVar3;

  piVar1 = (int *)(param_1 + 0x14);
  piVar2 = piVar1;
  if (param_3 == 0) {
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  else if ((param_3 != 1) && (param_3 == 2)) {
    piVar2 = (int *)*piVar1;
    *(int **)(param_1 + 0x18) = piVar2;
  }
  if (param_2 != 0) {
    piVar2 = *(int **)(param_1 + 0x18);
    piVar1 = (int *)*piVar1;
    piVar3 = (int *)((int)piVar2 + param_2);
    if (piVar3 <= piVar1) {
      piVar2 = piVar3;
      piVar1 = piVar3;
    }
    *(int **)(param_1 + 0x18) = piVar1;
  }
  return piVar2;
}
