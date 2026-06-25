// OoT3D decomp @ 002bf5b0  name=FUN_002bf5b0  size=204

void FUN_002bf5b0(int param_1,float *param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = (int)((*param_2 - *(float *)(param_1 + 4)) * *(float *)(param_1 + 0x34));
  *param_3 = iVar1;
  iVar2 = (int)((param_2[1] - *(float *)(param_1 + 8)) * *(float *)(param_1 + 0x38));
  param_3[1] = iVar2;
  iVar3 = (int)((param_2[2] - *(float *)(param_1 + 0xc)) * *(float *)(param_1 + 0x3c));
  param_3[2] = iVar3;
  if (iVar1 < 0) {
    *param_3 = 0;
  }
  else if (*(int *)(param_1 + 0x1c) <= iVar1) {
    *param_3 = *(int *)(param_1 + 0x1c) + -1;
  }
  if (iVar2 < 0) {
    param_3[1] = 0;
  }
  else if (*(int *)(param_1 + 0x20) <= iVar2) {
    param_3[1] = *(int *)(param_1 + 0x20) + -1;
  }
  if (-1 < iVar3) {
    if (*(int *)(param_1 + 0x24) <= iVar3) {
      param_3[2] = *(int *)(param_1 + 0x24) + -1;
    }
    return;
  }
  param_3[2] = 0;
  return;
}

