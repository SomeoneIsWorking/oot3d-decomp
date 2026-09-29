// OoT3D decomp @ 001c2bb8  name=FUN_001c2bb8  size=156

void FUN_001c2bb8(int param_1,int param_2)

{
  int iVar1;

  FUN_0034fbe8(param_2,param_2 + 0xa70,*(undefined4 *)(param_1 + 0x304));
  if ((*(byte *)(DAT_001c2c54 + *(short *)(param_1 + 0x1c) * 0x20 + 0x1f) & 2) != 0) {
    FUN_00350b88(param_2,param_1 + 0x1a4);
  }
  iVar1 = 0;
  do {
    FUN_003508b8(param_1,*(undefined4 *)(param_1 + iVar1 * 4 + 0x328),0);
    iVar1 = iVar1 + 1;
  } while (iVar1 < 1);
  if (*(int *)(DAT_001c2c58 + param_2) == 0) {
    return;
  }
  FUN_00340ac8(DAT_001c2c5c,*(int *)(DAT_001c2c58 + param_2),0,0);
  return;
}
