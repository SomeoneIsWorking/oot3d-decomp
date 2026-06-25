// OoT3D decomp @ 0035708c  name=FUN_0035708c  size=264

uint FUN_0035708c(float *param_1,float *param_2,float *param_3)

{
  uint uVar1;
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
  
  fVar4 = param_3[1];
  fVar2 = param_1[1];
  fVar3 = *param_1;
  fVar5 = *param_2;
  fVar9 = fVar2 - fVar3;
  fVar6 = fVar4 - fVar5;
  fVar7 = param_2[1];
  fVar8 = *param_3;
  uVar1 = (uint)(fVar9 != fVar6 && fVar9 < fVar6 == (NAN(fVar9) || NAN(fVar6)));
  fVar6 = fVar3 + fVar2;
  fVar10 = fVar8 + fVar4;
  if (fVar9 < fVar7 - fVar8) {
    uVar1 = uVar1 | 2;
  }
  if (fVar6 != fVar10 && fVar6 < fVar10 == (NAN(fVar6) || NAN(fVar10))) {
    uVar1 = uVar1 | 4;
  }
  fVar9 = param_1[2];
  fVar10 = param_2[2];
  if (fVar6 < fVar5 + fVar7) {
    uVar1 = uVar1 | 8;
  }
  fVar12 = fVar2 - fVar9;
  fVar6 = fVar4 - fVar10;
  fVar11 = param_3[2];
  if (fVar12 != fVar6 && fVar12 < fVar6 == (NAN(fVar12) || NAN(fVar6))) {
    uVar1 = uVar1 | 0x10;
  }
  fVar2 = fVar9 + fVar2;
  fVar4 = fVar11 + fVar4;
  if (fVar12 < fVar7 - fVar11) {
    uVar1 = uVar1 | 0x20;
  }
  if (fVar2 != fVar4 && fVar2 < fVar4 == (NAN(fVar2) || NAN(fVar4))) {
    uVar1 = uVar1 | 0x40;
  }
  fVar4 = fVar3 - fVar9;
  fVar6 = fVar8 - fVar10;
  if (fVar2 < fVar10 + fVar7) {
    uVar1 = uVar1 | 0x80;
  }
  if (fVar4 != fVar6 && fVar4 < fVar6 == (NAN(fVar4) || NAN(fVar6))) {
    uVar1 = uVar1 | 0x100;
  }
  fVar9 = fVar9 + fVar3;
  fVar8 = fVar11 + fVar8;
  if (fVar4 < fVar5 - fVar11) {
    uVar1 = uVar1 | 0x200;
  }
  if (fVar9 != fVar8 && fVar9 < fVar8 == (NAN(fVar9) || NAN(fVar8))) {
    uVar1 = uVar1 | 0x400;
  }
  if (fVar9 < fVar10 + fVar5) {
    uVar1 = uVar1 | 0x800;
  }
  return uVar1;
}

