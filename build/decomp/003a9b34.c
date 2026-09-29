// OoT3D decomp @ 003a9b34  name=FUN_003a9b34  size=92

void FUN_003a9b34(undefined4 param_1,undefined4 param_2,int param_3)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;

  fVar1 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x5c),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x60),(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = (float)FUN_002cfca0((int)(short)(int)((DAT_003a9b90 / fVar1) * fVar2));
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_3 + 0x56),(byte)(in_fpscr >> 0x15) & 3);
  *(short *)(param_3 + 0x5a) = (short)(int)(fVar1 * fVar2);
  return;
}
