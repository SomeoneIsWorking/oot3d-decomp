// OoT3D decomp @ 001112c8  name=FUN_001112c8  size=76

void FUN_001112c8(int param_1)

{
  float fVar1;

  FUN_00372aa8(param_1 + 0x244,uRam00111314,0x168);
  fVar1 = (float)FUN_002cfca0((int)*(short *)(param_1 + 0x244));
  *(float *)(param_1 + 0x58) = fVar1 * fRam00111318;
  fVar1 = (float)FUN_00338f60((int)*(short *)(param_1 + 0x244));
  fVar1 = fVar1 * fRam0011131c;
  *(float *)(param_1 + 0x5c) = fVar1;
  *(float *)(param_1 + 0x54) = fVar1;
  return;
}
