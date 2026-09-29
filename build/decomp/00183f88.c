// OoT3D decomp @ 00183f88  name=FUN_00183f88  size=304

void FUN_00183f88(int param_1)

{
  int *piVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;

  fVar13 = DAT_001840c4;
  fVar12 = DAT_001840c0;
  fVar11 = DAT_001840bc;
  piVar1 = DAT_001840b8;
  pfVar5 = (float *)(param_1 + 0x1a4);
  iVar6 = 0x40;
  do {
    if ((int)*pfVar5 < 0x3f800000) {
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar5 = *pfVar5 + fVar14 * fVar11 * fVar12;
    }
    else {
      *pfVar5 = fVar13;
    }
    uVar4 = DAT_001840d4;
    fVar14 = DAT_001840d0;
    uVar3 = DAT_001840cc;
    uVar2 = DAT_001840c8;
    iVar6 = iVar6 + -1;
    pfVar5 = pfVar5 + 1;
  } while (iVar6 != 0);
  iVar6 = 0;
  do {
    uVar7 = *(byte *)(param_1 + 0x5a4) & 0x3f;
    iVar9 = param_1 + uVar7 * 4;
    if (0x3f7fffff < *(int *)(iVar9 + 0x1a4)) {
      fVar11 = (float)FUN_003738a8(uVar2);
      fVar12 = (float)FUN_00371e50(uVar3);
      iVar10 = (int)(short)(int)fVar12;
      fVar12 = (float)FUN_00338f60((int)(short)(int)fVar11);
      fVar13 = (float)FUN_00338f60(iVar10);
      iVar8 = param_1 + uVar7 * 0xc;
      *(float *)(iVar8 + 0x2a4) = fVar12 * fVar14 * fVar13;
      fVar12 = (float)FUN_002cfca0(iVar10);
      *(float *)(iVar8 + 0x2a8) = fVar12 * fVar14;
      fVar11 = (float)FUN_002cfca0((int)(short)(int)fVar11);
      fVar12 = (float)FUN_00338f60(iVar10);
      *(float *)(iVar8 + 0x2ac) = fVar11 * fVar14 * fVar12;
      *(undefined4 *)(iVar9 + 0x1a4) = uVar4;
      *(char *)(param_1 + 0x5a4) = *(char *)(param_1 + 0x5a4) + '\x01';
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 2);
  return;
}
