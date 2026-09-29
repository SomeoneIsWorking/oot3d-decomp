// OoT3D decomp @ 0032c78c  name=FUN_0032c78c  size=28

void FUN_0032c78c(undefined4 *param_1,float *param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  undefined4 uVar2;
  float fVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  float fVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  uVar1 = param_3[1];
  uVar2 = param_3[2];
  fVar3 = (float)param_3[3];
  uVar4 = param_3[4];
  uVar5 = param_3[5];
  uVar6 = param_3[6];
  fVar7 = (float)param_3[7];
  uVar8 = param_3[8];
  uVar9 = param_3[9];
  uVar10 = param_3[10];
  fVar11 = (float)param_3[0xb];
  fVar12 = *param_2;
  fVar13 = param_2[1];
  fVar14 = param_2[2];
  *param_1 = *param_3;
  param_1[1] = uVar1;
  param_1[2] = uVar2;
  param_1[3] = fVar3 + fVar12;
  param_1[4] = uVar4;
  param_1[5] = uVar5;
  param_1[6] = uVar6;
  param_1[7] = fVar7 + fVar13;
  param_1[8] = uVar8;
  param_1[9] = uVar9;
  param_1[10] = uVar10;
  param_1[0xb] = fVar11 + fVar14;
  return;
}
