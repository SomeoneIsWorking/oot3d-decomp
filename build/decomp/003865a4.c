// OoT3D decomp @ 003865a4  name=FUN_003865a4  size=196

void FUN_003865a4(int param_1,int param_2)

{
  char cVar1;
  byte bVar2;
  float fVar3;
  short sVar4;
  ushort uVar5;
  int *piVar6;
  int iVar7;
  undefined4 uVar8;
  short *psVar9;
  float *pfVar10;
  undefined4 extraout_r1;
  undefined2 *puVar11;
  int *piVar12;
  uint uVar13;
  uint in_fpscr;
  uint uVar14;
  float fVar15;
  int iVar16;
  float fVar17;
  undefined4 uVar18;
  int iStack_38;
  float fStack_34;
  float fStack_30;
  float fStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;

  if (*(byte *)(param_1 + 0xe74) < 2) {
    FUN_0031d3c0(param_1,param_2);
  }
  else if (*(byte *)(param_1 + 0xe74) == 4) {
    FUN_0031d314(param_1);
  }
  piVar12 = piRam003869c0;
  psVar9 = (short *)(piRam003869c0[1] + *(int *)(param_1 + 0xe68) * 10);
  uStack_28 = VectorSignedToFloat((int)*psVar9,(byte)(in_fpscr >> 0x15) & 3);
  uStack_24 = VectorSignedToFloat((int)psVar9[1],(byte)(in_fpscr >> 0x15) & 3);
  uStack_20 = VectorSignedToFloat((int)psVar9[2],(byte)(in_fpscr >> 0x15) & 3);
  FUN_0031d2ac(&uStack_28,(int)*(short *)(piRam003869c0[1] + *(int *)(param_1 + 0xe68) * 10 + 8),
               &fStack_2c,&fStack_30,&fStack_34);
  fVar3 = fRam003869c4;
  fStack_34 = *(float *)(param_1 + 0x28) * fStack_2c + fStack_30 * *(float *)(param_1 + 0x30) +
              fStack_34;
  uVar13 = in_fpscr & 0xfffffff | (uint)(fStack_34 < fRam003869c4) << 0x1f |
           (uint)(fStack_34 == fRam003869c4) << 0x1e;
  uVar14 = uVar13 | (uint)(NAN(fStack_34) || NAN(fRam003869c4)) << 0x1c;
  bVar2 = (byte)(uVar13 >> 0x18);
  if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar14 >> 0x1c) & 1)) {
    FUN_00375c08(param_1 + 0x1b8,extraout_r1,2);
    piVar6 = (int *)0x0;
    if (*(int *)(DAT_00385dc0 + (int)piVar12) != 0) {
      piVar6 = piVar12 + 0xe97;
    }
    if (((*DAT_00385dc4 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_00385dc4), iVar7 != 0)) {
      FUN_0036788c(DAT_00385dc8);
    }
    piVar12 = *(int **)(DAT_00385dc8 + 0x17c);
    uVar8 = ObjectBankArchive_00358ef8(piVar6 + 4,*(undefined1 *)(DAT_00385dd4 + 1));
    uVar8 = (**(code **)(*piVar12 + 8))(piVar12,uVar8,0);
    *(undefined4 *)(param_2 + 0x178) = uVar8;
    FUN_00372d4c(fVar3,DAT_00385dd8,param_1 + 0xbc,DAT_00385ddc);
    return;
  }
  psVar9 = (short *)(piVar12[1] + *(int *)(param_1 + 0xe68) * 10);
  uStack_28 = VectorSignedToFloat((int)*psVar9,(byte)(uVar14 >> 0x15) & 3);
  uStack_24 = VectorSignedToFloat((int)psVar9[1],(byte)(uVar14 >> 0x15) & 3);
  uStack_20 = VectorSignedToFloat((int)psVar9[2],(byte)(uVar14 >> 0x15) & 3);
  iVar7 = *(int *)(param_1 + 0xe68) + -1;
  if (iVar7 < 0) {
    iVar7 = *piVar12 + -1;
  }
  psVar9 = (short *)(piVar12[1] + iVar7 * 10);
  uVar8 = VectorSignedToFloat((int)*psVar9,(byte)(uVar14 >> 0x15) & 3);
  uVar18 = VectorSignedToFloat((int)psVar9[2],(byte)(uVar14 >> 0x15) & 3);
  FUN_0031d210(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x30),uVar8,uVar18,
               &iStack_38);
  FUN_003326f0(param_1,&uStack_28,uRam003869c8);
  if (iStack_38 < iRam003869cc) {
    if ((*(int *)(param_1 + 0x98) < iRam003869d0) ||
       ((*(byte *)(*(int *)(param_1 + 0xfa8) + 0x17) & 2) != 0)) {
      fVar15 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x92) -
                                               *(short *)(param_1 + 0x36)));
      uVar13 = uVar14 & 0xfffffff | (uint)(fVar15 < fVar3) << 0x1f | (uint)(fVar15 == fVar3) << 0x1e
      ;
      uVar14 = uVar13 | (uint)(NAN(fVar15) || NAN(fVar3)) << 0x1c;
      bVar2 = (byte)(uVar13 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar14 >> 0x1c) & 1))
      goto code_r0x003867cc;
code_r0x003867d8:
      sVar4 = *(short *)(param_1 + 0x36) + -0xba;
