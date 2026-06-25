// OoT3D decomp @ 004ba538  name=FUN_004ba538  size=1680

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004ba538(int param_1,int param_2)

{
  short sVar1;
  undefined4 uVar2;
  float fVar3;
  float fVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  undefined4 uVar10;
  byte bVar11;
  float *pfVar12;
  undefined4 uVar13;
  bool bVar14;
  uint in_fpscr;
  uint uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  uint uStack_44;
  float fStack_40;
  
  iVar6 = FUN_0034d628();
  if (*(int *)(param_1 + 0x284) == iVar6) {
    iVar6 = -1;
  }
  else {
    iVar6 = 0;
    piVar9 = DAT_004ba948;
    do {
      if (*(int *)(param_1 + 0x284) == *piVar9) {
        iVar6 = iVar6 + 1;
        goto LAB_004ba594;
      }
      iVar6 = iVar6 + 1;
      piVar9 = piVar9 + 1;
    } while (iVar6 < 0x1e);
    iVar6 = 0;
  }
LAB_004ba594:
  fVar18 = *(float *)(param_1 + 0x290);
  iVar7 = FUN_0036b4ec(param_1 + 0x254,param_2);
  fVar3 = DAT_004ba94c;
  uVar15 = in_fpscr & 0xfffffff | (uint)(*(float *)(param_1 + 0x290) == fVar18) << 0x1e |
           (uint)(fVar18 <= *(float *)(param_1 + 0x290)) << 0x1d;
  bVar11 = (byte)(uVar15 >> 0x18);
  if (!(bool)(bVar11 >> 5 & 1) || (bool)(bVar11 >> 6)) {
    fVar18 = *(float *)(param_1 + 0x294);
    uVar8 = in_fpscr & 0xfffffff | (uint)(fVar18 < DAT_004ba94c) << 0x1f |
            (uint)(fVar18 == DAT_004ba94c) << 0x1e;
    uVar15 = uVar8 | (uint)(NAN(fVar18) || NAN(DAT_004ba94c)) << 0x1c;
    bVar11 = (byte)(uVar8 >> 0x18);
    if (!(bool)(bVar11 >> 6 & 1) && bVar11 >> 7 == ((byte)(uVar15 >> 0x1c) & 1)) {
      iVar7 = 1;
    }
  }
  fVar18 = (float)FUN_002c3fac(param_1,param_2);
  if ((0 < iVar6) && (uVar8 = (uint)*(byte *)(DAT_004ba950 + iVar6 + -1), uVar8 != 0)) {
    fVar18 = (float)FUN_00360a1c(param_1,*(undefined4 *)(DAT_004ba950 + uVar8 * 4 + -0x30));
  }
  fVar16 = DAT_004ba95c;
  uVar2 = DAT_004ba958;
  fVar4 = DAT_004ba954;
  if (iVar7 == 0) goto LAB_004ba9d8;
  if (*(short *)(param_1 + 0x2238) != 0) {
    sVar1 = *(short *)(param_1 + 0x2238) + -1;
    bVar14 = (int)sVar1 == 0;
    *(short *)(param_1 + 0x2238) = sVar1;
    if (bVar14) {
      fVar18 = *(float *)(param_1 + 0x2a0);
    }
    if (bVar14) {
      fVar18 = fVar18 - fVar4;
    }
    fVar17 = (float)VectorSignedToFloat(((int)sVar1 & 1U) * 2 + -1,(byte)(uVar15 >> 0x15) & 3);
    if (bVar14) {
      *(float *)(param_1 + 0x29c) = fVar18;
    }
    pfVar12 = (float *)(*(int *)(param_1 + 0x2cc) + 0x50);
    *pfVar12 = *pfVar12 + fVar17 * fVar16;
    goto LAB_004ba9d8;
  }
  FUN_00334c44(param_1);
  if ((*(int *)(param_1 + 0x16f8) == 0) &&
     ((iVar6 = FUN_0049f28c(), iVar6 != 0 ||
      (bVar11 = ~*(byte *)(param_1 + 0x1748) & 1, *(byte *)(param_1 + 0x1748) = bVar11, bVar11 == 0)
      ))) {
    *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x10000000;
    fVar18 = DAT_004ba960;
    if ((*(uint *)(param_1 + 0x1710) & 0x800) != 0) goto LAB_004ba6dc;
    uVar8 = (uint)*(byte *)(param_2 + 0x4c32);
    if (*(char *)(param_2 + 0x4c37) != '\0') {
      uVar8 = 3;
    }
    if (iVar6 != 0) {
      if (*(char *)(param_1 + 0x1748) < '\0') {
        uVar8 = 8;
      }
      else {
        uVar8 = 7;
        *(undefined *)(param_1 + 0x1748) = 0xff;
      }
      goto LAB_004ba8cc;
    }
    if ((*(int *)(param_1 + 0x16f8) == 0) && (*(int *)(param_2 + 0x2130) != 0)) {
      FUN_0034d628(param_1);
      fVar16 = (float)FUN_003759d0();
      if (((*(uint *)(param_1 + 0x29b8) & 0x200) == 0) &&
         (((*(char *)(param_1 + 0x174e) != '\x01' || (*DAT_004ba964 < 'Q')) ||
          ((*(uint *)(param_1 + 0x29b8) & 0x400) != 0)))) goto LAB_004ba9d8;
      uVar8 = *(uint *)(DAT_004ba968 + 4);
      bVar14 = uVar8 != 0;
      if (!bVar14) {
        uVar8 = (uint)*(byte *)(param_1 + 0x1ac);
      }
      if ((bVar14 || uVar8 != 3) || (int)(fVar16 * fVar18) != 3) goto LAB_004ba9d8;
LAB_004ba854:
      uVar8 = 0xe;
    }
    else {
      if (((*(uint *)(param_1 + 0x29b8) & 0x200) != 0) ||
         (((*(char *)(param_1 + 0x174e) == '\x01' && ('P' < *DAT_004ba964)) &&
          ((*(uint *)(param_1 + 0x29b8) & 0x400) == 0)))) {
        FUN_0034d628(param_1);
        fVar16 = (float)FUN_003759d0();
        if (((*(uint *)(param_1 + 0x29b8) & 0x200) == 0) &&
           (((*(char *)(param_1 + 0x174e) != '\x01' || (*DAT_004ba964 < 'Q')) ||
            ((*(uint *)(param_1 + 0x29b8) & 0x400) != 0)))) goto LAB_004ba9d8;
        uVar8 = *(uint *)(DAT_004ba968 + 4);
        bVar14 = uVar8 != 0;
        if (!bVar14) {
          uVar8 = (uint)*(byte *)(param_1 + 0x1ac);
        }
        if ((bVar14 || uVar8 != 3) || (int)(fVar16 * fVar18) != 3) goto LAB_004ba9d8;
        goto LAB_004ba854;
      }
      fVar18 = (float)FUN_003759d0();
      iVar6 = (int)(fVar18 * DAT_004ba96c);
      if (iVar6 < 4) {
        if (iVar6 == 0 || iVar6 == 3) {
          if (*(char *)(param_1 + 0x1b5) != '\n') goto LAB_004ba8cc;
          if (iVar6 != 3) {
            iVar7 = FUN_0033100c(param_1);
            if (iVar7 == 0) goto LAB_004ba8cc;
            if ((iVar6 == 0) && (iVar7 = FUN_0035d260(param_1), iVar7 != 0)) {
              iVar6 = 4;
            }
          }
        }
        uVar8 = iVar6 + 9;
      }
    }
LAB_004ba8cc:
    piVar9 = DAT_004ba948 + uVar8 * 2;
    if (*(char *)(param_1 + 0x1b3) != '\x01') {
      piVar9 = piVar9 + 1;
    }
    iVar6 = *piVar9;
    if (iVar6 == 0x1a) {
      iVar6 = 0x1c;
    }
    else if (iVar6 == 0x15) {
      iVar6 = 0x14;
    }
    if (((*(uint *)(param_1 + 0x1710) & 0x8000000) != 0) &&
       (*(char *)(param_1 + 0x1a7) == '\x01' && iVar6 == 0x54)) {
      iVar6 = 0x1c;
    }
  }
  else {
    *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) & 0xefffffff;
LAB_004ba6dc:
    iVar6 = FUN_0034d628(param_1);
  }
  bVar14 = iVar6 == 0x1f8 || iVar6 == 0x1f9;
  if (iVar6 != 0x1f8 && iVar6 != 0x1f9) {
    bVar14 = iVar6 == 0x1fa;
  }
  uVar5 = 2;
  uVar13 = uVar2;
  if (bVar14) {
    uVar5 = 0;
    uVar13 = DAT_004ba970;
  }
  if ((*(int *)(param_1 + 0x284) != iVar6) || (*(char *)(param_1 + 0x2c4) == '\x02')) {
    fVar18 = *(float *)(DAT_004babf4 + 0x2c) * DAT_004babf8;
    uVar10 = FUN_003603c0(param_1 + 0x254,iVar6);
    uVar10 = VectorSignedToFloat(uVar10,(byte)(uVar15 >> 0x15) & 3);
    FUN_00360190(fVar18,fVar3,uVar10,uVar13,param_1 + 0x254,param_2,iVar6,uVar5);
  }
