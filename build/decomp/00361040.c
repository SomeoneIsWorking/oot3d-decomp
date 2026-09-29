// OoT3D decomp @ 00361040  name=FUN_00361040  size=308

void FUN_00361040(float param_1,float param_2,float param_3,int param_4,float *param_5)

{
  float fVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;

  fVar1 = DAT_0036117c;
  fVar7 = ((*param_5 + *(float *)(param_4 + 0x980)) - *(float *)(param_4 + 0x28)) * param_3;
  fVar6 = ((param_5[2] + *(float *)(param_4 + 0x988)) - *(float *)(param_4 + 0x30)) * param_3;
  param_2 = param_2 + DAT_00361178;
  fVar3 = ((param_5[1] + *(float *)(param_4 + 0x984)) - *(float *)(param_4 + 0x2c)) *
          (param_3 + DAT_00361174);
  fVar4 = ABS(fVar3);
  fVar5 = DAT_00361180;
  if (DAT_0036117c <= fVar3) {
    fVar5 = DAT_00361184;
  }
  fVar3 = DAT_0036117c;
  if ((DAT_0036117c <= fVar4) && (fVar3 = fVar4, DAT_00361188 < (int)fVar4)) {
    fVar3 = DAT_0036118c;
  }
  FUN_003705a0(fVar3 * fVar5,DAT_00361190,param_4 + 100);
  fVar5 = SQRT(fVar7 * fVar7 + fVar6 * fVar6);
  if ((param_1 <= fVar5) && (param_1 = param_2, fVar5 <= param_2)) {
    param_1 = fVar5;
  }
  *(float *)(param_4 + 0x6c) = param_1;
  uVar2 = DAT_00361194;
  if (fVar5 != param_1 && fVar5 != fVar1) {
    fVar7 = fVar7 * (param_1 / fVar5);
    fVar6 = fVar6 * (param_1 / fVar5);
  }
  FUN_003705a0(fVar7,DAT_00361194,param_4 + 0x60);
  FUN_003705a0(fVar6,uVar2,param_4 + 0x68);
  FUN_0036b96c(param_4);
  return;
}
