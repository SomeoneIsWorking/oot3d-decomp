// OoT3D decomp @ 003534b8  name=FUN_003534b8  size=104

void FUN_003534b8(float *param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                 int param_7,int param_8)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar1 = DAT_00353520;
  fVar5 = (float)VectorSignedToFloat(param_2 - param_6,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat(param_3 - param_7,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorSignedToFloat(param_4 - param_8,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorUnsignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
  fVar2 = fVar2 * DAT_00353520;
  *param_1 = fVar5 * DAT_00353520;
  param_1[1] = fVar2;
  param_1[2] = fVar3 * fVar1;
  param_1[3] = fVar4 * fVar1;
  return;
}