LAB_004ba9d8:
  fVar18 = (float)VectorSignedToFloat((int)*(short *)(*DAT_004babfc + 0x6a),
                                      (byte)(uVar15 >> 0x15) & 3);
  FUN_003705a0(fVar3,fVar18 * DAT_004bac00,param_1 + 0x221c);
  if ((*(short *)(param_1 + 0x2238) == 0) &&
     (iVar6 = FUN_002c3d18(param_2,param_1,DAT_004bac04,1), iVar6 == 0)) {
    iVar6 = FUN_00349574(param_1);
    if (iVar6 != 0) {
      FUN_0036055c(param_2,param_1,DAT_0031e090,1);
      if (((*(uint *)(DAT_0031e094 + param_1) & 0x200) == 0) &&
         (((*(char *)(DAT_0031e09c + param_1) != '\x01' || (*DAT_0031e0a0 < 'Q')) ||
          ((*(uint *)(DAT_0031e094 + param_1) & 0x400) != 0)))) {
        uVar13 = *(undefined4 *)(DAT_0031e098 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0xa8);
      }
      else {
        uVar13 = *(undefined4 *)(DAT_0031e098 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0xc0);
      }
      uVar5 = FUN_003603c0(param_1 + 0x254,uVar13);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar15 >> 0x15) & 3);
      FUN_00360190(DAT_0031e0a8,DAT_0031e0a4,uVar5,uVar2,param_1 + 0x254,param_2,uVar13,2);
      *(undefined2 *)(DAT_0031e0ac + param_1) = 1;
      return;
    }
    if ((*(uint *)(param_1 + 0x1710) & DAT_004bac08) != 0) {
      FUN_0036055c(param_2,param_1,DAT_002bca90,1);
      uVar13 = FUN_0034d628(param_1);
      uVar2 = DAT_002bca94;
      uVar5 = FUN_003603c0(param_1 + 0x254,uVar13);
      uVar5 = VectorSignedToFloat(uVar5,(byte)(uVar15 >> 0x15) & 3);
      FUN_00360190(DAT_002bca9c,DAT_002bca98,uVar5,uVar2,param_1 + 0x254,param_2,uVar13,2);
      *(undefined2 *)(DAT_002bcaa0 + param_1) = *(undefined2 *)(param_1 + 0xbe);
      return;
    }
    if (*(char *)(DAT_004bac0c + param_2) == -0x14) {
      uStack_44 = (uint)*(ushort *)(param_1 + 0xbe);
      fStack_40 = fVar3;
    }
    else {
      FUN_0036b3f4(DAT_004bac10,param_1,&fStack_40,&uStack_44,param_2);
    }
    if (fStack_40 == fVar3) {
      iVar6 = (int)(short)((short)uStack_44 - *(short *)(param_1 + 0xbe));
      if (iVar6 < 0) {
        iVar6 = -iVar6;
      }
      if (800 < iVar6) {
        *(short *)(param_1 + 0x2220) = (short)uStack_44;
        FUN_0036055c(param_2,param_1,DAT_004bac14,1);
        iVar6 = DAT_004bac1c;
        *(short *)(param_1 + 0x226a) = (short)(int)(DAT_004bac18 * *(float *)(DAT_004babf4 + 0x2c));
        FUN_00360190(fVar4,fVar3,fVar3,uVar2,param_1 + 0x254,param_2,
                     *(undefined4 *)(iVar6 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x300),0);
        return;
      }
      FUN_00370378(param_1 + 0xbe,(int)(short)uStack_44,0x4b0);
      *(undefined2 *)(param_1 + 0x2220) = *(undefined2 *)(param_1 + 0xbe);
      iVar7 = *(int *)(param_1 + 0x284);
      iVar6 = FUN_0034d628(param_1);
      if (iVar7 == iVar6) {
        FUN_002ddba0(param_1,param_2);
        return;
      }
      if ((*(int *)(param_1 + 0x16f8) == 0) && (*(int *)(param_2 + 0x2130) != 0)) {
        FUN_002bf814(param_1,param_2,*(int *)(param_2 + 0x2130),0);
        return;
      }
    }
    else {
      *(short *)(param_1 + 0x2220) = (short)uStack_44;
      *(short *)(param_1 + 0xbe) = (short)uStack_44;
      FUN_002c3c7c(param_1,param_2);
    }
  }
  return;
}

