// OoT3D decomp @ 004174ec  name=FUN_004174ec  size=64

void FUN_004174ec(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;

  *param_1 = param_2;
  iVar1 = DAT_0041752c;
  if (param_2 == 0) {
    return;
  }
  iVar3 = 0;
  do {
    iVar2 = FUN_00310844(*param_1,*(undefined4 *)(iVar1 + iVar3 * 4));
    iVar4 = iVar3 + 1;
    param_1[iVar3 + 1] = iVar2;
    iVar3 = iVar4;
  } while (iVar4 < 0xb4);
  return;
}
