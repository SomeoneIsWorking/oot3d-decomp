// OoT3D decomp @ 0033eeb8  name=FUN_0033eeb8  size=544

undefined4
FUN_0033eeb8(float param_1,float param_2,int param_3,short **param_4,float *param_5,short **param_6)

{
  ushort *puVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  float *pfVar6;
  float *pfVar7;
  int iVar8;
  short *psVar9;
  short *in_r12;
  byte bVar10;
  bool bVar11;
  byte bVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  
  pfVar6 = DAT_0033f0dc;
  puVar5 = DAT_0033f0d8;
  if (*(short *)(param_3 + 0x104) == 0x58) {
    if (((DAT_0033f0d8[1] & 1) == 0) &&
       (iVar8 = FUN_003679b4(DAT_0033f0d8 + 1), fVar14 = DAT_0033f0e8, fVar13 = DAT_0033f0e4,
       iVar8 != 0)) {
      *pfVar6 = DAT_0033f0e0;
      pfVar6[1] = fVar13;
      pfVar6[2] = fVar14;
    }
    pfVar7 = DAT_0033f0ec;
    if (((*puVar5 & 1) == 0) &&
       (iVar8 = FUN_003679b4(DAT_0033f0d8), fVar14 = DAT_0033f0f8, fVar13 = DAT_0033f0f4, iVar8 != 0
       )) {
      *pfVar7 = DAT_0033f0f0;
      pfVar7[1] = fVar13;
      pfVar7[2] = fVar14;
    }
    psVar9 = DAT_0033f0fc;
    uVar2 = in_fpscr & 0xfffffff;
    in_fpscr = uVar2 | (uint)(param_1 <= *pfVar6) << 0x1d;
    if (!SUB41(in_fpscr >> 0x1d,0)) {
      fVar13 = *pfVar7;
      uVar3 = uVar2 | (uint)(fVar13 < param_1) << 0x1f | (uint)(fVar13 == param_1) << 0x1e;
      in_fpscr = uVar3 | (uint)(NAN(fVar13) || NAN(param_1)) << 0x1c;
      bVar12 = (byte)(uVar3 >> 0x18);
      bVar10 = bVar12 >> 7;
      bVar11 = (bool)(bVar12 >> 6 & 1);
      bVar12 = (byte)(in_fpscr >> 0x1c) & 1;
      if (!bVar11 && bVar10 == bVar12) {
        fVar13 = *param_5;
      }
      if (!bVar11 && bVar10 == bVar12) {
        fVar14 = pfVar6[1];
        in_fpscr = uVar2 | (uint)(fVar13 < fVar14) << 0x1f | (uint)(fVar13 == fVar14) << 0x1e |
                   (uint)(NAN(fVar13) || NAN(fVar14)) << 0x1c;
        bVar12 = (byte)(in_fpscr >> 0x18);
        bVar10 = bVar12 >> 7;
        bVar11 = (bool)(bVar12 >> 6 & 1);
        bVar12 = bVar12 >> 4 & 1;
      }
      if (!bVar11 && bVar10 == bVar12) {
        uVar2 = in_fpscr & 0xfffffff;
        in_fpscr = uVar2 | (uint)(pfVar7[1] <= fVar13) << 0x1d;
        bVar11 = SUB41(in_fpscr >> 0x1d,0);
        if (!bVar11) {
          in_fpscr = uVar2 | (uint)(param_2 <= pfVar6[2]) << 0x1d;
          bVar11 = SUB41(in_fpscr >> 0x1d,0);
        }
        if (!bVar11) {
          fVar13 = pfVar7[2];
          uVar2 = in_fpscr & 0xfffffff | (uint)(fVar13 < param_2) << 0x1f |
                  (uint)(fVar13 == param_2) << 0x1e;
          in_fpscr = uVar2 | (uint)(NAN(fVar13) || NAN(param_2)) << 0x1c;
          bVar12 = (byte)(uVar2 >> 0x18);
          if (!(bool)(bVar12 >> 6 & 1) && bVar12 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
            *param_6 = DAT_0033f0fc;
            fVar13 = (float)VectorSignedToFloat((int)psVar9[1],(byte)(in_fpscr >> 0x15) & 3);
            *param_5 = fVar13;
            return 1;
          }
        }
      }
    }
  }
  psVar9 = *param_4;
  puVar1 = (ushort *)(psVar9 + 10);
  bVar11 = *puVar1 != 0;
  if (bVar11) {
    psVar9 = *(short **)(psVar9 + 0x14);
  }
  bVar4 = psVar9 != (short *)0x0;
  if (bVar11 && bVar4) {
    in_r12 = psVar9 + (uint)*puVar1 * 8;
  }
  if ((bVar11 && bVar4) && in_r12 < psVar9 || ((!bVar11 || !bVar4) || in_r12 == psVar9)) {
    return 0;
  }
  do {
    uVar2 = (*(uint *)(psVar9 + 6) << 0xd) >> 0x1a;
    if (((int)*(char *)(DAT_0033f100 + param_3) == uVar2 || uVar2 == 0x3f) &&
       ((*(uint *)(psVar9 + 6) & 0x80000) == 0)) {
      fVar13 = (float)VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x15) & 3);
      uVar2 = in_fpscr & 0xfffffff;
      in_fpscr = uVar2 | (uint)(param_1 <= fVar13) << 0x1d;
      if (!SUB41(in_fpscr >> 0x1d,0)) {
        fVar13 = (float)VectorSignedToFloat((int)*psVar9 + (int)psVar9[3],
                                            (byte)(in_fpscr >> 0x15) & 3);
        uVar3 = uVar2 | (uint)(fVar13 < param_1) << 0x1f | (uint)(fVar13 == param_1) << 0x1e;
        in_fpscr = uVar3 | (uint)(NAN(fVar13) || NAN(param_1)) << 0x1c;
        bVar12 = (byte)(uVar3 >> 0x18);
        if (!(bool)(bVar12 >> 6 & 1) && bVar12 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
          fVar13 = (float)VectorSignedToFloat((int)psVar9[2],(byte)(in_fpscr >> 0x15) & 3);
          in_fpscr = uVar2 | (uint)(param_2 <= fVar13) << 0x1d;
          if (!SUB41(in_fpscr >> 0x1d,0)) {
            fVar13 = (float)VectorSignedToFloat((int)psVar9[2] + (int)psVar9[4],
                                                (byte)(in_fpscr >> 0x15) & 3);
            uVar2 = uVar2 | (uint)(fVar13 < param_2) << 0x1f | (uint)(fVar13 == param_2) << 0x1e;
            in_fpscr = uVar2 | (uint)(NAN(fVar13) || NAN(param_2)) << 0x1c;
            bVar12 = (byte)(uVar2 >> 0x18);
            if (!(bool)(bVar12 >> 6 & 1) && bVar12 >> 7 == ((byte)(in_fpscr >> 0x1c) & 1)) {
              *param_6 = psVar9;
              fVar13 = (float)VectorSignedToFloat((int)psVar9[1],(byte)(in_fpscr >> 0x15) & 3);
              *param_5 = fVar13;
              return 1;
            }
          }
        }
      }
    }
    psVar9 = psVar9 + 8;
  } while (psVar9 < in_r12);
  return 0;
}

