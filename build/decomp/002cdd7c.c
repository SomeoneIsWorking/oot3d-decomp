// OoT3D decomp @ 002cdd7c  name=FUN_002cdd7c  size=72

undefined4 FUN_002cdd7c(float param_1)

{
  float fVar1;

  fVar1 = DAT_002cddc8;
  if ((param_1 <= DAT_002cddc8) && (fVar1 = param_1, param_1 < DAT_002cddc4)) {
    fVar1 = DAT_002cddc4;
  }
  return *(undefined4 *)(DAT_002cddd0 + ((int)(fVar1 * DAT_002cddcc) + 0x388) * 4);
}
