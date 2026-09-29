// OoT3D decomp @ 001777d8  name=FUN_001777d8  size=144

void FUN_001777d8(int param_1)

{
  char cVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  uint in_fpscr;
  undefined4 uVar4;

  cVar1 = *(char *)(param_1 + 0x1c0);
  if ((cVar1 == '\0') || (*(char *)(param_1 + 0x1c0) = cVar1 + -1, (byte)(cVar1 - 1U) < 0x1f)) {
    uVar3 = FUN_003705a0(*(undefined4 *)(param_1 + 0xc),DAT_00177870,param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x1c1) = uVar3;
  }
  else {
    uVar4 = VectorSignedToFloat((int)*(short *)(DAT_00177868 + param_1),(byte)(in_fpscr >> 0x15) & 3
                               );
    uVar3 = FUN_003705a0(uVar4,DAT_0017786c,param_1 + 0x2c);
    *(undefined1 *)(param_1 + 0x1c1) = uVar3;
  }
  if (*(char *)(param_1 + 0x1c0) == '\0') {
    *(undefined1 *)(param_1 + 0x1c0) = 0x2d;
    uVar2 = DAT_00177878;
    uVar4 = DAT_00177874;
    *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0xc);
    *(undefined4 *)(param_1 + 100) = uVar4;
    *(undefined4 *)(param_1 + 0x1bc) = uVar2;
  }
  return;
}
