// OoT3D decomp @ 002db07c  name=FUN_002db07c  size=88

void FUN_002db07c(int param_1,float *param_2)

{
  float fVar1;
  undefined4 uVar2;

  fVar1 = DAT_002db0d4;
  uVar2 = VectorFloatToUnsigned(*param_2 * DAT_002db0d4,3);
  *(char *)(param_1 + 0xa0) = (char)uVar2;
  uVar2 = VectorFloatToUnsigned(param_2[1] * fVar1,3);
  *(char *)(param_1 + 0xa1) = (char)uVar2;
  uVar2 = VectorFloatToUnsigned(param_2[2] * fVar1,3);
  *(char *)(param_1 + 0xa2) = (char)uVar2;
  uVar2 = VectorFloatToUnsigned(param_2[3] * fVar1,3);
  *(char *)(param_1 + 0xa3) = (char)uVar2;
  return;
}
