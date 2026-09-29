// OoT3D decomp @ 00111254  name=FUN_00111254  size=84

void FUN_00111254(int param_1)

{
  short sVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_lr;

  sVar1 = *(short *)(param_1 + 0x234) + -1;
  *(short *)(param_1 + 0x234) = sVar1;
  if (sVar1 == 0x15) {
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(200,400);
  }
  FUN_0036a024(param_1);
  if (*(short *)(param_1 + 0x234) < 0) {
    *(undefined4 *)(param_1 + 0x230) = DAT_0015f258;
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(0xc,0x28,extraout_r2,extraout_r3,unaff_r4,unaff_r5,unaff_r6,unaff_lr);
  }
  return;
}
