// OoT3D decomp @ 0036b1e0  name=FUN_0036b1e0  size=224

undefined4 FUN_0036b1e0(float param_1,int param_2)

{
  uint in_fpscr;
  uint uVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  
  fVar2 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0036b2c0 + 0x110),
                                     (byte)(in_fpscr >> 0x15) & 3);
  fVar4 = *(float *)(param_2 + 0x40) * fVar2 * DAT_0036b2c4;
  fVar3 = *(float *)(param_2 + 0x4c);
  fVar2 = *(float *)(param_2 + 0x3c) - fVar4;
  uVar1 = in_fpscr & 0xfffffff;
  if (fVar2 < DAT_0036b2c8) {
    fVar2 = fVar3 + fVar2;
  }
  else {
    uVar1 = uVar1 | (uint)(fVar3 == fVar2) << 0x1e;
    if (fVar3 < fVar2 || SUB41(uVar1 >> 0x1e,0)) {
      fVar2 = fVar2 - fVar3;
    }
  }
  uVar1 = uVar1 & 0xfffffff;
  if ((param_1 == DAT_0036b2c8) &&
     (uVar1 = uVar1 | (uint)(fVar4 < DAT_0036b2c8) << 0x1f,
     fVar4 != DAT_0036b2c8 && SUB41(uVar1 >> 0x1f,0) == (NAN(fVar4) || NAN(DAT_0036b2c8)))) {
    param_1 = fVar3;
  }
  fVar3 = (float)VectorSignedToFloat((int)(((fVar2 + fVar4) - param_1) * DAT_0036b2cc),
                                     (byte)(uVar1 >> 0x15) & 3);
  fVar2 = (float)VectorSignedToFloat((int)(fVar4 * DAT_0036b2cc),(byte)(uVar1 >> 0x15) & 3);
  fVar2 = fVar2 * DAT_0036b2d0;
  fVar4 = fVar3 * DAT_0036b2d0 * fVar2;
  if ((fVar4 < DAT_0036b2c8 == (NAN(fVar4) || NAN(DAT_0036b2c8))) &&
     ((fVar3 * DAT_0036b2d0 - fVar2) * fVar2 < DAT_0036b2c8)) {
    return 1;
  }
  return 0;
}

