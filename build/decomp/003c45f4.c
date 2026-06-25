// OoT3D decomp @ 003c45f4  name=FUN_003c45f4  size=1784

void FUN_003c45f4(int param_1,int param_2)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  ushort *puVar4;
  ushort *puVar5;
  int iVar6;
  uint uVar7;
  char cVar8;
  uint uVar9;
  ushort *puVar10;
  uint uVar11;
  char cVar12;
  short *psVar13;
  bool bVar14;
  bool bVar15;
  int iVar16;
  
  uVar3 = FUN_003769d8(param_1 + 0x28a0);
  bVar14 = uVar3 != 0;
  if (!bVar14) {
    uVar3 = (uint)*(byte *)(param_2 + 2);
  }
  if (bVar14 || uVar3 != 2) {
    return;
  }
  puVar4 = *(ushort **)(param_2 + 0x12b0);
  uVar3 = (uint)*(byte *)(param_2 + 0x222a);
  psVar13 = *(short **)(param_2 + 0x1224);
  cVar8 = *(char *)(uVar3 + param_2 + 0x2231);
  bVar14 = (*(uint *)(param_2 + 0x1710) & 0x8000000) != 0;
  if (bVar14) {
    uVar3 = (uint)*(byte *)(param_2 + 0x1a7);
  }
  bVar2 = uVar3 != 1;
  if (((*(uint *)(param_2 + 0x1710) & 0x8000000) == 0) ||
     (puVar5 = (ushort *)(uint)*(byte *)(param_2 + 0x1a7), puVar5 != (ushort *)0x1)) {
    puVar5 = (ushort *)0x0;
  }
  cVar12 = '\n';
  iVar6 = FUN_0035db20(param_1,param_2);
  uVar3 = DAT_003c4c98;
  if (iVar6 == 0) {
    uVar7 = *(uint *)(param_2 + 0x1710);
    if ((uVar7 & 0x100000) != 0) {
      bVar15 = (uVar7 & 0x800000) == 0;
      if (!bVar15) {
        bVar15 = (*(uint *)(param_2 + 0x1714) & 2) == 0;
      }
      if (!bVar15) {
        bVar15 = *(int *)(param_2 + 0x172c) == 0;
      }
      if (bVar15) {
        cVar12 = '\x03';
        goto LAB_003c49cc;
      }
    }
    if ((*(char *)(param_2 + 0x1a9) == '\x02') && (*(short *)(DAT_003c4c6c + param_2) != 0)) {
      if (*(short *)(DAT_003c4c6c + param_2) == 2) {
        cVar12 = '\x14';
      }
      goto LAB_003c49cc;
    }
    if ((*(uint *)(param_2 + 0x1708) == DAT_003c4c70) ||
       (uVar9 = *(uint *)(param_2 + 0x1714), (uVar9 & 0x40000) != 0)) goto LAB_003c49cc;
    if (*(char *)(param_2 + 0x12a4) != '\0') {
      if ((uVar7 & 0x800) != 0) {
        if (psVar13 == (short *)0x0) goto LAB_003c4748;
        if (*psVar13 != 0xa1) goto LAB_003c47b0;
      }
LAB_003c4734:
      cVar12 = '\x04';
      goto LAB_003c49cc;
    }
    if ((uVar7 & 0x800) == 0 || psVar13 == (short *)0x0) {
LAB_003c4748:
      if (puVar4 == (ushort *)0x0) goto LAB_003c47b0;
      puVar10 = puVar4;
      if (!bVar14 || !bVar2) {
        puVar10 = (ushort *)(uint)*(byte *)(param_2 + 0x12ac);
      }
      if (bVar14 && bVar2 || puVar10 != (ushort *)0x0) {
        if (*(char *)(param_2 + 0x12ac) < '\0') {
          bVar15 = (uVar7 & 0x8000000) == 0;
          if (bVar15) {
            bVar15 = (*(uint *)(param_2 + 0x29b8) & 0x1000000) == 0;
          }
          if (bVar15) goto LAB_003c4734;
        }
        goto LAB_003c47b0;
      }
      bVar15 = (uVar9 & 0x400) != 0;
      if (!bVar15) {
        puVar10 = puVar5;
      }
      if (bVar15 || puVar10 != (ushort *)0x0) goto LAB_003c47b8;
      uVar3 = (uint)*puVar4;
      bVar14 = uVar3 != 0x6c;
      if (!bVar14) {
        uVar3 = *(uint *)(DAT_003c4c74 + 4);
      }
      if (bVar14 || uVar3 != 0) goto LAB_003c47cc;
LAB_003c47c4:
      cVar12 = '\f';
      goto LAB_003c49cc;
    }
LAB_003c47b0:
    if (!bVar14 || !bVar2) {
LAB_003c47b8:
      if ((uVar9 & 1) == 0) goto LAB_003c47d4;
LAB_003c47cc:
      cVar12 = '\x11';
      goto LAB_003c49cc;
    }
LAB_003c47d4:
    if ((uVar9 & 4) != 0) {
LAB_003c47f0:
      cVar12 = '\v';
      goto LAB_003c49cc;
    }
    if ((uVar7 & 0x800000) == 0) {
      uVar11 = *(uint *)(param_2 + 0x12b8);
      if (*(uint *)(param_2 + 0x12b8) != 0) goto LAB_003c47f0;
LAB_003c4868:
      bVar15 = (uVar9 & 2) != 0;
      if (bVar15) {
        uVar11 = *(uint *)(param_2 + 0x172c);
      }
      if (bVar15 && uVar11 != 0) {
        if (*(char *)(uVar11 + 2) == '\x04') goto LAB_003c4884;
LAB_003c488c:
        cVar12 = '\x01';
        goto LAB_003c49c4;
      }
      if (*(int *)(param_2 + 0x1744) != 0) {
        cVar12 = '\x01';
        goto LAB_003c49cc;
      }
      if ((DAT_003c4c7c & uVar7) != 0) {
LAB_003c48bc:
        cVar12 = '\r';
        goto LAB_003c49cc;
      }
      bVar15 = (uVar7 & 0x800000) == 0;
      if (!bVar15) {
        bVar15 = (uVar9 & 0x400000) == 0;
      }
      if (!bVar15) goto LAB_003c48bc;
      if ((uVar9 & 0x10000) != 0) {
        cVar12 = '\x02';
        goto LAB_003c49cc;
      }
      if ((((uVar7 & 0x800) != 0) && (*(char *)(param_2 + 0x12ac) == '\0')) &&
         (psVar13 != (short *)0x0)) {
        if (((*(ushort *)(param_2 + 0x90) & 1) != 0) || (*psVar13 == 0x19)) {
          if (((*(uint *)(psVar13 + 2) & 0x800000) == 0) &&
             ((*(int *)(param_2 + 0x221c) < DAT_003c4c80 || (*psVar13 == 0xda)))) goto LAB_003c47c4;
          cVar12 = '\t';
        }
        goto LAB_003c49cc;
      }
      bVar15 = (uVar7 & 0x8000000) == 0;
      if (bVar15) {
        bVar15 = (*(uint *)(param_2 + 0x29b8) & 0x1000000) == 0;
      }
      if ((((bVar15) && (*(int *)(param_2 + 0x12b0) != 0)) && (*(int *)(param_2 + 0x1224) == 0)) &&
         (*(char *)(param_2 + 0x12ac) < '~')) goto LAB_003c47cc;
      if ((uVar9 & 0x800) != 0) {
        iVar16 = (int)((*(float *)(DAT_003c4c8c +
                                  ((int)(*(uint *)(DAT_003c4c74 + 0xb8) &
                                        *(uint *)(DAT_003c4c84 + 0xc)) >>
                                  *(sbyte *)(DAT_003c4c88 + 3)) * 4) - *(float *)(param_2 + 0x88)) *
                      DAT_003c4c90);
        iVar6 = UnsignedSaturate(iVar16,3);
        UnsignedDoesSaturate(iVar16,3);
        cVar12 = *(char *)(DAT_003c4c94 + iVar6);
        goto LAB_003c49c4;
      }
      if (bVar14 && bVar2) {
        if ((uVar9 & 0x400) == 0) {
          cVar12 = '\a';
        }
        goto LAB_003c49cc;
      }
      if ((uVar7 & 0x400000) != 0) {
        iVar6 = FUN_003518cc(param_2);
        bVar14 = iVar6 == 0;
        if (bVar14) {
          bVar14 = (*(uint *)(param_2 + 0x1710) & uVar3) == 0;
        }
        if ((bVar14) && (iVar6 = FUN_0035d2d4(param_2), iVar6 != 0)) goto LAB_003c49cc;
      }
      if (((*(uint *)(param_2 + 0x1710) & 0x4000) == 0) && (cVar8 < '\x01')) {
        iVar6 = FUN_003518cc(param_2);
        if (iVar6 != 0) {
LAB_003c4a84:
          cVar12 = '\0';
          goto LAB_003c49cc;
        }
        if (*(int *)(DAT_003c4c9c + 0x28) == 7) goto LAB_003c4a8c;
        if ((*(uint *)(param_2 + 0x1710) & uVar3) != 0) goto LAB_003c4a84;
        if (*(char *)(param_1 + 0x4c33) != '\x02') {
          if ((*(uint *)(param_2 + 0x1710) & 0x400000) == 0 && cVar8 == '\0') goto LAB_003c4a84;
          goto LAB_003c4a98;
        }
      }
      else {
LAB_003c4a8c:
        if (*(char *)(param_1 + 0x4c33) != '\x02') {
LAB_003c4a98:
          iVar6 = FUN_003518cc(param_2);
          bVar14 = iVar6 == 0;
          if (bVar14) {
            bVar14 = (*(uint *)(param_2 + 0x1710) & uVar3) == 0;
          }
          if ((!bVar14) && ('\0' < cVar8)) {
            cVar12 = '\x05';
            goto LAB_003c49cc;
          }
        }
      }
      if ((*(char *)(param_2 + 0x1a9) < '\x03') &&
         (((*(uint *)(param_2 + 0x1714) & 0x100000) == 0 || (*(int *)(param_1 + 0x2130) != 0))))
      goto LAB_003c49cc;
      cVar12 = '\x13';
    }
    else {
      cVar1 = *(char *)(*(int *)(param_2 + 0x12b8) + 0x1a4);
      if ((cVar1 == '\x05' || cVar1 == '\0') || cVar1 == '\x06') {
        uVar11 = *(uint *)(*(int *)(param_2 + 0x12b8) + 0xe54);
        bVar15 = (uVar11 & 0x80000) == 0;
        if (bVar15) {
          bVar15 = (uVar11 & 0x2000000) == 0;
        }
        if (bVar15) goto LAB_003c4868;
      }
      uVar11 = DAT_003c4c78;
      if (*(uint *)(param_2 + 0x1708) == DAT_003c4c78) goto LAB_003c4868;
      bVar14 = (uVar9 & 2) == 0;
      if (!bVar14) {
        uVar7 = *(uint *)(param_2 + 0x172c);
      }
      if (bVar14 || uVar7 == 0) {
        iVar6 = FUN_0033bd6c(param_2);
        bVar14 = iVar6 == 0;
        if (bVar14) {
          bVar14 = (*(uint *)(param_2 + 0x1710) & 0x100000) == 0;
        }
        if (bVar14) {
          cVar12 = '\b';
        }
        goto LAB_003c49cc;
      }
      if (*(char *)(uVar7 + 2) != '\x04') goto LAB_003c488c;
LAB_003c4884:
      cVar12 = '\x0f';
LAB_003c49c4:
      if (cVar12 != '\x13') goto LAB_003c49cc;
    }
    if (*(char *)(param_2 + 0x221b) != '\0') {
      cVar12 = '\n';
      cVar8 = *(char *)(param_2 + 0x221b) + -1;
      goto LAB_003c4b00;
    }
  }
  else {
LAB_003c49cc:
    cVar8 = '\x1e';
LAB_003c4b00:
    *(char *)(param_2 + 0x221b) = cVar8;
  }
  FUN_0034c294(param_1,cVar12);
  if (*(char *)(param_2 + 0x29e0) == '\0') {
LAB_003c4ca0:
    if ((*(uint *)(param_2 + 0x1714) & 0x200000) == 0) {
LAB_003c4cac:
      *(undefined4 *)(param_2 + 0x29dc) = 0;
    }
    FUN_00315ac4(param_1,0x1f);
    if (((*(ushort *)(param_2 + 0x90) & 1) == 0) &&
       ((*(char *)(param_2 + 0x1a7) != '\x02' || (*(char *)(param_2 + 0x227f) == '\0')))) {
      *(byte *)(param_2 + 0x29e3) = *(byte *)(param_2 + 0x29e3) | 1;
    }
    cVar8 = (char)*(undefined4 *)(DAT_003c4c9c + 0xd4);
    if (*(int *)(param_2 + 0x16f8) != 0) {
      cVar8 = -cVar8;
    }
    *(char *)(param_2 + 0x29e1) = cVar8;
    if (*(char *)(param_2 + 0x29e2) != -1) {
      *(char *)(param_2 + 0x29e2) = *(char *)(param_2 + 0x29e2) + '\x01';
    }
    goto LAB_003c4d14;
  }
  if ((*(uint *)(param_2 + 0x1714) & 0x200000) == 0) goto LAB_003c4cac;
  iVar6 = FUN_00374be8(param_1,1);
  if (iVar6 == 0) goto LAB_003c4ca0;
  if ((*(byte *)(param_2 + 0x29e3) & 1) == 0) {
    if (*(int *)(param_2 + 0x16f8) == 0) goto LAB_003c4b80;
    if (-1 < *(char *)(param_2 + 0x29e1)) {
      *(undefined *)(param_2 + 0x29e1) = 0;
      goto LAB_003c4bc0;
    }
LAB_003c4b94:
    cVar8 = *(char *)(param_2 + 0x29e1) + '\x01';
  }
  else {
    *(byte *)(param_2 + 0x29e3) = *(byte *)(param_2 + 0x29e3) & 0xfe;
    *(undefined *)(param_2 + 0x29e1) = 0;
LAB_003c4b80:
    cVar8 = *(char *)(param_2 + 0x29e1);
    if (cVar8 == '\0') {
LAB_003c4bc0:
      if (iVar6 == 1) {
        if (*(uint *)(DAT_003c4c9c + 0xd8) < (uint)*(byte *)(param_2 + 0x29e2)) {
          if ((*(byte *)(param_2 + 0x29e3) & 2) != 0) goto LAB_003c4bf8;
        }
        else {
          if ((*(byte *)(param_2 + 0x29e3) & 2) == 0) goto LAB_003c4c4c;
LAB_003c4bf8:
          FUN_00315ac4(param_1,0x1f);
        }
        if (*(int *)(param_2 + 0x16f8) == 0) {
          FUN_00315ac4(param_1,0x1d);
        }
        else {
          FUN_00315ac4(param_1,0x1e);
        }
        FUN_00315ac4(param_1,0x1e);
      }
      else {
LAB_003c4c4c:
        FUN_00315ac4(param_1,0x23);
      }
      *(undefined *)(param_2 + 0x29e2) = 0;
      *(byte *)(param_2 + 0x29e3) = *(byte *)(param_2 + 0x29e3) & 0xfd;
      goto LAB_003c4d14;
    }
    if (cVar8 < '\0') goto LAB_003c4b94;
    cVar8 = cVar8 + -1;
  }
  *(char *)(param_2 + 0x29e1) = cVar8;
  if (iVar6 == 1) {
    *(undefined4 *)(param_2 + 0x29dc) = 0;
  }
  FUN_00315ac4(param_1,0x1f);
LAB_003c4d14:
  *(undefined *)(param_2 + 0x29e0) = 0;
  return;
}

