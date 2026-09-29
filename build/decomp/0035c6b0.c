// OoT3D decomp @ 0035c6b0  name=FUN_0035c6b0  size=84

void FUN_0035c6b0(byte *param_1,undefined4 *param_2)

{
  short *psVar1;
  uint in_fpscr;
  undefined4 uVar2;

  if (param_1 != (byte *)0x0) {
    psVar1 = (short *)((uint)*param_1 * 6 + -6 + *(int *)(param_1 + 4));
    uVar2 = VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
    *param_2 = uVar2;
    uVar2 = VectorSignedToFloat((int)psVar1[1],(byte)(in_fpscr >> 0x15) & 3);
    param_2[1] = uVar2;
    uVar2 = VectorSignedToFloat((int)psVar1[2],(byte)(in_fpscr >> 0x15) & 3);
    param_2[2] = uVar2;
  }
  return;
}
