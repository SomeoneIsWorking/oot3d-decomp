// OoT3D decomp @ 001c603c  name=FUN_001c603c  size=120

void FUN_001c603c(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  uint in_fpscr;

  uVar2 = FUN_0036ae14(param_1 + 0x1a4,0x10);
  uVar1 = DAT_001c60c8;
  uVar2 = VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00375c08(DAT_001c60cc,DAT_001c60c8,uVar2,DAT_001c60c4,param_1 + 0x1a4,0x10,0);
  *(undefined4 *)(param_1 + 0x1050) = DAT_001c60d0;
  *(undefined4 *)(param_1 + 0x1054) = DAT_001c60d4;
  *(undefined4 *)(param_1 + 0x22c) = DAT_001c60d8;
  *(undefined4 *)(param_1 + 0x6c) = uVar1;
  *(undefined4 *)(param_1 + 100) = uVar1;
  *(undefined4 *)(param_1 + 0x70) = uVar1;
                    /* WARNING: Subroutine does not return */
  FUN_003702c8(0x1e,0x3c);
}
