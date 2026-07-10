// OoT3D decomp @ 002bb8dc  name=FUN_002bb8dc  size=492

float FUN_002bb8dc(float param_1)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint in_fpscr;
  uint uVar4;
  float fVar5;
  float fVar6;
  
  bVar1 = false;
  if (uRam002bbac8 < (int)param_1 * 2 + 0x99000000U) {
    if ((~(uint)param_1 << 1) >> 0x18 == 0) {
      fVar5 = fRam002bbacc;
      if (param_1 != -INFINITY) {
        fVar5 = param_1 + param_1;
      }
      return fVar5;
    }
    if ((uint)((int)param_1 * 2) < 0x67000000) {
      return fRam002bbad0;
    }
    if (uRam002bbad4 < (uint)((int)param_1 << 1)) {
      FUN_002eb01c(2);
      if (((uint)param_1 & 0x80000000) == 0) {
        return fRam002bbad8 * fRam002bbad8;
      }
      goto code_r0x002c0b24;
    }
    bVar1 = true;
  }
  fVar5 = fRam002bbae0;
  if (((uint)param_1 & 0x80000000) != 0) {
    fVar5 = fRam002bbae4;
  }
  uVar4 = (uint)(fVar5 + param_1 * fRam002bbadc);
  uVar3 = uVar4 & 3;
  fVar5 = (float)VectorSignedToFloat(uVar4,(byte)(in_fpscr >> 0x15) & 3);
  fVar5 = (param_1 - fVar5 * fRam002bbae8) - fVar5 * fRam002bbaec;
  iVar2 = (int)uVar4 >> 2;
  fVar5 = *(float *)(iRam002bbb00 + 0x2bb9d8 + uVar3 * 4) +
          *(float *)(iRam002bbb04 + 0x2bb9e8 + uVar3 * 4) *
          (fRam002bbafc + fVar5 * (fRam002bbaf8 + fVar5 * (fRam002bbaf4 + fVar5 * fRam002bbaf0))) *
          fVar5 + *(float *)(iRam002bbb08 + 0x2bb9f8 + uVar3 * 4);
  if (!bVar1) {
    fVar6 = (float)VectorSignedToFloat(iVar2,(byte)(in_fpscr >> 0x15) & 3);
    fVar6 = (float)VectorFloatToUnsigned(fRam002bbb10 + fVar6 * fRam002bbb0c,3);
    return fVar6 * fVar5;
  }
  fVar5 = (float)((iVar2 - iVar2 / 2) * 0x800000 + 0x3f800000) *
          (float)((iVar2 / 2) * 0x800000 + 0x3f800000) * fVar5;
  if (fVar5 != 0.0) {
    if (fVar5 == INFINITY) {
      FUN_002eb01c(2);
      return fRam002bbad8 * fRam002bbad8;
    }
    iVar2 = FUN_002c0b34(fVar5);
    if (iVar2 == 4) {
      FUN_002c0b24();
    }
    return fVar5;
  }
  FUN_002eb01c(2);
code_r0x002c0b24:
  return fRam002c0b30 * fRam002c0b30;
}

