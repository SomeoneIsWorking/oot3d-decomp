// OoT3D decomp @ 001d9d50  name=FUN_001d9d50  size=160

void FUN_001d9d50(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_2 + *(short *)(iRam001d9df0 + param_2) * 4 + 0xa54);
  fVar3 = *(float *)(iVar1 + 0x8c) - *(float *)(param_1 + 0x28);
  fVar2 = *(float *)(iVar1 + 0x94) - *(float *)(param_1 + 0x30);
  FUN_0033d364(SQRT(fVar3 * fVar3 + fVar2 * fVar2),uRam001d9df4);
  FUN_0035e3a4(param_1 + 0x9e0,1,(int)*(short *)(param_1 + 0xc0e));
  FUN_0035e3a4(param_1 + 0x9e0,0,(int)*(short *)(param_1 + 0xc0c));
  FUN_0035e330(param_1 + 0x9e0);
  FUN_0035e240(param_1 + 0x95c,param_1 + 0x148,uRam001d9dfc,uRam001d9df8,param_1,0);
  return;
}

