// OoT3D decomp @ 00332fc0  name=FUN_00332fc0  size=168

void FUN_00332fc0(undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  fVar2 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat(param_8,(byte)(in_fpscr >> 0x15) & 3);
  fVar3 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat(param_9,(byte)(in_fpscr >> 0x15) & 3);
  fVar1 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
  fVar4 = (float)VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (fVar3 - fVar6) * DAT_00333068;
  fVar3 = (fVar1 - fVar7) * DAT_00333068;
  fVar1 = (fVar4 - DAT_0033306c) * DAT_00333068;
  *param_2 = (fVar2 - fVar5) * DAT_00333068;
  param_2[1] = fVar6;
  param_2[2] = fVar3;
  param_2[3] = fVar1;
  return;
}
