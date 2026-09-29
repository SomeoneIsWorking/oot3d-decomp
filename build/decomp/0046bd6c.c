// OoT3D decomp @ 0046bd6c  name=FUN_0046bd6c  size=1080

void FUN_0046bd6c(void)

{
  uint *puVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined4 *puVar5;
  uint *puVar6;
  uint *puVar7;
  uint *puVar8;
  uint uVar9;
  int *piVar10;
  int iVar11;
  uint uVar12;
  int *piVar13;
  uint uVar14;
  uint *puVar15;
  int unaff_r7;
  uint *puVar16;
  uint *puVar17;
  int iVar18;
  int iVar19;
  bool bVar20;
  bool bVar21;

  iVar11 = 0;
  iVar19 = 0;
  iVar4 = *DAT_0046c1a4;
  puVar15 = (uint *)*DAT_0046c1a8;
  iVar18 = *(int *)(iVar4 + 8);
  piVar10 = *(int **)(iVar18 + 0xc);
  if (piVar10 == (int *)0x0) {
    iVar4 = *(int *)(iVar18 + 0x1c);
  }
  uVar12 = DAT_0046c1b0;
  if (piVar10 != (int *)0x0 || iVar4 != 0) {
    uVar12 = DAT_0046c1b4;
    if (piVar10 != (int *)0x0) {
      bVar20 = *piVar10 == 0;
      iVar11 = 0;
      if (!bVar20) {
        iVar11 = piVar10[3];
      }
      if (!bVar20 && iVar11 != 0) {
        iVar19 = piVar10[4];
      }
      if ((bVar20 || iVar11 == 0) || iVar19 == 0) goto LAB_0046be18;
    }
    piVar13 = *(int **)(iVar18 + 0x1c);
    if (piVar13 != (int *)0x0) {
      bVar20 = *piVar13 == 0;
      iVar4 = 0;
      if (!bVar20) {
        iVar4 = piVar13[3];
      }
      if (!bVar20 && iVar4 != 0) {
        unaff_r7 = piVar13[4];
      }
      if (((bVar20 || iVar4 == 0) || unaff_r7 == 0) ||
         ((iVar11 != 0 && (uVar12 = DAT_0046c1b8, iVar4 != iVar11 || unaff_r7 != iVar19))))
      goto LAB_0046be18;
    }
    uVar12 = DAT_0046c1b4;
    if (piVar10 != piVar13) {
      uVar12 = DAT_0046c1ac;
    }
  }
LAB_0046be18:
  if (uVar12 != DAT_0046c1ac) {
    puVar15[0x16d] = 0;
    *(undefined1 *)(puVar15 + 0x170) = 0;
    *(undefined1 *)((int)puVar15 + 0x5c1) = 0;
    *(undefined1 *)((int)puVar15 + 0x5c2) = 0;
    return;
  }
  puVar15[0x16d] = uVar12;
  uVar2 = DAT_0046c1c4;
  puVar7 = DAT_0046c1c0;
  puVar1 = DAT_0046c1bc;
  piVar13 = (int *)puVar15[2];
  if (((uint)piVar13 & 0x100) != 0) {
    return;
  }
  puVar16 = *(uint **)(iVar18 + 0xc);
  puVar8 = puVar15 + 0x1c1;
  if (puVar16 != (uint *)0x0) {
    piVar13 = (int *)puVar15[0x1c4];
    piVar10 = (int *)*puVar16;
  }
  puVar17 = *(uint **)(iVar18 + 0x1c);
  uVar12 = 0;
  uVar14 = 0;
  if (puVar16 != (uint *)0x0 && piVar13 != piVar10) {
LAB_0046bea0:
    puVar5 = (undefined4 *)*DAT_0046c1bc;
    if (puVar5 < (undefined4 *)*DAT_0046c1c0) {
      *puVar5 = 1;
      puVar5[1] = uVar2;
      puVar5 = puVar5 + 2;
      *puVar1 = (uint)puVar5;
    }
    uVar2 = DAT_0046c1c8;
    if (puVar5 < (undefined4 *)*puVar7) {
      *puVar5 = 1;
      puVar5[1] = uVar2;
      *puVar1 = (uint)(puVar5 + 2);
    }
  }
  else {
    if (puVar17 != (uint *)0x0) {
      piVar13 = (int *)puVar15[0x1c3];
      piVar10 = (int *)*puVar17;
    }
    if ((puVar17 != (uint *)0x0 && piVar13 != piVar10) || ((puVar15[1] & 0x100) != 0))
    goto LAB_0046bea0;
  }
  if (*(int *)(iVar18 + 0xc) == 0) {
    *(undefined1 *)(puVar15 + 0x170) = 0;
  }
  else {
    *(undefined1 *)(puVar15 + 0x170) = 1;
    puVar15[0x1c4] = *puVar16;
    puVar15[0x1c6] = puVar16[8];
    uVar12 = puVar16[7];
    if (uVar12 == 0) {
      puVar15[0x16e] = 0;
      *puVar8 = 2;
    }
    else if (uVar12 == 2) {
      puVar15[0x16e] = 2;
      *puVar8 = 0;
    }
    else if (uVar12 == 3) {
      puVar15[0x16e] = 3;
      *puVar8 = 0;
    }
    else if (uVar12 == 4) {
      puVar15[0x16e] = 4;
      *puVar8 = 0;
    }
    puVar7 = DAT_0046c1c0;
    puVar1 = DAT_0046c1bc;
    puVar6 = (uint *)*DAT_0046c1bc;
    if (puVar6 < (uint *)*DAT_0046c1c0) {
      *puVar6 = *puVar8 | puVar15[0x16e] << 0x10;
      puVar6[1] = DAT_0046c1cc;
      *puVar1 = (uint)(puVar6 + 2);
    }
    if (*DAT_0046c1bc < *puVar7) {
      uVar12 = FUN_002c83f8(puVar15[0x1c4]);
      puVar1 = DAT_0046c1bc;
      puVar7 = (uint *)*DAT_0046c1bc;
      *puVar7 = uVar12 >> 3;
      puVar7[1] = DAT_0046c1d0;
      *puVar1 = (uint)(puVar7 + 2);
    }
    uVar12 = puVar16[3];
    uVar14 = puVar16[4];
  }
  if (*(int *)(iVar18 + 0x1c) == 0) {
    *(undefined1 *)((int)puVar15 + 0x5c1) = 0;
    *(undefined1 *)((int)puVar15 + 0x5c2) = 0;
    goto LAB_0046c0e4;
  }
  uVar14 = puVar15[0x16f];
  *(undefined1 *)((int)puVar15 + 0x5c1) = 1;
  puVar15[0x1c3] = *puVar17;
  uVar12 = puVar17[0xe];
  if (uVar12 == 0x10) {
    puVar15[0x1c2] = 0;
    puVar15[0x16f] = 0;
  }
  else if (uVar12 == 0x18) {
    puVar15[0x1c2] = 2;
    puVar15[0x16f] = 2;
  }
  else if (uVar12 == 0x20) {
    puVar15[0x1c2] = 3;
    puVar15[0x16f] = 3;
  }
  if ((char)puVar15[0x15] == '\0') {
LAB_0046c060:
    if (puVar15[0x16f] != 3) goto LAB_0046c070;
    uVar3 = 1;
  }
  else {
    if (puVar15[0x16f] != 0) {
      if (uVar14 == 0) goto LAB_0046c054;
      goto LAB_0046c060;
    }
    if (uVar14 != 0) {
LAB_0046c054:
      *puVar15 = *puVar15 | 4;
      goto LAB_0046c060;
    }
LAB_0046c070:
    uVar3 = 0;
  }
  *(undefined1 *)((int)puVar15 + 0x5c2) = uVar3;
  puVar7 = DAT_0046c1c0;
  puVar1 = DAT_0046c1bc;
  puVar15[0x1c5] = puVar17[8];
  puVar8 = (uint *)*puVar1;
  if (puVar8 < (uint *)*puVar7) {
    *puVar8 = puVar15[0x1c2];
    puVar8[1] = DAT_0046c1d4;
    puVar8 = puVar8 + 2;
    *puVar1 = (uint)puVar8;
  }
  if (puVar8 < (uint *)*puVar7) {
    uVar12 = FUN_002c83f8(puVar15[0x1c3]);
    puVar7 = (uint *)*puVar1;
    *puVar7 = uVar12 >> 3;
    puVar7[1] = DAT_0046c1d8;
    *puVar1 = (uint)(puVar7 + 2);
  }
  uVar12 = puVar17[3];
  uVar14 = puVar17[4];
LAB_0046c0e4:
  puVar7 = DAT_0046c1c0;
  puVar1 = DAT_0046c1bc;
  uVar9 = puVar15[0x172];
  bVar20 = uVar9 == uVar12;
  if (bVar20) {
    uVar9 = puVar15[0x173];
  }
  bVar21 = bVar20 && uVar9 == uVar14;
  if (bVar20 && uVar9 == uVar14) {
    bVar21 = (puVar15[1] & 0x100) == 0;
  }
  if (!bVar21) {
    uVar9 = uVar12 & 0xfff | (uVar14 - 1 & 0xfff00fff) << 0xc;
    puVar8 = (uint *)*DAT_0046c1bc;
    if (puVar8 < (uint *)*DAT_0046c1c0) {
      *puVar8 = uVar9 | 0x1000000;
      puVar8[1] = DAT_0046c1dc;
      puVar8 = puVar8 + 2;
      *puVar1 = (uint)puVar8;
    }
    if (puVar8 < (uint *)*puVar7) {
      *puVar8 = uVar9 | 0x1000000;
      puVar8[1] = DAT_0046c1e0;
      *puVar1 = (uint)(puVar8 + 2);
    }
    puVar15[0x172] = uVar12;
    puVar15[0x173] = uVar14;
    if ((char)puVar15[0x15e] != '\0') {
      *puVar15 = *puVar15 | 0x200;
    }
  }
  if ((char)puVar15[0xc] != '\0') {
    return;
  }
  *(undefined1 *)(puVar15 + 0xc) = 1;
  FUN_002feabc(0);
  return;
}
