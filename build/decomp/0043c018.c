// OoT3D decomp @ 0043c018  name=FUN_0043c018  size=192

void FUN_0043c018(int param_1)

{
  int iVar1;
  uint in_fpscr;
  undefined4 uVar2;
  undefined4 uVar3;

  iVar1 = DAT_0043c0d8;
  if (param_1 == 0) {
    *(undefined4 *)(DAT_0043c0d8 + 0x14) = 3;
  }
  else if (param_1 == 1) {
    *(undefined4 *)(DAT_0043c0d8 + 0x14) = 1;
    *(undefined4 *)(iVar1 + 0x38) = 5;
    FUN_002f6bb4();
    FUN_002f9a1c(*(undefined4 *)(iVar1 + 8));
  }
  *(undefined4 *)(iVar1 + 0x28) = 0;
  *(undefined4 *)(iVar1 + 0x20) = 0xffffffff;
  *(undefined4 *)(iVar1 + 0x48) = 0;
  *(undefined4 *)(iVar1 + 0x4c) = 0;
  *(undefined4 *)(iVar1 + 0x34) = 0xffffffff;
  uVar3 = VectorSignedToFloat(*(int *)(iVar1 + 0x1c) * 0x2c + 0x44,(byte)(in_fpscr >> 0x15) & 3);
  uVar2 = VectorSignedToFloat(*(int *)(iVar1 + 0x18) * 0x48 + 0x10,(byte)(in_fpscr >> 0x15) & 3);
  FUN_002f7af4(uVar2,uVar3,*(undefined4 *)(iVar1 + 0xc));
  FUN_002f79b4(DAT_0043c0e0,DAT_0043c0dc,*(undefined4 *)(iVar1 + 0xc));
  FUN_002f67d4();
  FUN_002f663c();
  return;
}