code_r0x00386794:
      *(short *)(param_1 + 0x36) = sVar4;
    }
    else if (*(int *)(param_1 + 0x98) < iRam003869d4) {
      fVar15 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x92) -
                                               *(short *)(param_1 + 0x36)));
      uVar13 = uVar14 & 0xfffffff | (uint)(fVar15 < fVar3) << 0x1f | (uint)(fVar15 == fVar3) << 0x1e
      ;
      uVar14 = uVar13 | (uint)(NAN(fVar15) || NAN(fVar3)) << 0x1c;
      bVar2 = (byte)(uVar13 >> 0x18);
      if ((bool)(bVar2 >> 6 & 1) || bVar2 >> 7 != ((byte)(uVar14 >> 0x1c) & 1))
      goto code_r0x003867d8;
code_r0x003867cc:
      sVar4 = *(short *)(param_1 + 0x36) + 0xba;
      goto code_r0x00386794;
    }
    *(undefined2 *)(param_1 + 0xbe) = *(undefined2 *)(param_1 + 0x36);
  }
  iVar16 = FUN_00357eac(param_1,*(undefined4 *)(param_2 + 0x20ac));
  sVar4 = FUN_0036e800(param_1,*(undefined4 *)(param_2 + 0x20ac));
  iVar7 = (int)(short)(sVar4 - *(short *)(param_1 + 0x36));
  if (iRam003869d8 < iVar16) {
    fVar15 = (float)FUN_002cfca0(iVar7);
    if ((int)ABS(fVar15) < iRam003869dc) {
      fVar15 = (float)FUN_00338f60(iVar7);
      uVar13 = uVar14 & 0xfffffff | (uint)(fVar15 < fVar3) << 0x1f | (uint)(fVar15 == fVar3) << 0x1e
      ;
      uVar14 = uVar13 | (uint)(NAN(fVar15) || NAN(fVar3)) << 0x1c;
      bVar2 = (byte)(uVar13 >> 0x18);
      if (!(bool)(bVar2 >> 6 & 1) && bVar2 >> 7 == ((byte)(uVar14 >> 0x1c) & 1))
      goto code_r0x00386860;
    }
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(piVar12[1] +
                                                       *(int *)(param_1 + 0xe68) * 10 + 6),
                                        (byte)(uVar14 >> 0x15) & 3);
    fVar15 = *(float *)(param_1 + 0x6c);
    if (fVar17 <= fVar15) {
      fVar15 = fVar15 - fRam003869e4;
    }
    else {
      fVar15 = fVar15 + fRam003869e4;
    }
    *(float *)(param_1 + 0x6c) = fVar15;
    uVar5 = *(ushort *)(param_1 + 0x1020) & 0xfffe;
  }
  else {
code_r0x00386860:
    fVar15 = *(float *)(param_1 + 0x6c);
    if (*(float *)(param_1 + 0x1024) <= fVar15) {
      fVar15 = fVar15 - fRam003869e0;
    }
    else {
      fVar15 = fVar15 + fRam003869e0;
    }
    *(float *)(param_1 + 0x6c) = fVar15;
    uVar5 = *(ushort *)(param_1 + 0x1020) | 1;
  }
  *(ushort *)(param_1 + 0x1020) = uVar5;
  if (*(int *)(param_1 + 0x1014) == 0) {
    *(float *)(param_1 + 0x6c) = fVar3;
    *(float *)(*(int *)(param_1 + 0x1018) + 0x6c) = fVar3;
    fVar15 = fRam003869f4;
    if (*(char *)(param_1 + 0xe74) == '\0') goto code_r0x00386948;
    FUN_0033d88c(param_1);
  }
  cVar1 = *(char *)(param_1 + 0xe74);
  if (cVar1 == '\x04') {
    fVar15 = *(float *)(param_1 + 0x6c) * fRam003869e8;
  }
  else {
    if (cVar1 == '\x05') {
      fVar17 = *(float *)(param_1 + 0x6c);
      fVar15 = fRam003869ec;
    }
    else {
      fVar15 = fRam003869f4;
      if (cVar1 != '\a' && cVar1 != '\t') goto code_r0x00386948;
      fVar17 = *(float *)(param_1 + 0x6c);
      fVar15 = fRam003869f0;
    }
    fVar15 = fVar17 * fVar15;
  }
code_r0x00386948:
  FUN_003731e8(fVar15,param_1 + 0x1c4);
  iVar7 = FUN_003731e0(param_1 + 0x1c4);
  if ((iVar7 != 0) ||
     ((*(char *)(param_1 + 0xe74) == '\0' && (*(float *)(param_1 + 0x6c) != fVar3)))) {
    FUN_0033d88c(param_1);
  }
  if ((*(uint *)(param_1 + 0xe54) & 0x800000) == 0) {
    uVar13 = (uint)*(byte *)(param_1 + 0xe74);
    fVar15 = *(float *)(param_1 + 0x200);
    uVar5 = *(ushort *)(param_1 + 0x1020);
    puVar11 = (undefined2 *)(*(int *)(param_1 + 0x1018) + 0x45e);
    pfVar10 = (float *)(*(int *)(param_1 + 0x1018) + 0x458);
    *puVar11 = *(undefined2 *)(iRam00386a88 + uVar13 * 2);
    *pfVar10 = fVar15;
    if (((uVar13 == 3 || uVar13 == 0xc) || uVar13 == 0xd) || uVar13 == 4) {
      *pfVar10 = fVar3;
    }
    if ((uVar5 & 1) == 1) {
      if (uVar13 != 5) {
        if (uVar13 == 7 || uVar13 == 9) {
          *puVar11 = 3;
          *pfVar10 = fVar15;
        }
        return;
      }
      *puVar11 = 4;
      *pfVar10 = fVar15;
    }
  }
  else {
    *(undefined2 *)(*(int *)(param_1 + 0x1018) + 0x45e) = 7;
    *(float *)(*(int *)(param_1 + 0x1018) + 0x458) = fVar3;
  }
  return;
}
