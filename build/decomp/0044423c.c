// OoT3D decomp @ 0044423c  name=FUN_0044423c  size=724

void FUN_0044423c(void)

{
  char cVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  int unaff_r4;
  undefined4 uVar10;
  int iVar11;
  int iVar12;
  bool bVar13;
  uint in_fpscr;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float local_220 [4];
  float fStack_210;
  float local_20c [120];

  iVar3 = DAT_00444540;
  fVar16 = DAT_0044451c;
  iVar2 = DAT_00444518;
  local_220[0] = *DAT_00444514;
  local_220[1] = DAT_00444514[1];
  local_220[2] = DAT_00444514[2];
  local_220[3] = DAT_00444514[3];
  fStack_210 = DAT_00444514[4];
  iVar4 = (int)*(short *)(DAT_00444518 + 0x44);
  iVar6 = iVar4 % 0x10;
  uVar7 = (uint)*(short *)(DAT_00444518 + 0x42);
  iVar11 = (int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1c)) >> 4;
  iVar12 = (int)(uVar7 + ((uint)((int)uVar7 >> 0x1f) >> 0x1c)) >> 4;
  cVar1 = *(char *)(DAT_00444518 + 0x51);
  iVar8 = 0;
  fVar14 = DAT_00444510;
  fVar15 = DAT_00444510;
  if ((uVar7 & 0xf) != 0) {
    iVar12 = iVar12 + 1;
  }
  do {
    if (iVar8 == 10) {
      fVar14 = DAT_00444510;
    }
    if (iVar8 == 10) {
      fVar15 = DAT_00444534;
    }
    local_20c[iVar8 * 2 + 0x28] = DAT_0044451c;
    local_20c[iVar8 * 2 + 0x29] = DAT_0044451c;
    local_20c[iVar8 * 2 + 0x50] = DAT_00444524 + fVar14 * DAT_00444520;
    fVar18 = DAT_0044452c + fVar15 * DAT_00444528;
    local_20c[iVar8 * 2 + 0x51] = fVar18;
    if (iVar12 <= iVar8) {
      fVar18 = DAT_00444530;
    }
    if (iVar12 <= iVar8) {
      local_20c[iVar8 * 2 + 0x51] = DAT_00444530;
      local_20c[iVar8 * 2 + 0x50] = fVar18;
    }
    if (iVar4 < 0xd) {
      if (iVar4 < 9) {
        if (iVar4 < 5) {
          if (iVar4 < 1) {
            if (iVar4 == 0) {
              unaff_r4 = 0;
            }
          }
          else {
            unaff_r4 = 1;
          }
        }
        else {
          unaff_r4 = 2;
        }
      }
      else {
        unaff_r4 = 3;
      }
    }
    else {
      unaff_r4 = 4;
    }
    local_20c[iVar8 * 2] = DAT_00444538;
    iVar4 = iVar4 + -0x10;
    fVar18 = local_220[unaff_r4];
    if (iVar4 < 0) {
      iVar4 = 0;
    }
    bVar13 = cVar1 != '\0';
    local_20c[iVar8 * 2 + 1] = fVar18;
    if (bVar13) {
      fVar18 = fVar18 - DAT_0044453c;
    }
    fVar14 = fVar14 + DAT_00444534;
    iVar9 = iVar8 + 1;
    if (bVar13) {
      local_20c[iVar8 * 2 + 1] = fVar18;
    }
    iVar8 = iVar9;
  } while (iVar9 < 0x14);
  FUN_002fc534(*(undefined4 *)(DAT_00444540 + 4),local_20c + 0x50,local_20c + 0x28,0x14,0x3f);
  FUN_002fc40c(*(undefined4 *)(iVar3 + 4),local_20c,local_20c + 0x28,0x14,0x3f);
  iVar12 = *(int *)(iVar3 + 0x58);
  uVar10 = 0;
  if (iVar12 < 2) {
LAB_00444418:
    uVar10 = 1;
    goto LAB_0044441c;
  }
  if (iVar12 < 4) {
LAB_00444408:
    uVar10 = 2;
  }
  else {
    if (5 < iVar12) {
      if (iVar12 < 8) {
        uVar10 = 4;
        goto LAB_0044441c;
      }
      if (9 < iVar12) {
        if (0xb < iVar12) {
          if (0xd < iVar12) goto LAB_0044441c;
          goto LAB_00444418;
        }
        goto LAB_00444408;
      }
    }
    uVar10 = 3;
  }
LAB_0044441c:
  if (*(short *)(iVar2 + 0x44) == 0) {
    uVar10 = 0;
  }
  if (iVar6 != 0) {
    iVar11 = iVar11 + 1;
  }
  iVar11 = iVar11 + -1;
  if (iVar11 < 0) {
    iVar11 = 0;
  }
  pfVar5 = (float *)FUN_002fc3fc(*(undefined4 *)(iVar3 + 4),iVar11 + 0x3f);
  fVar14 = local_20c[iVar11 * 2 + 0x50];
  fVar15 = local_20c[iVar11 * 2 + 0x51];
  fVar18 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
  fVar17 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
  *pfVar5 = fVar14 - fVar18;
  fVar18 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
  pfVar5[1] = fVar15 - fVar18;
  fVar18 = fVar14 + fVar16;
  pfVar5[3] = fVar18 + fVar17;
  fVar17 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
  pfVar5[4] = fVar15 - fVar17;
  fVar17 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
  pfVar5[6] = fVar14 - fVar17;
  fVar15 = fVar15 + fVar16;
  fVar16 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
  pfVar5[7] = fVar15 + fVar16;
  fVar16 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
  pfVar5[9] = fVar18 + fVar16;
  fVar16 = (float)VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
  pfVar5[10] = fVar15 + fVar16;
  iVar11 = FUN_002e70d4();
  if ((iVar11 != 1) &&
     (iVar11 = *(int *)(iVar3 + 0x58) + 1, *(int *)(iVar3 + 0x58) = iVar11, 0x10 < iVar11)) {
    *(undefined4 *)(iVar3 + 0x58) = 0;
  }
  return;
}
