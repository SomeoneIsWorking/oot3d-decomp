// OoT3D decomp @ 0031d534  name=FUN_0031d534  size=1380

void FUN_0031d534(int param_1,int param_2)

{
  int *piVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  undefined2 *puVar5;
  float *pfVar6;
  int iVar7;
  float *pfVar8;
  float *pfVar9;
  float *pfVar10;
  uint in_fpscr;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;

  fVar3 = DAT_0031d90c;
  fVar2 = DAT_0031d908;
  fVar11 = DAT_0031d904;
  fVar14 = DAT_0031d900;
  piVar1 = DAT_0031d8f8;
  iVar4 = *(int *)(param_1 + 0x1d0);
  if (iVar4 != 0) {
    fVar12 = *(float *)(iVar4 + 0x28);
    fVar13 = *(float *)(iVar4 + 0x30);
    iVar4 = *DAT_0031d8f8;
    pfVar6 = (float *)(param_1 + 0x6c);
    pfVar8 = (float *)(param_1 + 100);
    puVar5 = (undefined2 *)(param_1 + 0x1ca);
    pfVar9 = (float *)(param_1 + 0x74);
    pfVar10 = (float *)(param_1 + 0x70);
    switch(*(ushort *)(param_1 + 0x1c) & 0xff) {
    case 8:
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1474),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar6 = fVar15 + DAT_0031d8fc;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x1476),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar8 = fVar15 + fVar14;
      *puVar5 = *(undefined2 *)(*piVar1 + 0x1478);
      *(short *)(param_1 + 0x1cc) = *(short *)(*piVar1 + 0x147a) + 1000;
      iVar4 = *piVar1;
      *(short *)(param_1 + 0x1ce) = *(short *)(iVar4 + 0x147c) + 3000;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x147e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar9 = fVar2 + fVar14 * fVar11;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x1480),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar10 = fVar3 + fVar14 * fVar11;
      break;
    case 9:
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x148e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar6 = fVar15 + DAT_0031d8fc;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x1490),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar8 = fVar15 + fVar14;
      *puVar5 = *(undefined2 *)(*piVar1 + 0x1492);
      *(short *)(param_1 + 0x1cc) = *(short *)(*piVar1 + 0x1494) + 1000;
      iVar4 = *piVar1;
      *(short *)(param_1 + 0x1ce) = *(short *)(iVar4 + 0x1496) + 3000;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x1498),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar9 = fVar2 + fVar14 * fVar11;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x149a),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar10 = fVar3 + fVar14 * fVar11;
      break;
    case 10:
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x14a8),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar6 = fVar15 + DAT_0031d8fc;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x14aa),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar8 = fVar15 + fVar14;
      *puVar5 = *(undefined2 *)(*piVar1 + 0x14ac);
      *(short *)(param_1 + 0x1cc) = *(short *)(*piVar1 + 0x14ae) + 1000;
      iVar4 = *piVar1;
      *(short *)(param_1 + 0x1ce) = *(short *)(iVar4 + 0x14b0) + 3000;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x14b2),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar9 = fVar2 + fVar14 * fVar11;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x14b4),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar10 = fVar3 + fVar14 * fVar11;
      break;
    case 0xb:
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x14c2),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar6 = fVar15 + DAT_0031d8fc;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x14c4),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar8 = fVar15 + fVar14;
      *puVar5 = *(undefined2 *)(*piVar1 + 0x14c6);
      *(short *)(param_1 + 0x1cc) = *(short *)(*piVar1 + 0x14c8) + 1000;
      iVar4 = *piVar1;
      *(short *)(param_1 + 0x1ce) = *(short *)(iVar4 + 0x14ca) + 3000;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x14cc),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar9 = fVar2 + fVar14 * fVar11;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x14ce),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar10 = fVar3 + fVar14 * fVar11;
      break;
    case 0xc:
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x14dc),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar6 = fVar15 + DAT_0031d8fc;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x14de),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar8 = fVar15 + fVar14;
      *puVar5 = *(undefined2 *)(*piVar1 + 0x14e0);
      *(short *)(param_1 + 0x1cc) = *(short *)(*piVar1 + 0x14e2) + 1000;
      iVar4 = *piVar1;
      *(short *)(param_1 + 0x1ce) = *(short *)(iVar4 + 0x14e4) + 3000;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x14e6),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar9 = fVar2 + fVar14 * fVar11;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x14e8),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar10 = fVar3 + fVar14 * fVar11;
      break;
    case 0xd:
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x14f6),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar6 = fVar15 + DAT_0031d8fc;
      fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x14f8),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar8 = fVar15 + fVar14;
      iVar4 = DAT_0031dacc;
      *puVar5 = *(undefined2 *)(*piVar1 + 0x14fa);
      *(short *)(param_1 + 0x1cc) = *(short *)(*piVar1 + 0x14fc) + 1000;
      iVar7 = *piVar1;
      *(short *)(param_1 + 0x1ce) = *(short *)(iVar4 + iVar7) + 3000;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar7 + 0x1500),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar9 = fVar2 + fVar14 * fVar11;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x1502),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar10 = fVar3 + fVar14 * fVar11;
      break;
    case 0xe:
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(DAT_0031dad0 + iVar4),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar6 = fVar14 + DAT_0031d8fc;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x1512),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar8 = fVar14 + DAT_0031dad4;
      *puVar5 = *(undefined2 *)(*piVar1 + 0x1472);
      *(short *)(param_1 + 0x1cc) = *(short *)(*piVar1 + 0x1470) + 1000;
      iVar4 = *piVar1;
      *(short *)(param_1 + 0x1ce) = *(short *)(iVar4 + 0x146e) + 3000;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar4 + 0x146c),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar9 = fVar2 + fVar14 * fVar11;
      fVar14 = (float)VectorSignedToFloat((int)*(short *)(*piVar1 + 0x146a),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *pfVar10 = fVar3 + fVar14 * fVar11;
    }
    fVar14 = DAT_0031dadc;
    if ((*(float *)(param_1 + 0x28) - fVar12 != DAT_0031dad8 ||
         *(float *)(param_1 + 0x30) - fVar13 != DAT_0031dad8) ||
       (*(float *)(*(int *)(DAT_0031dae0 + param_2) + 0x28) - *(float *)(param_1 + 0x28) !=
        DAT_0031dad8 ||
        *(float *)(*(int *)(DAT_0031dae0 + param_2) + 0x30) - *(float *)(param_1 + 0x30) !=
        DAT_0031dad8)) {
      fVar11 = (float)FUN_003696ec();
      *(short *)(param_1 + 0x36) = (short)(int)(fVar11 * fVar14);
    }
  }
  return;
}
