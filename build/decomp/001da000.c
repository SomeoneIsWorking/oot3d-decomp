// OoT3D decomp @ 001da000  name=FUN_001da000  size=196

void FUN_001da000(int param_1,int param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  
  iVar1 = *(int *)(param_2 + *(short *)(iRam001da0c4 + param_2) * 4 + 0xa54);
  fVar3 = *(float *)(iVar1 + 0x8c) - *(float *)(param_1 + 0x28);
  fVar2 = *(float *)(iVar1 + 0x94) - *(float *)(param_1 + 0x30);
  FUN_0033d364(SQRT(fVar3 * fVar3 + fVar2 * fVar2),uRam001da0c8);
  if (*(int *)(param_1 + 0x1d4) == 2) {
    FUN_0037266c();
  }
  else {
    FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
  }
  FUN_0035e3a4(param_1 + 0x228,0,(int)*(short *)(param_1 + 0x47e));
  FUN_0035e3a4(param_1 + 0x228,1,(int)*(short *)(param_1 + 0x480));
  FUN_0035e330(param_1 + 0x228);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,uRam001da0d0,uRam001da0cc,param_1,0);
  return;
}

