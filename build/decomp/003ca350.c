// OoT3D decomp @ 003ca350  name=FUN_003ca350  size=232

void FUN_003ca350(int param_1)

{
  short sVar1;
  uint uVar2;
  uint in_fpscr;

  if (*(short *)(param_1 + 0x8b0) != 0) {
    sVar1 = *(short *)(param_1 + 0x8b0) + -1;
    uVar2 = (uint)sVar1;
    *(short *)(param_1 + 0x8b0) = sVar1;
    if (uVar2 != 0) {
      if ((0x5f < (int)uVar2) && ((uVar2 & 1) != 0)) {
        VectorSignedToFloat(8 - ((int)(uVar2 - 0x60) >> 1),(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
        FUN_003759d0();
      }
      goto LAB_003ca460;
    }
  }
  FUN_00374a58(DAT_003ca47c,param_1 + 0x1a4,4);
  *(undefined2 *)(param_1 + 0x8b0) = 0;
  *(undefined4 *)(param_1 + 0x8ac) = DAT_003ca480;
LAB_003ca460:
  FUN_00373500(*(undefined4 *)(param_1 + 0xc),DAT_003ca4a0,DAT_003ca49c,param_1 + 0x2c);
  return;
}
