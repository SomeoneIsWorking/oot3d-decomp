// OoT3D decomp @ 002e631c  name=FUN_002e631c  size=40

void FUN_002e631c(int param_1,int *param_2)

{
  int iVar1;

  if (*param_2 == 0) {
    iVar1 = (*(uint *)(param_1 + 0xe0) & 0xfffffff0) - 0x8000;
    *(int *)(param_1 + 0xe0) = iVar1;
    *param_2 = iVar1;
  }
  return;
}
