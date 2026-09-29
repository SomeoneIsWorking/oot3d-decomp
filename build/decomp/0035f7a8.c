// OoT3D decomp @ 0035f7a8  name=FUN_0035f7a8  size=136

int FUN_0035f7a8(int param_1,float *param_2)

{
  short sVar1;
  short sVar2;
  short sVar3;
  float fVar4;
  float fVar5;

  sVar1 = FUN_003758b0(param_2[2] - *(float *)(param_1 + 0x30),*param_2 - *(float *)(param_1 + 0x28)
                      );
  fVar5 = *param_2 - *(float *)(param_1 + 0x28);
  sVar3 = *(short *)(param_1 + 0x82);
  fVar4 = param_2[2] - *(float *)(param_1 + 0x30);
  sVar2 = FUN_003758b0(SQRT(fVar5 * fVar5 + fVar4 * fVar4),*(float *)(param_1 + 0x2c) - param_2[1]);
  if ((short)(sVar1 - sVar3) < 0) {
    sVar3 = 1;
  }
  else {
    sVar3 = -1;
  }
  return (int)(short)(sVar3 * (sVar2 + -0x4000));
}
