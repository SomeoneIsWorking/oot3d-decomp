// OoT3D decomp @ 002cdbfc  name=FUN_002cdbfc  size=372

void FUN_002cdbfc(int *param_1)

{
  uint uVar1;
  uint uVar2;
  float *pfVar3;
  char cVar4;
  byte bVar5;
  float fVar6;
  float fVar7;
  int iVar8;
  float *pfVar9;
  float *pfVar10;
  float *pfVar11;
  int iVar12;
  uint in_fpscr;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_224 [129];
  
  fVar7 = fRam002cdd78;
  fVar6 = fRam002cdd74;
  fVar17 = fRam002cdd70;
  iVar12 = 0;
  do {
    fVar13 = (float)VectorSignedToFloat(iVar12,(byte)(in_fpscr >> 0x15) & 3);
    fVar15 = (float)param_1[5];
    fVar14 = -(((float)param_1[0x15] + (float)param_1[0x14] * fVar13 * fVar17) /
              ((float)param_1[0x19] + (float)param_1[0x18] * fVar13 * fVar17));
    uVar1 = in_fpscr & 0xfffffff;
    uVar2 = uVar1 | (uint)(fVar15 < fVar14) << 0x1f | (uint)(fVar15 == fVar14) << 0x1e;
    in_fpscr = uVar2 | (uint)(NAN(fVar15) || NAN(fVar14)) << 0x1c;
    bVar5 = (byte)(uVar2 >> 0x18);
    fVar13 = fVar7;
    if ((bool)(bVar5 >> 6 & 1) || bVar5 >> 7 != ((byte)(in_fpscr >> 0x1c) & 1)) {
      fVar18 = (float)param_1[6];
      in_fpscr = uVar1 | (uint)(fVar14 <= fVar18) << 0x1d;
      fVar13 = fVar6;
      if (SUB41(in_fpscr >> 0x1d,0)) {
        iVar8 = *param_1;
        cVar4 = *(char *)(iVar8 + 0x42);
        if (cVar4 == '\0') {
          fVar13 = (fVar18 - fVar14) / (fVar18 - fVar15);
        }
        else if (cVar4 == '\x01') {
          fVar13 = (float)VectorSignedToFloat(-*(int *)(iVar8 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
          fVar13 = (float)FUN_002bb8dc(fVar13 * ((fVar14 - fVar15) / (fVar18 - fVar15)));
        }
        else {
          fVar13 = fVar7;
          if (cVar4 == '\x02') {
            fVar16 = (float)VectorSignedToFloat(-*(int *)(iVar8 + 0x3c),(byte)(in_fpscr >> 0x15) & 3
                                               );
            fVar13 = (fVar14 - fVar15) / (fVar18 - fVar15);
            fVar13 = (float)FUN_002bb8dc(fVar16 * fVar13 * fVar13);
          }
        }
      }
    }
    pfVar11 = local_224 + iVar12;
    iVar12 = iVar12 + 1;
    *pfVar11 = fVar13;
  } while (iVar12 < 0x81);
  pfVar9 = local_224;
  pfVar10 = (float *)(param_1 + 0x1a);
  iVar12 = 0x80;
  pfVar11 = (float *)(param_1 + 0x9a);
  do {
    *pfVar10 = *pfVar9;
    pfVar3 = pfVar9 + 1;
    fVar17 = *pfVar9;
    pfVar9 = pfVar9 + 1;
    iVar12 = iVar12 + -1;
    pfVar10 = pfVar10 + 1;
    *pfVar11 = *pfVar3 - fVar17;
    pfVar11 = pfVar11 + 1;
  } while (iVar12 != 0);
  return;
}

