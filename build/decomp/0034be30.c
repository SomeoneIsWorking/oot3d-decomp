// OoT3D decomp @ 0034be30  name=FUN_0034be30  size=116

void FUN_0034be30(int param_1,int param_2)

{
  short *psVar1;
  uint in_fpscr;
  undefined4 uVar2;

  psVar1 = (short *)(DAT_0034bea4 + param_2 * 0xc);
  uVar2 = VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x1008) = uVar2;
  uVar2 = VectorSignedToFloat((int)psVar1[1],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x100c) = uVar2;
  uVar2 = VectorSignedToFloat((int)psVar1[2],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x1010) = uVar2;
  uVar2 = VectorSignedToFloat((int)psVar1[3],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x1014) = uVar2;
  uVar2 = VectorSignedToFloat((int)psVar1[4],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x1018) = uVar2;
  uVar2 = VectorSignedToFloat((int)psVar1[5],(byte)(in_fpscr >> 0x15) & 3);
  *(undefined4 *)(param_1 + 0x101c) = uVar2;
  return;
}
