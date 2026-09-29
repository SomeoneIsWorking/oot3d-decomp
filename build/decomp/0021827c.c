// OoT3D decomp @ 0021827c  name=FUN_0021827c  size=76

float FUN_0021827c(int param_1,float *param_2)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;

  fVar1 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 10),(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
  return *(float *)(param_1 + 0x10) +
         (fVar1 * *param_2 + fVar2 * param_2[1] + fVar3 * param_2[2]) * DAT_002182c8;
}
