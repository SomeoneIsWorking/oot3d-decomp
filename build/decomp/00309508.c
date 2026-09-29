// OoT3D decomp @ 00309508  name=FUN_00309508  size=60

void FUN_00309508(float param_1,int param_2)

{
  float fVar1;

  fVar1 = param_1 + DAT_00309544;
  if (param_1 + DAT_00309544 < DAT_00309548) {
    fVar1 = DAT_00309548;
  }
  if (*(float *)(param_2 + 0x44) != fVar1) {
    *(float *)(param_2 + 0x44) = fVar1;
    *(ushort *)(param_2 + 0x20) = *(ushort *)(param_2 + 0x20) | 8;
  }
  return;
}
