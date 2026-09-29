// OoT3D decomp @ 00339f1c  name=FUN_00339f1c  size=52

void FUN_00339f1c(int param_1,int param_2)

{
  float fVar1;
  float fVar2;

  fVar2 = *(float *)(param_2 + 0x28) - *(float *)(param_1 + 0x28);
  fVar1 = *(float *)(param_2 + 0x30) - *(float *)(param_1 + 0x30);
  FUN_003758b0(SQRT(fVar2 * fVar2 + fVar1 * fVar1),
               *(float *)(param_1 + 0x2c) - *(float *)(param_2 + 0x2c));
  return;
}
