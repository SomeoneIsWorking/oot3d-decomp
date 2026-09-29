// OoT3D decomp @ 0034711c  name=FUN_0034711c  size=172

void FUN_0034711c(int param_1,int param_2,float *param_3,float *param_4,short param_5)

{
  float fVar1;
  float fVar2;

  fVar1 = (float)FUN_00338f60((int)*(short *)(param_2 + 0xbe));
  fVar2 = (float)FUN_002cfca0((int)*(short *)(param_2 + 0xbe));
  z_actor_003738d0(*param_4 * fVar1 + param_4[2] * fVar2 + *param_3,param_3[1] + param_4[1],
                   (param_4[2] * fVar1 - *param_4 * fVar2) + param_3[2],param_1 + 0x208c,param_1,
                   0x18,0,0,0,(int)param_5,1);
  return;
}
