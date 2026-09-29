// OoT3D decomp @ 00317884  name=FUN_00317884  size=108

void FUN_00317884(int param_1)

{
  float fVar1;
  float fVar2;
  float fVar3;

  fVar2 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x5e0));
  fVar2 = fVar2 * DAT_003178f0;
  fVar3 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x5e2));
  fVar1 = DAT_003178f8;
  fVar3 = fVar2 + fVar3 * DAT_003178f4 + *(float *)(param_1 + 0xc4);
  *(float *)(param_1 + 0xc4) = fVar3;
  fVar2 = DAT_003178fc;
  if (((uint)fVar3 <= (uint)fVar1) && (fVar2 = fVar3, DAT_00317900 < (int)fVar3)) {
    fVar2 = DAT_00317904;
  }
  *(float *)(param_1 + 0xc4) = fVar2;
  return;
}
