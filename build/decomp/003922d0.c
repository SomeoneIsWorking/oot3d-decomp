// OoT3D decomp @ 003922d0  name=FUN_003922d0  size=304

void FUN_003922d0(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint in_fpscr;
  undefined4 uVar5;

  iVar2 = FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  uVar5 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_00392400;
  FUN_00376340(DAT_0039240c,DAT_00392408,DAT_00392404,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar5;
  uVar5 = DAT_00392410;
  iVar3 = FUN_0036e5e0(DAT_00392414,DAT_00392410,param_1 + 0x1a4);
  if (iVar3 != 0) {
    FUN_0037547c(DAT_00392420,param_1 + 0x28,4,DAT_0039241c,DAT_0039241c,DAT_00392418);
  }
  if (iVar2 == 0) {
    if (*(float *)(param_1 + 0x20c) < *(float *)(*(int *)(param_1 + 0x21c) + 0x1c)) {
      *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 3;
      FUN_003fd1b8(uVar5,param_2,param_1);
      return;
    }
  }
  else {
    uVar4 = FUN_0036ae14(param_1 + 0x1a4,0xd);
    uVar1 = DAT_00392424;
    *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) & 0xfc;
    uVar4 = VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(uVar5,DAT_00392428,uVar4,uVar1,param_1 + 0x1a4,DAT_0039242c,0);
    *(undefined4 *)(param_1 + 0xbbc) = 3;
  }
  return;
}
