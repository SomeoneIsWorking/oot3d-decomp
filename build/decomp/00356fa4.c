// OoT3D decomp @ 00356fa4  name=FUN_00356fa4  size=232

byte FUN_00356fa4(float *param_1,float *param_2,float *param_3)

{
  byte bVar1;
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
  
  fVar3 = *param_1;
  fVar4 = param_1[1];
  fVar2 = param_1[2];
  fVar8 = *param_3 + param_3[1];
  fVar5 = param_3[2];
  fVar6 = fVar3 + fVar4 + fVar2;
  fVar7 = fVar8 + fVar5;
  bVar1 = fVar6 != fVar7 && fVar6 < fVar7 == (NAN(fVar6) || NAN(fVar7));
  fVar7 = param_3[1] - *param_2;
  fVar9 = (fVar4 - fVar3) + fVar2;
  fVar11 = fVar7 + fVar5;
  fVar10 = (fVar4 - fVar3) - fVar2;
  fVar6 = param_2[2];
  if (fVar9 != fVar11 && fVar9 < fVar11 == (NAN(fVar9) || NAN(fVar11))) {
    bVar1 = bVar1 | 2;
  }
  fVar7 = fVar7 - fVar6;
  fVar9 = (fVar3 + fVar4) - fVar2;
  fVar8 = fVar8 - fVar6;
  if (fVar10 != fVar7 && fVar10 < fVar7 == (NAN(fVar10) || NAN(fVar7))) {
    bVar1 = bVar1 | 4;
  }
  if (fVar9 != fVar8 && fVar9 < fVar8 == (NAN(fVar9) || NAN(fVar8))) {
    bVar1 = bVar1 | 8;
  }
  fVar8 = (fVar3 - fVar4) + fVar2;
  fVar7 = (*param_3 - param_2[1]) + fVar5;
  if (fVar8 != fVar7 && fVar8 < fVar7 == (NAN(fVar8) || NAN(fVar7))) {
    bVar1 = bVar1 | 0x10;
  }
  fVar7 = -*param_2 - param_2[1];
  fVar8 = (-fVar3 - fVar4) + fVar2;
  fVar5 = fVar7 + fVar5;
  fVar2 = (-fVar3 - fVar4) - fVar2;
  fVar7 = fVar7 - fVar6;
  if (fVar8 != fVar5 && fVar8 < fVar5 == (NAN(fVar8) || NAN(fVar5))) {
    bVar1 = bVar1 | 0x60;
  }
  if (fVar2 != fVar7 && fVar2 < fVar7 == (NAN(fVar2) || NAN(fVar7))) {
    bVar1 = bVar1 | 0x80;
  }
  return bVar1;
}

