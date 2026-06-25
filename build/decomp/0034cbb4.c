// OoT3D decomp @ 0034cbb4  name=FUN_0034cbb4  size=68

void FUN_0034cbb4(int param_1,float *param_2,int param_3,int param_4,float *param_5,int param_6,
                 undefined4 param_7)

{
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
  
  if (param_3 == param_4) {
    fVar1 = param_2[4];
    fVar2 = param_2[5];
    fVar3 = param_2[6];
    fVar4 = param_2[7];
    fVar5 = param_2[8];
    fVar6 = param_2[9];
    fVar7 = param_2[10];
    fVar8 = param_2[0xb];
    fVar9 = *param_5;
    fVar10 = param_5[1];
    fVar11 = param_5[2];
    *(float *)(param_1 + 0xd4) =
         param_2[3] + *param_2 * fVar9 + param_2[1] * fVar10 + param_2[2] * fVar11;
    *(float *)(param_1 + 0xd8) = fVar4 + fVar1 * fVar9 + fVar2 * fVar10 + fVar3 * fVar11;
    *(float *)(param_1 + 0xdc) = fVar8 + fVar5 * fVar9 + fVar6 * fVar10 + fVar7 * fVar11;
    return;
  }
  if (param_3 != param_6) {
    return;
  }
  FUN_003735ac(param_1 + 0xe0,param_2,param_7);
  return;
}

