// OoT3D decomp @ 00411334  name=FUN_00411334  size=2016

void FUN_00411334(undefined4 *param_1)

{
  uint *puVar1;
  uint *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int *piVar7;
  int *piVar8;
  undefined4 uVar9;
  undefined4 *puVar10;
  int *piVar11;
  int *piVar12;
  undefined4 uVar13;
  undefined4 *puVar14;
  int iVar15;
  int iVar16;
  int iVar17;
  int iVar18;
  bool bVar19;

  puVar2 = DAT_00411b1c;
  puVar1 = DAT_00411b18;
  *param_1 = DAT_00411b14;
  uVar13 = DAT_00411b20;
  puVar10 = (undefined4 *)*puVar1;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 1;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411b24;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0x80000000;
    puVar10[1] = DAT_00411b28;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411b2c;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411b30;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411b34;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411b38;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411b3c;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411b40;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411b44;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411b48;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar13;
    *puVar1 = (uint)(puVar10 + 2);
  }
  FUN_00303cdc(0x101,7,0);
  puVar10 = (undefined4 *)*puVar1;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = DAT_00411b4c;
    puVar10[1] = DAT_00411b50;
    *puVar1 = (uint)(puVar10 + 2);
  }
  piVar4 = DAT_00411b64;
  piVar3 = DAT_00411b5c;
  piVar12 = DAT_00411b58;
  *DAT_00411b58 = DAT_00411b54;
  *piVar3 = (int)&DAT_00001f40;
  piVar6 = DAT_00411b6c;
  piVar5 = DAT_00411b68;
  *piVar4 = DAT_00411b60;
  *piVar5 = 3;
  *piVar6 = 0xffffff;
  piVar8 = DAT_00411b7c;
  piVar7 = DAT_00411b74;
  *DAT_00411b70 = 0;
  puVar10 = DAT_00411b78;
  *piVar7 = 3;
  *puVar10 = 0;
  *piVar8 = 0x3000000;
  iVar17 = DAT_00411b80;
  piVar11 = (int *)*puVar1;
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = DAT_00411b80;
    piVar11[1] = iVar17 + -0xd50000;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = *piVar12;
    piVar11[1] = DAT_00411b84;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = *piVar3;
    piVar11[1] = DAT_00411b88;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = *piVar4;
    piVar11[1] = DAT_00411b8c;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = *piVar5;
    piVar11[1] = DAT_00411b90;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  iVar17 = DAT_00411b94;
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = 0;
    piVar11[1] = iVar17;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  iVar17 = DAT_00411b98;
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = 0;
    piVar11[1] = iVar17;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  iVar17 = DAT_00411b9c;
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = 0;
    piVar11[1] = iVar17;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  iVar17 = DAT_00411ba0;
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = 0;
    piVar11[1] = iVar17;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  iVar17 = DAT_00411ba4;
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = 0;
    piVar11[1] = iVar17;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  iVar17 = DAT_00411ba8;
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = 0;
    piVar11[1] = iVar17;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = *piVar6;
    piVar11[1] = DAT_00411bac;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = *piVar7;
    piVar11[1] = DAT_00411bb0;
    piVar11 = piVar11 + 2;
    *puVar1 = (uint)piVar11;
  }
  if (piVar11 < (int *)*puVar2) {
    *piVar11 = *piVar8;
    piVar11[1] = DAT_00411bb4;
    *puVar1 = (uint)(piVar11 + 2);
  }
  FUN_00303cdc(0x40,0x10,0);
  FUN_00303cdc(0x50,7,DAT_00411bb8);
  puVar10 = (undefined4 *)*puVar1;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0x100;
    puVar10[1] = DAT_00411bbc;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411bc0;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 1;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411bc4;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411bc8;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0x20000;
    puVar10[1] = DAT_00411bcc;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411bd0;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0xf;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0xf;
    puVar10[1] = DAT_00411bd4;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411bd8;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 3;
    puVar10[1] = uVar13;
    puVar10 = puVar10 + 2;
    *puVar1 = (uint)puVar10;
  }
  uVar13 = DAT_00411bdc;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 3;
    puVar10[1] = uVar13;
    *puVar1 = (uint)(puVar10 + 2);
  }
  iVar17 = DAT_00411be0;
  iVar16 = 0;
  do {
    piVar12 = (int *)*puVar1;
    if (piVar12 < (int *)*puVar2) {
      *piVar12 = iVar16 << 8;
      piVar12[1] = iVar17;
      *puVar1 = (uint)(piVar12 + 2);
    }
    iVar18 = 0;
    do {
      FUN_00303cdc(0x1c8,8,0);
      iVar18 = iVar18 + 8;
    } while (iVar18 < 0x100);
    iVar16 = iVar16 + 1;
  } while (iVar16 < 7);
  puVar10 = (undefined4 *)*puVar1;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0x80000000;
    puVar10[1] = DAT_00411be4;
    *puVar1 = (uint)(puVar10 + 2);
  }
  uVar13 = DAT_00411be8;
  iVar17 = 0;
  do {
    FUN_00303cdc(uVar13,8,0);
    iVar17 = iVar17 + 2;
  } while (iVar17 < 0x60);
  if ((code *)*DAT_00411bec == (code *)0x0) {
    uVar13 = 0;
  }
  else {
    uVar13 = (*(code *)*DAT_00411bec)(0x10000,0x100,0,0x4000);
  }
  FUN_00343280(uVar13,0x4000);
  uVar9 = DAT_00411bf0;
  puVar10 = (undefined4 *)*puVar1;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar9;
    *puVar1 = (uint)(puVar10 + 2);
  }
  FUN_00303b24(0x2cc,0x200,uVar13);
  puVar10 = (undefined4 *)*puVar1;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0x200;
    puVar10[1] = DAT_00411bf4;
    *puVar1 = (uint)(puVar10 + 2);
  }
  FUN_00303b24(0x29c,0xe00,uVar13);
  uVar9 = DAT_00411bf8;
  puVar10 = (undefined4 *)*puVar1;
  if (puVar10 < (undefined4 *)*puVar2) {
    *puVar10 = 0;
    puVar10[1] = uVar9;
    *puVar1 = (uint)(puVar10 + 2);
  }
  if ((code *)*DAT_00411bfc != (code *)0x0) {
    (*(code *)*DAT_00411bfc)(0x10000,0x100,0,uVar13);
  }
  iVar17 = 0;
  do {
    puVar10 = (undefined4 *)*puVar1;
    if (puVar10 < (undefined4 *)*puVar2) {
      *puVar10 = 0;
      puVar10[1] = iVar17 + 0x2b1U | 0xf0000;
      *puVar1 = (uint)(puVar10 + 2);
    }
    iVar17 = iVar17 + 1;
  } while (iVar17 < 4);
  FUN_00303cdc(0x28b,2);
  puVar10 = (undefined4 *)0x411a60;
  FUN_00303cdc(DAT_00411c00,0x24,0);
  uVar13 = DAT_00411c04;
  puVar14 = (undefined4 *)*puVar1;
  if (puVar14 < (undefined4 *)*puVar2) {
    *puVar14 = 1;
    puVar14[1] = uVar13;
    puVar14 = puVar14 + 2;
    *puVar1 = (uint)puVar14;
  }
  if (puVar14 < (undefined4 *)*puVar2) {
    *puVar14 = DAT_00411c08;
    puVar14[1] = DAT_00411c0c;
    *puVar1 = (uint)(puVar14 + 2);
  }
  iVar17 = DAT_00411c14;
  iVar16 = 0;
  iVar18 = *(int *)(DAT_00411c10 + 8);
  do {
    iVar15 = iVar18 + iVar16;
    bVar19 = *(char *)(iVar15 + 0x15f4) != '\0';
    puVar14 = (undefined4 *)0x0;
    if (bVar19) {
      puVar14 = (undefined4 *)*puVar1;
      puVar10 = (undefined4 *)*puVar2;
    }
    if (bVar19 && puVar14 < puVar10) {
      *puVar14 = *(undefined4 *)(iVar18 + iVar16 * 4 + 0x100c);
      *puVar1 = (uint)(puVar14 + 1);
      puVar10 = *(undefined4 **)(iVar17 + iVar16 * 4);
      puVar14[1] = (uint)puVar10 | (uint)*(byte *)(iVar15 + 0x15f4) << 0x10;
      *puVar1 = (uint)(puVar14 + 2);
    }
    iVar16 = iVar16 + 1;
  } while (iVar16 < 0xbd);
  return;
}
