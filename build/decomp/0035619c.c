// OoT3D decomp @ 0035619c  name=FUN_0035619c  size=280

void FUN_0035619c(undefined4 param_1,float *param_2,float *param_3,undefined4 param_4,
                 undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                 undefined4 param_9,undefined4 param_10)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  fVar3 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = (float)VectorSignedToFloat(param_5,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (float)VectorSignedToFloat(param_6,(byte)(in_fpscr >> 0x15) & 3);
  fVar8 = (float)VectorSignedToFloat(param_7,(byte)(in_fpscr >> 0x15) & 3);
  fVar10 = (float)VectorSignedToFloat(param_8,(byte)(in_fpscr >> 0x15) & 3);
  fVar11 = (float)VectorSignedToFloat(param_9,(byte)(in_fpscr >> 0x15) & 3);
  fVar12 = (float)VectorSignedToFloat(param_10,(byte)(in_fpscr >> 0x15) & 3);
  fVar9 = fVar9 * DAT_003562b4;
  fVar5 = fVar5 * DAT_003562b4;
  fVar8 = fVar8 * DAT_003562b4;
  fVar6 = DAT_003562bc[1];
  fVar1 = DAT_003562bc[2];
  fVar2 = DAT_003562bc[3];
  fVar4 = fVar10 * DAT_003562b4 * *DAT_003562bc;
  fVar7 = fVar11 * DAT_003562b4 * fVar6;
  fVar10 = fVar12 * DAT_003562b4 * fVar1;
  fVar11 = DAT_003562b8 * fVar2;
  *param_2 = fVar3 * DAT_003562b4 * *DAT_003562bc - fVar4;
  param_2[1] = fVar9 * fVar6 - fVar7;
  param_2[2] = fVar5 * fVar1 - fVar10;
  param_2[3] = fVar8 * fVar2 - fVar11;
  *param_3 = fVar4;
  param_3[1] = fVar7;
  param_3[2] = fVar10;
  param_3[3] = fVar11;
  return;
}
