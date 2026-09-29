// OoT3D decomp @ 003a3f1c  name=FUN_003a3f1c  size=164

void FUN_003a3f1c(int param_1,undefined4 param_2)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;

  FUN_0031a3dc();
  uVar2 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_003a3fc0;
  FUN_00376340(DAT_003a3fcc,DAT_003a3fc8,DAT_003a3fc4,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar2;
  iVar1 = FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  if (iVar1 != 0) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,0);
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(DAT_003a3fd8,DAT_003a3fd4,uVar2,DAT_003a3fd0,param_1 + 0x1a4,DAT_003a3fdc,0);
    *(undefined4 *)(param_1 + 0xbbc) = 0x28;
  }
  return;
}
