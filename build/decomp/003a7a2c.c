// OoT3D decomp @ 003a7a2c  name=FUN_003a7a2c  size=128

undefined4 FUN_003a7a2c(float param_1,int param_2,int param_3,int param_4)

{
  short sVar1;
  int iVar2;
  float fVar3;
  float fVar4;
  float fVar5;

  fVar4 = *(float *)(param_3 + 0x28) - *(float *)(param_2 + 0x28);
  fVar5 = *(float *)(param_3 + 0x2c) - *(float *)(param_2 + 0x2c);
  fVar3 = *(float *)(param_3 + 0x30) - *(float *)(param_2 + 0x30);
  if (SQRT(fVar4 * fVar4 + fVar5 * fVar5 + fVar3 * fVar3) < param_1) {
    sVar1 = FUN_003758b0();
    iVar2 = (int)(short)(sVar1 - *(short *)(param_2 + 0xbe));
    if (iVar2 < 0) {
      iVar2 = -iVar2;
    }
    if (iVar2 < param_4) {
      return 1;
    }
  }
  return 0;
}
