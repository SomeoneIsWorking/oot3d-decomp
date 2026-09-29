// OoT3D decomp @ 002f2fdc  name=FUN_002f2fdc  size=156

void FUN_002f2fdc(int param_1,float *param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;

  iVar1 = *(int *)(*(int *)(param_1 + 4) + (*(int *)(param_1 + 0xc) + 3) * 4 + 0x1130);
  fVar2 = (float)FUN_002fd82c(iVar1);
  fVar3 = (float)FUN_002fd80c(iVar1);
  fVar6 = *(float *)(iVar1 + 0x88);
  fVar4 = (float)FUN_002fd7f0(iVar1);
  fVar5 = (float)FUN_002fd7d4(iVar1);
  *param_2 = fVar2;
  param_2[1] = fVar3;
  param_2[2] = fVar6;
  param_2[3] = fVar2;
  param_2[4] = fVar3 + fVar5;
  param_2[5] = fVar6;
  param_2[6] = fVar2 + fVar4;
  param_2[7] = fVar3;
  param_2[8] = fVar6;
  param_2[9] = fVar2 + fVar4;
  param_2[10] = fVar3 + fVar5;
  param_2[0xb] = fVar6;
  return;
}
