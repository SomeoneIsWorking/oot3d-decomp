// OoT3D decomp @ 003667ec  name=FUN_003667ec  size=1032

void FUN_003667ec(int param_1,int param_2)

{
  float fVar1;
  byte bVar2;
  short sVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  uint uVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  
  if (*(short *)(param_1 + 0x9e6) != 0) {
    *(short *)(param_1 + 0x9e6) = *(short *)(param_1 + 0x9e6) + -1;
  }
  iVar4 = (int)*(short *)(param_1 + 0x9e8);
  bVar9 = iVar4 == 0;
  iVar8 = iVar4;
  iVar5 = iVar4;
  if (0 < iVar4) {
    iVar5 = (int)*(short *)(param_1 + 0x9e6);
    iVar8 = iVar5 + -0x17;
    bVar9 = iVar5 == 0x17;
  }
  if (bVar9 || iVar8 < 0 != (0 < iVar4 && SBORROW4(iVar5,0x17))) {
code_r0x00366a54:
    if (*(char *)(param_1 + 0x9e1) == '\0') {
      if ((*(short *)(param_1 + 0x9e6) < iRam00366bb8) &&
         (0x16 < (int)*(short *)(param_1 + 0x9e6) - 0x18U)) {
        bVar2 = *(byte *)(param_1 + 0x9e5) & 0xbf;
      }
      else {
        bVar2 = *(byte *)(param_1 + 0x9e5) | 0x40;
      }
      *(byte *)(param_1 + 0x9e5) = bVar2;
    }
  }
  else {
    FUN_003731e0(param_1 + 0x1a4);
    fVar15 = fRam00366bb0;
    fVar1 = fRam00366bac;
    fVar14 = fRam00366ba8;
    fVar13 = fRam00366ba4;
    if (*(byte *)(param_1 + 0x9e1) == 0) {
      uVar6 = (uint)*(byte *)(param_1 + 0x9e2);
      iVar8 = 0;
      if (uVar6 == 0) {
        sVar3 = 0;
      }
      else {
        fVar11 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
        sVar3 = (short)(int)(fRam00366bb0 + fVar11 * fRam00366ba8 * fRam00366bac);
      }
      if ((int)(short)(0x10 - sVar3) + 0xdU < 0x1b) {
        if (uVar6 == 0) {
          iVar5 = 0;
        }
        else {
          fVar11 = (float)VectorUnsignedToFloat(uVar6,(byte)(in_fpscr >> 0x15) & 3);
          iVar5 = (int)(fRam00366bb0 + fVar11 * fRam00366ba8 * fRam00366bac);
        }
        fVar11 = (float)FUN_002cfca0((int)(short)(iVar5 << 0xb));
        fVar12 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e8),
                                            (byte)(in_fpscr >> 0x15) & 3);
        if (*(short *)(param_1 + 0x9e8) < 1) {
          fVar12 = fVar12 * fVar14 * fVar1 - fVar15;
        }
        else {
          fVar12 = fVar15 + fVar12 * fVar14 * fVar1;
        }
        uVar7 = (uint)*(byte *)(param_1 + 0x9e2);
        fVar12 = (float)VectorSignedToFloat((3 - (int)fVar12) * 0x180 + 0x100,
                                            (byte)(in_fpscr >> 0x15) & 3);
        fVar12 = ABS(fVar11) * fVar12;
        uVar6 = in_fpscr & 0xfffffff | (uint)(fVar12 < fVar13) << 0x1f |
                (uint)(fVar12 == fVar13) << 0x1e;
        uVar10 = uVar6 | (uint)(NAN(fVar12) || NAN(fVar13)) << 0x1c;
        bVar2 = (byte)(uVar6 >> 0x18);
        if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar10 >> 0x1c) & 1)) {
          if (uVar7 != 0) {
            fVar13 = (float)VectorUnsignedToFloat(uVar7,(byte)(uVar10 >> 0x15) & 3);
            iVar8 = (int)(fVar15 + fVar13 * fVar14 * fVar1);
          }
          fVar13 = (float)FUN_002cfca0((int)(short)(iVar8 << 0xb));
          fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e8),
                                              (byte)(uVar10 >> 0x15) & 3);
          if (*(short *)(param_1 + 0x9e8) < 1) {
            fVar11 = fVar11 * fVar14 * fVar1 - fVar15;
          }
          else {
            fVar11 = fVar15 + fVar11 * fVar14 * fVar1;
          }
          fVar11 = (float)VectorSignedToFloat((3 - (int)fVar11) * 0x180 + 0x100,
                                              (byte)(uVar10 >> 0x15) & 3);
          fVar15 = ABS(fVar13) * fVar11 * fVar14 * fVar1 - fVar15;
        }
        else {
          if (uVar7 != 0) {
            fVar13 = (float)VectorUnsignedToFloat(uVar7,(byte)(uVar10 >> 0x15) & 3);
            iVar8 = (int)(fVar15 + fVar13 * fVar14 * fVar1);
          }
          fVar13 = (float)FUN_002cfca0((int)(short)(iVar8 << 0xb));
          fVar11 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x9e8),
                                              (byte)(uVar10 >> 0x15) & 3);
          if (*(short *)(param_1 + 0x9e8) < 1) {
            fVar11 = fVar11 * fVar14 * fVar1 - fVar15;
          }
          else {
            fVar11 = fVar15 + fVar11 * fVar14 * fVar1;
          }
          fVar11 = (float)VectorSignedToFloat((3 - (int)fVar11) * 0x180 + 0x100,
                                              (byte)(uVar10 >> 0x15) & 3);
          fVar15 = fVar15 + ABS(fVar13) * fVar11 * fVar14 * fVar1;
        }
        *(short *)(param_1 + 0xbe) = (short)(int)fVar15 + *(short *)(param_1 + 0xbe);
      }
      if ((int)*(short *)(param_1 + 0x9e6) - 0x2fU < uRam00366bb4) {
        bVar2 = *(byte *)(param_1 + 0x9e5) & 0xbf;
      }
      else {
        bVar2 = *(byte *)(param_1 + 0x9e5) | 0x40;
      }
      *(byte *)(param_1 + 0x9e5) = bVar2;
      goto code_r0x00366a54;
    }
    *(ushort *)(param_1 + 0xbe) =
         *(short *)(*(int *)(param_1 + 0x124) + 0xbe) + (ushort)*(byte *)(param_1 + 0x9e1) * 0x4000;
  }
  iVar5 = FUN_00363e64(*(undefined4 *)(iRam00366bbc + param_2),param_1 + 8);
  iVar8 = iRam00366bc4;
  if (iRam00366bc0 < iVar5) {
    *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) & 0xbf;
