// OoT3D decomp @ 00367e88  name=FUN_00367e88  size=104

float FUN_00367e88(float param_1,undefined4 param_2,short param_3,short param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined1 auStack_1c [4];
  short local_18;
  short local_16;

  FUN_00342e8c(auStack_1c,param_2);
  fVar1 = (float)FUN_00338f60((int)local_18);
  fVar2 = (float)FUN_00338f60((int)(short)(param_3 - local_16));
  fVar3 = (float)FUN_00338f60((int)(short)(param_3 - param_4));
  return ABS(fVar1 * fVar2) * param_1 * fVar3;
}
