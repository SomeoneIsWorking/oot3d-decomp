// OoT3D decomp @ 003596d0  name=FUN_003596d0  size=156

void FUN_003596d0(int param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  undefined auStack_24 [4];
  undefined auStack_20 [4];
  
  fVar1 = (float)FUN_00338f60((int)*(short *)(param_2 + 0xbe));
  fVar2 = (float)FUN_002cfca0((int)*(short *)(param_2 + 0xbe));
  *param_4 = *param_3 * fVar1 + param_3[2] * fVar2 + *(float *)(param_2 + 0x28);
  param_4[1] = *(float *)(param_2 + 0x2c) + param_3[1];
  param_4[2] = (param_3[2] * fVar1 - *param_3 * fVar2) + *(float *)(param_2 + 0x30);
  FUN_00358410(param_1 + 0xa98,auStack_20,auStack_24,param_4);
  return;
}

