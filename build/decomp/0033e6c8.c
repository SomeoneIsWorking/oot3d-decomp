// OoT3D decomp @ 0033e6c8  name=FUN_0033e6c8  size=296

void FUN_0033e6c8(int param_1,float *param_2,float *param_3)

{
  float fVar1;
  float fVar2;
  uint in_fpscr;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  undefined1 auStack_20 [10];
  short local_16;
  short local_14;
  short local_12;

  fVar3 = (float)FUN_00257054(param_1 + 0xa98,auStack_20);
  fVar2 = DAT_0033e7f8;
  fVar1 = DAT_0033e7f4;
  if ((uint)fVar3 < (uint)DAT_0033e7f0) {
    fVar4 = (float)VectorSignedToFloat((int)local_16,(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat((int)local_14,(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * DAT_0033e7fc;
    fVar7 = fVar7 * DAT_0033e7fc;
    fVar8 = (float)VectorSignedToFloat((int)local_12,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = SQRT(DAT_0033e7f4 - fVar4 * fVar4);
    fVar8 = fVar8 * DAT_0033e7fc;
    *param_2 = fVar6;
    fVar5 = fVar2;
    fVar1 = fVar2;
    if (fVar6 != fVar2) {
      fVar5 = -fVar8 * fVar6;
      fVar1 = fVar7 * fVar6;
    }
    param_2[4] = -fVar4 * fVar1;
    param_2[8] = fVar4 * fVar5;
    param_2[1] = fVar4;
    param_2[5] = fVar7;
    param_2[9] = fVar8;
    param_2[6] = fVar5;
    param_2[10] = fVar1;
    param_2[2] = fVar2;
    param_2[3] = *param_3;
    param_2[7] = fVar3;
    param_2[0xb] = param_3[2];
    return;
  }
  param_2[1] = DAT_0033e7f8;
  param_2[8] = fVar2;
  param_2[4] = fVar2;
  *param_2 = fVar2;
  param_2[5] = fVar1;
  param_2[2] = fVar2;
  param_2[10] = fVar2;
  param_2[6] = fVar2;
  param_2[9] = fVar2;
  param_2[3] = *param_3;
  param_2[7] = param_3[1];
  param_2[0xb] = param_3[2];
  return;
}
