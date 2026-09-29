// OoT3D decomp @ 00254868  name=FUN_00254868  size=276

undefined4
FUN_00254868(float param_1,float param_2,float param_3,float param_4,float param_5,float param_6,
            float param_7,float param_8,float *param_9)

{
  int iVar1;
  float fVar2;
  int iVar3;
  float fVar4;
  bool bVar5;
  bool bVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  iVar3 = DAT_0025497c;
  fVar9 = param_2 * param_7 - param_3 * param_6;
  fVar11 = param_3 * param_5 - param_1 * param_7;
  fVar12 = param_1 * param_6 - param_2 * param_5;
  param_9[3] = fVar9;
  fVar7 = ABS(fVar9);
  fVar8 = ABS(param_3 * param_5 - param_1 * param_7);
  fVar10 = ABS(param_1 * param_6 - param_2 * param_5);
  param_9[4] = fVar11;
  param_9[5] = fVar12;
  fVar4 = DAT_00254980;
  iVar1 = (int)fVar7 - iVar3;
  fVar2 = fVar7;
  if ((int)fVar7 < iVar3) {
    iVar1 = (int)fVar8 - iVar3;
    fVar2 = fVar8;
  }
  bVar6 = SBORROW4((int)fVar2,iVar3);
  bVar5 = iVar1 < 0;
  if (bVar5 != bVar6) {
    bVar6 = SBORROW4((int)fVar10,iVar3);
    bVar5 = (int)fVar10 - iVar3 < 0;
  }
  if (bVar5 == bVar6) {
    bVar5 = NAN(fVar7) || NAN(fVar8);
    if (fVar7 >= fVar8) {
      bVar5 = NAN(fVar7) || NAN(fVar10);
    }
    if ((fVar7 < fVar8 || fVar7 < fVar10) == bVar5) {
      param_9[1] = (param_3 * param_8 - param_7 * param_4) / fVar9;
      param_9[2] = (param_6 * param_4 - param_2 * param_8) / fVar9;
      *param_9 = fVar4;
    }
    else {
      bVar5 = NAN(fVar8) || NAN(fVar7);
      if (fVar8 >= fVar7) {
        bVar5 = NAN(fVar8) || NAN(fVar10);
      }
      if ((fVar8 < fVar7 || fVar8 < fVar10) == bVar5) {
        param_9[2] = (param_1 * param_8 - param_5 * param_4) / fVar11;
        *param_9 = (param_7 * param_4 - param_3 * param_8) / fVar11;
        param_9[1] = fVar4;
      }
      else {
        *param_9 = (param_2 * param_8 - param_6 * param_4) / fVar12;
        param_9[1] = (param_5 * param_4 - param_1 * param_8) / fVar12;
        param_9[2] = fVar4;
      }
    }
    return 1;
  }
  return 0;
}
