// OoT3D decomp @ 0033f114  name=FUN_0033f114  size=272

float FUN_0033f114(float param_1,float param_2,float param_3)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  
  if (param_2 == fRam0033f224) {
    param_3 = fRam0033f224;
  }
  if (param_2 == fRam0033f224 && param_1 == fRam0033f224) {
    return param_3;
  }
  fVar5 = -param_1;
  if (param_2 < fRam0033f224) {
    fVar2 = -param_2;
    if (param_1 < fRam0033f224) {
      fVar4 = fVar2;
      fVar3 = fVar5;
      param_2 = fVar2;
      fVar7 = fRam0033f22c;
      fVar6 = fRam0033f234;
      if (fVar5 <= fVar2) goto LAB_0033f1f4;
    }
    else {
      fVar4 = param_1;
      fVar3 = fVar2;
      param_2 = param_1;
      fVar7 = fRam0033f230;
      fVar6 = fRam0033f228;
      if (fVar2 < param_1) goto LAB_0033f1f4;
    }
  }
  else if (param_1 < fRam0033f224) {
    bVar1 = param_2 < fVar5;
    fVar4 = fVar5;
    fVar3 = param_2;
    param_2 = fVar5;
    fVar7 = fRam0033f224;
    fVar6 = fRam0033f22c;
    if (bVar1) goto LAB_0033f1f4;
  }
  else {
    fVar4 = param_2;
    fVar3 = param_1;
    fVar7 = fRam0033f228;
    fVar6 = fRam0033f224;
    if (param_1 <= param_2) {
LAB_0033f1f4:
      fVar5 = (float)func_0x002e1adc(fVar3 / param_2);
      return fVar5 + fVar6;
    }
  }
  fVar5 = (float)func_0x002e1adc(fVar4 / fVar3);
  return fVar7 - fVar5;
}

