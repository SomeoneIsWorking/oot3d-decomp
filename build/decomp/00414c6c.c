// OoT3D decomp @ 00414c6c  name=FUN_00414c6c  size=980

/* WARNING: Removing unreachable block (ram,0x00414ddc) */
/* WARNING: Removing unreachable block (ram,0x00414de0) */
/* WARNING: Removing unreachable block (ram,0x00414de4) */
/* WARNING: Removing unreachable block (ram,0x00414de8) */
/* WARNING: Removing unreachable block (ram,0x00414df0) */
/* WARNING: Removing unreachable block (ram,0x00414df4) */
/* WARNING: Removing unreachable block (ram,0x00414e04) */
/* WARNING: Removing unreachable block (ram,0x00414e10) */
/* WARNING: Removing unreachable block (ram,0x00415010) */
/* WARNING: Removing unreachable block (ram,0x00415018) */
/* WARNING: Removing unreachable block (ram,0x00414cf4) */
/* WARNING: Removing unreachable block (ram,0x00414e78) */
/* WARNING: Removing unreachable block (ram,0x00414f4c) */

void FUN_00414c6c(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  int iVar10;
  uint *puVar11;
  bool bVar12;

  uVar5 = DAT_00415078;
  uVar4 = DAT_00415064;
  uVar6 = DAT_00415058;
  puVar3 = DAT_0041504c;
  puVar2 = DAT_00415048;
  puVar8 = (uint *)*DAT_00415048;
  puVar7 = (uint *)*DAT_00415040;
  puVar9 = (uint *)*DAT_0041504c;
  iVar10 = param_1 - DAT_00415044;
  puVar11 = puVar8 + 1;
  if (param_1 == DAT_00415044) {
    if ((char)puVar7[0x15e] == '\x01') {
      return;
    }
    *(undefined1 *)(puVar7 + 0x15e) = 1;
    uVar6 = *puVar7 | 0x200;
LAB_00414dd4:
    *puVar7 = uVar6;
    return;
  }
  if (DAT_00415044 <= param_1) {
    if (iVar10 == 0x58f1) {
      *(undefined1 *)((int)puVar7 + 0x1a) = 1;
      return;
    }
    if (iVar10 == 0x5b6f) {
      cVar1 = *(char *)((int)puVar7 + 0x57f);
      bVar12 = cVar1 == '\x01';
      if (bVar12) {
        cVar1 = (char)puVar7[3];
      }
      if (bVar12 && cVar1 == '\0') {
        return;
      }
      if (puVar8 < puVar9) {
        *puVar8 = 1;
        *puVar11 = DAT_00415068;
        puVar8 = puVar8 + 2;
        *puVar2 = puVar8;
      }
      if (puVar8 < (uint *)*puVar3) {
        *puVar8 = 1;
        puVar8[1] = DAT_0041506c;
        *puVar2 = puVar8 + 2;
      }
      *(undefined1 *)((int)puVar7 + 0x57f) = 1;
      uVar6 = *puVar7 | 0x100;
    }
    else {
      if (iVar10 == 0x5b8f) {
        *(undefined1 *)(puVar7 + 0x171) = 1;
        return;
      }
      if ((iVar10 != 0x7426) || ((char)puVar7[0x15] == '\x01')) {
        return;
      }
      *(undefined1 *)(puVar7 + 0x15) = 1;
      uVar6 = *puVar7 | 4;
    }
    goto LAB_00414dd4;
  }
  if (param_1 == 0xb90) {
    cVar1 = *(char *)((int)puVar7 + 0x57a);
    bVar12 = cVar1 == '\x01';
    if (bVar12) {
      cVar1 = (char)puVar7[3];
    }
    if (bVar12 && cVar1 == '\0') {
      return;
    }
    uVar6 = *DAT_00415070;
    *DAT_00415070 = uVar6 | 1;
    if (puVar8 < puVar9) {
      *puVar8 = uVar6 | 1;
      *puVar11 = DAT_00415074;
      *puVar2 = puVar8 + 2;
    }
    *(undefined1 *)((int)puVar7 + 0x57a) = 1;
    uVar6 = *puVar7 | 0x100;
    goto LAB_00414dd4;
  }
  if (param_1 < 0xb91) {
    if (param_1 == 0xb44) {
      cVar1 = (char)puVar7[0xf];
      bVar12 = cVar1 == '\x01';
      if (bVar12) {
        cVar1 = (char)puVar7[3];
      }
      if (!bVar12 || cVar1 != '\0') {
        if (puVar8 < puVar9) {
          if ((puVar7[0xe] == 0x404) == (puVar7[0xd] == 0x901)) {
            uVar6 = 1;
          }
          else {
            uVar6 = 2;
          }
          *puVar8 = uVar6;
          *puVar11 = uVar5;
          *puVar2 = puVar8 + 2;
        }
        *(undefined1 *)(puVar7 + 0xf) = 1;
        return;
      }
      return;
    }
    if (param_1 != 0xb71) {
      return;
    }
    cVar1 = *(char *)((int)puVar7 + 0x57b);
    bVar12 = cVar1 == '\x01';
    if (bVar12) {
      cVar1 = (char)puVar7[3];
    }
    if (!bVar12 || cVar1 != '\0') {
      uVar6 = *DAT_00415050;
      *DAT_00415050 = uVar6 | 1;
      if (puVar8 < puVar9) {
        *puVar8 = uVar6 | 1;
        *puVar11 = DAT_00415054;
        *puVar2 = puVar8 + 2;
      }
      *(undefined1 *)((int)puVar7 + 0x57b) = 1;
      *puVar7 = *puVar7 | 0x100;
      return;
    }
    return;
  }
  if (param_1 != 0xbe2) {
    if (param_1 != 0xbf2) {
      return;
    }
    cVar1 = *(char *)((int)puVar7 + 0x57d);
    bVar12 = cVar1 == '\x01';
    if (bVar12) {
      cVar1 = (char)puVar7[3];
    }
    if (!bVar12 || cVar1 != '\0') {
      if (puVar8 < puVar9) {
        *puVar8 = 0;
        *puVar11 = uVar6;
        *puVar2 = puVar8 + 2;
      }
      *(undefined1 *)((int)puVar7 + 0x57d) = 1;
      *puVar7 = *puVar7 | 0x100;
      return;
    }
    return;
  }
  cVar1 = (char)puVar7[0x15f];
  bVar12 = cVar1 == '\x01';
  if (bVar12) {
    cVar1 = (char)puVar7[3];
  }
  if (bVar12 && cVar1 == '\0') {
    return;
  }
  if (*(char *)((int)puVar7 + 0x57d) == '\0') {
    if (puVar8 < puVar9) {
      *puVar8 = *DAT_0041505c;
      puVar8 = puVar8 + 2;
      *puVar11 = uVar4;
      *puVar2 = puVar8;
    }
    if ((uint *)*puVar3 <= puVar8) goto LAB_00414ea4;
    *puVar8 = 0x100;
    puVar8[1] = uVar6;
  }
  else {
    if (puVar9 <= puVar8) goto LAB_00414ea4;
    *puVar8 = 0;
    *puVar11 = uVar6;
  }
  *puVar2 = puVar8 + 2;
LAB_00414ea4:
  *(undefined1 *)(puVar7 + 0x15f) = 1;
  *puVar7 = *puVar7 | 0x100;
  return;
}
