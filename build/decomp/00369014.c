// OoT3D decomp @ 00369014  name=FUN_00369014  size=268

void FUN_00369014(float param_1,undefined4 *param_2,int param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  float fVar5;
  
  uVar1 = DAT_00369124;
  fVar2 = DAT_00369120;
  if (param_3 == 1) {
    if (param_1 != DAT_00369120) {
      fVar2 = (float)FUN_003727f0(param_1);
      fVar3 = (float)FUN_00372674(param_1);
      fVar5 = (float)param_2[1];
      param_2[1] = fVar5 * fVar3 + (float)param_2[2] * fVar2;
      param_2[2] = (float)param_2[2] * fVar3 - fVar5 * fVar2;
      fVar5 = (float)param_2[5];
      param_2[5] = fVar5 * fVar3 + (float)param_2[6] * fVar2;
      param_2[6] = (float)param_2[6] * fVar3 - fVar5 * fVar2;
      fVar5 = (float)param_2[9];
      param_2[9] = fVar5 * fVar3 + (float)param_2[10] * fVar2;
      param_2[10] = (float)param_2[10] * fVar3 - fVar5 * fVar2;
    }
    return;
  }
  uVar4 = DAT_00369124;
  fVar3 = DAT_00369120;
  if (param_1 != DAT_00369120) {
    fVar3 = (float)FUN_003727f0(param_1);
    uVar4 = FUN_00372674(param_1);
  }
  *param_2 = uVar1;
  param_2[1] = fVar2;
  param_2[2] = fVar2;
  param_2[3] = fVar2;
  param_2[4] = fVar2;
  param_2[5] = uVar4;
  param_2[6] = -fVar3;
  param_2[7] = fVar2;
  param_2[8] = fVar2;
  param_2[9] = fVar3;
  param_2[10] = uVar4;
  param_2[0xb] = fVar2;
  return;
}

