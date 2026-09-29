// OoT3D decomp @ 003210a4  name=FUN_003210a4  size=940

void FUN_003210a4(int param_1,int param_2)

{
  uint uVar1;
  float fVar2;
  float fVar3;
  int *piVar4;
  int iVar5;
  float *pfVar6;
  float *pfVar7;
  short *psVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  psVar8 = (short *)0x0;
  iVar5 = FUN_0037571c(param_2);
  if (iVar5 != 0) {
    psVar8 = *(short **)(param_2 + 0x22ec);
  }
  if ((psVar8 == (short *)0x0) || (*psVar8 != 0x15)) {
    psVar8 = (short *)0x0;
    iVar5 = FUN_0037571c(param_2);
    if (iVar5 != 0) {
      psVar8 = *(short **)(param_2 + 0x22ec);
    }
    if ((psVar8 == (short *)0x0) || (*psVar8 != 0x13)) {
      if (*(int *)(param_1 + 0xbcc) == 0) {
        return;
      }
    }
    else {
      *(undefined4 *)(param_1 + 0xbcc) = 2;
    }
  }
  else {
    *(undefined4 *)(param_1 + 0xbcc) = 1;
    if (*(int *)(param_1 + 0xc04) == 0) {
      *(undefined4 *)(param_1 + 0xc04) = 1;
      *(undefined4 *)(param_1 + 0xc00) = 1;
    }
  }
  fVar11 = DAT_00321470;
  piVar4 = DAT_0032145c;
  fVar3 = DAT_00321458;
  fVar2 = DAT_00321454;
  fVar10 = DAT_00321450;
  pfVar7 = (float *)(param_1 + 0xbc0);
  pfVar6 = (float *)(param_1 + 0xbf0);
  if (*(int *)(param_1 + 0xbcc) == 1) {
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032145c + 0x1486),
                                        (byte)(in_fpscr >> 0x15) & 3);
    uVar1 = in_fpscr & 0xfffffff | (uint)(fVar11 + DAT_00321458 <= *pfVar7) << 0x1d;
    if (SUB41(uVar1 >> 0x1d,0)) {
      *(undefined4 *)(param_1 + 0xbd8) = 0xaa;
      *(undefined4 *)(param_1 + 0xbdc) = 0xff;
      *(undefined4 *)(param_1 + 0xbe4) = 200;
    }
    else {
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0032145c + 0x1486),
                                          (byte)(uVar1 >> 0x15) & 3);
      fVar9 = *pfVar7 / (fVar11 + DAT_00321458);
      fVar12 = fVar9 * DAT_00321464;
      *(int *)(param_1 + 0xbd8) = (int)(DAT_00321464 + fVar9 * DAT_00321460);
      fVar11 = DAT_00321468;
      *(int *)(param_1 + 0xbdc) = (int)fVar12;
      *(int *)(param_1 + 0xbe4) = (int)(fVar11 + fVar9 * fVar11);
      *pfVar7 = *pfVar7 + fVar10;
    }
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar4 + 0x147a),(byte)(uVar1 >> 0x15) & 3)
    ;
    *pfVar6 = fVar3 + fVar10 * fVar2;
    iVar5 = *piVar4;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147c),(byte)(uVar1 >> 0x15) & 3);
    *(float *)(param_1 + 0xbf4) = fVar3 + fVar10 * fVar2;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147e),(byte)(uVar1 >> 0x15) & 3);
    *(float *)(param_1 + 0xbf8) = fVar3 + fVar10 * fVar2;
  }
  else if (*(int *)(param_1 + 0xbcc) == 2) {
    iVar5 = *DAT_0032145c;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1486),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x148a),(byte)(in_fpscr >> 0x15) & 3
                                       );
    uVar1 = in_fpscr & 0xfffffff |
            (uint)(fVar9 + DAT_00321458 + fVar12 + DAT_0032146c <= *pfVar7) << 0x1d;
    if (SUB41(uVar1 >> 0x1d,0)) {
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147a),(byte)(uVar1 >> 0x15) & 3)
      ;
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1488),(byte)(uVar1 >> 0x15) & 3);
      *pfVar6 = (DAT_00321458 + fVar10 * DAT_00321454) * (fVar9 + DAT_00321470);
      iVar5 = *piVar4;
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147c),(byte)(uVar1 >> 0x15) & 3)
      ;
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1488),(byte)(uVar1 >> 0x15) & 3);
      *(float *)(param_1 + 0xbf4) = (fVar3 + fVar10 * fVar2) * (fVar9 + fVar11);
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147e),(byte)(uVar1 >> 0x15) & 3)
      ;
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1488),(byte)(uVar1 >> 0x15) & 3);
      *(float *)(param_1 + 0xbf8) = (fVar3 + fVar10 * fVar2) * (fVar9 + fVar11);
    }
    else {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1486),(byte)(uVar1 >> 0x15) & 3);
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x148a),(byte)(uVar1 >> 0x15) & 3)
      ;
      fVar9 = (*pfVar7 - (fVar9 + DAT_00321458)) / (fVar12 + DAT_0032146c);
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1488),(byte)(uVar1 >> 0x15) & 3)
      ;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147a),(byte)(uVar1 >> 0x15) & 3)
      ;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147a),(byte)(uVar1 >> 0x15) & 3)
      ;
      *pfVar6 = DAT_00321458 + fVar14 * DAT_00321454 +
                (fVar12 + DAT_00321470) * (DAT_00321458 + fVar13 * DAT_00321454) * fVar9;
      iVar5 = *piVar4;
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1488),(byte)(uVar1 >> 0x15) & 3)
      ;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147c),(byte)(uVar1 >> 0x15) & 3)
      ;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147c),(byte)(uVar1 >> 0x15) & 3)
      ;
      *(float *)(param_1 + 0xbf4) =
           fVar3 + fVar14 * fVar2 + (fVar12 + fVar11) * (fVar3 + fVar13 * fVar2) * fVar9;
      fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1488),(byte)(uVar1 >> 0x15) & 3)
      ;
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147e),(byte)(uVar1 >> 0x15) & 3)
      ;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x147e),(byte)(uVar1 >> 0x15) & 3)
      ;
      *(float *)(param_1 + 0xbf8) =
           fVar3 + fVar14 * fVar2 + (fVar12 + fVar11) * (fVar3 + fVar13 * fVar2) * fVar9;
      *pfVar7 = *pfVar7 + fVar10;
    }
    *(short *)(param_1 + 0xbfc) = *(short *)(param_1 + 0xbfc) + *(short *)(*piVar4 + 0x148c) + 12000
    ;
    return;
  }
  return;
}
