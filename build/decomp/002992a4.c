// OoT3D decomp @ 002992a4  name=FUN_002992a4  size=48

void FUN_002992a4(int param_1)

{
  int iVar1;

  iVar1 = *(int *)(param_1 + 0x1c0);
  *(int *)(param_1 + 0x1c0) = iVar1 + -1;
  if (iVar1 == 0) {
    FUN_00375bcc(param_1,DAT_002992d4);
    *(undefined4 *)(param_1 + 0x1bc) = DAT_002992d8;
  }
  return;
}
