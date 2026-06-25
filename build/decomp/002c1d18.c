// OoT3D decomp @ 002c1d18  name=FUN_002c1d18  size=248

void FUN_002c1d18(int param_1,int param_2,float *param_3,undefined4 param_4,undefined4 param_5,
                 undefined4 param_6)

{
  float fVar1;
  float fVar2;
  float local_3c;
  float local_38;
  float local_34;
  undefined4 local_30;
  float local_2c;
  undefined4 local_28;
  
  local_30 = *(undefined4 *)(param_2 + 0x28);
  local_2c = *(float *)(param_2 + 0x2c) + param_3[1];
  local_28 = *(undefined4 *)(param_2 + 0x30);
  fVar1 = (float)FUN_00338f60((int)*(short *)(param_2 + 0xbe));
  fVar2 = (float)FUN_002cfca0((int)*(short *)(param_2 + 0xbe));
  local_3c = *param_3 * fVar1 + param_3[2] * fVar2 + *(float *)(param_2 + 0x28);
  local_38 = *(float *)(param_2 + 0x2c) + param_3[1];
  local_34 = (param_3[2] * fVar1 - *param_3 * fVar2) + *(float *)(param_2 + 0x30);
  FUN_00369f9c(param_1 + 0xa98,&local_30,&local_3c,param_6,param_4,1,0,0,1,param_5);
  return;
}

