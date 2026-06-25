// OoT3D decomp @ 00354894  name=FUN_00354894  size=1664

undefined4 FUN_00354894(int param_1,int param_2)

{
  byte bVar1;
  char cVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;
  undefined uVar6;
  short sVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  undefined4 uVar13;
  byte *pbVar14;
  ushort *puVar15;
  undefined4 uVar16;
  bool bVar17;
  bool bVar18;
  float fVar19;
  undefined auStack_250 [8];
  undefined auStack_248 [516];
  undefined4 local_44;
  int local_40;
  
  if (((*(uint *)(param_1 + 0x1710) & 0x8000000) == 0) || (*(char *)(param_1 + 0x1a7) != '\x01')) {
    bVar17 = false;
  }
  else {
    bVar17 = true;
  }
  puVar15 = *(ushort **)(param_1 + 0x12b0);
  if (puVar15 == (ushort *)0x0) {
    return 0;
  }
  iVar9 = FUN_00343f0c(param_2,param_2 + 0x224c);
  uVar4 = DAT_00354cec;
  iVar10 = DAT_00354ce8;
  uVar3 = DAT_00354ce4;
  uVar13 = DAT_00354ce0;
  if (iVar9 == 0) {
    return 0;
  }
  iVar9 = (int)*(char *)(param_1 + 0x12ac);
  if (0 < iVar9) {
    if (0x7d < iVar9) {
      return 0;
    }
    *(int *)(puVar15 + 0x92) = param_1;
    iVar10 = iVar10 + iVar9 * 6;
    uVar11 = FUN_00377a50(*(undefined *)(iVar10 + -6));
    bVar17 = uVar11 != 0xff;
    if (bVar17) {
      uVar11 = (uint)*(ushort *)(param_2 + 0x104);
    }
    if (!bVar17 || uVar11 == 0x4b) {
      FUN_0036b02c(param_2,param_1);
      iVar10 = (int)*(short *)(iVar10 + -4);
      if (iVar10 != 0) {
        if (iVar10 < 1) {
          iVar10 = -iVar10;
        }
        sVar7 = FUN_002f748c(iVar10 + -1);
        if (sVar7 != 0) {
          FUN_00346fb0(param_1 + 0x1cc);
          iVar9 = DAT_00354cf0 + sVar7 * 0x44;
          iVar10 = *(int *)(iVar9 + 0x40);
          if (iVar10 == 0) {
            iVar10 = FUN_00324fd0(iVar9);
            *(int *)(iVar9 + 0x40) = iVar10;
          }
          *(int *)(param_1 + 0x1cc) = iVar10;
          *(undefined *)(param_1 + 0x250) = 1;
          uVar16 = *(undefined4 *)(param_1 + 0x24c);
          FUN_00324f44(auStack_248,iVar9,DAT_00354cf4);
          uVar16 = FUN_00324eac(auStack_248,uVar16,iVar10,0,0);
          *(undefined4 *)(param_1 + 0x1d0) = uVar16;
        }
      }
      uVar11 = *(uint *)(param_1 + 0x1714);
      bVar17 = (uVar11 & 0x400) != 0;
      if (bVar17) {
        uVar11 = (uint)*(byte *)(param_1 + 0x1a7);
      }
      if (!bVar17 || uVar11 == 1) {
        FUN_0035976c(param_2,param_1,DAT_00354cf8);
        FUN_00358dfc(uVar13,param_1 + 0x254,param_2,DAT_00354cfc);
        FUN_002be958(param_2,9);
      }
      iVar10 = DAT_00354d00;
      *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x20000c00;
      *(undefined4 *)(param_1 + 0x6c) = uVar4;
      *(undefined4 *)(param_1 + 0x221c) = uVar4;
      *(undefined *)(param_1 + 0x1749) = 0;
      *(undefined4 *)(iVar10 + 0xcc) = uVar3;
      *(undefined *)(iVar10 + 0xd4) = 0;
      return 1;
    }
    bVar1 = *(byte *)(iVar10 + -5);
    uVar8 = bVar1 & 0x1f;
    if (((bVar1 & 0x80) != 0) ||
       ((FUN_0036df58(param_2,param_1 + 0x28,(int)(short)(uVar8 | 0x8000)),
        (((((uVar8 != 4 && uVar8 != 8) && uVar8 != 9) && uVar8 != 10) && (bVar1 & 0x1f) != 0) &&
        uVar8 != 1) && uVar8 != 2 && (uVar8 != 0x14 && uVar8 != 0x13)))) {
      FUN_00376a78(param_2,*(undefined *)(iVar10 + -6));
    }
    uVar13 = DAT_00354d04;
    if (*(char *)(param_1 + 0x12ac) < '\0') {
      uVar13 = DAT_00354d08;
    }
    FUN_0037547c(uVar13,0,4,DAT_00354d10,DAT_00354d10,DAT_00354d0c);
    *(undefined *)(param_1 + 0x12ac) = 0;
    return 0;
  }
  if ((*(uint *)(*(int *)(param_1 + 0x29c8) + 4) & *DAT_00354d14) == 0) {
    return 0;
  }
  bVar18 = (*(uint *)(param_1 + 0x1710) & 0x800) == 0;
  if (bVar18) {
    bVar18 = (*(uint *)(param_1 + 0x1714) & 0x400) == 0;
  }
  if (bVar18) {
    bVar18 = (*(uint *)(param_1 + 0x29b8) & 0x1000000) == 0;
  }
  if (!bVar18) {
    return 0;
  }
  if (bVar17) {
    return 0;
  }
  if (iVar9 == 0) {
    if ((*(int *)(param_1 + 0x1224) != 0) && (iVar10 = FUN_00355a60(param_1), iVar10 == 0)) {
      return 0;
    }
    uVar11 = (uint)*puVar15;
    bVar17 = uVar11 != 0x6c;
    if (!bVar17) {
      uVar11 = *(uint *)(DAT_00354f58 + 4);
    }
    if (bVar17 || uVar11 != 0) {
      iVar10 = FUN_003513fc();
      uVar11 = (uint)(short)*puVar15;
      bVar17 = uVar11 == 0x14e;
      if (bVar17) {
        uVar11 = puVar15[0xe] & 0xf;
      }
      if ((bVar17 && uVar11 == 1) && (iVar10 < 2)) {
        return 0;
      }
      FUN_0035976c(param_2,param_1,DAT_00354f60);
    }
    else {
      if (*(short *)(DAT_00354f5c + 0x62) != 0) {
        iVar10 = *(int *)(param_1 + 0x1724);
        *(short *)(DAT_00354f6c + param_1) = (short)DAT_00354f68;
        *(ushort **)(iVar10 + 0x98c) = puVar15;
        return 0;
      }
      cVar2 = *(char *)(param_1 + 0x1ac);
      *(undefined *)(param_1 + 0x1ac) = 0;
      *(undefined *)(param_1 + 0x1a9) = 0;
      *(undefined *)(param_1 + 0x1b3) = 0;
      FUN_0035976c(param_2,param_1,DAT_00354f60);
      if (cVar2 == '\x03') {
        uVar6 = FUN_0033b548(param_1,1);
        *(undefined *)(param_1 + 0x1b1) = uVar6;
        *(undefined *)(param_1 + 0x1ac) = 1;
        *(undefined *)(param_1 + 0x1a9) = 1;
        *(undefined *)(param_1 + 0x1b0) = uVar6;
        *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xfefffff7;
        iVar10 = DAT_00354f64;
        *(undefined4 *)(param_1 + 0x2244) = uVar4;
        *(undefined4 *)(param_1 + 0x2240) = uVar4;
        *(undefined2 *)(param_1 + 0x2248) = 0;
        (**(code **)(iVar10 + 4))(param_2,param_1);
        FUN_0033b504(param_1,*(undefined *)(param_1 + 0x1b0));
      }
      else {
        FUN_0034d688(param_2,param_1,0xfc);
      }
    }
    iVar10 = DAT_00354d00;
    *(undefined4 *)(param_1 + 0x6c) = uVar4;
    *(undefined4 *)(param_1 + 0x221c) = uVar4;
    *(undefined *)(param_1 + 0x1749) = 0;
    *(undefined4 *)(iVar10 + 0xcc) = uVar3;
    *(undefined *)(iVar10 + 0xd4) = 0;
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x800;
    return 1;
  }
  iVar9 = DAT_00354ce8 + iVar9 * -6;
  pbVar14 = (byte *)(iVar9 + -6);
  if (*(char *)(iVar9 + -6) != -1) {
    iVar12 = FUN_00377a50();
    if ((iVar12 != 0xff) || ((*(byte *)(iVar9 + -5) & 0x40) == 0)) {
      iVar12 = FUN_00377a50(*pbVar14);
      bVar17 = iVar12 == 0xff;
      if (!bVar17) {
        bVar17 = (*(byte *)(iVar9 + -5) & 0x20) == 0;
      }
      if (bVar17) goto LAB_00354b98;
    }
    pbVar14 = (byte *)(iVar10 + 0x1c8);
    *(undefined *)(param_1 + 0x12ac) = 0xb3;
  }
LAB_00354b98:
  FUN_0035976c(param_2,param_1,DAT_00354cf8);
  *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x20000c00;
  iVar10 = (int)*(short *)(pbVar14 + 2);
  if (iVar10 != 0) {
    if (iVar10 < 1) {
      iVar10 = -iVar10;
    }
    sVar7 = FUN_002f748c(iVar10 + -1);
    if (sVar7 != 0) {
      FUN_00346fb0(param_1 + 0x1cc);
      iVar10 = DAT_00354cf0 + sVar7 * 0x44;
      local_40 = *(int *)(iVar10 + 0x40);
      if (local_40 == 0) {
        local_40 = FUN_00324fd0(iVar10);
        *(int *)(iVar10 + 0x40) = local_40;
      }
      *(int *)(param_1 + 0x1cc) = local_40;
      *(undefined *)(param_1 + 0x250) = 1;
      local_44 = *(undefined4 *)(param_1 + 0x24c);
      FUN_00324f44(auStack_250,iVar10,DAT_00354cf4);
      uVar16 = FUN_00324eac(auStack_250,local_44,local_40,0,0);
      *(undefined4 *)(param_1 + 0x1d0) = uVar16;
    }
  }
  fVar19 = (float)FUN_002cfca0((int)(short)puVar15[0x5f]);
  fVar5 = DAT_00354d18;
  *(float *)(param_1 + 0x28) = *(float *)(puVar15 + 0x14) - fVar19 * DAT_00354d18;
  fVar19 = (float)FUN_00338f60((int)(short)puVar15[0x5f]);
  iVar10 = DAT_00354d00;
  *(float *)(param_1 + 0x30) = *(float *)(puVar15 + 0x18) - fVar19 * fVar5;
  uVar8 = puVar15[0x5f];
  *(ushort *)(param_1 + 0xbe) = uVar8;
  *(ushort *)(param_1 + 0x2220) = uVar8;
  *(undefined4 *)(param_1 + 0x6c) = uVar4;
  *(undefined4 *)(param_1 + 0x221c) = uVar4;
  *(undefined *)(param_1 + 0x1749) = 0;
  *(undefined4 *)(iVar10 + 0xcc) = uVar3;
  *(undefined *)(iVar10 + 0xd4) = 0;
  uVar8 = *(ushort *)(param_2 + 0x104);
  bVar17 = uVar8 == 0x53;
  if (bVar17) {
    uVar8 = (ushort)*pbVar14;
  }
  if (bVar17 && uVar8 == 6) {
    *(ushort *)(DAT_00354d1c + 10) = *(ushort *)(DAT_00354d1c + 10) | 0x1000;
  }
  if ((((*pbVar14 == 0xff) || (*(short *)(pbVar14 + 2) < 0)) ||
      (iVar10 = FUN_00377a50(), iVar10 != 0xff)) || (iVar10 = FUN_0035b164(), iVar10 == 1)) {
    FUN_003604f0(param_1 + 0x254,param_2,0xd8);
    puVar15[0x1c6] = 0xffff;
  }
  else {
    FUN_00358dfc(uVar13,param_1 + 0x254,param_2,*(undefined4 *)(*(int *)(param_1 + 0x170c) + 0xf8));
    FUN_003603f8(param_2,param_1,DAT_00354f54);
    puVar15[0x1c6] = 1;
    uVar13 = FUN_0036c5bc(param_2,0);
    FUN_0033885c(uVar13,0x28);
  }
  return 1;
}

