// OoT3D decomp @ 00403814  name=FUN_00403814  size=312

void FUN_00403814(int param_1,int param_2,float *param_3,float *param_4)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint in_fpscr;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;

  fVar5 = *(float *)(param_1 + 0x24);
  if (fVar5 == DAT_0040394c) {
    *param_4 = DAT_00403950;
    return;
  }
  fVar8 = *param_3 - *(float *)(param_2 + 0x30);
  fVar9 = param_3[1] - *(float *)(param_2 + 0x34);
  fVar10 = param_3[2] - *(float *)(param_2 + 0x38);
  fVar6 = SQRT(fVar8 * fVar8 + fVar9 * fVar9 + fVar10 * fVar10);
  uVar1 = in_fpscr & 0xfffffff | (uint)(fVar6 < DAT_0040394c) << 0x1f |
          (uint)(fVar6 == DAT_0040394c) << 0x1e;
  bVar2 = (byte)(uVar1 >> 0x18);
  bVar3 = (bool)(bVar2 >> 7);
  bVar4 = (bool)(bVar2 >> 6 & 1);
  if (!bVar4 && bVar3 == (NAN(fVar6) || NAN(DAT_0040394c))) {
    fVar7 = DAT_00403950 / fVar6;
    fVar8 = fVar8 * fVar7;
    fVar9 = fVar9 * fVar7;
    fVar10 = fVar10 * fVar7;
  }
  fVar7 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)((int)param_3 + 0x29),(byte)(uVar1 >> 0x15) & 3);
  if (bVar4 || bVar3 != (NAN(fVar6) || NAN(DAT_0040394c))) {
    fVar11 = -SQRT(param_3[3] * param_3[3] + param_3[4] * param_3[4] + param_3[5] * param_3[5]);
    fVar6 = *(float *)(param_2 + 0x3c);
    fVar6 = SQRT(fVar6 * fVar6 + *(float *)(param_2 + 0x40) * *(float *)(param_2 + 0x40) +
                 *(float *)(param_2 + 0x44) * *(float *)(param_2 + 0x44));
  }
  else {
    fVar11 = -(fVar8 * param_3[3] + fVar9 * param_3[4]) + -(fVar10 * param_3[5]);
    fVar6 = -(fVar8 * *(float *)(param_2 + 0x3c) + fVar9 * *(float *)(param_2 + 0x40) +
             fVar10 * *(float *)(param_2 + 0x44));
  }
  fVar11 = fVar11 * fVar7 * DAT_00403954;
  fVar6 = fVar6 * fVar7 * DAT_00403954;
  fVar8 = DAT_0040394c;
  if ((fVar6 <= fVar5) && (fVar8 = DAT_00403958, fVar11 < fVar5)) {
    fVar8 = (fVar5 - fVar6) / (fVar5 - fVar11);
  }
  *param_4 = fVar8;
  return;
}
