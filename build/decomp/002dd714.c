// OoT3D decomp @ 002dd714  name=FUN_002dd714  size=152

undefined4 FUN_002dd714(float param_1,float param_2,float param_3,float *param_4)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  fVar3 = DAT_002dd7ac;
  fVar5 = *param_4;
  if (NAN(param_1 - fVar5) || NAN(DAT_002dd7ac)) {
    param_2 = param_3;
  }
  if (param_2 == DAT_002dd7ac) {
    if (fVar5 == param_1) {
      return 1;
    }
  }
  else {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar5 < param_1) << 0x1f |
            (uint)(fVar5 == param_1) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar5) || NAN(param_1))) {
      param_2 = -param_2;
    }
    fVar4 = (float)VectorSignedToFloat((int)*(short *)(*DAT_002dd7b0 + 0x110),
                                       (byte)(uVar1 >> 0x15) & 3);
    fVar4 = fVar4 * param_2 * DAT_002dd7b4;
    fVar5 = fVar5 + fVar4;
    *param_4 = fVar5;
    fVar4 = (fVar5 - param_1) * fVar4;
    if (fVar4 < fVar3 == (NAN(fVar4) || NAN(fVar3))) {
      *param_4 = param_1;
      return 1;
    }
  }
  return 0;
}

