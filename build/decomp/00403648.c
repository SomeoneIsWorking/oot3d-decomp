// OoT3D decomp @ 00403648  name=FUN_00403648  size=116

void FUN_00403648(undefined4 param_1,int param_2,float *param_3,float *param_4)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar3 = *param_3 - *(float *)(param_2 + 0x30);
  fVar1 = param_3[1] - *(float *)(param_2 + 0x34);
  fVar2 = param_3[2] - *(float *)(param_2 + 0x38);
  fVar2 = SQRT(fVar3 * fVar3 + fVar1 * fVar1 + fVar2 * fVar2);
  fVar1 = DAT_004036bc;
  if (*(float *)(param_2 + 0x4c) < fVar2) {
    fVar1 = ((fVar2 - *(float *)(param_2 + 0x4c)) / *(float *)(param_2 + 0x50)) *
            *(float *)(param_2 + 0x58);
    if (*(float *)(param_2 + 0x5c) < fVar1) {
      fVar1 = *(float *)(param_2 + 0x5c);
    }
  }
  *param_4 = fVar1;
  return;
}
