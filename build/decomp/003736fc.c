// OoT3D decomp @ 003736fc  name=FUN_003736fc  size=140

undefined4 FUN_003736fc(float param_1,float param_2,int param_3)

{
  float fVar1;
  float fVar2;

  fVar2 = *(float *)(param_3 + 0x4c);
  param_2 = *(float *)(param_3 + 0x40) * param_2;
  fVar1 = *(float *)(param_3 + 0x3c) - param_2;
  if (fVar1 < fRam00373788) {
    fVar1 = fVar2 + fVar1;
  }
  else if (fVar2 <= fVar1) {
    fVar1 = fVar1 - fVar2;
  }
  if ((param_1 == fRam00373788) && (fRam00373788 < param_2)) {
    param_1 = fVar2;
  }
  param_1 = (fVar1 + param_2) - param_1;
  if ((fRam00373788 <= param_1 * param_2) && ((param_1 - param_2) * param_2 < fRam00373788)) {
    return 1;
  }
  return 0;
}
