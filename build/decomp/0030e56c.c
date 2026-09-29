// OoT3D decomp @ 0030e56c  name=FUN_0030e56c  size=96

uint FUN_0030e56c(float param_1)

{
  uint uVar1;
  uint uVar2;

  if (param_1 != DAT_0030e5cc && (uint)((int)param_1 << 1) >> 0x18 != 0xff) {
    param_1 = param_1 * DAT_0030e5d0;
    if (param_1 < DAT_0030e5cc) {
      param_1 = -param_1;
      uVar1 = 0x800;
    }
    else {
      uVar1 = 0;
    }
    if (0x44ffffff < (int)param_1) {
      param_1 = DAT_0030e5d4;
    }
    uVar2 = VectorFloatToUnsigned(param_1,3);
    return uVar1 | uVar2;
  }
  return 0;
}
