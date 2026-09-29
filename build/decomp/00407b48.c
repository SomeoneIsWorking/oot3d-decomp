// OoT3D decomp @ 00407b48  name=FUN_00407b48  size=100

void FUN_00407b48(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;

  iVar2 = 0;
  if (0 < *(int *)(param_1 + 8)) {
    do {
      iVar1 = *(int *)(param_1 + iVar2 * 4);
      if (iVar1 != 0) {
        uVar3 = 0;
        if (((param_2 != 0) && (uVar3 = param_2 == 1, !(bool)uVar3)) && (param_2 == 2)) {
          uVar3 = 2;
        }
        FUN_00401648(iVar1,uVar3);
      }
      iVar2 = iVar2 + 1;
    } while (iVar2 < *(int *)(param_1 + 8));
  }
  return;
}
