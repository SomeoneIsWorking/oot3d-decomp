// OoT3D decomp @ 0044a9a4  name=FUN_0044a9a4  size=48

void FUN_0044a9a4(int param_1,undefined4 param_2)

{
  int iVar1;

  iVar1 = FUN_002e1ef0();
  if (iVar1 != 0) {
    *(char *)(param_1 + 2) = (char)param_2;
    FUN_002e1df4(DAT_0044a9d4,param_2);
    return;
  }
  return;
}
