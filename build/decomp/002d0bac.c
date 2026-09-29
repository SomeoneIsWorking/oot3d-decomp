// OoT3D decomp @ 002d0bac  name=FUN_002d0bac  size=1600

/* WARNING: Removing unreachable block (ram,0x002d0c9c) */

int FUN_002d0bac(int *param_1,int param_2)

{
  undefined4 *puVar1;
  int iVar2;
  uint *puVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint *puVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  uint uVar15;

  iVar4 = DAT_002d0fb0;
  iVar2 = *DAT_002d0fac;
  if (param_2 != 0) {
    return iVar4;
  }
  puVar5 = (uint *)(iVar2 + 0x670);
  iVar9 = 1;
  while( true ) {
    puVar3 = (uint *)(param_1 + iVar9 * 0x11 + 0xd);
    uVar11 = *puVar3;
    if (uVar11 == 0) break;
    iVar6 = param_1[0x1a];
    iVar7 = param_1[iVar9 * 0x11 + 0x1a];
    bVar13 = iVar6 == iVar7;
    if (bVar13) {
      iVar7 = param_1[0x15];
      iVar6 = param_1[iVar9 * 0x11 + 0x15];
    }
    bVar14 = bVar13 && iVar7 == iVar6;
    if (bVar13 && iVar7 == iVar6) {
      bVar14 = param_1[0x10] == param_1[iVar9 * 0x11 + 0x10];
    }
    if (!bVar14) break;
    puVar8 = (uint *)param_1[0x11];
    bVar13 = puVar8 != (uint *)param_1[iVar9 * 0x11 + 0x11];
    if (!bVar13) {
      puVar8 = (uint *)param_1[0x12];
      puVar3 = (uint *)param_1[iVar9 * 0x11 + 0x12];
    }
    if ((((bVar13 || puVar8 != puVar3) ||
         (((uVar11 + iVar6) - 1 & 0xfe000000) != (param_1[0xd] & 0xfe000000U))) ||
        (uVar11 < (uint)param_1[0xd])) || (iVar9 = iVar9 + 1, 5 < iVar9)) break;
  }
  iVar6 = 0;
  if (iVar9 != 6) {
    iVar6 = DAT_002d0fb0;
  }
  if ((*(char *)(iVar2 + 0x107) == '\0') || (iVar6 != 0)) {
    *puVar5 = *puVar5 & 0xfffffffe;
    return iVar6;
  }
  iVar6 = VectorFloatToUnsigned((float)param_1[7] * DAT_002d0fb8,3);
  uVar15 = VectorFloatToUnsigned((float)param_1[6] * DAT_002d0fb8,3);
  iVar7 = VectorFloatToUnsigned((float)param_1[8] * DAT_002d0fb8,3);
  iVar9 = VectorFloatToUnsigned((float)param_1[9] * DAT_002d0fb8,3);
  uVar11 = *(uint *)(iVar2 + 0x67c);
  *(uint *)(iVar2 + 0x67c) = uVar11 & 0xfeefffff;
  *(uint *)(iVar2 + 0x674) = uVar15 | iVar6 << 8 | iVar7 << 0x10 | iVar9 << 0x18;
  uVar15 = *(uint *)(iVar2 + 0x678);
  uVar12 = (param_1[0x10] & 0x7ffU) << 0x10;
  *(uint *)(iVar2 + 0x678) = uVar15 & 0xf800ffff | uVar12;
  *(uint *)(iVar2 + 0x678) = uVar15 & 0xf800f800 | uVar12 | param_1[0x11] & 0x7ffU;
  *(uint *)(iVar2 + 0x69c) = *(uint *)(iVar2 + 0x69c) & 0xff000000;
  *(uint *)(iVar2 + 0x6a8) = *(uint *)(iVar2 + 0x6a8) & 0xfffffff0 | param_1[0x14] & 0xfU;
  iVar9 = param_1[0x12];
  iVar6 = iVar9 - DAT_002d0fbc;
  if (iVar9 != DAT_002d0fbc) {
    if (iVar9 < DAT_002d0fbc) {
      if (3 < iVar9 - 0x1906U) {
        return iVar4;
      }
    }
    else {
      if (iVar6 == 0x4736) {
        *(uint *)(iVar2 + 0x67c) = uVar11 & 0x8eef88cf | 0x40100006;
        *(uint *)(iVar2 + 0x680) = *(uint *)(iVar2 + 0x680) & 0xf0f0e000;
        goto LAB_002d1108;
      }
      if (iVar6 != 0x4e50 && iVar6 != 0x4e51) {
        return iVar4;
      }
    }
  }
  *(uint *)(iVar2 + 0x67c) = uVar11 & 0x8eefffff | 0x10000000;
  iVar4 = param_1[2];
  if (iVar4 == 0x2901) {
    *(uint *)(iVar2 + 0x67c) = uVar11 & 0x8eef8fff | 0x10002000;
  }
  else if (iVar4 == 0x812d) {
    *(uint *)(iVar2 + 0x67c) = uVar11 & 0x8eef8fff | 0x10001000;
  }
  else if (iVar4 == 0x812f) {
    *(uint *)(iVar2 + 0x67c) = uVar11 & 0x8eef8fff | 0x10000000;
  }
  else if (iVar4 == 0x8370) {
    *(uint *)(iVar2 + 0x67c) = uVar11 & 0x8eef8fff | 0x10003000;
  }
  iVar4 = param_1[3];
  if (iVar4 == 0x2901) {
    uVar11 = *(uint *)(iVar2 + 0x67c) & 0xfffff8ff | 0x200;
LAB_002d0e44:
    *(uint *)(iVar2 + 0x67c) = uVar11;
  }
  else {
    if (iVar4 == 0x812d) {
      uVar11 = *(uint *)(iVar2 + 0x67c) & 0xfffff8ff | 0x100;
      goto LAB_002d0e44;
    }
    if (iVar4 == 0x812f) {
      uVar11 = *(uint *)(iVar2 + 0x67c) & 0xfffff8ff;
      goto LAB_002d0e44;
    }
    if (iVar4 == 0x8370) {
      uVar11 = *(uint *)(iVar2 + 0x67c) & 0xfffff8ff | 0x300;
      goto LAB_002d0e44;
    }
  }
  if (*param_1 == 0x2600) {
    *(uint *)(iVar2 + 0x67c) = *(uint *)(iVar2 + 0x67c) & 0xfffffffd;
  }
  else if (*param_1 == 0x2601) {
    *(uint *)(iVar2 + 0x67c) = *(uint *)(iVar2 + 0x67c) | 2;
  }
  iVar4 = param_1[1];
  if (iVar4 == DAT_002d0fc0) {
    uVar12 = *(uint *)(iVar2 + 0x67c);
    *(uint *)(iVar2 + 0x67c) = uVar12 | 4;
    uVar11 = *(uint *)(iVar2 + 0x680);
    uVar10 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
    *(uint *)(iVar2 + 0x680) = uVar11 & 0xfff0ffff | uVar10;
    uVar15 = param_1[5];
    if ((int)uVar15 < 0) {
      uVar15 = 0;
    }
    *(uint *)(iVar2 + 0x67c) = uVar12 & 0xfeffffff | 4;
    *(uint *)(iVar2 + 0x680) = uVar11 & 0xf0f0ffff | uVar10 | (uVar15 & 0xf) << 0x18;
  }
  else if (iVar4 < DAT_002d0fc0) {
    if (iVar4 == 0x2600) {
      *(uint *)(iVar2 + 0x67c) = *(uint *)(iVar2 + 0x67c) & 0xfefffffb;
      *(uint *)(iVar2 + 0x680) = *(uint *)(iVar2 + 0x680) & 0xf0f0ffff;
    }
    else if (iVar4 == 0x2601) {
      *(uint *)(iVar2 + 0x67c) = *(uint *)(iVar2 + 0x67c) & 0xfeffffff | 4;
      *(uint *)(iVar2 + 0x680) = *(uint *)(iVar2 + 0x680) & 0xf0f0ffff;
    }
    else if (iVar4 == 0x2700) {
      uVar11 = *(uint *)(iVar2 + 0x67c);
      *(uint *)(iVar2 + 0x67c) = uVar11 & 0xfffffffb;
      uVar15 = *(uint *)(iVar2 + 0x680);
      uVar10 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
      *(uint *)(iVar2 + 0x680) = uVar15 & 0xfff0ffff | uVar10;
      uVar12 = param_1[5];
      if ((int)uVar12 < 0) {
        uVar12 = 0;
      }
      *(uint *)(iVar2 + 0x67c) = uVar11 & 0xfefffffb;
      *(uint *)(iVar2 + 0x680) = uVar15 & 0xf0f0ffff | uVar10 | (uVar12 & 0xf) << 0x18;
    }
  }
  else {
    if (iVar4 - DAT_002d0fc0 == 1) {
      uVar11 = *(uint *)(iVar2 + 0x67c) & 0xfffffffb;
      *(uint *)(iVar2 + 0x67c) = uVar11;
      uVar12 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
      uVar15 = *(uint *)(iVar2 + 0x680) & 0xf0f0ffff | uVar12;
      *(uint *)(iVar2 + 0x680) = *(uint *)(iVar2 + 0x680) & 0xfff0ffff | uVar12;
      uVar12 = param_1[5];
    }
    else {
      if (iVar4 - DAT_002d0fc0 != 2) goto LAB_002d1098;
      uVar11 = *(uint *)(iVar2 + 0x67c) | 4;
      *(uint *)(iVar2 + 0x67c) = uVar11;
      uVar12 = (param_1[0x1a] + -1) * 0x10000 & 0xf0000;
      uVar15 = *(uint *)(iVar2 + 0x680) & 0xf0f0ffff | uVar12;
      *(uint *)(iVar2 + 0x680) = *(uint *)(iVar2 + 0x680) & 0xfff0ffff | uVar12;
      uVar12 = param_1[5];
    }
    if ((int)uVar12 < 0) {
      uVar12 = 0;
    }
    *(uint *)(iVar2 + 0x67c) = uVar11 | 0x1000000;
    *(uint *)(iVar2 + 0x680) = uVar15 | (uVar12 & 0xf) << 0x18;
  }
LAB_002d1098:
  *(uint *)(iVar2 + 0x680) = *(uint *)(iVar2 + 0x680) & 0xffffe000;
  if (param_1[0x12] == 0x675a) {
    iVar4 = 2;
  }
  else {
    iVar4 = 0;
  }
  *(uint *)(iVar2 + 0x67c) = *(uint *)(iVar2 + 0x67c) & 0xffffffcf | iVar4 << 4;
LAB_002d1108:
  uVar11 = FUN_002c83f8(param_1[0xd]);
  *(uint *)(iVar2 + 0x684) = *(uint *)(iVar2 + 0x684) & 0xc0000000 | uVar11 >> 3;
  uVar11 = FUN_002c83f8(param_1[0x1e]);
  *(uint *)(iVar2 + 0x688) = *(uint *)(iVar2 + 0x688) & 0xffc00000 | uVar11 >> 3 & 0xe03fffff;
  uVar11 = FUN_002c83f8(param_1[0x2f]);
  *(uint *)(iVar2 + 0x68c) = *(uint *)(iVar2 + 0x68c) & 0xffc00000 | uVar11 >> 3 & 0xe03fffff;
  uVar11 = FUN_002c83f8(param_1[0x40]);
  *(uint *)(iVar2 + 0x690) = *(uint *)(iVar2 + 0x690) & 0xffc00000 | uVar11 >> 3 & 0xe03fffff;
  uVar11 = FUN_002c83f8(param_1[0x51]);
  *(uint *)(iVar2 + 0x694) = *(uint *)(iVar2 + 0x694) & 0xffc00000 | uVar11 >> 3 & 0xe03fffff;
  uVar11 = FUN_002c83f8(param_1[0x62]);
  *(uint *)(iVar2 + 0x698) = *(uint *)(iVar2 + 0x698) & 0xffc00000 | uVar11 >> 3 & 0xe03fffff;
  *puVar5 = *puVar5 | 1;
  FUN_002d1244(0x81,10,iVar2 + 0x674);
  puVar5 = DAT_002d1204;
  puVar1 = (undefined4 *)*DAT_002d1204;
  if (puVar1 < (undefined4 *)*DAT_002d1208) {
    *puVar1 = *(undefined4 *)(iVar2 + 0x6a8);
    puVar1[1] = DAT_002d120c;
    *puVar5 = (uint)(puVar1 + 2);
  }
  return 0;
}
