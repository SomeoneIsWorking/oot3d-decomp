// OoT3D decomp @ 0035c628  name=FUN_0035c628  size=128

float FUN_0035c628(int param_1,int param_2,int param_3,undefined2 *param_4)

{
  short *psVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;

  if (param_2 == 0) {
    return DAT_0035c6a8;
  }
  psVar1 = (short *)(*(int *)(param_2 + 4) + param_3 * 6);
  fVar2 = (float)VectorSignedToFloat((int)*psVar1,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = fVar2 - *(float *)(param_1 + 0x28);
  fVar3 = (float)VectorSignedToFloat((int)psVar1[2],(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = fVar3 - *(float *)(param_1 + 0x30);
  fVar4 = (float)FUN_003696ec(fVar2,fVar3);
  *param_4 = (short)(int)(fVar4 * DAT_0035c6ac);
  return fVar2 * fVar2 + fVar3 * fVar3;
}
