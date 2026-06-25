// OoT3D decomp @ 003705a0  name=FUN_003705a0  size=136

undefined4 FUN_003705a0(float param_1,float param_2,float *param_3)

{
  uint uVar1;
  byte bVar2;
  float fVar3;
  uint in_fpscr;
  float fVar4;
  float fVar5;
  
  fVar3 = DAT_00370628;
  fVar4 = *param_3;
  if (param_2 == DAT_00370628) {
    if (fVar4 == param_1) {
      return 1;
    }
  }
  else {
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar4 < param_1) << 0x1f |
            (uint)(fVar4 == param_1) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar4) || NAN(param_1))) {
      param_2 = -param_2;
    }
    fVar5 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0037062c + 0x110),
                                       (byte)(uVar1 >> 0x15) & 3);
    fVar5 = fVar5 * param_2 * DAT_00370630;
    fVar4 = fVar4 + fVar5;
    *param_3 = fVar4;
    fVar5 = (fVar4 - param_1) * fVar5;
    if (fVar5 < fVar3 == (NAN(fVar5) || NAN(fVar3))) {
      *param_3 = param_1;
      return 1;
    }
  }
  return 0;
}

