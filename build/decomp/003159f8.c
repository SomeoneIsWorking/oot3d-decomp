// OoT3D decomp @ 003159f8  name=FUN_003159f8  size=200

void FUN_003159f8(undefined4 param_1,undefined4 param_2,float param_3,float param_4,float *param_5,
                 float *param_6)

{
  undefined4 uVar1;
  float fVar2;

  uVar1 = DAT_00315ac0;
  fVar2 = *param_6 - *param_5;
  fVar2 = SQRT(fVar2 * fVar2 + (param_6[1] - param_5[1]) * (param_6[1] - param_5[1]) +
               (param_6[2] - param_5[2]) * (param_6[2] - param_5[2]));
  if ((param_3 <= fVar2) || (param_4 < fVar2)) {
    FUN_0036e168(*param_5,param_1,param_2,param_6);
    FUN_0036e168(param_5[1],param_1,param_2,uVar1,param_6 + 1);
    FUN_0036e168(param_5[2],param_1,param_2,uVar1,param_6 + 2);
  }
  return;
}
