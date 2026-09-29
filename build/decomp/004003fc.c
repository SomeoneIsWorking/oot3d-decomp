// OoT3D decomp @ 004003fc  name=FUN_004003fc  size=1452

void FUN_004003fc(undefined4 param_1,uint *param_2,float *param_3,int param_4)

{
  float fVar1;
  float fVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  float fVar11;
  float fVar12;
  uint uVar13;
  float fVar14;
  uint uVar15;
  uint uVar16;

  uVar16 = DAT_004009d0;
  iVar3 = DAT_004009cc;
  fVar2 = DAT_004009c8;
  fVar11 = DAT_004009c4;
  uVar10 = DAT_004006ec;
  iVar5 = DAT_004006e8;
  fVar1 = DAT_004006e4;
  fVar14 = DAT_004006e0;
  if (param_4 != 0) {
    fVar11 = *param_3;
    if ((fVar11 <= DAT_004006e0) || ((uint)((int)fVar11 << 1) >> 0x18 == 0xff)) {
      uVar16 = 0;
    }
    else {
      uVar16 = DAT_004006ec;
      if ((int)(fVar11 * DAT_004006e4) < DAT_004006e8) {
        uVar16 = VectorFloatToUnsigned(fVar11 * DAT_004006e4,3);
      }
    }
    iVar3 = FUN_0030e56c(param_3[1] - fVar11);
    uVar8 = DAT_004006f0;
    *param_2 = uVar16 | iVar3 << 0xc;
    fVar2 = DAT_004006f8;
    fVar11 = DAT_004006f4;
    param_2[1] = uVar8;
    puVar6 = param_2 + 2;
    iVar3 = 1;
    do {
      iVar4 = iVar3;
      puVar7 = puVar6;
      fVar12 = param_3[iVar4];
      if ((fVar12 <= fVar14) || ((uint)((int)fVar12 << 1) >> 0x18 == 0xff)) {
        uVar16 = 0;
      }
      else {
        uVar16 = uVar10;
        if ((int)(fVar12 * fVar1) < iVar5) {
          uVar16 = VectorFloatToUnsigned(fVar12 * fVar1,3);
        }
      }
      fVar12 = (param_3 + iVar4)[1] - fVar12;
      if (fVar12 == fVar14 || (uint)((int)fVar12 << 1) >> 0x18 == 0xff) {
        uVar8 = 0;
      }
      else {
        fVar12 = fVar12 * fVar11;
        if (fVar12 < fVar14) {
          fVar12 = -fVar12;
          uVar8 = 0x800;
        }
        else {
          uVar8 = 0;
        }
        if (0x44ffffff < (int)fVar12) {
          fVar12 = fVar2;
        }
        uVar13 = VectorFloatToUnsigned(fVar12,3);
        uVar8 = uVar8 | uVar13;
      }
      iVar3 = iVar4 + 1;
      *puVar7 = uVar16 | uVar8 << 0xc;
      puVar6 = puVar7 + 1;
    } while (iVar3 < 0x80);
    puVar7[1] = 0;
    fVar12 = param_3[iVar3];
    if ((fVar12 <= fVar14) || ((uint)((int)fVar12 << 1) >> 0x18 == 0xff)) {
      uVar16 = 0;
    }
    else {
      uVar16 = uVar10;
      if ((int)(fVar12 * fVar1) < iVar5) {
        uVar16 = VectorFloatToUnsigned(fVar12 * fVar1,3);
      }
    }
    iVar3 = FUN_0030e56c((param_3 + iVar3)[1] - fVar12);
    uVar8 = DAT_004006f0;
    puVar7[2] = uVar16 | iVar3 << 0xc;
    puVar7[3] = uVar8;
    puVar6 = puVar7 + 4;
    for (iVar4 = iVar4 + 2; iVar4 < 0xff; iVar4 = iVar4 + 1) {
      fVar12 = param_3[iVar4];
      if ((fVar12 <= fVar14) || ((uint)((int)fVar12 << 1) >> 0x18 == 0xff)) {
        uVar16 = 0;
      }
      else {
        uVar16 = uVar10;
        if ((int)(fVar12 * fVar1) < iVar5) {
          uVar16 = VectorFloatToUnsigned(fVar12 * fVar1,3);
        }
      }
      fVar12 = (param_3 + iVar4)[1] - fVar12;
      if (fVar12 == fVar14 || (uint)((int)fVar12 << 1) >> 0x18 == 0xff) {
        uVar8 = 0;
      }
      else {
        fVar12 = fVar12 * fVar11;
        if (fVar12 < fVar14) {
          fVar12 = -fVar12;
          uVar8 = 0x800;
        }
        else {
          uVar8 = 0;
        }
        if (0x44ffffff < (int)fVar12) {
          fVar12 = fVar2;
        }
        uVar13 = VectorFloatToUnsigned(fVar12,3);
        uVar8 = uVar8 | uVar13;
      }
      *puVar6 = uVar16 | uVar8 << 0xc;
      puVar6 = puVar6 + 1;
    }
    fVar11 = param_3[iVar4];
    if ((fVar11 <= fVar14) || ((uint)((int)fVar11 << 1) >> 0x18 == 0xff)) {
      uVar10 = 0;
    }
    else if ((int)(fVar11 * fVar1) < iVar5) {
      uVar10 = VectorFloatToUnsigned(fVar11 * fVar1,3);
    }
    iVar5 = FUN_0030e56c(param_1);
    *puVar6 = uVar10 | iVar5 << 0xc;
    puVar6[1] = 0;
    return;
  }
  fVar14 = param_3[0x80];
  if ((fVar14 <= DAT_004009c4) || ((uint)((int)fVar14 << 1) >> 0x18 == 0xff)) {
    uVar10 = 0;
  }
  else {
    uVar10 = DAT_004009d0;
    if ((int)(fVar14 * DAT_004009c8) < DAT_004009cc) {
      uVar10 = VectorFloatToUnsigned(fVar14 * DAT_004009c8,3);
    }
  }
  iVar5 = FUN_0030e56c(param_3[0x81] - fVar14);
  uVar8 = DAT_004009d4;
  *param_2 = uVar10 | iVar5 << 0xc;
  fVar1 = DAT_004009dc;
  fVar14 = DAT_004009d8;
  param_2[1] = uVar8;
  uVar10 = 0x81;
  puVar6 = param_2 + 2;
  do {
    puVar7 = puVar6;
    fVar12 = param_3[uVar10];
    if ((fVar12 <= fVar11) || ((uint)((int)fVar12 << 1) >> 0x18 == 0xff)) {
      uVar13 = 0;
    }
    else {
      uVar13 = uVar16;
      if ((int)(fVar12 * fVar2) < iVar3) {
        uVar13 = VectorFloatToUnsigned(fVar12 * fVar2,3);
      }
    }
    fVar12 = (param_3 + uVar10)[1] - fVar12;
    if (fVar12 == fVar11 || (uint)((int)fVar12 << 1) >> 0x18 == 0xff) {
      uVar9 = 0;
    }
    else {
      fVar12 = fVar12 * fVar14;
      if (fVar12 < fVar11) {
        fVar12 = -fVar12;
        uVar9 = 0x800;
      }
      else {
        uVar9 = 0;
      }
      if (0x44ffffff < (int)fVar12) {
        fVar12 = fVar1;
      }
      uVar15 = VectorFloatToUnsigned(fVar12,3);
      uVar9 = uVar9 | uVar15;
    }
    uVar10 = uVar10 + 1;
    *puVar7 = uVar13 | uVar9 << 0xc;
    puVar6 = puVar7 + 1;
  } while (uVar10 < 0xff);
  fVar12 = param_3[uVar10];
  if ((fVar12 <= fVar11) || ((uint)((int)fVar12 << 1) >> 0x18 == 0xff)) {
    uVar10 = 0;
  }
  else {
    uVar10 = uVar16;
    if ((int)(fVar12 * fVar2) < iVar3) {
      uVar10 = VectorFloatToUnsigned(fVar12 * fVar2,3);
    }
  }
  iVar5 = FUN_0030e56c(param_1);
  puVar7[1] = uVar10 | iVar5 << 0xc;
  puVar7[2] = 0;
  fVar12 = *param_3;
  if ((fVar12 <= fVar11) || ((uint)((int)fVar12 << 1) >> 0x18 == 0xff)) {
    uVar10 = 0;
  }
  else {
    uVar10 = uVar16;
    if ((int)(fVar12 * fVar2) < iVar3) {
      uVar10 = VectorFloatToUnsigned(fVar12 * fVar2,3);
    }
  }
  iVar5 = FUN_0030e56c(param_3[1] - fVar12);
  puVar7[3] = uVar10 | iVar5 << 0xc;
  puVar7[4] = uVar8;
  uVar10 = 1;
  puVar6 = puVar7 + 5;
  do {
    fVar12 = param_3[uVar10];
    if ((fVar12 <= fVar11) || ((uint)((int)fVar12 << 1) >> 0x18 == 0xff)) {
      uVar8 = 0;
    }
    else {
      uVar8 = uVar16;
      if ((int)(fVar12 * fVar2) < iVar3) {
        uVar8 = VectorFloatToUnsigned(fVar12 * fVar2,3);
      }
    }
    fVar12 = (param_3 + uVar10)[1] - fVar12;
    if (fVar12 == fVar11 || (uint)((int)fVar12 << 1) >> 0x18 == 0xff) {
      uVar13 = 0;
    }
    else {
      fVar12 = fVar12 * fVar14;
      if (fVar12 < fVar11) {
        fVar12 = -fVar12;
        uVar13 = 0x800;
      }
      else {
        uVar13 = 0;
      }
      if (0x44ffffff < (int)fVar12) {
        fVar12 = fVar1;
      }
      uVar9 = VectorFloatToUnsigned(fVar12,3);
      uVar13 = uVar13 | uVar9;
    }
    uVar10 = uVar10 + 1;
    puVar7 = puVar6 + 1;
    *puVar6 = uVar8 | uVar13 << 0xc;
    puVar6 = puVar7;
  } while (uVar10 < 0x80);
  *puVar7 = 0;
  return;
}
