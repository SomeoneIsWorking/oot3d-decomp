// OoT3D decomp @ 00391fd4  name=FUN_00391fd4  size=184

void FUN_00391fd4(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  uint in_fpscr;
  undefined4 uVar3;

  iVar1 = FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  uVar3 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_0039208c;
  FUN_00376340(DAT_00392098,DAT_00392094,DAT_00392090,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar3;
  if (iVar1 != 0) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,7);
    uVar3 = DAT_003920a0;
    uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(DAT_003920a4,DAT_003920a0,uVar2,DAT_0039209c,param_1 + 0x1a4,DAT_003920a8,0);
    *(short *)(param_1 + 0x36) = *(short *)(param_1 + 0x36) + -0x8000;
    *(undefined4 *)(param_1 + 0xbbc) = 0xb;
    *(undefined4 *)(param_1 + 0xbc4) = uVar3;
  }
  return;
}
