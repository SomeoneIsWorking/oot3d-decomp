// OoT3D decomp @ 004c6880  name=FUN_004c6880  size=32

int FUN_004c6880(int param_1,int param_2)

{
  int iVar1;

  if (param_2 < *(int *)(*(int *)(param_1 + 0x14) + 0x68)) {
    iVar1 = (int)*(char *)(*(int *)(*(int *)(param_1 + 0x14) + 0x6c) + param_2);
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}
