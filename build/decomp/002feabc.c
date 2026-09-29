// OoT3D decomp @ 002feabc  name=FUN_002feabc  size=648

void FUN_002feabc(uint param_1,int param_2,uint param_3,int param_4)

{
  float fVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  uint local_3c [6];

  puVar3 = DAT_002fed50;
  puVar2 = DAT_002fed4c;
  fVar1 = DAT_002fed48;
  fVar15 = (float)VectorSignedToFloat(param_3,(byte)(in_fpscr >> 0x15) & 3);
  iVar12 = *DAT_002fed44;
  fVar15 = fVar15 * DAT_002fed48;
  uVar8 = 0;
  if (ABS(fVar15) != 0.0) {
    uVar8 = (int)fVar15 << 1;
  }
  if (ABS(fVar15) != 0.0) {
    uVar8 = (uVar8 >> 0x18) - 0x40;
  }
  bVar14 = -1 < (int)uVar8;
  if (bVar14) {
    uVar8 = (uint)((int)fVar15 << 9) >> 0x10 | uVar8 << 0x10;
  }
  if (bVar14) {
    uVar8 = uVar8 | ((uint)fVar15 >> 0x1f) << 0x17;
  }
  else {
    uVar8 = ((uint)fVar15 >> 0x1f) << 0x17;
  }
  puVar6 = (uint *)*DAT_002fed4c;
  if (puVar6 < (uint *)*DAT_002fed50) {
    *puVar6 = uVar8;
    puVar6[1] = DAT_002fed54;
    *puVar2 = (uint)(puVar6 + 2);
  }
  fVar15 = (float)VectorSignedToFloat(param_4,(byte)(in_fpscr >> 0x15) & 3);
  fVar15 = fVar15 * fVar1;
  uVar8 = 0;
  if (ABS(fVar15) != 0.0) {
    uVar8 = (int)fVar15 << 1;
  }
  if (ABS(fVar15) != 0.0) {
    uVar8 = (uVar8 >> 0x18) - 0x40;
  }
  bVar14 = -1 < (int)uVar8;
  if (bVar14) {
    uVar8 = (uint)((int)fVar15 << 9) >> 0x10 | uVar8 << 0x10;
  }
  if (bVar14) {
    uVar8 = uVar8 | ((uint)fVar15 >> 0x1f) << 0x17;
  }
  else {
    uVar8 = ((uint)fVar15 >> 0x1f) << 0x17;
  }
  puVar6 = (uint *)*puVar2;
  if (puVar6 < (uint *)*puVar3) {
    *puVar6 = uVar8;
    puVar6[1] = DAT_002fed58;
    *puVar2 = (uint)(puVar6 + 2);
  }
  fVar1 = DAT_002fed68;
  uVar5 = DAT_002fed64;
  uVar4 = DAT_002fed60;
  uVar8 = DAT_002fed5c;
  if (param_3 != 0 && param_4 != 0) {
    iVar7 = 0;
    local_3c[0] = param_3;
    local_3c[1] = param_4;
    uVar13 = DAT_002fed5c - 0x1000000;
    do {
      uVar9 = local_3c[iVar7];
      uVar10 = DAT_002fed6c;
      if (uVar9 == 0x280) {
LAB_002fec58:
        local_3c[iVar7] = uVar10;
      }
      else {
        if (0x280 < (int)uVar9) {
          uVar10 = DAT_002fed74;
          if (uVar9 != 800) {
            if (uVar9 == 0x400) {
              uVar10 = 0x36000000;
            }
            else {
              uVar10 = DAT_002fed78;
              if ((uVar9 != 0x4b0) && (uVar10 = DAT_002fed7c, uVar9 != 0x500)) goto LAB_002fec60;
            }
          }
          goto LAB_002fec58;
        }
        if (uVar9 == 400) {
          local_3c[iVar7] = uVar5;
        }
        else if ((int)uVar9 < 0x191) {
          if (uVar9 == 0xf0) {
            local_3c[iVar7] = uVar8;
          }
          else {
            if (uVar9 != 0x140) goto LAB_002fec60;
            local_3c[iVar7] = uVar4;
          }
        }
        else if (uVar9 == 0x1e0) {
          local_3c[iVar7] = uVar13;
        }
        else {
          uVar10 = DAT_002fed70;
          if (uVar9 == 600) goto LAB_002fec58;
LAB_002fec60:
          fVar15 = (float)VectorUnsignedToFloat(uVar9,(byte)(in_fpscr >> 0x15) & 3);
          fVar15 = fVar1 / fVar15;
          iVar11 = 0;
          if (ABS(fVar15) != 0.0) {
            iVar11 = ((uint)((int)fVar15 << 1) >> 0x18) - 0x40;
          }
          if (iVar11 < 0) {
            uVar10 = ((uint)fVar15 >> 0x1f) << 0x1e;
          }
          else {
            uVar10 = (uint)fVar15 & 0x7fffff | iVar11 << 0x17 | ((uint)fVar15 >> 0x1f) << 0x1e;
          }
          local_3c[iVar7] = uVar10;
          local_3c[iVar7] = uVar10 << 1;
        }
      }
      puVar6 = (uint *)*puVar2;
      if (puVar6 < (uint *)*puVar3) {
        *puVar6 = local_3c[iVar7];
        puVar6[1] = iVar7 * 2 + 0x42U | 0xf0000;
        *puVar2 = (uint)(puVar6 + 2);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 2);
  }
  puVar6 = (uint *)*puVar2;
  if (puVar6 < (uint *)*puVar3) {
    *puVar6 = param_1 | param_2 << 0x10;
    puVar6[1] = DAT_002fed80;
    *puVar2 = (uint)(puVar6 + 2);
  }
  *(uint *)(iVar12 + 0x20) = param_1;
  *(int *)(iVar12 + 0x24) = param_2;
  *(uint *)(iVar12 + 0x28) = param_3;
  *(int *)(iVar12 + 0x2c) = param_4;
  if (*(char *)(iVar12 + 0x30) == '\0') {
    *(undefined1 *)(iVar12 + 0x30) = 1;
  }
  return;
}
