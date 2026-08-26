// OoT3D decomp @ 002d77dc  name=FUN_002d77dc  size=116

void FUN_002d77dc(int param_1,float *param_2,float *param_3,undefined4 *param_4)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  float fVar4;
  bool bVar5;
  
  bVar5 = false;
  if (*param_2 == *param_3) {
    bVar5 = param_2[2] == param_3[2];
  }
  if (bVar5) {
    *param_2 = *param_2 + fRam002d7850;
  }
  fVar1 = param_2[1];
  fVar4 = param_2[2];
  *(float *)(param_1 + 0x30) = *param_2;
  *(float *)(param_1 + 0x34) = fVar1;
  *(float *)(param_1 + 0x38) = fVar4;
  fVar1 = param_3[1];
  fVar4 = param_3[2];
  *(float *)(param_1 + 0x3c) = *param_3;
  *(float *)(param_1 + 0x40) = fVar1;
  *(float *)(param_1 + 0x44) = fVar4;
  uVar2 = param_4[1];
  uVar3 = param_4[2];
  *(undefined4 *)(param_1 + 0x48) = *param_4;
  *(undefined4 *)(param_1 + 0x4c) = uVar2;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(byte *)(param_1 + 0x1d8) = *(byte *)(param_1 + 0x1d8) | 1;
  return;
}

