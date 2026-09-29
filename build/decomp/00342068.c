// OoT3D decomp @ 00342068  name=FUN_00342068  size=444

undefined4 FUN_00342068(int param_1,int param_2)

{
  uint uVar1;
  byte bVar2;
  bool bVar3;
  bool bVar4;
  uint in_fpscr;
  uint uVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;

  if (((*(short *)(param_2 + 0x104) == 0x5a) && (DAT_00342224 <= *(int *)(param_1 + 0x6c))) &&
     ((~*(ushort *)(DAT_00342228 + 0xfe) & 0xf) != 0)) {
    fVar6 = (float)VectorSignedToFloat((int)DAT_0034222c[2],(byte)(in_fpscr >> 0x15) & 3);
    fVar7 = (float)VectorSignedToFloat((int)DAT_0034222c[3],(byte)(in_fpscr >> 0x15) & 3);
    fVar9 = (float)VectorSignedToFloat((int)DAT_0034222c[4],(byte)(in_fpscr >> 0x15) & 3);
    fVar8 = fVar7 + fVar6 + fVar9;
    uVar1 = in_fpscr & 0xfffffff;
    uVar5 = uVar1 | (uint)(fVar6 < fVar8) << 0x1f | (uint)(fVar6 == fVar8) << 0x1e;
    bVar2 = (byte)(uVar5 >> 0x18);
    bVar3 = (bool)(bVar2 >> 7);
    bVar4 = (bool)(bVar2 >> 6 & 1);
    fVar7 = fVar6;
    if (!bVar4 && bVar3 == (NAN(fVar6) || NAN(fVar8))) {
      fVar7 = fVar8;
      fVar9 = fVar6;
    }
    fVar10 = (float)VectorSignedToFloat((int)*DAT_0034222c,(byte)(uVar5 >> 0x15) & 3);
    if (!bVar4 && bVar3 == (NAN(fVar6) || NAN(fVar8))) {
      fVar8 = fVar9;
    }
    fVar9 = *(float *)(param_1 + 0x30);
    uVar5 = uVar1 | (uint)(fVar9 < fVar10) << 0x1f | (uint)(fVar9 == fVar10) << 0x1e;
    bVar2 = (byte)(uVar5 >> 0x18);
    if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar9) || NAN(fVar10))) {
      fVar6 = (float)VectorSignedToFloat((int)DAT_0034222c[1],(byte)(uVar5 >> 0x15) & 3);
      uVar5 = uVar1 | (uint)(fVar6 <= fVar9) << 0x1d;
      if (!SUB41(uVar5 >> 0x1d,0)) {
        fVar6 = *(float *)(param_1 + 0x28);
        uVar5 = uVar1 | (uint)(fVar6 < fVar7) << 0x1f | (uint)(fVar6 == fVar7) << 0x1e;
        bVar2 = (byte)(uVar5 >> 0x18);
        if ((!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar6) || NAN(fVar7))) &&
           (uVar5 = uVar1 | (uint)(fVar8 <= fVar6) << 0x1d, !SUB41(uVar5 >> 0x1d,0))) {
          if (((int)DAT_0034222c[5] - (int)DAT_0034222c[6] < (int)*(short *)(param_1 + 0x36)) &&
             ((int)*(short *)(param_1 + 0x36) < (int)DAT_0034222c[5] + (int)DAT_0034222c[6])) {
            return 1;
          }
        }
      }
    }
    fVar7 = (float)VectorSignedToFloat((int)DAT_0034222c[0x10],(byte)(uVar5 >> 0x15) & 3);
    fVar8 = (float)VectorSignedToFloat((int)DAT_0034222c[0x11],(byte)(uVar5 >> 0x15) & 3);
    fVar6 = (float)VectorSignedToFloat((int)DAT_0034222c[0x12],(byte)(uVar5 >> 0x15) & 3);
    fVar6 = fVar8 + fVar7 + fVar6;
    uVar1 = uVar5 & 0xfffffff | (uint)(fVar7 < fVar6) << 0x1f | (uint)(fVar7 == fVar6) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    fVar8 = fVar6;
    if (!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar7) || NAN(fVar6))) {
      fVar8 = fVar7;
      fVar7 = fVar6;
    }
    fVar6 = (float)VectorSignedToFloat((int)DAT_0034222c[0xe],(byte)(uVar1 >> 0x15) & 3);
    uVar1 = uVar5 & 0xfffffff | (uint)(fVar9 < fVar6) << 0x1f | (uint)(fVar9 == fVar6) << 0x1e;
    bVar2 = (byte)(uVar1 >> 0x18);
    if (((!(bool)(bVar2 >> 6 & 1) && (bool)(bVar2 >> 7) == (NAN(fVar9) || NAN(fVar6))) &&
        (fVar6 = (float)VectorSignedToFloat((int)DAT_0034222c[0xf],(byte)(uVar1 >> 0x15) & 3),
        fVar9 < fVar6)) &&
       ((fVar7 < *(float *)(param_1 + 0x28) && (*(float *)(param_1 + 0x28) < fVar8)))) {
      if (((int)DAT_0034222c[0x13] - (int)DAT_0034222c[0x14] < (int)*(short *)(param_1 + 0x36)) &&
         ((int)*(short *)(param_1 + 0x36) < (int)DAT_0034222c[0x13] + (int)DAT_0034222c[0x14])) {
        return 1;
      }
    }
  }
  return 0;
}
