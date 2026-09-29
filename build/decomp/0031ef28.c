// OoT3D decomp @ 0031ef28  name=FUN_0031ef28  size=1060

void FUN_0031ef28(int param_1)

{
  uint uVar1;
  float fVar2;
  short *psVar3;
  float *pfVar4;
  int iVar5;
  float *pfVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;

  fVar2 = DAT_0031f340;
  iVar5 = *DAT_0031f328;
  pfVar6 = (float *)(param_1 + 0x6c);
  pfVar4 = (float *)(param_1 + 100);
  psVar3 = (short *)(param_1 + 0x1ca);
  switch(*(ushort *)(param_1 + 0x1c) & 0xff) {
  case 8:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1482),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1484),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1486),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1488),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar8 = DAT_0031f330 + fVar8 * DAT_0031f32c;
    fVar9 = DAT_0031f330 + fVar9 * DAT_0031f32c;
    fVar10 = DAT_0031f330 + fVar10 * DAT_0031f32c;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x148a),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0031f334 + fVar11 * DAT_0031f32c;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x148c),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar12 = DAT_0031f330 + fVar12 * DAT_0031f32c;
    break;
  case 9:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x149c),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x149e),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14a0),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14a2),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar8 = DAT_0031f330 + fVar8 * DAT_0031f32c;
    fVar9 = DAT_0031f330 + fVar9 * DAT_0031f32c;
    fVar10 = DAT_0031f330 + fVar10 * DAT_0031f32c;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14a4),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0031f334 + fVar11 * DAT_0031f32c;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14a6),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar12 = DAT_0031f330 + fVar12 * DAT_0031f32c;
    break;
  case 10:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14b6),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14b8),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14ba),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14bc),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar8 = DAT_0031f330 + fVar8 * DAT_0031f32c;
    fVar9 = DAT_0031f330 + fVar9 * DAT_0031f32c;
    fVar10 = DAT_0031f330 + fVar10 * DAT_0031f32c;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14be),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0031f334 + fVar11 * DAT_0031f32c;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14c0),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar12 = DAT_0031f330 + fVar12 * DAT_0031f32c;
    break;
  case 0xb:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14d0),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14d2),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14d4),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14d6),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar8 = DAT_0031f330 + fVar8 * DAT_0031f32c;
    fVar9 = DAT_0031f330 + fVar9 * DAT_0031f32c;
    fVar10 = DAT_0031f330 + fVar10 * DAT_0031f32c;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14d8),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0031f334 + fVar11 * DAT_0031f32c;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14da),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar12 = DAT_0031f330 + fVar12 * DAT_0031f32c;
    break;
  case 0xc:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14ea),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14ec),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14ee),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14f0),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar8 = DAT_0031f330 + fVar8 * DAT_0031f32c;
    fVar9 = DAT_0031f330 + fVar9 * DAT_0031f32c;
    fVar10 = DAT_0031f330 + fVar10 * DAT_0031f32c;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14f2),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0031f334 + fVar11 * DAT_0031f32c;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x14f4),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar12 = DAT_0031f330 + fVar12 * DAT_0031f32c;
    break;
  case 0xd:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1504),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1506),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1508),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x150a),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar8 = DAT_0031f330 + fVar8 * DAT_0031f32c;
    fVar9 = DAT_0031f330 + fVar9 * DAT_0031f32c;
    fVar10 = DAT_0031f330 + fVar10 * DAT_0031f32c;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x150c),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0031f334 + fVar11 * DAT_0031f32c;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x150e),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar12 = DAT_0031f330 + fVar12 * DAT_0031f32c;
    break;
  case 0xe:
    fVar7 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1468),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar7 = fVar7 + DAT_0031f338;
    fVar8 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1466),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1464),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1462),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar8 = DAT_0031f330 + fVar8 * DAT_0031f32c;
    fVar9 = DAT_0031f330 + fVar9 * DAT_0031f32c;
    fVar10 = DAT_0031f330 + fVar10 * DAT_0031f32c;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x1460),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar11 = DAT_0031f334 + fVar11 * DAT_0031f32c;
    fVar12 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x145e),(byte)(in_fpscr >> 0x15) & 3
                                       );
    fVar12 = DAT_0031f330 + fVar12 * DAT_0031f32c;
    break;
  default:
    goto switchD_0031ef68_default;
  }
  if ((int)(*(float *)(param_1 + 0x2c) + fVar7) <= DAT_0031f33c) {
    uVar1 = in_fpscr & 0xfffffff | (uint)(DAT_0031f340 <= *pfVar4) << 0x1d;
    if ((!SUB41(uVar1 >> 0x1d,0)) && (*(int *)(param_1 + 0x1d8) == 0)) {
      *pfVar4 = *pfVar4 * fVar11;
      *pfVar6 = *pfVar6 * fVar12;
      fVar7 = (float)VectorSignedToFloat((int)*psVar3,(byte)(uVar1 >> 0x15) & 3);
      *psVar3 = (short)(int)(fVar7 * fVar8);
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1cc),(byte)(uVar1 >> 0x15) & 3)
      ;
      *(short *)(param_1 + 0x1cc) = (short)(int)(fVar7 * fVar9);
      fVar7 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1ce),(byte)(uVar1 >> 0x15) & 3)
      ;
      *(short *)(param_1 + 0x1ce) = (short)(int)(fVar7 * fVar10);
      if (*pfVar4 <= -*(float *)(param_1 + 0x70)) {
        *pfVar4 = fVar2;
        *pfVar6 = fVar2;
        *psVar3 = 0;
        *(undefined2 *)(param_1 + 0x1cc) = 0;
        *(undefined2 *)(param_1 + 0x1ce) = 0;
      }
      *(undefined4 *)(param_1 + 0x1d8) = 1;
    }
  }
switchD_0031ef68_default:
  return;
}
