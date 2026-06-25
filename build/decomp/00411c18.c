// OoT3D decomp @ 00411c18  name=FUN_00411c18  size=1104

undefined4 FUN_00411c18(void)

{
  undefined4 uVar1;
  int *piVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined *puVar8;
  int iVar9;
  undefined4 *puVar10;
  uint uVar11;
  undefined4 *puVar12;
  undefined4 *puVar13;
  bool bVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  uint uVar18;
  
  uVar1 = DAT_0041204c;
  if (*DAT_00412048 == (code *)0x0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**DAT_00412048)(0x10000,0x100,0,DAT_0041204c);
  }
  piVar2 = DAT_00412050;
  *DAT_00412050 = iVar6;
  if (iVar6 != 0) {
    FUN_00343280(iVar6,uVar1);
    iVar6 = *piVar2;
    *(undefined *)(iVar6 + 0x18) = 0;
    *(undefined *)(iVar6 + 0x19) = 0;
    *(undefined4 *)(iVar6 + 0x10) = 4;
    *(undefined4 *)(iVar6 + 0x14) = 4;
    *(undefined *)(iVar6 + 0x1a) = 1;
    *(undefined *)(iVar6 + 0x1b) = 0;
    *(undefined4 *)(iVar6 + 0x1c) = 0;
    *(undefined *)(iVar6 + 0x30) = 0;
    *(undefined4 *)(iVar6 + 0x20) = 0;
    *(undefined4 *)(iVar6 + 0x24) = 0;
    *(undefined4 *)(iVar6 + 0x28) = 0;
    *(undefined4 *)(iVar6 + 0x2c) = 0;
    *(undefined *)(iVar6 + 0x3c) = 0;
    *(undefined4 *)(iVar6 + 0x34) = 0x901;
    uVar3 = DAT_0041205c;
    uVar1 = DAT_00412058;
    *(undefined4 *)(iVar6 + 0x38) = DAT_00412054;
    *(undefined4 *)(iVar6 + 0x40) = uVar1;
    *(undefined4 *)(iVar6 + 0x44) = uVar1;
    *(undefined *)(iVar6 + 0x54) = 0;
    *(undefined4 *)(iVar6 + 0x4c) = uVar1;
    *(undefined4 *)(iVar6 + 0x50) = uVar3;
    *(undefined4 *)(iVar6 + 0x48) = uVar1;
    *(undefined4 *)(iVar6 + 0x58) = 0;
    *(undefined4 *)(iVar6 + 0x5c) = 0;
    *(undefined4 *)(iVar6 + 0x68) = 0;
    *(undefined *)(iVar6 + 0x104) = 0;
    *(undefined *)(iVar6 + 0x107) = 0;
    *(undefined4 *)(iVar6 + 0xf8) = 0;
    *(undefined4 *)(iVar6 + 0x60) = 0;
    *(undefined4 *)(iVar6 + 0x6c) = 0;
    *(undefined *)(iVar6 + 0x105) = 0;
    *(undefined *)(iVar6 + 0x108) = 0;
    *(undefined4 *)(iVar6 + 0xfc) = 0;
    *(undefined4 *)(iVar6 + 100) = 0;
    *(undefined4 *)(iVar6 + 0x70) = 0;
    *(undefined *)(iVar6 + 0x106) = 0;
    *(undefined *)(iVar6 + 0x109) = 0;
    *(undefined4 *)(iVar6 + 0x100) = 0;
    iVar9 = 0x10;
    puVar7 = (undefined4 *)(iVar6 + 0x70);
    do {
      iVar9 = iVar9 + -1;
      puVar7[1] = 0;
      puVar7 = puVar7 + 2;
      *puVar7 = 0;
    } while (iVar9 != 0);
    iVar9 = *piVar2;
    iVar6 = 0xc;
    puVar7 = (undefined4 *)(iVar9 + 0x2a0);
    puVar10 = (undefined4 *)(iVar9 + 0x29c);
    puVar12 = (undefined4 *)(iVar9 + 0x298);
    puVar13 = (undefined4 *)(iVar9 + 0x2a4);
    *(undefined4 *)(iVar9 + 0xf4) = 0;
    do {
      *puVar7 = uVar1;
      iVar6 = iVar6 + -1;
      puVar7 = puVar7 + 4;
      *puVar10 = uVar1;
      *puVar12 = uVar1;
      *puVar13 = uVar3;
      puVar10 = puVar10 + 4;
      puVar12 = puVar12 + 4;
      puVar13 = puVar13 + 4;
    } while (iVar6 != 0);
    do {
      iVar9 = *piVar2 + iVar6 * 0x10;
      uVar15 = *(uint *)(iVar9 + 0x298);
      uVar16 = *(uint *)(iVar9 + 0x29c);
      uVar11 = uVar15 & 0x7fffffff;
      bVar14 = uVar11 != 0;
      if (bVar14) {
        uVar11 = uVar15 << 1;
      }
      if (bVar14) {
        uVar11 = (uVar11 >> 0x18) - 0x40;
      }
      if ((int)uVar11 < 0) {
        uVar11 = (uVar15 >> 0x1f) << 0x17;
      }
      else {
        uVar11 = (uVar15 << 9) >> 0x10 | uVar11 << 0x10 | (uVar15 >> 0x1f) << 0x17;
      }
      uVar17 = *(uint *)(iVar9 + 0x2a0);
      uVar15 = uVar16 & 0x7fffffff;
      bVar14 = uVar15 != 0;
      if (bVar14) {
        uVar15 = uVar16 << 1;
      }
      if (bVar14) {
        uVar15 = (uVar15 >> 0x18) - 0x40;
      }
      if ((int)uVar15 < 0) {
        uVar15 = (uVar16 >> 0x1f) << 0x17;
      }
      else {
        uVar15 = (uVar16 << 9) >> 0x10 | uVar15 << 0x10 | (uVar16 >> 0x1f) << 0x17;
      }
      uVar18 = *(uint *)(iVar9 + 0x2a4);
      uVar16 = uVar17 & 0x7fffffff;
      bVar14 = uVar16 != 0;
      if (bVar14) {
        uVar16 = uVar17 << 1;
      }
      if (bVar14) {
        uVar16 = (uVar16 >> 0x18) - 0x40;
      }
      if ((int)uVar16 < 0) {
        uVar16 = (uVar17 >> 0x1f) << 0x17;
      }
      else {
        uVar16 = (uVar17 << 9) >> 0x10 | uVar16 << 0x10 | (uVar17 >> 0x1f) << 0x17;
      }
      uVar17 = uVar18 & 0x7fffffff;
      bVar14 = uVar17 != 0;
      if (bVar14) {
        uVar17 = uVar18 << 1;
      }
      if (bVar14) {
        uVar17 = (uVar17 >> 0x18) - 0x40;
      }
      if ((int)uVar17 < 0) {
        uVar17 = (uVar18 >> 0x1f) << 0x17;
      }
      else {
        uVar17 = (uVar18 << 9) >> 0x10 | uVar17 << 0x10 | (uVar18 >> 0x1f) << 0x17;
      }
      iVar9 = iVar6 + 1;
      *(uint *)(*piVar2 + iVar6 * 0xc + 0x358) = uVar16 >> 0x10 | uVar17 << 8;
      *(uint *)(*piVar2 + iVar6 * 0xc + 0x35c) = (uVar15 << 8) >> 0x10 | uVar16 << 0x10;
      *(uint *)(*piVar2 + iVar6 * 0xc + 0x360) = uVar11 | uVar15 << 0x18;
      uVar4 = DAT_00412060;
      iVar6 = iVar9;
    } while (iVar9 < 0xc);
    iVar6 = *piVar2;
    iVar9 = 0xc;
    puVar8 = (undefined *)(iVar6 + 0x3fd);
    puVar7 = (undefined4 *)(iVar6 + 0x3f8);
    puVar10 = (undefined4 *)(iVar6 + 0x3ec);
    puVar12 = (undefined4 *)(iVar6 + 0x3f0);
    do {
      iVar9 = iVar9 + -1;
      *puVar8 = 0;
      *puVar7 = 0;
      *puVar10 = 4;
      *puVar12 = uVar4;
      uVar5 = DAT_00412064;
      puVar8 = puVar8 + 0x18;
      puVar7 = puVar7 + 6;
      puVar10 = puVar10 + 6;
      puVar12 = puVar12 + 6;
    } while (iVar9 != 0);
    iVar6 = *piVar2;
    *(undefined4 *)(iVar6 + 0x508) = 0;
    *(undefined4 *)(iVar6 + 0x50c) = 0;
    *(undefined4 *)(iVar6 + 0x510) = 0;
    *(undefined *)(iVar6 + 0x578) = 0;
    *(undefined4 *)(iVar6 + 0x514) = 0;
    *(undefined4 *)(iVar6 + 0x518) = 0;
    *(undefined4 *)(iVar6 + 0x51c) = 0;
    *(undefined4 *)(iVar6 + 0x520) = 0;
    *(undefined *)(iVar6 + 0x579) = 0;
    *(undefined4 *)(iVar6 + 0x524) = uVar5;
    *(undefined4 *)(iVar6 + 0x528) = uVar1;
    *(undefined *)(iVar6 + 0x57a) = 0;
    *(undefined4 *)(iVar6 + 0x52c) = uVar5;
    *(undefined4 *)(iVar6 + 0x530) = 0;
    *(undefined4 *)(iVar6 + 0x534) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x538) = 0x1e00;
    *(undefined4 *)(iVar6 + 0x53c) = 0x1e00;
    *(undefined4 *)(iVar6 + 0x540) = 0x1e00;
    uVar4 = DAT_00412068;
    *(undefined *)(iVar6 + 0x57b) = 0;
    *(undefined4 *)(iVar6 + 0x544) = uVar4;
    *(undefined *)(iVar6 + 0x57f) = 0;
    *(undefined4 *)(iVar6 + 0x580) = uVar4;
    *(undefined *)(iVar6 + 0x57c) = 0;
    *(undefined4 *)(iVar6 + 0x548) = 1;
    *(undefined4 *)(iVar6 + 0x550) = 0;
    uVar4 = DAT_0041206c;
    *(undefined4 *)(iVar6 + 0x54c) = 1;
    *(undefined4 *)(iVar6 + 0x554) = 0;
    *(undefined *)(iVar6 + 0x57d) = 0;
    *(undefined4 *)(iVar6 + 0x570) = uVar4;
    *(undefined4 *)(iVar6 + 0x574) = DAT_00412070;
    uVar4 = DAT_00412074;
    *(undefined4 *)(iVar6 + 0x558) = DAT_00412074;
    *(undefined4 *)(iVar6 + 0x55c) = uVar4;
    *(undefined4 *)(iVar6 + 0x56c) = uVar1;
    *(undefined4 *)(iVar6 + 0x568) = uVar1;
    *(undefined4 *)(iVar6 + 0x564) = uVar1;
    *(undefined4 *)(iVar6 + 0x560) = uVar1;
    *(undefined *)(iVar6 + 0x588) = 1;
    *(undefined4 *)(iVar6 + 0x58c) = 0xffffffff;
    *(undefined4 *)(iVar6 + 0x5a8) = 0;
    *(undefined4 *)(iVar6 + 0x5a0) = uVar3;
    *(undefined4 *)(iVar6 + 0x5ac) = 0xffffff;
    *(undefined4 *)(iVar6 + 0x5b0) = 0xffff;
    *(undefined4 *)(iVar6 + 0x5a4) = 0xffffff;
    *(undefined *)(iVar6 + 0x587) = 1;
    *(undefined *)(iVar6 + 0x586) = 1;
    *(undefined *)(iVar6 + 0x585) = 1;
    *(undefined *)(iVar6 + 0x584) = 1;
    *(undefined4 *)(iVar6 + 0x59c) = uVar1;
    *(undefined4 *)(iVar6 + 0x598) = uVar1;
    *(undefined4 *)(iVar6 + 0x594) = uVar1;
    *(undefined4 *)(iVar6 + 0x590) = uVar1;
    *(undefined4 *)(iVar6 + 0x5b4) = 0;
    *(undefined *)(iVar6 + 0x5c0) = 0;
    *(undefined *)(iVar6 + 0x5c1) = 0;
    *(undefined *)(iVar6 + 0x5c2) = 0;
    *(undefined *)(iVar6 + 0x5c3) = 0;
    *(undefined4 *)(iVar6 + 0x5c8) = 0;
    *(undefined4 *)(iVar6 + 0x5cc) = 0;
    *(undefined4 *)(iVar6 + 0x5bc) = 3;
    *(undefined4 *)(iVar6 + 0x5b8) = 0;
    *(undefined4 *)(iVar6 + 0x5d0) = 0;
    *(undefined4 *)(iVar6 + 0x608) = 0;
    *(undefined4 *)(iVar6 + 0x604) = 0;
    iVar9 = 0xc;
    puVar7 = (undefined4 *)(iVar6 + 0x60c);
    puVar10 = (undefined4 *)(iVar6 + 0x63c);
    puVar12 = (undefined4 *)(iVar6 + 0x5d4);
    do {
      *puVar10 = 0;
      *puVar12 = 0;
      iVar9 = iVar9 + -1;
      *puVar7 = 0;
      puVar7 = puVar7 + 1;
      puVar10 = puVar10 + 1;
      puVar12 = puVar12 + 1;
    } while (iVar9 != 0);
    iVar6 = *piVar2;
    *(undefined4 *)(iVar6 + 0x670) = 0;
    *(undefined *)(iVar6 + 0x71c) = 0;
    *(undefined4 *)(iVar6 + 0x720) = 0;
    *(undefined4 *)(iVar6 + 0x724) = 0;
    FUN_00303b14(iVar6 + 0x728,0x30,0xff);
    return 0;
  }
  return 0xffffffff;
}

