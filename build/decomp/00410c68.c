// OoT3D decomp @ 00410c68  name=FUN_00410c68  size=1648

undefined4 FUN_00410c68(void)

{
  int *piVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint *puVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  undefined4 uVar10;
  undefined1 *puVar11;
  int iVar12;
  undefined4 unaff_r9;

  uVar10 = DAT_004112dc;
  if ((code *)*DAT_004112d8 == (code *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = (*(code *)*DAT_004112d8)(0x10000,0x100,0,DAT_004112dc);
  }
  puVar5 = DAT_004112e0;
  if (iVar3 == 0) {
    unaff_r9 = 0xffffffff;
  }
  DAT_004112e0[2] = iVar3;
  if (iVar3 == 0) {
    return unaff_r9;
  }
  FUN_00343280(iVar3,uVar10);
  piVar1 = DAT_004112e4;
  puVar5[1] = 1;
  puVar5[3] = 0xffffffff;
  *puVar5 = 1;
  iVar9 = DAT_004112e8;
  iVar3 = 0;
  iVar7 = *piVar1;
  piVar8 = DAT_004112ec;
  iVar12 = DAT_004112f0;
  while (DAT_004112ec = piVar8, DAT_004112f0 = iVar12, iVar7 != -1) {
    piVar8 = piVar1 + iVar3 * 4;
    iVar3 = iVar3 + 1;
    iVar12 = *piVar8;
    *(int *)(iVar9 + iVar12 * 0xc) = piVar8[1];
    iVar12 = iVar9 + iVar12 * 0xc;
    *(int *)(iVar12 + 4) = piVar8[2];
    *(int *)(iVar12 + 8) = piVar8[3];
    piVar8 = DAT_004112ec;
    iVar12 = DAT_004112f0;
    iVar7 = piVar1[iVar3 * 4];
  }
  iVar3 = 0;
  iVar9 = *piVar8;
  while (iVar9 != -1) {
    iVar9 = iVar3 * 2;
    iVar3 = iVar3 + 1;
    *(int *)(iVar12 + piVar8[iVar9] * 4) = (piVar8 + iVar9)[1];
    iVar9 = piVar8[iVar3 * 2];
  }
  iVar3 = puVar5[2];
  *(undefined4 *)(iVar3 + 0x13a4) = 0x1000;
  *(undefined1 *)(iVar3 + 0x16da) = 2;
  *(undefined4 *)(iVar3 + 0x13a8) = 0;
  *(undefined1 *)(iVar3 + 0x16db) = 0xf;
  *(undefined4 *)(iVar3 + 0x13ac) = 0;
  *(undefined1 *)(iVar3 + 0x16dc) = 0xf;
  *(undefined4 *)(iVar3 + 0x13b0) = 9;
  *(undefined1 *)(iVar3 + 0x16dd) = 0xf;
  *(undefined4 *)(iVar3 + 0x13b4) = 0;
  *(undefined1 *)(iVar3 + 0x16de) = 0xf;
  *(undefined4 *)(iVar3 + 0x13b8) = 0;
  uVar10 = DAT_004112f4;
  *(undefined1 *)(iVar3 + 0x16df) = 0xf;
  *(undefined4 *)(iVar3 + 0x13bc) = 0;
  *(undefined1 *)(iVar3 + 0x16e0) = 0xf;
  *(undefined4 *)(iVar3 + 0x13c0) = uVar10;
  uVar10 = DAT_004112f8;
  *(undefined1 *)(iVar3 + 0x16e1) = 0xf;
  *(undefined4 *)(iVar3 + 0x13c4) = uVar10;
  *(undefined1 *)(iVar3 + 0x16e2) = 0xf;
  *(undefined4 *)(iVar3 + 0x146c) = 0x3c00;
  uVar10 = DAT_004112fc;
  *(undefined1 *)(iVar3 + 0x170c) = 0xf;
  *(undefined4 *)(iVar3 + 0x1364) = 0;
  *(undefined1 *)(iVar3 + 0x16ca) = 0xf;
  *(undefined4 *)(iVar3 + 0x1368) = uVar10;
  *(undefined1 *)(iVar3 + 0x16cb) = 0xf;
  *(undefined4 *)(iVar3 + 0x136c) = uVar10;
  *(undefined1 *)(iVar3 + 0x16cc) = 0xf;
  *(undefined4 *)(iVar3 + 0x1370) = uVar10;
  *(undefined1 *)(iVar3 + 0x16cd) = 0xf;
  *(undefined4 *)(iVar3 + 0x1374) = uVar10;
  *(undefined1 *)(iVar3 + 0x16ce) = 0xf;
  *(undefined4 *)(iVar3 + 0x1378) = uVar10;
  *(undefined1 *)(iVar3 + 0x16cf) = 0xf;
  *(undefined4 *)(iVar3 + 0x137c) = uVar10;
  *(undefined1 *)(iVar3 + 0x16d0) = 0xf;
  *(undefined4 *)(iVar3 + 0x1380) = uVar10;
  *(undefined1 *)(iVar3 + 0x16d1) = 0xf;
  *(undefined4 *)(iVar3 + 0x139c) = 1;
  *(undefined1 *)(iVar3 + 0x16d8) = 0xf;
  *(undefined4 *)(iVar3 + 0x135c) = 0xbf0000;
  *(undefined1 *)(iVar3 + 0x16c8) = 0xf;
  *(undefined4 *)(iVar3 + 0x1360) = 0;
  *(undefined1 *)(iVar3 + 0x16c9) = 0xf;
  *(undefined4 *)(iVar3 + 0x1384) = 0;
  *(undefined1 *)(iVar3 + 0x16d2) = 0xf;
  *(undefined4 *)(iVar3 + 5000) = 0;
  *(undefined1 *)(iVar3 + 0x16d3) = 0xf;
  *(undefined4 *)(iVar3 + 0x138c) = 0;
  *(undefined1 *)(iVar3 + 0x16d4) = 0xf;
  *(undefined4 *)(iVar3 + 0x1390) = 0;
  *(undefined1 *)(iVar3 + 0x16d5) = 0xf;
  *(undefined4 *)(iVar3 + 0x1394) = 0;
  uVar4 = 0x5c;
  *(undefined1 *)(iVar3 + 0x16d6) = 0xf;
  do {
    if (uVar4 == 0x8d) goto LAB_00410fc4;
    if ((int)uVar4 < 0x8e) {
      if (uVar4 == 0x77) {
LAB_00410fc4:
        uVar10 = 0x3c00;
      }
      else {
        if ((int)uVar4 < 0x78) {
          if (uVar4 != 0x6c) {
            if ((int)uVar4 < 0x6d) {
              if (uVar4 == 0x61) goto LAB_00410fc4;
              if (uVar4 == 99) goto LAB_00410fcc;
              if (uVar4 == 100) goto LAB_00410fd4;
              if (uVar4 == 0x66) goto LAB_00410fa4;
            }
            else {
              if (uVar4 == 0x6e) goto LAB_00410fcc;
              if (uVar4 == 0x6f) goto LAB_00410fd4;
              if (uVar4 == 0x71) goto LAB_00410fa4;
            }
            goto LAB_00410ff0;
          }
          goto LAB_00410fc4;
        }
        if (uVar4 == 0x82) goto LAB_00410fc4;
        if ((int)uVar4 < 0x83) {
          if (uVar4 == 0x79) goto LAB_00410fcc;
          if (uVar4 == 0x7a) goto LAB_00410fd4;
          if (uVar4 != 0x7c) goto LAB_00410ff0;
LAB_00410fa4:
          uVar10 = 0x3f000;
        }
        else {
          if (uVar4 != 0x84) {
            if (uVar4 != 0x85) {
              if (uVar4 == 0x87) goto LAB_00410fa4;
              goto LAB_00410ff0;
            }
LAB_00410fd4:
            *(undefined4 *)(iVar3 + uVar4 * 4 + 0x1300) = 1;
            *(undefined1 *)(iVar3 + uVar4 + 0x16b1) = 0xf;
            goto LAB_00411008;
          }
LAB_00410fcc:
          uVar10 = 0x800;
        }
      }
      *(undefined4 *)(iVar3 + uVar4 * 4 + 0x1300) = uVar10;
      *(undefined1 *)(iVar3 + uVar4 + 0x16b1) = 0xf;
    }
    else {
      if (uVar4 == 0xa3) goto LAB_00410fc4;
      if (0xa3 < (int)uVar4) {
        if (uVar4 != 0xae) {
          if ((int)uVar4 < 0xaf) {
            if (uVar4 == 0xa5) goto LAB_00410fcc;
            if (uVar4 == 0xa6) goto LAB_00410fd4;
            if (uVar4 == 0xa8) goto LAB_00410fa4;
          }
          else {
            if (uVar4 == 0xb0) goto LAB_00410fcc;
            if (uVar4 == 0xb1) goto LAB_00410fd4;
            if (uVar4 == 0xb3) goto LAB_00410fa4;
          }
          goto LAB_00410ff0;
        }
        goto LAB_00410fc4;
      }
      if (uVar4 == 0x98) goto LAB_00410fc4;
      if ((int)uVar4 < 0x99) {
        if (uVar4 == 0x8f) goto LAB_00410fcc;
        if (uVar4 == 0x90) goto LAB_00410fd4;
        if (uVar4 == 0x92) goto LAB_00410fa4;
      }
      else {
        if (uVar4 == 0x9a) goto LAB_00410fcc;
        if (uVar4 == 0x9b) goto LAB_00410fd4;
        if (uVar4 == 0x9d) goto LAB_00410fa4;
      }
LAB_00410ff0:
      *(undefined4 *)(iVar3 + uVar4 * 4 + 0x1300) = 0;
      *(undefined1 *)(iVar3 + uVar4 + 0x16b1) = 0xf;
    }
LAB_00411008:
    uVar2 = DAT_00411314;
    uVar4 = uVar4 + 1;
    if (0xb3 < uVar4) {
      *(undefined4 *)(iVar3 + 0x1478) = DAT_00411300;
      uVar10 = DAT_00411304;
      *(undefined1 *)(iVar3 + 0x170f) = 0xf;
      puVar11 = (undefined1 *)(iVar3 + 0x16e3);
      *(undefined4 *)(iVar3 + 0x15d0) = uVar10;
      *(undefined1 *)(iVar3 + 0x1765) = 0xf;
      *(undefined4 *)(iVar3 + 0x15d4) = 0;
      uVar10 = DAT_00411308;
      *(undefined1 *)(iVar3 + 0x1766) = 0xf;
      *(undefined4 *)(iVar3 + 0x15e0) = 1;
      *(undefined1 *)(iVar3 + 0x1769) = 0xf;
      *(undefined4 *)(iVar3 + 0x15d8) = uVar10;
      *(undefined1 *)(iVar3 + 0x1767) = 0xf;
      *(undefined4 *)(iVar3 + 0x15dc) = 0xffffffff;
      *(undefined1 *)(iVar3 + 0x1768) = 0xf;
      *(undefined4 *)(iVar3 + 0x15e8) = 0;
      uVar10 = DAT_0041130c;
      *(undefined1 *)(iVar3 + 0x176b) = 0xf;
      *(undefined4 *)(iVar3 + 0x15ec) = 0;
      *(undefined1 *)(iVar3 + 0x176c) = 0xf;
      *(undefined4 *)(iVar3 + 0x15e4) = uVar10;
      *(undefined1 *)(iVar3 + 0x176a) = 0xf;
      *(undefined4 *)(iVar3 + 0x15f0) = 0;
      *(undefined1 *)(iVar3 + 0x176d) = 0xf;
      *(undefined4 *)(iVar3 + 0x1440) = 0;
      *(undefined1 *)(iVar3 + 0x1701) = 0xf;
      *(undefined4 *)(iVar3 + 0x1444) = 0;
      *(undefined1 *)(iVar3 + 0x1702) = 0xf;
      *(undefined4 *)(iVar3 + 0x1448) = 0x3c00;
      *(undefined1 *)(iVar3 + 0x1703) = 0xf;
      *(undefined4 *)(iVar3 + 0x1454) = 0;
      *(undefined1 *)(iVar3 + 0x1706) = 0xf;
      *(undefined4 *)(iVar3 + 0x1458) = 0;
      *(undefined1 *)(iVar3 + 0x1707) = 0xf;
      *(undefined4 *)(iVar3 + 0x145c) = 0x100;
      *(undefined1 *)(iVar3 + 0x1708) = 0xf;
      *(undefined4 *)(iVar3 + 0x1460) = 0xa00;
      *(undefined1 *)(iVar3 + 0x1709) = 7;
      *(undefined4 *)(iVar3 + 0x144c) = 0x3c00;
      uVar10 = DAT_00411310;
      *(undefined1 *)(iVar3 + 0x1704) = 0xf;
      *(undefined4 *)(iVar3 + 0x1464) = uVar10;
      *(undefined1 *)(iVar3 + 0x170a) = 0xd;
      *(undefined4 *)(iVar3 + 0x1468) = 0x10;
      puVar6 = (uint *)(iVar3 + 0x13c8);
      iVar12 = 0;
      iVar9 = 0x1e;
      *(undefined1 *)(iVar3 + 0x170b) = 0xf;
LAB_00411110:
      *puVar6 = uVar2;
      do {
        *puVar11 = 0xf;
        do {
          iVar9 = iVar9 + -1;
          puVar6 = puVar6 + 1;
          puVar11 = puVar11 + 1;
          iVar12 = iVar12 + 1;
          if (iVar9 == 0) {
            *(undefined4 *)(iVar3 + 0x1450) = 0;
            *(undefined1 *)(iVar3 + 0x1705) = 0xf;
            FUN_00371738(iVar3 + 0x100c,iVar3 + 0x1300,0x2f4);
            FUN_0034338c(puVar5[2] + 0x15f4,puVar5[2] + 0x16b1,0xbd);
            iVar3 = DAT_00411318;
            iVar12 = 3;
            puVar5 = (undefined4 *)(DAT_00411318 + -4);
            do {
              iVar12 = iVar12 + -1;
              puVar5[1] = 0;
              puVar5 = puVar5 + 2;
              *puVar5 = 0;
              piVar8 = DAT_0041131c;
            } while (iVar12 != 0);
            iVar12 = 0;
            iVar7 = *DAT_0041131c;
            iVar9 = DAT_00411320;
            while (DAT_00411320 = iVar9, iVar7 != 0xbd) {
              uVar4 = piVar8[iVar12];
              iVar12 = iVar12 + 1;
              iVar9 = (int)uVar4 >> 5;
              *(uint *)(iVar3 + iVar9 * 4) = *(uint *)(iVar3 + iVar9 * 4) | 1 << (uVar4 & 0x1f);
              iVar9 = DAT_00411320;
              iVar7 = piVar8[iVar12];
            }
            iVar3 = 3;
            puVar5 = (undefined4 *)(iVar9 + -4);
            do {
              iVar3 = iVar3 + -1;
              puVar5[1] = 0;
              puVar5 = puVar5 + 2;
              *puVar5 = 0;
              piVar8 = DAT_00411324;
            } while (iVar3 != 0);
            iVar3 = 0;
            iVar12 = *DAT_00411324;
            piVar1 = DAT_00411328;
            while (DAT_00411328 = piVar1, iVar12 != 0xbd) {
              uVar4 = piVar8[iVar3];
              iVar3 = iVar3 + 1;
              iVar12 = (int)uVar4 >> 5;
              *(uint *)(iVar9 + iVar12 * 4) = *(uint *)(iVar9 + iVar12 * 4) | 1 << (uVar4 & 0x1f);
              piVar1 = DAT_00411328;
              iVar12 = piVar8[iVar3];
            }
            iVar3 = 0;
            iVar7 = *piVar1;
            iVar12 = DAT_0041132c;
            while (DAT_0041132c = iVar12, iVar7 != 0xbd) {
              puVar6 = (uint *)(piVar1 + iVar3);
              iVar3 = iVar3 + 1;
              iVar12 = (int)*puVar6 >> 5;
              *(uint *)(iVar9 + iVar12 * 4) = *(uint *)(iVar9 + iVar12 * 4) | 1 << (*puVar6 & 0x1f);
              iVar12 = DAT_0041132c;
              iVar7 = piVar1[iVar3];
            }
            iVar3 = 3;
            puVar5 = (undefined4 *)(iVar12 + -4);
            do {
              iVar3 = iVar3 + -1;
              puVar5[1] = 0;
              puVar5 = puVar5 + 2;
              *puVar5 = 0;
              piVar8 = DAT_00411330;
            } while (iVar3 != 0);
            iVar3 = 0;
            iVar9 = *DAT_00411330;
            while (iVar9 != 0xbd) {
              uVar4 = piVar8[iVar3];
              iVar3 = iVar3 + 1;
              iVar9 = (int)uVar4 >> 5;
              *(uint *)(iVar12 + iVar9 * 4) = *(uint *)(iVar12 + iVar9 * 4) | 1 << (uVar4 & 0x1f);
              iVar9 = piVar8[iVar3];
            }
            return 0;
          }
          if (iVar12 == 0) goto LAB_00411110;
          if ((((iVar12 != 5 && iVar12 != 10) && iVar12 != 0xf) && iVar12 != 0x14) && iVar12 != 0x19
             ) {
            *puVar6 = 0;
            *puVar11 = 0xf;
          }
        } while ((((iVar12 != 5 && iVar12 != 10) && iVar12 != 0xf) && iVar12 != 0x14) &&
                 iVar12 != 0x19);
        *puVar6 = uVar2 | (int)uVar2 >> 1;
      } while( true );
    }
  } while( true );
}
