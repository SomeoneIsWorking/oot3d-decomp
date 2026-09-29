// OoT3D decomp @ 003687b4  name=FUN_003687b4  size=228

void FUN_003687b4(float param_1,float param_2,float param_3,int param_4,float *param_5)

{
  float fVar1;
  uint in_fpscr;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  fVar1 = DAT_003688a0;
  if (param_4 != 0) {
    fVar3 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 10),(byte)(in_fpscr >> 0x15) & 3);
    fVar3 = fVar3 * DAT_00368898;
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    fVar4 = fVar4 * DAT_00368898;
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(param_4 + 0xe),(byte)(in_fpscr >> 0x15) & 3);
    fVar5 = fVar5 * DAT_00368898;
    fVar6 = SQRT(DAT_0036889c - fVar3 * fVar3);
    if ((int)ABS(fVar6) < DAT_003688a4) {
      fVar2 = SQRT(DAT_0036889c - fVar4 * fVar4);
      fVar6 = DAT_003688a0;
      fVar7 = DAT_003688a0;
      if (DAT_003688a4 <= (int)ABS(fVar2)) {
        fVar6 = -(fVar5 * (DAT_0036889c / fVar2));
        fVar7 = fVar3 * (DAT_0036889c / fVar2);
      }
    }
    else {
      fVar2 = fVar4 * (DAT_0036889c / fVar6);
      fVar7 = -(fVar5 * (DAT_0036889c / fVar6));
    }
    *param_5 = fVar6;
    param_5[4] = -fVar3 * fVar2;
    param_5[8] = fVar3 * fVar7;
    param_5[1] = fVar3;
    param_5[5] = fVar4;
    param_5[9] = fVar5;
    param_5[2] = fVar1;
    param_5[6] = fVar7;
    param_5[10] = fVar2;
    param_5[3] = param_1;
    param_5[7] = param_2;
    param_5[0xb] = param_3;
  }
  return;
}
