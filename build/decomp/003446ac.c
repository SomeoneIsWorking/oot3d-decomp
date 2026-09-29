// OoT3D decomp @ 003446ac  name=FUN_003446ac  size=48

void FUN_003446ac(int param_1,int *param_2)

{
  int iVar1;

  *(int **)(param_1 + 4) = param_2;
  iVar1 = *(int *)(*param_2 + 0x14);
  if (iVar1 == 0) {
    iVar1 = 4;
  }
  *(int *)(param_1 + 0x174) = iVar1;
  *(int **)(*(int *)(param_1 + 8) + 0x350) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 8) + 6) = 0;
  return;
}
