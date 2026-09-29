// OoT3D decomp @ 00350c68  name=FUN_00350c68  size=124

float FUN_00350c68(int param_1)

{
  uint uVar1;
  float fVar2;

  uVar1 = (uint)*(byte *)(param_1 + 0x1a5);
  if (uVar1 == 4) {
    fVar2 = *(float *)(DAT_00350ce4 + 0x10) * *(float *)(param_1 + 0x6c) * DAT_00350ce8;
  }
  else {
    if (uVar1 == 5) {
      return *(float *)(DAT_00350ce4 + 0x14) * *(float *)(param_1 + 0x6c) * DAT_00350cec;
    }
    if (uVar1 == 6) {
      return *(float *)(DAT_00350ce4 + 0x18) * *(float *)(param_1 + 0x6c) * DAT_00350cf0;
    }
    fVar2 = *(float *)(DAT_00350ce4 + uVar1 * 4);
  }
  return fVar2;
}
