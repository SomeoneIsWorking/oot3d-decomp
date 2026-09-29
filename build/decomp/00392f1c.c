// OoT3D decomp @ 00392f1c  name=FUN_00392f1c  size=64

void FUN_00392f1c(int param_1)

{
  undefined4 uVar1;

  FUN_0036e734(param_1 + 0x1a4,2);
  uVar1 = DAT_00392fa0;
  *(undefined1 *)(param_1 + 0x638) = 0xc;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = DAT_00392fa4;
  *(undefined4 *)(param_1 + 0x6c) = DAT_00392fa8;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(1,3);
}
