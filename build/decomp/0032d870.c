// OoT3D decomp @ 0032d870  name=FUN_0032d870  size=100

bool FUN_0032d870(float param_1,float param_2,float param_3,float param_4,float param_5,
                 float param_6,float *param_7)

{
  bool bVar1;
  float fVar2;
  float fVar3;
  float fVar4;

  fVar4 = *param_7 - param_1;
  if (fVar4 < DAT_0032d8d4) {
    fVar4 = param_1 - *param_7;
  }
  fVar2 = param_7[1] - param_2;
  if (fVar2 < DAT_0032d8d4) {
    fVar2 = param_2 - param_7[1];
  }
  fVar3 = param_7[2] - param_3;
  if (fVar3 < DAT_0032d8d4) {
    fVar3 = param_3 - param_7[2];
  }
  bVar1 = param_4 <= fVar4 || param_5 <= fVar2;
  if (param_4 > fVar4 && param_5 > fVar2) {
    bVar1 = param_6 <= fVar3;
  }
  return !bVar1;
}
