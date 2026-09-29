// OoT3D decomp @ 00405c24  name=FUN_00405c24  size=112

void FUN_00405c24(int param_1,int param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  if (param_2 == 0 || param_2 == 2) {
    FUN_0030a3f8(param_1);
  }
  piVar1 = *(int **)(param_3 + 0xc0);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0x20))(piVar1,param_1);
  }
  iVar2 = *(int *)(param_3 + 0xc4);
  if (*(int *)(param_3 + 0xc4) == param_1) {
    *(undefined4 *)(param_3 + 0xc4) = *(undefined4 *)(param_1 + 0x138);
  }
  else {
    do {
      iVar3 = iVar2;
      iVar2 = *(int *)(iVar3 + 0x138);
      if (iVar2 == 0) {
        return;
      }
    } while (iVar2 != param_1);
    *(undefined4 *)(iVar3 + 0x138) = *(undefined4 *)(param_1 + 0x138);
  }
  return;
}
