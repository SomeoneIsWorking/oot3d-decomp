// OoT3D decomp @ 004881b0  name=FUN_004881b0  size=276

void FUN_004881b0(int param_1)

{
  int iVar1;
  uint uVar2;

  if (((*(short *)(*DAT_004882c4 + 0x4d2) == 0) &&
      (iVar1 = FUN_003056a8(*(undefined4 *)(param_1 + 8)), iVar1 == 0)) &&
     ((uVar2 = *(uint *)(*(int *)(param_1 + 8) + 0x18), (~uVar2 & 1) == 0 || ((~uVar2 & 2) == 0))))
  {
    FUN_00305754(param_1 + 0x44);
    if ((~*(uint *)(param_1 + 0xfac) & 0xffff) == 0) {
      FUN_0037547c(DAT_004882d4,0,4,DAT_004882cc,DAT_004882cc,DAT_004882c8);
      *(undefined4 *)(param_1 + 0xfa4) = 0;
      if (*(char *)(param_1 + 0xf38) != '\0') {
        *(undefined4 *)(param_1 + 0xfa4) = 3;
        *(undefined1 *)(param_1 + 0xf38) = 0xe;
      }
      return;
    }
    FUN_0037547c(DAT_004882d0,0,4,DAT_004882cc,DAT_004882cc,DAT_004882c8);
    *(undefined4 *)(param_1 + 0xfa4) = 0;
    iVar1 = FUN_002cd2b4(param_1,*(undefined4 *)(param_1 + 0xfac));
    if (iVar1 != 0) {
      *(undefined1 *)(param_1 + 0xf38) = 0xd;
      *(undefined4 *)(param_1 + 0xfa4) = 3;
    }
  }
  return;
}
