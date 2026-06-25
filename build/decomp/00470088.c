// OoT3D decomp @ 00470088  name=FUN_00470088  size=1360

void FUN_00470088(void)

{
  float fVar1;
  uint **ppuVar2;
  uint **ppuVar3;
  uint uVar4;
  uint *puVar5;
  int iVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint uVar14;
  uint uVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  uint local_2c [2];
  
  ppuVar3 = DAT_004703a8;
  ppuVar2 = DAT_004703a4;
  fVar1 = DAT_004703a0;
  puVar13 = *DAT_0047039c;
  fVar17 = (float)VectorSignedToFloat(puVar13[10],(byte)(in_fpscr >> 0x15) & 3);
  fVar17 = fVar17 * DAT_004703a0;
  uVar8 = (uint)fVar17 & 0x7fffffff;
  bVar16 = uVar8 != 0;
  if (bVar16) {
    uVar8 = (int)fVar17 << 1;
  }
  if (bVar16) {
    uVar8 = (uVar8 >> 0x18) - 0x40;
  }
  bVar16 = -1 < (int)uVar8;
  if (bVar16) {
    uVar8 = (uint)((int)fVar17 << 9) >> 0x10 | uVar8 << 0x10;
  }
  if (bVar16) {
    uVar8 = uVar8 | ((uint)fVar17 >> 0x1f) << 0x17;
  }
  else {
    uVar8 = ((uint)fVar17 >> 0x1f) << 0x17;
  }
  puVar5 = *DAT_004703a4;
  if (puVar5 < *DAT_004703a8) {
    *puVar5 = uVar8;
    puVar5[1] = DAT_004703ac;
    *ppuVar2 = puVar5 + 2;
  }
  fVar17 = (float)VectorSignedToFloat(puVar13[0xb],(byte)(in_fpscr >> 0x15) & 3);
  fVar17 = fVar17 * fVar1;
  local_2c[1] = (uint)fVar17 & 0x7fffffff;
  bVar16 = local_2c[1] != 0;
  if (bVar16) {
    local_2c[1] = (int)fVar17 << 1;
  }
  if (bVar16) {
    local_2c[1] = (local_2c[1] >> 0x18) - 0x40;
  }
  bVar16 = -1 < (int)local_2c[1];
  if (bVar16) {
    local_2c[1] = (uint)((int)fVar17 << 9) >> 0x10 | local_2c[1] << 0x10;
  }
  if (bVar16) {
    local_2c[1] = local_2c[1] | ((uint)fVar17 >> 0x1f) << 0x17;
  }
  else {
    local_2c[1] = ((uint)fVar17 >> 0x1f) << 0x17;
  }
  puVar5 = *ppuVar2;
  if (puVar5 < *ppuVar3) {
    *puVar5 = local_2c[1];
    local_2c[1] = DAT_004703b0;
    puVar5[1] = DAT_004703b0;
    *ppuVar2 = puVar5 + 2;
  }
  fVar1 = DAT_004703c4;
  uVar4 = DAT_004703c0;
  uVar12 = DAT_004703bc;
  uVar11 = DAT_004703b8;
  uVar8 = DAT_004703b4;
  local_2c[0] = puVar13[10];
  if (local_2c[0] != 0) {
    local_2c[1] = puVar13[0xb];
  }
  if (local_2c[0] != 0 && local_2c[1] != 0) {
    iVar6 = 0;
    uVar14 = DAT_004703b4 - 0x1000000;
    uVar15 = DAT_004703b8 - 0x1000000;
    do {
      uVar9 = local_2c[iVar6];
      if (uVar9 == 0x280) {
        local_2c[iVar6] = uVar15;
      }
      else if ((int)uVar9 < 0x281) {
        if (uVar9 == 400) {
          local_2c[iVar6] = uVar12;
        }
        else if ((int)uVar9 < 0x191) {
          if (uVar9 == 0xf0) {
            local_2c[iVar6] = uVar8;
          }
          else if (uVar9 == 0x140) {
            local_2c[iVar6] = uVar11;
          }
          else {
LAB_00470244:
            fVar17 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
            fVar17 = fVar1 / fVar17;
            uVar9 = (uint)fVar17 & 0x7fffffff;
            if (uVar9 != 0) {
              uVar9 = ((uint)((int)fVar17 << 1) >> 0x18) - 0x40;
            }
            if ((int)uVar9 < 0) {
              uVar9 = ((uint)fVar17 >> 0x1f) << 0x1e;
            }
            else {
              uVar9 = (uint)fVar17 & 0x7fffff | uVar9 << 0x17 | ((uint)fVar17 >> 0x1f) << 0x1e;
            }
            local_2c[iVar6] = uVar9;
            local_2c[iVar6] = uVar9 << 1;
          }
        }
        else if (uVar9 == 0x1e0) {
          local_2c[iVar6] = uVar14;
        }
        else {
          if (uVar9 != 600) goto LAB_00470244;
          local_2c[iVar6] = uVar4;
        }
      }
      else {
        uVar10 = DAT_004703c8;
        if (uVar9 != 800) {
          if (uVar9 == 0x400) {
            uVar10 = 0x36000000;
          }
          else {
            uVar10 = DAT_004703cc;
            if ((uVar9 != 0x4b0) && (uVar10 = DAT_004703d0, uVar9 != 0x500)) goto LAB_00470244;
          }
        }
        local_2c[iVar6] = uVar10;
      }
      puVar5 = *ppuVar2;
      if (puVar5 < *ppuVar3) {
        *puVar5 = local_2c[iVar6];
        puVar5[1] = iVar6 * 2 + 0x42U | 0xf0000;
        *ppuVar2 = puVar5 + 2;
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 2);
  }
  puVar5 = *ppuVar2;
  if (puVar5 < *ppuVar3) {
    *puVar5 = puVar13[8] | puVar13[9] << 0x10;
    puVar5[1] = DAT_004703d4;
    puVar5 = puVar5 + 2;
    *ppuVar2 = puVar5;
  }
  if (puVar5 < *ppuVar3) {
    *puVar5 = *DAT_004703d8;
    puVar5[1] = DAT_004703dc;
    puVar5 = puVar5 + 2;
    *ppuVar2 = puVar5;
  }
  if (puVar5 < *ppuVar3) {
    *puVar5 = *DAT_004703e0;
    puVar5[1] = DAT_004703e4;
    *ppuVar2 = puVar5 + 2;
  }
  uVar8 = DAT_004703e8;
  uVar11 = 0;
  puVar5 = *ppuVar2;
  uVar12 = DAT_004703e8 + 0xb6;
  if (*(char *)((int)puVar13 + 0x57f) == '\0') {
    if (puVar5 < *ppuVar3) {
      *puVar5 = 0;
      puVar5[1] = uVar8;
      puVar5 = puVar5 + 2;
      *ppuVar2 = puVar5;
    }
    if (puVar5 < *ppuVar3) {
      *puVar5 = 0;
      puVar5[1] = uVar12;
      puVar5 = puVar5 + 2;
      *ppuVar2 = puVar5;
    }
  }
  else {
    if (puVar5 < *ppuVar3) {
      puVar7 = puVar5 + 1;
      *puVar5 = 1;
      puVar5 = puVar5 + 2;
      *puVar7 = uVar8;
      *ppuVar2 = puVar5;
    }
    if (puVar5 < *ppuVar3) {
      puVar7 = puVar5 + 1;
      *puVar5 = 1;
      puVar5 = puVar5 + 2;
      *puVar7 = uVar12;
      *ppuVar2 = puVar5;
    }
  }
  if (puVar5 < *ppuVar3) {
    *puVar5 = *DAT_00470628;
    puVar5[1] = DAT_0047062c;
    puVar5 = puVar5 + 2;
    *ppuVar2 = puVar5;
  }
  if (puVar5 < *ppuVar3) {
    *puVar5 = *DAT_00470630;
    puVar5[1] = DAT_00470634;
    puVar5 = puVar5 + 2;
    *ppuVar2 = puVar5;
  }
  if (puVar5 < *ppuVar3) {
    *puVar5 = *DAT_00470638;
    puVar5[1] = DAT_0047063c;
    *ppuVar2 = puVar5 + 2;
  }
  uVar8 = DAT_00470640;
  puVar5 = *ppuVar2;
  if (*(char *)((int)puVar13 + 0x57d) == '\0') {
    if (puVar5 < *ppuVar3) {
      uVar12 = DAT_00470644;
      if (*(char *)(puVar13 + 0x15f) != '\0') {
        uVar12 = *DAT_00470648;
      }
      *puVar5 = uVar12;
      puVar5[1] = DAT_0047064c;
      puVar5 = puVar5 + 2;
      *ppuVar2 = puVar5;
    }
    if (puVar5 < *ppuVar3) {
      *puVar5 = 0x100;
      puVar5[1] = uVar8;
      *ppuVar2 = puVar5 + 2;
    }
  }
  else if (puVar5 < *ppuVar3) {
    *puVar5 = 0;
    puVar5[1] = uVar8;
    *ppuVar2 = puVar5 + 2;
  }
  uVar8 = DAT_00470650;
  puVar5 = *ppuVar2;
  if (*(char *)(puVar13 + 0xf) == '\0') {
    if (*ppuVar3 <= puVar5) goto LAB_00470570;
  }
  else {
    if (*ppuVar3 <= puVar5) goto LAB_00470570;
    if ((puVar13[0xe] == 0x404) == (puVar13[0xd] == 0x901)) {
      uVar11 = 1;
    }
    else {
      uVar11 = 2;
    }
  }
  *puVar5 = uVar11;
  puVar5[1] = uVar8;
  puVar5 = puVar5 + 2;
  *ppuVar2 = puVar5;
LAB_00470570:
  if (puVar5 < *ppuVar3) {
    uVar8 = (uint)*(byte *)((int)puVar13 + 0x5c3);
    if (uVar8 != 0) {
      uVar8 = 1;
    }
    *puVar5 = uVar8;
    puVar5[1] = DAT_00470654;
    puVar5 = puVar5 + 2;
    *ppuVar2 = puVar5;
  }
  if (puVar5 < *ppuVar3) {
    *puVar5 = *DAT_00470658;
    puVar5[1] = DAT_0047065c;
    puVar5 = puVar5 + 2;
    *ppuVar2 = puVar5;
  }
  if (puVar5 < *ppuVar3) {
    *puVar5 = *DAT_00470660;
    puVar5[1] = DAT_00470664;
    puVar5 = puVar5 + 2;
    *ppuVar2 = puVar5;
  }
  if (puVar5 < *ppuVar3) {
    *puVar5 = *DAT_00470668;
    puVar5[1] = DAT_0047066c;
    *ppuVar2 = puVar5 + 2;
  }
  *puVar13 = *puVar13 | 0x100;
  return;
}

