// OoT3D decomp @ 003675f8  name=FUN_003675f8  size=28

float FUN_003675f8(void)

{
  undefined4 uVar1;
  uint in_fpscr;
  float fVar2;

  uVar1 = FUN_003758b0();
  fVar2 = (float)VectorSignedToFloat(uVar1,(byte)(in_fpscr >> 0x15) & 3);
  return fVar2 * DAT_00367614;
}
