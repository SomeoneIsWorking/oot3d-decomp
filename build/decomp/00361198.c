// OoT3D decomp @ 00361198  name=FUN_00361198  size=328

void FUN_00361198(float param_1,int param_2,float *param_3)

{
  undefined4 uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;

  fVar4 = ((*param_3 + *(float *)(param_2 + 0x980)) - *(float *)(param_2 + 0x28)) * param_1;
  fVar5 = ((param_3[2] + *(float *)(param_2 + 0x988)) - *(float *)(param_2 + 0x30)) * param_1;
  fVar8 = DAT_003612e8;
  if (DAT_003612e0 <= fVar4) {
    fVar8 = DAT_003612e4;
  }
  fVar4 = ABS(fVar4);
  fVar6 = ABS(fVar5);
  fVar7 = DAT_003612e8;
  if (DAT_003612e0 <= fVar5) {
    fVar7 = DAT_003612e4;
  }
  fVar5 = DAT_003612e0;
  if ((DAT_003612e0 <= fVar4) && (fVar5 = fVar4, DAT_003612ec < (int)fVar4)) {
    fVar5 = DAT_003612f0;
  }
  fVar4 = DAT_003612e0;
  if ((DAT_003612e0 <= fVar6) && (fVar4 = fVar6, DAT_003612ec < (int)fVar6)) {
    fVar4 = DAT_003612f0;
  }
  param_1 = ((param_3[1] + *(float *)(param_2 + 0x984)) - *(float *)(param_2 + 0x2c)) * param_1;
  fVar2 = ABS(param_1);
  fVar6 = DAT_003612e4;
  if (param_1 < DAT_003612e0) {
    fVar6 = DAT_003612e8;
  }
  fVar3 = DAT_003612e0;
  if ((DAT_003612e0 <= fVar2) && (fVar3 = fVar2, DAT_003612ec < (int)fVar2)) {
    fVar3 = DAT_003612f0;
  }
  FUN_003705a0(fVar3 * fVar6,DAT_003612f4,param_2 + 100);
  uVar1 = DAT_003612f8;
  FUN_003705a0(fVar5 * fVar8,DAT_003612f8,param_2 + 0x60);
  FUN_003705a0(fVar4 * fVar7,uVar1,param_2 + 0x68);
  FUN_0036b96c(param_2);
  return;
}
