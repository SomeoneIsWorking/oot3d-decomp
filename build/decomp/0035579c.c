// OoT3D decomp @ 0035579c  name=FUN_0035579c  size=104

undefined8 FUN_0035579c(float *param_1)

{
  short sVar1;
  short sVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  sVar1 = *(short *)(param_1 + 1);
  sVar2 = *(short *)((int)param_1 + 6);
  fVar6 = *param_1;
  fVar3 = (float)FUN_00338f60((int)(short)(0x3fff - sVar1));
  FUN_00338f60((int)sVar2);
  fVar4 = (float)FUN_002cfca0((int)(short)(0x3fff - sVar1));
  fVar5 = (float)FUN_002cfca0((int)sVar2);
  return CONCAT44(fVar6 * fVar3,fVar6 * fVar4 * fVar5);
}

