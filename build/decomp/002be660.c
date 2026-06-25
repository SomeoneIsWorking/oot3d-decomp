// OoT3D decomp @ 002be660  name=FUN_002be660  size=708

void FUN_002be660(int param_1,undefined4 param_2)

{
  int *piVar1;
  float fVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  uint uVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar2 = DAT_002be930;
  fVar11 = DAT_002be92c;
  piVar1 = DAT_002be928;
  iVar5 = DAT_002be924;
  iVar3 = *DAT_002be928;
  if (*(int *)(param_1 + 0x2250) < 0x3f800000) {
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x110),(byte)(in_fpscr >> 0x15) & 3)
    ;
    fVar10 = fVar10 * DAT_002be934;
    fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x5a),(byte)(in_fpscr >> 0x15) & 3);
    FUN_002dd8b0(fVar11 * DAT_002be92c,param_1,param_2);
    FUN_002bd118(*(undefined4 *)(param_1 + 0x2254),param_1 + 0x254,param_2,
                 *(undefined4 *)(iVar5 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x18));
    fVar10 = *(float *)(param_1 + 0x2250) + fVar10;
    *(float *)(param_1 + 0x2250) = fVar10;
    if (0x3f7fffff < (int)fVar10) {
      *(float *)(param_1 + 0x2250) = fVar2;
    }
    fVar13 = *(float *)(param_1 + 0x2250);
  }
  else {
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x74),(byte)(in_fpscr >> 0x15) & 3);
    fVar10 = *(float *)(param_1 + 0x221c) - fVar10 * DAT_002be938;
    uVar9 = in_fpscr & 0xfffffff | (uint)(DAT_002be93c <= fVar10) << 0x1d;
    if (SUB41(uVar9 >> 0x1d,0)) {
      if (*(char *)(param_1 + 0x227c) == '\0') {
        uVar4 = *(uint *)(param_1 + 0x1710);
        bVar8 = (uVar4 & 0x28000000) == 0;
        if (bVar8) {
          uVar4 = (uint)*(byte *)(param_1 + 0x1a7);
        }
        iVar5 = DAT_002be924 + (uint)*(byte *)(param_1 + 0x1b3) * 4;
        if (bVar8 && uVar4 == 1) {
          uVar7 = *(undefined4 *)(iVar5 + 0x60);
        }
        else {
          uVar7 = *(undefined4 *)(iVar5 + 0x30);
        }
      }
      else {
        uVar7 = *(undefined4 *)(DAT_002be924 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x48);
      }
      uVar6 = FUN_003603c0(param_1 + 0x254,uVar7);
      iVar5 = *piVar1;
      fVar12 = (float)VectorSignedToFloat(uVar6,(byte)(uVar9 >> 0x15) & 3);
      fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x5e),(byte)(uVar9 >> 0x15) & 3);
      fVar13 = fVar13 * fVar11 * fVar10;
      if ((int)fVar13 < 0x3f800000) {
        fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x5c),(byte)(uVar9 >> 0x15) & 3)
        ;
        fVar14 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x5a),(byte)(uVar9 >> 0x15) & 3)
        ;
        fVar14 = *(float *)(param_1 + 0x221c) * fVar10 * fVar11 + fVar14 * fVar11;
      }
      else {
        fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x60),(byte)(uVar9 >> 0x15) & 3)
        ;
        fVar14 = (DAT_002be940 / (fVar12 + fVar2)) * fVar13 * fVar11 * fVar10;
        if (*(int *)(DAT_002be944 + 4) == 0) {
          if (*(char *)(param_1 + 0x1a7) == '\x01') {
            fVar11 = DAT_002be94c;
            if ((*(uint *)(param_1 + 0x1710) & 0x8000000) != 0) {
              fVar11 = DAT_002be950;
            }
            fVar14 = (fVar14 + DAT_002be948) * fVar11;
            fVar13 = fVar2;
          }
          else {
            fVar13 = fVar2;
            if (*(char *)(param_1 + 0x1a7) == '\x02') {
              fVar14 = fVar14 + DAT_002be948;
            }
          }
        }
        else {
          fVar13 = (float)VectorSignedToFloat((int)*(short *)(iVar5 + 0x60),
                                              (byte)(uVar9 >> 0x15) & 3);
          fVar14 = DAT_002be948 + fVar10 * fVar13 * fVar11;
          fVar13 = fVar2;
        }
      }
      FUN_002dd8b0(fVar14,param_1,param_2);
      FUN_002bcf84(param_1,1,param_2);
      FUN_002bd118(*(float *)(param_1 + 0x2254) * (fVar12 + fVar2) * DAT_002be954,param_1 + 0x254,
                   param_2,uVar7);
      FUN_00317dbc(param_1 + 0x254,uVar7);
    }
    else {
      fVar11 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x5c),(byte)(uVar9 >> 0x15) & 3);
      fVar10 = (float)VectorSignedToFloat((int)*(short *)(iVar3 + 0x5a),(byte)(uVar9 >> 0x15) & 3);
      FUN_002dd8b0(*(float *)(param_1 + 0x221c) * fVar11 * DAT_002be92c + fVar10 * DAT_002be92c,
                   param_1,param_2);
      FUN_002bcf84(param_1,0,param_2);
      fVar13 = fVar2;
    }
  }
  if (0x3f7fffff < (int)fVar13) {
    return;
  }
  FUN_002bcf48(fVar2 - fVar13,param_1 + 0x254,param_2);
  return;
}