code_r0x00366ad4:
    FUN_00370170(param_1,param_2);
  }
  else if (*(short *)(param_1 + 0x9e6) == 0) {
    if (*(char *)(param_1 + 0x9e1) != '\0') goto code_r0x00366ad4;
code_r0x00366c04:
    FUN_001c68f0(param_1);
  }
  else if (*(char *)(param_1 + 0x9e1) == '\0') {
    sVar3 = *(short *)(param_1 + 0x9e8);
    if (sVar3 == 0) {
      *(undefined2 *)(param_1 + 0x9e8) = 0xffe9;
    }
    else if ((sVar3 < 0) && (*(short *)(param_1 + 0x9e8) = sVar3 + 1, (short)(sVar3 + 1) == 0))
    goto code_r0x00366c04;
  }
  else if (*(int *)(*(int *)(param_1 + 0x124) + 0x9dc) == iRam00366bc4) {
    FUN_00374a58(uRam00366bc8,param_1 + 0x1a4,4);
    if (*(int *)(param_1 + 0xa78) != 0) {
      if ((uRam00366bcc & **(uint **)(param_1 + 0xaac)) == 0) {
        sVar3 = FUN_0036e800(param_1);
        sVar3 = sVar3 + -0x8000;
      }
      else {
        sVar3 = *(short *)(*(int *)(param_1 + 0xa78) + 0x36);
      }
      *(short *)(param_1 + 0x36) = sVar3;
    }
    if (*(char *)(param_1 + 0x9e0) != '\0') {
      *(undefined4 *)(param_1 + 0x6c) = uRam00366bd0;
    }
    *(byte *)(param_1 + 0x9e5) = *(byte *)(param_1 + 0x9e5) & 0xf4;
    FUN_00375ed8(param_1,0x400000,0xff,0,0x10);
    *(int *)(param_1 + 0x9dc) = iVar8;
  }
  iVar8 = *(int *)(iRam00366d00 + param_2);
  if (*(char *)(param_1 + 0x9e1) != '\0') {
    iVar5 = *(int *)(param_1 + 0x9dc);
    bVar9 = iVar5 == iRam00366d04;
    if (bVar9) {
      iVar5 = *(int *)(param_1 + 0x124);
    }
    if (bVar9) {
      fVar13 = *(float *)(iVar5 + 0x98);
      goto code_r0x00366cc0;
    }
  }
  iVar5 = iVar8 + 0x2200;
  bVar9 = *(char *)(iVar8 + 0x2227) != '\0';
  if (bVar9) {
    iVar5 = (int)*(char *)(iVar8 + 0x2226);
  }
  if ((bVar9 && iVar5 < 0x18) ||
     (0x3f7fffff < (int)(*(float *)(iVar8 + 0x2c) - *(float *)(iVar8 + 0x84)))) {
    FUN_003705a0(uRam00366d14,uRam00366d10,param_1 + 0xa50);
  }
  else {
    FUN_003705a0(uRam00366d0c,uRam00366d08,param_1 + 0xa50);
  }
  fVar13 = *(float *)(param_1 + 0xa50);
code_r0x00366cc0:
  fVar14 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0xbe) + -0x8000));
  *(float *)(param_1 + 0x28) = *(float *)(iVar8 + 0x28) + fVar13 * fVar14;
  fVar14 = (float)FUN_00338f60((int)(short)(*(short *)(param_1 + 0xbe) + -0x8000));
  *(float *)(param_1 + 0x30) = *(float *)(iVar8 + 0x30) + fVar13 * fVar14;
  return;
}

