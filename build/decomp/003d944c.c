// OoT3D decomp @ 003d944c  name=FUN_003d944c  size=184

void FUN_003d944c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint in_fpscr;

  FUN_00375bcc(param_1,DAT_003d9504);
  uVar1 = DAT_003d9514;
  *(undefined2 *)(param_1 + 0x78e) = 10;
  FUN_0036e168(uVar1,DAT_003d9510,DAT_003d950c,DAT_003d9508,param_1 + 0x7c8);
  uVar2 = DAT_003d9518;
  FUN_0036e168(DAT_003d9520,uVar1,DAT_003d951c,DAT_003d9518,param_1 + 0x7d8);
  FUN_00370734(param_1 + 0x1a4);
  uVar3 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_003d9524 + 0x28));
  uVar3 = VectorSignedToFloat(uVar3,(byte)(in_fpscr >> 0x15) & 3);
  if (*(short *)(param_1 + 0x7aa) == 0) {
    FUN_00353020(uVar1,uVar2,uVar3,DAT_003d9528,param_1 + 0x1a4,DAT_003d952c,2);
    *(undefined4 *)(param_1 + 0x760) = DAT_003d9530;
  }
  return;
}
