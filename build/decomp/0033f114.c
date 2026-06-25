// OoT3D decomp @ 0033f114  name=FUN_0033f114  size=272

float FUN_0033f114(float param_1,float param_2,float param_3)

{
  bool bVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  
  if (param_2 == DAT_0033f224) {
    param_3 = DAT_0033f224;
  }
  if (param_2 == DAT_0033f224 && param_1 == DAT_0033f224) {
    return param_3;
  }
  fVar6 = -param_1;
  if (param_2 < DAT_0033f224 == (NAN(param_2) || NAN(DAT_0033f224))) {
    if (param_1 < DAT_0033f224 == (NAN(param_1) || NAN(DAT_0033f224))) {
      fVar5 = param_2;
      fVar4 = param_1;
      fVar8 = DAT_0033f228;
      fVar7 = DAT_0033f224;
      if (param_2 < param_1 == (NAN(param_2) || NAN(param_1))) {
LAB_0033f1f4:
        fVar6 = (float)FUN_002e1adc(fVar4 / param_2);
        return fVar6 + fVar7;
      }
    }
    else {
      bVar1 = param_2 < fVar6;
      bVar2 = NAN(param_2);
      fVar5 = fVar6;
      fVar4 = param_2;
      param_2 = fVar6;
      fVar8 = DAT_0033f224;
      fVar7 = DAT_0033f22c;
      if (bVar1 != (bVar2 || NAN(fVar6))) goto LAB_0033f1f4;
    }
  }
  else {
    fVar3 = -param_2;
    if (param_1 < DAT_0033f224 == (NAN(param_1) || NAN(DAT_0033f224))) {
      fVar5 = param_1;
      fVar4 = fVar3;
      param_2 = param_1;
      fVar8 = DAT_0033f230;
      fVar7 = DAT_0033f228;
      if (fVar3 < param_1 != (NAN(fVar3) || NAN(param_1))) goto LAB_0033f1f4;
    }
    else {
      fVar5 = fVar3;
      fVar4 = fVar6;
      param_2 = fVar3;
      fVar8 = DAT_0033f22c;
      fVar7 = DAT_0033f234;
      if (fVar3 < fVar6 == (NAN(fVar3) || NAN(fVar6))) goto LAB_0033f1f4;
    }
  }
  fVar6 = (float)FUN_002e1adc(fVar5 / fVar4);
  return fVar8 - fVar6;
}

