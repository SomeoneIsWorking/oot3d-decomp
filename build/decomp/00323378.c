// OoT3D decomp @ 00323378  name=FUN_00323378  size=352

void FUN_00323378(float *param_1,int param_2,undefined4 param_3)

{
  bool bVar1;
  uint uVar2;
  byte bVar3;
  float *pfVar4;
  uint uVar5;
  uint in_fpscr;
  float fVar6;
  float fVar7;
  float fVar8;

  if (*(char *)(DAT_003234d8 + 0x38) != '\0') {
    *(char *)(DAT_003234d8 + 0x38) = *(char *)(DAT_003234d8 + 0x38) + -1;
    return;
  }
  pfVar4 = *(float **)(DAT_003234d8 + 0x80);
  fVar8 = SQRT(*param_1 * *param_1 + param_1[2] * param_1[2]);
  if (pfVar4 == (float *)0x0) {
    *(float **)(DAT_003234d8 + 0x80) = param_1;
    FUN_0036ec40(3,param_2,0);
    FUN_00356018(3,7,2);
    fVar6 = fVar8;
  }
  else {
    fVar6 = SQRT(*pfVar4 * *pfVar4 + pfVar4[2] * pfVar4[2]);
    uVar5 = in_fpscr & 0xfffffff | (uint)(fVar6 < fVar8) << 0x1f | (uint)(fVar6 == fVar8) << 0x1e;
    in_fpscr = uVar5 | (uint)(NAN(fVar6) || NAN(fVar8)) << 0x1c;
    bVar3 = (byte)(uVar5 >> 0x18);
    if (!(bool)(bVar3 >> 6 & 1) && bVar3 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
      *(float **)(DAT_003234d8 + 0x80) = param_1;
      fVar6 = fVar8;
    }
  }
  fVar8 = param_1[1];
  uVar5 = in_fpscr & 0xfffffff;
  if (fVar8 < DAT_003234dc) {
    fVar8 = -fVar8;
  }
  fVar7 = (float)VectorUnsignedToFloat(param_3,(byte)(uVar5 >> 0x15) & 3);
  fVar7 = fVar7 * DAT_003234e0;
  bVar1 = fVar7 <= fVar8;
  uVar2 = uVar5 | (uint)(fVar8 < fVar7) << 0x1f | (uint)(fVar8 == fVar7) << 0x1e;
  bVar3 = (byte)(uVar2 >> 0x18);
  if ((bool)(bVar3 >> 6 & 1) || (bool)(bVar3 >> 7) != (NAN(fVar8) || NAN(fVar7))) {
    fVar8 = (float)VectorUnsignedToFloat(param_3,(byte)(uVar2 >> 0x15) & 3);
    bVar1 = fVar8 <= fVar6;
    uVar2 = uVar5;
  }
  if (bVar1) {
    uVar5 = 0;
  }
  else {
    fVar8 = (float)VectorUnsignedToFloat(param_3,(byte)(uVar2 >> 0x15) & 3);
    uVar5 = VectorFloatToUnsigned((DAT_003234e4 - fVar6 / fVar8) * DAT_003234e8,3);
    uVar5 = uVar5 & 0xff;
  }
  if (param_2 != DAT_003234ec) {
    FUN_0033c9fc((int)(char)uVar5);
  }
  FUN_00355fac(3,3,uVar5,0);
  FUN_00355fac(0,3,0x7f - uVar5 & 0xff,0);
  return;
}
