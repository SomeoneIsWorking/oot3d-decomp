// OoT3D decomp @ 002ec3e4  name=FUN_002ec3e4  size=3576

void FUN_002ec3e4(void)

{
  char cVar1;
  byte bVar2;
  ushort *puVar3;
  float fVar4;
  float fVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  ushort uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  ushort *puVar14;
  uint in_fpscr;
  undefined4 uVar15;
  float fVar16;
  undefined4 uVar17;
  float fVar18;
  undefined4 uVar19;

  uVar17 = DAT_002ec71c;
  uVar19 = DAT_002ec718;
  uVar15 = DAT_002ec714;
  fVar5 = DAT_002ec710;
  fVar18 = DAT_002ec70c;
  fVar4 = DAT_002ec708;
  puVar3 = DAT_002ec704;
  iVar13 = 0;
  puVar14 = DAT_002ec704 + 0x58;
  if (*(int *)(DAT_002ec704 + 0x1a) == 2) {
    uVar9 = FUN_0033b5ec();
    iVar12 = DAT_002ec734;
    if ((uVar9 & 0x400) == 0) {
      uVar9 = FUN_0033b5ec();
      iVar12 = DAT_002ec734;
      if ((uVar9 & 0x800) != 0) {
        iVar10 = *(int *)(puVar3 + 0x3c) + *(int *)(puVar3 + 0x3e) * 6;
        if (*(int *)(DAT_002ec734 + 4) == 0) {
          cVar1 = *(char *)(DAT_002ec734 + iVar10 + 0x13a2);
        }
        else {
          cVar1 = *(char *)(DAT_002ec734 + iVar10 + 0x138a);
        }
        if (cVar1 == -1) {
          return;
        }
        *(int *)(puVar3 + 0x28) = iVar10;
        if (iVar10 == 5) {
          *puVar3 = (ushort)DAT_002ec730;
          puVar3[1] = 7;
        }
        else {
          if (iVar10 == 0xb) {
            *puVar3 = (ushort)DAT_002ec728;
            uVar8 = 0x49;
          }
          else if (iVar10 == 0x11) {
            *puVar3 = (ushort)DAT_002ec72c;
            uVar8 = 0x7d;
          }
          else if (iVar10 == 0x17) {
            *puVar3 = (ushort)DAT_002ec730;
            uVar8 = 0xbf;
          }
          else {
            fVar16 = (float)VectorSignedToFloat(*(int *)(puVar3 + 0x3c),(byte)(in_fpscr >> 0x15) & 3
                                               );
            uVar15 = VectorFloatToUnsigned(fVar18 + fVar16 * fVar4,3);
            *puVar3 = (ushort)uVar15;
            fVar18 = (float)VectorSignedToFloat(*(int *)(puVar3 + 0x3e),(byte)(in_fpscr >> 0x15) & 3
                                               );
            uVar15 = VectorFloatToUnsigned(fVar5 + fVar18 * fVar4,3);
            uVar8 = (ushort)uVar15;
          }
          puVar3[1] = uVar8;
        }
        puVar3[0x2e] = 0;
        puVar3[0x2f] = 0;
        puVar3[0x2a] = 0x11;
        puVar3[0x2b] = 0;
        puVar3[0x2c] = 0;
        puVar3[0x2d] = 0;
        puVar3[4] = 0x107;
        puVar3[5] = 0x7d;
        iVar10 = FUN_002eb210();
        if (iVar10 != 0) goto LAB_002ec4d8;
        puVar3[6] = *puVar3;
        puVar3[10] = *puVar3;
        puVar3[7] = puVar3[1];
        puVar3[0xb] = puVar3[1];
        puVar3[8] = puVar3[4];
        puVar3[0xc] = puVar3[4];
        puVar3[9] = puVar3[5];
        puVar3[0xd] = puVar3[5];
        iVar10 = FUN_002eb0d8();
        if (iVar10 == 0) goto LAB_002ec60c;
        if (*(int *)(iVar12 + 4) == 0) {
          cVar1 = *(char *)(*(int *)(puVar3 + 0x28) + iVar12 + 0x13a2);
        }
        else {
          cVar1 = *(char *)(*(int *)(puVar3 + 0x28) + iVar12 + 0x138a);
        }
        if (cVar1 != -1) {
          FUN_002f8ce0(uVar17,*(undefined4 *)(puVar3 + 0x22),0);
          iVar11 = *(int *)(iVar12 + 4);
          iVar10 = *(int *)(puVar3 + 0x28);
          goto joined_r0x002ec894;
        }
        goto LAB_002ec8e8;
      }
      uVar9 = FUN_0033b5ec();
      if ((uVar9 & 2) != 0) {
        FUN_002fd84c(0,1);
        uVar15 = 0xe;
        puVar3[0x30] = 0;
        puVar3[0x31] = 0;
LAB_002ecab8:
        *(undefined4 *)(puVar3 + 0x1a) = uVar15;
        return;
      }
      uVar9 = FUN_0033b5ec();
      iVar12 = DAT_002ec734;
      if ((uVar9 & 1) != 0) {
        iVar13 = *(int *)(puVar3 + 0x3c) + *(int *)(puVar3 + 0x3e) * 6 + DAT_002ec734;
        if (*(int *)(DAT_002ec734 + 4) == 0) {
          cVar1 = *(char *)(iVar13 + 0x13a2);
        }
        else {
          cVar1 = *(char *)(iVar13 + 0x138a);
        }
        if (cVar1 == -1) {
          return;
        }
        FUN_0037547c(DAT_002ed218,0,4,DAT_002ed214,DAT_002ed214,DAT_002ed210);
        iVar10 = *(int *)(puVar3 + 0x3e);
        iVar11 = *(int *)(puVar3 + 0x3c);
        iVar13 = iVar11 + iVar10 * 6;
        *(int *)(puVar3 + 0x28) = iVar13;
        if (iVar13 == 5) {
          *puVar3 = (ushort)DAT_002ec730;
          puVar3[1] = 7;
        }
        else {
          if (iVar13 == 0xb) {
            *puVar3 = (ushort)DAT_002ec728;
            uVar8 = 0x49;
          }
          else if (iVar13 == 0x11) {
            *puVar3 = (ushort)DAT_002ec72c;
            uVar8 = 0x7d;
          }
          else if (iVar13 == 0x17) {
            *puVar3 = (ushort)DAT_002ec730;
            uVar8 = 0xbf;
          }
          else {
            fVar16 = (float)VectorSignedToFloat(iVar11,(byte)(in_fpscr >> 0x15) & 3);
            uVar15 = VectorFloatToUnsigned(fVar18 + fVar16 * fVar4,3);
            *puVar3 = (ushort)uVar15;
            fVar18 = (float)VectorSignedToFloat(iVar10,(byte)(in_fpscr >> 0x15) & 3);
            uVar15 = VectorFloatToUnsigned(fVar5 + fVar18 * fVar4,3);
            uVar8 = (ushort)uVar15;
          }
          puVar3[1] = uVar8;
        }
        *(int *)(puVar3 + 0x46) = iVar10;
        *(int *)(puVar3 + 0x44) = iVar11;
        uVar19 = VectorSignedToFloat(puVar3[1] - 2,(byte)(in_fpscr >> 0x15) & 3);
        uVar15 = VectorSignedToFloat(*puVar3 - 2,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002f7af4(uVar15,uVar19,*(undefined4 *)(puVar3 + 0x5a));
        puVar3[0x2e] = 0;
        puVar3[0x2f] = 0;
        puVar3[0x2c] = 0;
        puVar3[0x2d] = 0;
        FUN_002f8ce0(uVar17,*(undefined4 *)(puVar3 + 0x22),0);
        if (*(int *)(iVar12 + 4) == 0) {
          bVar2 = *(byte *)(*(int *)(puVar3 + 0x28) + iVar12 + 0x13a2);
        }
        else {
          bVar2 = *(byte *)(*(int *)(puVar3 + 0x28) + iVar12 + 0x138a);
        }
        FUN_002f8d74(*(undefined4 *)(puVar3 + 0x22),0,*(undefined1 *)((uint)bVar2 + iVar12 + 0x8c));
        FUN_002eb3d8(*(undefined4 *)(puVar3 + 0x22),0,*puVar3,puVar3[1],0x34,0x34,0xfffffffb,
                     0xfffffffb);
        uVar15 = 8;
        goto LAB_002ecab8;
      }
      uVar9 = FUN_0033b5d0();
      if ((uVar9 & 0x10) != 0) {
        FUN_0037547c(DAT_002ed21c,0,4,DAT_002ed214,DAT_002ed214,DAT_002ed210);
        iVar12 = *(int *)(puVar3 + 0x3c);
        iVar13 = 1;
        *(int *)(puVar3 + 0x3c) = iVar12 + 1;
        if (5 < iVar12 + 1) {
          puVar3[0x3c] = 0;
          puVar3[0x3d] = 0;
        }
      }
    }
    else {
      iVar10 = *(int *)(puVar3 + 0x3c) + *(int *)(puVar3 + 0x3e) * 6;
      if (*(int *)(DAT_002ec734 + 4) == 0) {
        cVar1 = *(char *)(DAT_002ec734 + iVar10 + 0x13a2);
      }
      else {
        cVar1 = *(char *)(DAT_002ec734 + iVar10 + 0x138a);
      }
      if (cVar1 == -1) {
        return;
      }
      *(int *)(puVar3 + 0x28) = iVar10;
      if (iVar10 == 5) {
        *puVar3 = (ushort)DAT_002ec730;
        puVar3[1] = 7;
      }
      else {
        if (iVar10 == 0xb) {
          *puVar3 = (ushort)DAT_002ec728;
          uVar8 = 0x49;
        }
        else if (iVar10 == 0x11) {
          *puVar3 = (ushort)DAT_002ec72c;
          uVar8 = 0x7d;
        }
        else if (iVar10 == 0x17) {
          *puVar3 = (ushort)DAT_002ec730;
          uVar8 = 0xbf;
        }
        else {
          fVar16 = (float)VectorSignedToFloat(*(int *)(puVar3 + 0x3c),(byte)(in_fpscr >> 0x15) & 3);
          uVar15 = VectorFloatToUnsigned(fVar18 + fVar16 * fVar4,3);
          *puVar3 = (ushort)uVar15;
          fVar18 = (float)VectorSignedToFloat(*(int *)(puVar3 + 0x3e),(byte)(in_fpscr >> 0x15) & 3);
          uVar15 = VectorFloatToUnsigned(fVar5 + fVar18 * fVar4,3);
          uVar8 = (ushort)uVar15;
        }
        puVar3[1] = uVar8;
      }
      puVar3[0x2e] = 0;
      puVar3[0x2f] = 0;
      puVar3[0x2a] = 0xb;
      puVar3[0x2b] = 0;
      puVar3[0x2c] = 0;
      puVar3[0x2d] = 0;
      puVar3[4] = 0x113;
      puVar3[5] = 0x49;
      iVar10 = FUN_002eb210();
      if (iVar10 != 0) {
LAB_002ec4d8:
        puVar3[0x1a] = 0xc;
        puVar3[0x1b] = 0;
        puVar3[0x1c] = 1;
        puVar3[0x1d] = 0;
        return;
      }
      puVar3[6] = *puVar3;
      puVar3[10] = *puVar3;
      puVar3[7] = puVar3[1];
      puVar3[0xb] = puVar3[1];
      puVar3[8] = puVar3[4];
      puVar3[0xc] = puVar3[4];
      puVar3[9] = puVar3[5];
      puVar3[0xd] = puVar3[5];
      iVar10 = FUN_002eb0d8();
      if (iVar10 == 0) {
LAB_002ec60c:
        FUN_002f8ce0(*(undefined4 *)(puVar3 + 0x22),0);
        *(undefined4 *)(*(int *)puVar14 + 0x34) = uVar19;
        FUN_0033c25c(1);
        puVar3[0x1a] = 1;
        puVar3[0x1b] = 0;
        return;
      }
      if (*(int *)(iVar12 + 4) == 0) {
        cVar1 = *(char *)(*(int *)(puVar3 + 0x28) + iVar12 + 0x13a2);
      }
      else {
        cVar1 = *(char *)(*(int *)(puVar3 + 0x28) + iVar12 + 0x138a);
      }
      if (cVar1 != -1) {
        FUN_002f8ce0(uVar17,*(undefined4 *)(puVar3 + 0x22),0);
        iVar11 = *(int *)(iVar12 + 4);
        iVar10 = *(int *)(puVar3 + 0x28);
joined_r0x002ec894:
        if (iVar11 == 0) {
          bVar2 = *(byte *)(iVar10 + iVar12 + 0x13a2);
        }
        else {
          bVar2 = *(byte *)(iVar10 + iVar12 + 0x138a);
        }
        FUN_002f8d74(*(undefined4 *)(puVar3 + 0x22),0,*(undefined1 *)((uint)bVar2 + iVar12 + 0x8c));
        FUN_002eb3d8(*(undefined4 *)(puVar3 + 0x22),0,*puVar3,puVar3[1],0x34,0x34,0xfffffffb,
                     0xfffffffb);
      }
LAB_002ec8e8:
      FUN_0037547c(DAT_002ed218,0,4,DAT_002ed214,DAT_002ed214,DAT_002ed210);
      *(undefined4 *)(puVar3 + 0x3a) = *(undefined4 *)(puVar3 + 0x28);
      puVar3[0x1a] = 9;
      puVar3[0x1b] = 0;
    }
    uVar9 = FUN_0033b5d0();
    if ((uVar9 & 0x20) != 0) {
      FUN_0037547c(DAT_002ed21c,0,4,DAT_002ed214,DAT_002ed214,DAT_002ed210);
      iVar12 = *(int *)(puVar3 + 0x3c);
      iVar13 = iVar13 + 1;
      *(int *)(puVar3 + 0x3c) = iVar12 + -1;
      if (iVar12 + -1 < 0) {
        puVar3[0x3c] = 5;
        puVar3[0x3d] = 0;
      }
    }
    uVar9 = FUN_0033b5d0();
    if ((uVar9 & 0x40) != 0) {
      FUN_0037547c(DAT_002ed21c,0,4,DAT_002ed214,DAT_002ed214,DAT_002ed210);
      iVar12 = *(int *)(puVar3 + 0x3e);
      iVar13 = iVar13 + 1;
      *(int *)(puVar3 + 0x3e) = iVar12 + -1;
      if (iVar12 + -1 < 0) {
        puVar3[0x3e] = 3;
        puVar3[0x3f] = 0;
      }
    }
    uVar9 = FUN_0033b5d0();
    if ((uVar9 & 0x80) == 0) goto LAB_002ed1cc;
    FUN_0037547c(DAT_002ed21c,0,4,DAT_002ed214,DAT_002ed214,DAT_002ed210);
    iVar12 = *(int *)(puVar3 + 0x3e) + 1;
    *(int *)(puVar3 + 0x3e) = iVar12;
  }
  else {
    if (*(int *)(DAT_002ec704 + 0x1a) != 8) {
      return;
    }
    uVar9 = FUN_0033b5ec();
    uVar7 = DAT_002ec724;
    uVar6 = DAT_002ec720;
    if ((uVar9 & 1) != 0) {
      iVar13 = *(int *)(puVar3 + 0x3c);
      iVar12 = iVar13 + *(int *)(puVar3 + 0x3e) * 6;
      if (iVar12 == 5) {
        iVar13 = 0x10f;
      }
      *(int *)(puVar3 + 0x2a) = iVar12;
      if (iVar12 == 5) {
        puVar3[4] = (ushort)iVar13;
        puVar3[5] = 7;
      }
      else {
        if (iVar12 == 0xb) {
          puVar3[4] = (ushort)DAT_002ec728;
          uVar8 = 0x49;
        }
        else if (iVar12 == 0x11) {
          puVar3[4] = (ushort)DAT_002ec72c;
          uVar8 = 0x7d;
        }
        else if (iVar12 == 0x17) {
          puVar3[4] = (ushort)DAT_002ec730;
          uVar8 = 0xbf;
        }
        else {
          fVar16 = (float)VectorSignedToFloat(iVar13,(byte)(in_fpscr >> 0x15) & 3);
          uVar17 = VectorFloatToUnsigned(fVar18 + fVar16 * fVar4,3);
          puVar3[4] = (ushort)uVar17;
          fVar18 = (float)VectorSignedToFloat(*(int *)(puVar3 + 0x3e),(byte)(in_fpscr >> 0x15) & 3);
          uVar17 = VectorFloatToUnsigned(fVar5 + fVar18 * fVar4,3);
          uVar8 = (ushort)uVar17;
        }
        puVar3[5] = uVar8;
      }
      iVar13 = FUN_002eb210();
      if (iVar13 != 0) {
        FUN_002f8ce0(uVar15,*(undefined4 *)(puVar3 + 0x22),0);
        goto LAB_002ec4d8;
      }
      uVar8 = *puVar3;
      if (*(int *)(puVar3 + 0x2a) == *(int *)(puVar3 + 0x28)) {
        FUN_002f8d40(*(undefined4 *)(puVar3 + 0x1e),*(int *)(puVar3 + 0x28),uVar8,puVar3[1],0x2a,
                     0x2a);
        puVar3[0x44] = 0xffff;
        puVar3[0x45] = 0xffff;
        puVar3[0x46] = 0xffff;
        puVar3[0x47] = 0xffff;
        FUN_002f7af4(uVar7,uVar6,*(undefined4 *)(puVar3 + 0x5a));
        uVar6 = DAT_002ed214;
        uVar17 = DAT_002ed210;
        puVar3[0x1a] = 2;
        puVar3[0x1b] = 0;
        FUN_0037547c(DAT_002ed220,0,4,uVar6,uVar6,uVar17);
        FUN_002eb1bc(1,0);
LAB_002e63e4:
        FUN_002f8ce0(uVar15,*(undefined4 *)(puVar3 + 0x22),0);
        *(undefined4 *)(*(int *)puVar14 + 0x34) = uVar19;
        return;
      }
      puVar3[6] = uVar8;
      puVar3[10] = uVar8;
      puVar3[7] = puVar3[1];
      puVar3[0xb] = puVar3[1];
      puVar3[8] = puVar3[4];
      puVar3[0xc] = puVar3[4];
      puVar3[9] = puVar3[5];
      puVar3[0xd] = puVar3[5];
      puVar3[0x44] = 0xffff;
      puVar3[0x45] = 0xffff;
      puVar3[0x46] = 0xffff;
      puVar3[0x47] = 0xffff;
      FUN_002f7af4(uVar7,uVar6,*(undefined4 *)(puVar3 + 0x5a));
      puVar3[0x2e] = 0;
      puVar3[0x2f] = 0;
      puVar3[0x2c] = 0;
      puVar3[0x2d] = 0;
      iVar13 = FUN_002eb0d8();
      uVar6 = DAT_002ed214;
      uVar17 = DAT_002ed210;
      if (iVar13 != 0) {
        puVar3[0x1a] = 9;
        puVar3[0x1b] = 0;
        FUN_0037547c(DAT_002ed218,0,4,uVar6,uVar6,uVar17);
        return;
      }
      FUN_002f8ce0(uVar15,*(undefined4 *)(puVar3 + 0x22),0);
      *(undefined4 *)(*(int *)puVar14 + 0x34) = uVar19;
      FUN_0033c25c(1);
      goto LAB_002ecea4;
    }
    uVar9 = FUN_0033b5ec();
    if ((uVar9 & 0x400) == 0) {
      uVar9 = FUN_0033b5ec();
      if ((uVar9 & 0x800) == 0) {
        uVar9 = FUN_0033b5ec();
        if ((uVar9 & 2) != 0) {
          FUN_002f8d40(*(undefined4 *)(puVar3 + 0x1e),*(undefined4 *)(puVar3 + 0x28),*puVar3,
                       puVar3[1],0x2a,0x2a);
          puVar3[0x44] = 0xffff;
          puVar3[0x45] = 0xffff;
          puVar3[0x46] = 0xffff;
          puVar3[0x47] = 0xffff;
          FUN_002f7af4(uVar7,uVar6,*(undefined4 *)(puVar3 + 0x5a));
          uVar6 = DAT_002ed214;
          uVar17 = DAT_002ed210;
          puVar3[0x1a] = 2;
          puVar3[0x1b] = 0;
          FUN_0037547c(DAT_002ed220,0,4,uVar6,uVar6,uVar17);
          FUN_002eb1bc(1);
          goto LAB_002e63e4;
        }
        goto code_r0x002ed120;
      }
      puVar3[0x2e] = 0;
      puVar3[0x2f] = 0;
      puVar3[0x2a] = 0x11;
      puVar3[0x2b] = 0;
      puVar3[0x2c] = 0;
      puVar3[0x2d] = 0;
      puVar3[4] = 0x107;
      puVar3[5] = 0x7d;
      puVar3[6] = *puVar3;
      puVar3[10] = *puVar3;
      puVar3[7] = puVar3[1];
      puVar3[0xb] = puVar3[1];
      puVar3[8] = 0x107;
      puVar3[0xc] = 0x107;
      puVar3[9] = 0x7d;
      puVar3[0xd] = 0x7d;
      iVar10 = FUN_002eb0d8();
      iVar12 = DAT_002ec734;
      if (iVar10 != 0) {
        if (*(int *)(DAT_002ec734 + 4) == 0) {
          cVar1 = *(char *)(*(int *)(puVar3 + 0x28) + DAT_002ec734 + 0x13a2);
        }
        else {
          cVar1 = *(char *)(*(int *)(puVar3 + 0x28) + DAT_002ec734 + 0x138a);
        }
        if (cVar1 != -1) {
          FUN_002f8ce0(uVar17,*(undefined4 *)(puVar3 + 0x22),0);
          iVar11 = *(int *)(iVar12 + 4);
          iVar10 = *(int *)(puVar3 + 0x28);
          goto joined_r0x002ed000;
        }
        goto LAB_002ed024;
      }
LAB_002ece48:
      FUN_002f8ce0(uVar15,*(undefined4 *)(puVar3 + 0x22),0);
      *(undefined4 *)(*(int *)puVar14 + 0x34) = uVar19;
      FUN_0033c25c(1);
      *(undefined4 *)(puVar3 + 0x3c) = *(undefined4 *)(puVar3 + 0x44);
      *(undefined4 *)(puVar3 + 0x3e) = *(undefined4 *)(puVar3 + 0x46);
      FUN_002eb1bc(1);
      puVar3[0x44] = 0xffff;
      puVar3[0x45] = 0xffff;
      puVar3[0x46] = 0xffff;
      puVar3[0x47] = 0xffff;
      FUN_002f7af4(uVar7,uVar6,*(undefined4 *)(puVar3 + 0x5a));
LAB_002ecea4:
      puVar3[0x1a] = 1;
      puVar3[0x1b] = 0;
      return;
    }
    puVar3[0x2e] = 0;
    puVar3[0x2f] = 0;
    puVar3[0x2a] = 0xb;
    puVar3[0x2b] = 0;
    puVar3[0x2c] = 0;
    puVar3[0x2d] = 0;
    puVar3[4] = 0x113;
    puVar3[5] = 0x49;
    puVar3[6] = *puVar3;
    puVar3[10] = *puVar3;
    puVar3[7] = puVar3[1];
    puVar3[0xb] = puVar3[1];
    puVar3[8] = 0x113;
    puVar3[0xc] = 0x113;
    puVar3[9] = 0x49;
    puVar3[0xd] = 0x49;
    iVar10 = FUN_002eb0d8();
    iVar12 = DAT_002ec734;
    if (iVar10 == 0) goto LAB_002ece48;
    if (*(int *)(DAT_002ec734 + 4) == 0) {
      cVar1 = *(char *)(*(int *)(puVar3 + 0x28) + DAT_002ec734 + 0x13a2);
    }
    else {
      cVar1 = *(char *)(*(int *)(puVar3 + 0x28) + DAT_002ec734 + 0x138a);
    }
    if (cVar1 != -1) {
      FUN_002f8ce0(uVar17,*(undefined4 *)(puVar3 + 0x22),0);
      iVar11 = *(int *)(iVar12 + 4);
      iVar10 = *(int *)(puVar3 + 0x28);
joined_r0x002ed000:
      if (iVar11 == 0) {
        bVar2 = *(byte *)(iVar10 + iVar12 + 0x13a2);
      }
      else {
        bVar2 = *(byte *)(iVar10 + iVar12 + 0x138a);
      }
      FUN_002f8d74(*(undefined4 *)(puVar3 + 0x22),0,*(undefined1 *)((uint)bVar2 + iVar12 + 0x8c));
      FUN_002eb3d8(*(undefined4 *)(puVar3 + 0x22),0,*puVar3,puVar3[1],0x34,0x34,0xfffffffb,
                   0xfffffffb);
    }
LAB_002ed024:
    FUN_0037547c(DAT_002ed218,0,4,DAT_002ed214,DAT_002ed214,DAT_002ed210);
    *(undefined4 *)(puVar3 + 0x3a) = *(undefined4 *)(puVar3 + 0x28);
    *(undefined4 *)(puVar3 + 0x3c) = *(undefined4 *)(puVar3 + 0x44);
    *(undefined4 *)(puVar3 + 0x3e) = *(undefined4 *)(puVar3 + 0x46);
    FUN_002eb1bc(1);
    puVar3[0x44] = 0xffff;
    puVar3[0x45] = 0xffff;
    puVar3[0x46] = 0xffff;
    puVar3[0x47] = 0xffff;
    FUN_002f7af4(uVar7,uVar6,*(undefined4 *)(puVar3 + 0x5a));
    puVar3[0x1a] = 9;
    puVar3[0x1b] = 0;
code_r0x002ed120:
    uVar9 = FUN_0033b5d0();
    if ((uVar9 & 0x10) != 0) {
      iVar12 = *(int *)(puVar3 + 0x3c);
      iVar13 = 1;
      *(int *)(puVar3 + 0x3c) = iVar12 + 1;
      if (5 < iVar12 + 1) {
        puVar3[0x3c] = 0;
        puVar3[0x3d] = 0;
      }
    }
    uVar9 = FUN_0033b5d0();
    if ((uVar9 & 0x20) != 0) {
      iVar12 = *(int *)(puVar3 + 0x3c);
      iVar13 = iVar13 + 1;
      *(int *)(puVar3 + 0x3c) = iVar12 + -1;
      if (iVar12 + -1 < 0) {
        puVar3[0x3c] = 5;
        puVar3[0x3d] = 0;
      }
    }
    uVar9 = FUN_0033b5d0();
    if ((uVar9 & 0x40) != 0) {
      iVar12 = *(int *)(puVar3 + 0x3e);
      iVar13 = iVar13 + 1;
      *(int *)(puVar3 + 0x3e) = iVar12 + -1;
      if (iVar12 + -1 < 0) {
        puVar3[0x3e] = 3;
        puVar3[0x3f] = 0;
      }
    }
    uVar9 = FUN_0033b5d0();
    if ((uVar9 & 0x80) == 0) goto LAB_002ed1cc;
    iVar12 = *(int *)(puVar3 + 0x3e) + 1;
    *(int *)(puVar3 + 0x3e) = iVar12;
  }
  if (3 < iVar12) {
    puVar3[0x3e] = 0;
    puVar3[0x3f] = 0;
  }
  iVar13 = iVar13 + 1;
LAB_002ed1cc:
  if (iVar13 == 0) {
    return;
  }
  FUN_0037547c(DAT_002ed21c,0,4,DAT_002ed214,DAT_002ed214,DAT_002ed210);
  FUN_002eb1bc(1);
  puVar3[0x56] = 0;
  puVar3[0x57] = 0;
  return;
}
