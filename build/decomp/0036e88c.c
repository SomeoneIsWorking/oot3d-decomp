// OoT3D decomp @ 0036e88c  name=FUN_0036e88c  size=236

void FUN_0036e88c(int param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  uint in_fpscr;
  float fVar1;
  float fVar2;
  float fVar3;

  fVar2 = DAT_0036e978;
  fVar1 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  FUN_00371234(fVar1 * DAT_0036e978,param_1,param_5);
  if (param_3 != 0) {
    fVar1 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
    FUN_003735e8(fVar1 * fVar2,param_1,1);
  }
  if (param_2 != 0) {
    fVar1 = (float)VectorSignedToFloat(param_2,(byte)(in_fpscr >> 0x15) & 3);
    fVar1 = fVar1 * fVar2;
    if (fVar1 != DAT_0036e97c) {
      fVar2 = (float)FUN_003727f0(fVar1);
      fVar1 = (float)FUN_00372674(fVar1);
      fVar3 = *(float *)(param_1 + 4);
      *(float *)(param_1 + 4) = fVar3 * fVar1 + *(float *)(param_1 + 8) * fVar2;
      *(float *)(param_1 + 8) = *(float *)(param_1 + 8) * fVar1 - fVar3 * fVar2;
      fVar3 = *(float *)(param_1 + 0x14);
      *(float *)(param_1 + 0x14) = fVar3 * fVar1 + *(float *)(param_1 + 0x18) * fVar2;
      *(float *)(param_1 + 0x18) = *(float *)(param_1 + 0x18) * fVar1 - fVar3 * fVar2;
      fVar3 = *(float *)(param_1 + 0x24);
      *(float *)(param_1 + 0x24) = fVar3 * fVar1 + *(float *)(param_1 + 0x28) * fVar2;
      *(float *)(param_1 + 0x28) = *(float *)(param_1 + 0x28) * fVar1 - fVar3 * fVar2;
    }
  }
  return;
}
