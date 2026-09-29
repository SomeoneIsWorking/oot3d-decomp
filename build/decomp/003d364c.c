// OoT3D decomp @ 003d364c  name=FUN_003d364c  size=164

void FUN_003d364c(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  uint in_fpscr;

  FUN_003731e0(param_1 + 0x1a4);
  FUN_00373500(DAT_003d372c,DAT_003d3728,DAT_003d3724,param_1 + 0x6c);
  sVar1 = FUN_0036e800(param_1,*(undefined4 *)(DAT_003d3730 + param_2));
  FUN_00370084(param_1 + 0x36,(int)(short)(sVar1 + -0x8000),3,2000);
  FUN_00370084(param_1 + 0xbe,(int)*(short *)(param_1 + 0x36),2,DAT_003d3734);
  if (*(short *)(param_1 + 0x724) == 0) {
    uVar2 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(DAT_003d3738 + 4));
    VectorSignedToFloat(uVar2,(byte)(in_fpscr >> 0x15) & 3);
                    /* WARNING: Subroutine does not return */
    FUN_003702c8(uVar2,10,0x1e);
  }
  return;
}
