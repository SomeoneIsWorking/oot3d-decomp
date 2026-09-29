// OoT3D decomp @ 001565fc  name=FUN_001565fc  size=252

void FUN_001565fc(int param_1,undefined4 param_2)

{
  uint uVar1;
  int iVar2;
  uint in_fpscr;

  if (*(short *)(param_1 + 0x6a6) != 0) {
    *(short *)(param_1 + 0x6a6) = *(short *)(param_1 + 0x6a6) + -1;
  }
  *(undefined2 *)(param_1 + 0x11a) = 0x36;
  uVar1 = (uint)*(short *)(param_1 + 0x6a6);
  if ((int)(uVar1 - 0x1e) < 1) {
    if (uVar1 == 0) {
      *(float *)(param_1 + 100) = *(float *)(param_1 + 100) + DAT_00156750;
      iVar2 = FUN_003705a0(*(undefined4 *)(param_1 + 0x84),param_1 + 0x2c);
      if (iVar2 != 0) {
        FUN_00364538(param_1,param_2);
        *(undefined2 *)(param_1 + 0x11a) = 0;
        return;
      }
    }
  }
  else if ((uVar1 & 1) != 0) {
    VectorSignedToFloat((8 - ((int)(uVar1 - 0x1e) >> 1)) * 5,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003759d0();
  }
  return;
}
