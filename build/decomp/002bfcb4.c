// OoT3D decomp @ 002bfcb4  name=FUN_002bfcb4  size=192

void FUN_002bfcb4(int param_1,int param_2,undefined4 *param_3)

{
  short *psVar1;
  uint in_fpscr;
  undefined4 uVar2;
  
  psVar1 = (short *)(param_2 + (*(ushort *)(param_1 + 2) & 0xffff1fff) * 6);
  uVar2 = VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
  *param_3 = uVar2;
  uVar2 = VectorSignedToFloat((int)psVar1[1],(byte)(in_fpscr >> 0x15) & 3);
  param_3[1] = uVar2;
  uVar2 = VectorSignedToFloat((int)psVar1[2],(byte)(in_fpscr >> 0x15) & 3);
  param_3[2] = uVar2;
  psVar1 = (short *)(param_2 + (*(ushort *)(param_1 + 4) & 0xffff1fff) * 6);
  uVar2 = VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
  param_3[3] = uVar2;
  uVar2 = VectorSignedToFloat((int)psVar1[1],(byte)(in_fpscr >> 0x15) & 3);
  param_3[4] = uVar2;
  uVar2 = VectorSignedToFloat((int)psVar1[2],(byte)(in_fpscr >> 0x15) & 3);
  param_3[5] = uVar2;
  psVar1 = (short *)(param_2 + (uint)*(ushort *)(param_1 + 6) * 6);
  uVar2 = VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
  param_3[6] = uVar2;
  uVar2 = VectorSignedToFloat((int)psVar1[1],(byte)(in_fpscr >> 0x15) & 3);
  param_3[7] = uVar2;
  uVar2 = VectorSignedToFloat((int)psVar1[2],(byte)(in_fpscr >> 0x15) & 3);
  param_3[8] = uVar2;
  return;
}

