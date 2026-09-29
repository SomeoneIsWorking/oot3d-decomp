// OoT3D decomp @ 003a93cc  name=FUN_003a93cc  size=140

void FUN_003a93cc(undefined4 param_1,float *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  fVar1 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  fVar7 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
  fVar6 = (float)VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = fVar5 * DAT_003a9458;
  fVar7 = fVar7 * DAT_003a9458;
  fVar6 = fVar6 * DAT_003a9458;
  fVar2 = DAT_003a945c[1];
  fVar3 = DAT_003a945c[2];
  fVar4 = DAT_003a945c[3];
  *param_2 = fVar1 * DAT_003a9458 * *DAT_003a945c;
  param_2[1] = fVar5 * fVar2;
  param_2[2] = fVar7 * fVar3;
  param_2[3] = fVar6 * fVar4;
  return;
}
