// OoT3D decomp @ 0039d23c  name=FUN_0039d23c  size=196

void FUN_0039d23c(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;
  uint in_fpscr;
  undefined4 uVar3;

  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  uVar3 = *(undefined4 *)(param_1 + 100);
  *(undefined4 *)(param_1 + 100) = DAT_0039d300;
  FUN_00376340(DAT_0039d30c,DAT_0039d308,DAT_0039d304,param_2,param_1,7);
  *(undefined4 *)(param_1 + 100) = uVar3;
  psVar2 = (short *)0x0;
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    psVar2 = *(short **)(param_2 + 0x22e8);
  }
  if ((psVar2 != (short *)0x0) && (*psVar2 == 3)) {
    uVar3 = FUN_0036ae14(param_1 + 0x1a4,6);
    uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00353020(DAT_0039d318,DAT_0039d314,uVar3,DAT_0039d310,param_1 + 0x1a4,DAT_0039d31c,2);
    *(undefined4 *)(param_1 + 0xbbc) = 10;
  }
  return;
}
