// OoT3D decomp @ 0034ad70  name=FUN_0034ad70  size=208

void FUN_0034ad70(float param_1,int param_2,float *param_3,undefined4 param_4)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  byte bVar5;
  float fVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  
  fVar7 = (float)FUN_0036b4d0(DAT_0034ae40,param_2 + 0x254);
  fVar8 = DAT_0034ae50;
  fVar6 = DAT_0034ae4c;
  fVar9 = *param_3;
  fVar10 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0034ae44 + 0x6e),
                                      (byte)(in_fpscr >> 0x15) & 3);
  fVar10 = fVar10 * DAT_0034ae48 * DAT_0034ae4c;
  uVar4 = in_fpscr & 0xfffffff | (uint)(fVar9 < fVar10) << 0x1f | (uint)(fVar9 == fVar10) << 0x1e;
  bVar5 = (byte)(uVar4 >> 0x18);
  if (!(bool)(bVar5 >> 6 & 1) && (bool)(bVar5 >> 7) == (NAN(fVar9) || NAN(fVar10))) {
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0034ae44 + 0x6e),
                                       (byte)(uVar4 >> 0x15) & 3);
    fVar9 = fVar9 * DAT_0034ae48 * DAT_0034ae4c;
  }
  bVar1 = fVar7 < DAT_0034ae50;
  bVar2 = fVar7 != DAT_0034ae50;
  bVar3 = NAN(DAT_0034ae50);
  *param_3 = fVar9;
  fVar10 = fVar8;
  if ((bVar2 && bVar1 == (NAN(fVar7) || bVar3)) && ((int)fVar7 < DAT_0034ae54)) {
    fVar8 = fVar7 * DAT_0034ae58;
    fVar10 = param_1;
  }
  FUN_002dd714(fVar10 * fVar6,fVar8,DAT_0034ae60 + ABS(fVar9) * DAT_0034ae5c,param_3);
  FUN_00370378(param_2 + 0x2220,param_4,0x640);
  return;
}

