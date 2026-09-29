// OoT3D decomp @ 00309d80  name=FUN_00309d80  size=156

void FUN_00309d80(int param_1,int param_2)

{
  int iVar1;
  int *piVar2;

  iVar1 = param_1 + param_2 * 0xc;
  if (*(int *)(iVar1 + 100) == 0) {
    return;
  }
  FUN_004858f8((int)(char)param_2);
  param_1 = param_1 + param_2 * 8;
  *(undefined4 *)(param_1 + 0x290) = 0;
  *(undefined4 *)(param_1 + 0x294) = 0;
  piVar2 = *(int **)(iVar1 + 0x68);
  if (piVar2 != (int *)(iVar1 + 0x68)) {
    do {
      (**(code **)(piVar2[-1] + 0xc))(piVar2 + -1);
      piVar2 = (int *)*piVar2;
    } while (piVar2 != (int *)(iVar1 + 0x68));
  }
  FUN_0030d538(iVar1 + 100,*(undefined4 *)(iVar1 + 0x68),iVar1 + 0x68);
  return;
}
