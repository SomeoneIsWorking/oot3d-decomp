// OoT3D decomp @ 00393008  name=FUN_00393008  size=72

void FUN_00393008(int param_1,int param_2)

{
  int iVar1;
  int iVar2;

  iVar1 = FUN_0037571c(param_2);
  iVar2 = 0;
  if (iVar1 != 0) {
    iVar2 = *(int *)(&DAT_000022dc + param_2);
  }
  if (iVar2 == 0) {
    if (*(int *)(param_1 + 0x128) != 0) {
      FUN_00374428();
    }
    FUN_00374428(param_1);
    return;
  }
  return;
}
