// OoT3D decomp @ 004095e4  name=FUN_004095e4  size=80

undefined4 FUN_004095e4(float param_1)

{
  undefined4 uVar1;

  if ((DAT_00409634 < param_1) && ((uint)((int)param_1 << 1) >> 0x18 != 0xff)) {
    if ((int)(param_1 * DAT_00409638) < DAT_0040963c) {
      uVar1 = VectorFloatToUnsigned(param_1 * DAT_00409638,3);
    }
    else {
      uVar1 = 0xffffff;
    }
    return uVar1;
  }
  return 0;
}
