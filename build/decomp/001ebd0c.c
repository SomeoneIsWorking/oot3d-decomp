// OoT3D decomp @ 001ebd0c  name=FUN_001ebd0c  size=152

undefined4 FUN_001ebd0c(int param_1,undefined4 param_2)

{
  int iVar1;

  if (-1 < *(short *)(param_1 + 0x2248)) {
    *(short *)(param_1 + 0x2248) = -*(short *)(param_1 + 0x2248);
  }
  iVar1 = FUN_00355a60(param_1);
  if (iVar1 != 0) {
    if (*(int *)(param_1 + 0x128) == 0) {
      return 1;
    }
    if (*(int *)(param_1 + 0x1224) == 0) {
      *(int *)(param_1 + 0x1224) = *(int *)(param_1 + 0x128);
      FUN_0036f59c(param_1,DAT_001ebda4);
    }
  }
  iVar1 = FUN_0033b384(param_2,param_1);
  if ((iVar1 == 0) && (iVar1 = FUN_0033b1c8(param_1,param_2), iVar1 == 0)) {
    return 0;
  }
  return 1;
}
