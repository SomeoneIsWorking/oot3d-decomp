// OoT3D decomp @ 004873e8  name=FUN_004873e8  size=52

void FUN_004873e8(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;

  if (param_2 == 0 || param_3 == 0) {
    return;
  }
  iVar3 = 0;
  do {
    iVar2 = iVar3 * 4;
    iVar1 = iVar3 * 4;
    param_3 = param_3 + -1;
    iVar3 = iVar3 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0xe8) = *(undefined4 *)(param_2 + iVar2);
  } while (param_3 != 0);
  return;
}
