// OoT3D decomp @ 002cdb0c  name=FUN_002cdb0c  size=72

undefined4 FUN_002cdb0c(float param_1)

{
  undefined4 uVar1;

  uVar1 = 0;
  if (((DAT_002cdb54 < param_1) && ((uint)((int)param_1 << 1) >> 0x18 != 0xff)) &&
     (uVar1 = DAT_002cdb5c, (int)(param_1 * DAT_002cdb58) < 0x45000000)) {
    uVar1 = VectorFloatToUnsigned(param_1 * DAT_002cdb58,3);
  }
  return uVar1;
}
