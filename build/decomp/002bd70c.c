// OoT3D decomp @ 002bd70c  name=FUN_002bd70c  size=200

undefined4 * FUN_002bd70c(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;

  iVar2 = *(int *)param_1[2] + -1;
  *(int *)param_1[2] = iVar2;
  if (iVar2 == 0) {
    iVar2 = param_1[1];
    if (iVar2 != 0) {
      iVar3 = **(int **)(iVar2 + 0x78) + -1;
      **(int **)(iVar2 + 0x78) = iVar3;
      if (iVar3 == 0) {
        if (*(undefined4 **)(iVar2 + 0x74) != (undefined4 *)0x0) {
          (**(code **)**(undefined4 **)(iVar2 + 0x74))();
          piVar1 = *(int **)(iVar2 + 0x70);
          (**(code **)(*piVar1 + 4))(piVar1,*(undefined4 *)(iVar2 + 0x74));
        }
        piVar1 = *(int **)(iVar2 + 0x70);
        (**(code **)(*piVar1 + 4))(piVar1,*(undefined4 *)(iVar2 + 0x78));
      }
      iVar2 = FUN_002bea70(iVar2 + 100);
      iVar2 = FUN_002bc8cc(iVar2 + -0x30);
      FUN_002bc8cc(iVar2 + -0x30);
      (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_1[1]);
    }
    (**(code **)(*(int *)*param_1 + 4))((int *)*param_1,param_1[2]);
  }
  return param_1;
}
