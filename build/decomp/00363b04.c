// OoT3D decomp @ 00363b04  name=FUN_00363b04  size=76

void FUN_00363b04(int param_1)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;

  uVar1 = FUN_0036ae14(param_1 + 0x1a4,0xd);
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  *(float *)(param_1 + 0x278) = fVar2 * DAT_00363bfc;
  FUN_00374a58(DAT_00363c00,param_1 + 0x1a4,0xd);
  *(undefined4 *)(param_1 + 0x238) = DAT_00363c04;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
