// OoT3D decomp @ 00348854  name=FUN_00348854  size=124

float FUN_00348854(int param_1)

{
  uint uVar1;
  float fVar2;

  uVar1 = (uint)*(byte *)(param_1 + 0x1a5);
  if (uVar1 == 2) {
    fVar2 = *(float *)(DAT_003488d0 + 8) * *(float *)(param_1 + 0x6c) * DAT_003488d4;
  }
  else {
    if (uVar1 == 3) {
      return *(float *)(DAT_003488d0 + 0xc) * *(float *)(param_1 + 0x6c) * DAT_003488d8;
    }
    if (uVar1 == 4) {
      return *(float *)(DAT_003488d0 + 0x10) * *(float *)(param_1 + 0x6c) * DAT_003488dc;
    }
    fVar2 = *(float *)(DAT_003488d0 + uVar1 * 4);
  }
  return fVar2;
}
