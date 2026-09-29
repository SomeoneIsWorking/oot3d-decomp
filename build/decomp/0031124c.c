// OoT3D decomp @ 0031124c  name=FUN_0031124c  size=56

void FUN_0031124c(int param_1)

{
  int iVar1;

  for (iVar1 = *(int *)(param_1 + 0x10); iVar1 != param_1 + 0xc; iVar1 = *(int *)(iVar1 + 4)) {
    iVar1 = *(int *)(iVar1 + 4);
    FUN_003525d4();
  }
  *(undefined4 *)(param_1 + 8) = 0xffffffff;
  return;
}
