// OoT3D decomp @ 00374be8  name=FUN_00374be8  size=1924

/* WARNING: Type propagation algorithm not settling */

uint FUN_00374be8(int param_1,undefined4 param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  bool bVar11;
  bool bVar12;
  bool bVar13;
  
  iVar10 = *(int *)(param_1 + 0x20ac);
  switch(param_2) {
  case 0:
    if (((*(char *)(iVar10 + 0x1749) == '\0') &&
        ((((*(short *)(param_1 + 0x104) != 0x49 ||
           (sVar1 = *(short *)(DAT_0037528c + iVar10), (sVar1 != 1 && sVar1 != 2) && sVar1 != 3)) &&
          (*(short *)(DAT_00375290 + iVar10) == 0)) &&
         ((iVar5 = FUN_003518cc(iVar10), iVar5 == 0 &&
          (*(short *)(*DAT_00375294 + 0x4b2) != 0x10 && *(short *)(*DAT_00375294 + 0x4b2) != 0x20)))
         ))) && (uVar7 = *(uint *)(iVar10 + 0x1714), (uVar7 & 0x100) == 0)) {
      iVar6 = *(int *)(iVar10 + 0x1708);
      bVar13 = iVar6 != DAT_00375298;
      iVar5 = DAT_00375298;
      if (bVar13) {
        iVar5 = DAT_0037529c;
      }
      iVar2 = iVar5;
      if (bVar13 && iVar6 != iVar5) {
        iVar2 = DAT_003752a0;
      }
      if (((bVar13 && iVar6 != iVar5) && iVar6 != iVar2) &&
         (((iVar6 != DAT_003752a4 || (*(char *)(DAT_003752a8 + iVar10) < '\x18')) ||
          ('\x1b' < *(char *)(DAT_003752a8 + iVar10))))) {
        uVar9 = *(uint *)(iVar10 + 0x1710);
        bVar13 = (DAT_003752ac & uVar9) == 0;
        if (bVar13) {
          bVar13 = (uVar7 & 0x80) == 0;
        }
        uVar4 = DAT_003752ac;
        if (bVar13) {
          uVar4 = iVar10 + 0x2000;
          bVar13 = *(char *)(iVar10 + 0x227d) == '\0';
        }
        if (bVar13) {
          iVar5 = DAT_003752b0;
          if (iVar6 != DAT_003752b0) {
            iVar5 = DAT_003752b4;
          }
          if ((iVar6 != DAT_003752b0 && iVar6 != iVar5) &&
             (((uVar9 & 0x8000000) == 0 || (*(int *)(iVar10 + 0x284) != 0x66)))) {
            uVar7 = uVar7 & 0x4000 | *(uint *)(uVar4 + 0x9b8) & 0x8000000;
            bVar13 = uVar7 == 0;
            if (bVar13) {
              uVar7 = *(uint *)(iVar10 + 0x16f8);
            }
            bVar11 = bVar13 && uVar7 == 0;
            if (bVar13 && uVar7 == 0) {
              bVar11 = (DAT_003752b8 & uVar9) == 0;
            }
            if (bVar11) {
              uVar3 = FUN_0036c5bc(param_1,0);
              iVar5 = FUN_00351878(uVar3,6);
              if (iVar5 != 0) {
                if ((*(ushort *)(iVar10 + 0x90) & 1) == 0) {
                  uVar7 = *(uint *)(iVar10 + 0x1710);
                  bVar13 = (uVar7 & 0x8000000) == 0;
                  if (!bVar13) {
                    uVar7 = (uint)*(byte *)(iVar10 + 0x1a7);
                  }
                  if (bVar13 || uVar7 == 1) {
                    return 0;
                  }
                  if (*(float *)(*(int *)(iVar10 + 0x170c) + 0x2c) <= *(float *)(iVar10 + 0x88)) {
                    return 0;
                  }
                }
                if (*(char *)(iVar10 + 0x1749) != '\x03') {
                  return 1;
                }
                FUN_0036055c(param_1,iVar10,DAT_003752bc,0);
                if (*(short *)(DAT_003752c0 + iVar10) != 0) {
                  *(uint *)(iVar10 + 0x1710) = *(uint *)(iVar10 + 0x1710) | 0x20000000;
                }
                FUN_0034bbfc(iVar10);
              }
            }
          }
        }
      }
    }
    break;
  case 1:
    iVar5 = FUN_002f43e8();
    if (iVar5 != 0) {
      return 0;
    }
    uVar4 = *(uint *)(iVar10 + 0x16f8);
    uVar9 = *(uint *)(iVar10 + 0x172c);
    bVar13 = false;
    uVar7 = param_1 + 0x2000;
    if ((uVar4 == 0) ||
       ((uVar7 = DAT_003752c4, (DAT_003752c4 & ~*(uint *)(uVar4 + 4)) != 0 &&
        (*(char *)(uVar4 + 0x123) == -1)))) {
      bVar11 = false;
    }
    else {
      bVar11 = true;
    }
    if (!bVar11) {
      uVar7 = (uint)*(ushort *)(DAT_00375290 + iVar10);
    }
    uVar8 = 0;
    if (bVar11 || uVar7 != 0) {
      if ((-1 < *(short *)(DAT_00375290 + iVar10)) ||
         (bVar13 = (-(int)*(short *)(DAT_00375290 + iVar10) & 0xff00U) != 0x200, !bVar13)) {
        bVar13 = false;
      }
      uVar8 = uVar4;
      if ((!(bool)((bVar13 ^ 1U) & bVar11)) && (uVar8 = *(uint *)(iVar10 + 0x1724), bVar13)) {
        uVar4 = 0;
        uVar9 = uVar4;
      }
    }
    if (((uVar9 | uVar8) == 0) || ((uVar4 != 0 && uVar4 != uVar9) && uVar4 != uVar8)) {
      *(undefined4 *)(DAT_003752d8 + iVar10) = 0;
      return 0;
    }
    uVar7 = *(uint *)(iVar10 + 0x1710);
    if ((uVar7 & 0x800) != 0) {
      uVar4 = *(uint *)(iVar10 + 0x1224);
      if (uVar4 == 0) {
        return 0;
      }
      if ((!bVar13) && (uVar4 != uVar9 && uVar4 != uVar8)) {
        bVar12 = uVar9 == 0;
        if (!bVar12) {
          bVar12 = (*(uint *)(uVar9 + 4) & 0x10000) == 0;
        }
        if (bVar12) {
          return 0;
        }
      }
    }
    if ((*(ushort *)(iVar10 + 0x90) & 1) == 0) {
LAB_00374fbc:
      if ((uVar7 & 0x800000) == 0) {
        bVar12 = (uVar7 & 0x8000000) == 0;
        if (!bVar12) {
          uVar7 = (uint)*(byte *)(iVar10 + 0x1a7);
        }
        if (bVar12 || uVar7 == 1) {
          return 0;
        }
        if ((*(uint *)(iVar10 + 0x1714) & 0x400) != 0) {
          return 0;
        }
      }
      else {
LAB_00374fec:
        if (*(float *)(*(int *)(iVar10 + 0x12b8) + 0x6c) != DAT_003752cc) {
          return 0;
        }
      }
    }
    else {
      uVar4 = *(uint *)(iVar10 + 0x1714);
      bVar12 = (uVar4 & 0x400) != 0;
      if (bVar12) {
        uVar4 = (uint)*(byte *)(iVar10 + 0x1a7);
      }
      if ((bVar12 && uVar4 != 1) || (*(int *)(DAT_003752c8 + 0x28) == 7)) goto LAB_00374fbc;
      if ((uVar7 & 0x800000) != 0) goto LAB_00374fec;
    }
    if (uVar9 != 0) {
      bVar12 = (*DAT_003752d4 & *(uint *)(*(int *)(DAT_003752d0 + iVar10) + 4)) == 0;
      if (bVar12) {
        bVar12 = (*(uint *)(uVar9 + 4) & 0x10000) == 0;
      }
      if (!bVar12) {
        return 0;
      }
    }
    if (uVar8 != 0) {
      iVar5 = 0;
      if ((bVar13) || (!bVar11)) {
        iVar5 = (int)*(short *)(DAT_00375290 + iVar10);
        if (iVar5 < 0) {
          iVar5 = -iVar5;
        }
      }
      else if (*(byte *)(uVar8 + 0x123) != 0xff) {
        iVar5 = *(byte *)(uVar8 + 0x123) + 0x600;
      }
      if (*(int *)(iVar10 + 0x29dc) == iVar5) {
        uVar7 = 0xffffffff;
      }
      else {
        *(int *)(iVar10 + 0x29dc) = iVar5;
        uVar7 = 1;
      }
      return uVar7;
    }
    break;
  case 2:
    iVar5 = FUN_0033bd6c(iVar10);
    if (iVar5 == 0) {
      return 0;
    }
    if (*(char *)(param_1 + 0x2147) != '\0') {
      return 0;
    }
    if (((*(uint *)(iVar10 + 0x1710) & DAT_003752dc) == 0) && (*(char *)(iVar10 + 0x1749) != '\x02')
       ) {
      return 0;
    }
    uVar7 = FUN_00355a60(iVar10);
    goto joined_r0x00375234;
  case 3:
    if (((*(int *)(DAT_003752e0 + iVar10) == DAT_003752e4) &&
        (uVar7 = (uint)*(byte *)(iVar10 + 0x1aa), uVar7 < 0xfe)) &&
       ((uVar7 != 0xfc && uVar7 != 0x59 && (*(char *)(DAT_003752e8 + uVar7) == '\x1e')))) {
      return 1;
    }
    iVar5 = *(int *)(DAT_0037527c + iVar10);
    bVar13 = iVar5 != DAT_003752ec;
    iVar10 = DAT_003752ec;
    if (bVar13) {
      iVar10 = DAT_003752f0;
    }
    iVar6 = iVar10;
    if (bVar13 && iVar5 != iVar10) {
      iVar6 = DAT_003752f4;
    }
    if ((!bVar13 || iVar5 == iVar10) || iVar5 == iVar6) {
      return 1;
    }
    return 0;
  case 4:
    if (*(int *)(DAT_0037527c + iVar10) == DAT_003752f8) {
      return 1;
    }
    break;
  case 5:
    iVar5 = *(int *)(DAT_0037527c + iVar10);
    bVar13 = iVar5 == DAT_003752f8;
    if (bVar13) {
      iVar5 = *(int *)(iVar10 + 0x284);
    }
    if (bVar13 && iVar5 == 0x7d) {
      return 1;
    }
    break;
  case 6:
    if (*(int *)(DAT_0037527c + iVar10) == DAT_003752fc) {
      return 1;
    }
    if (*(int *)(DAT_003752e0 + iVar10) == DAT_00375300) {
      return 1;
    }
    break;
  case 7:
    uVar7 = *(uint *)(DAT_00375284 + iVar10) & 0x100;
    goto joined_r0x00375234;
  case 8:
    iVar6 = *(int *)(DAT_0037527c + iVar10);
    bVar13 = iVar6 != DAT_00375298;
    iVar5 = DAT_00375298;
    if (bVar13) {
      iVar5 = DAT_0037529c;
    }
    iVar2 = iVar5;
    if (bVar13 && iVar6 != iVar5) {
      iVar2 = DAT_003752a0;
    }
    if ((!bVar13 || iVar6 == iVar5) || iVar6 == iVar2) {
      return 1;
    }
    if (((iVar6 == DAT_003752a4) && ('\x17' < *(char *)(DAT_003752a8 + iVar10))) &&
       (*(char *)(DAT_003752a8 + iVar10) < '\x1c')) {
      return 1;
    }
    break;
  case 9:
    uVar7 = *(uint *)(DAT_00375304 + iVar10) & DAT_003752ac;
joined_r0x00375234:
    if (uVar7 != 0) {
      return 1;
    }
    break;
  case 10:
    uVar7 = *(uint *)(DAT_00375284 + iVar10) & 0x80;
    goto joined_r0x00375460;
  case 0xb:
    if (*(char *)(DAT_00375308 + iVar10) != '\0') {
      return 1;
    }
    break;
  case 0xc:
    if (*(int *)(DAT_0037527c + iVar10) == DAT_003752b0) {
      return 1;
    }
    break;
  case 0xd:
    if (*(int *)(DAT_0037527c + iVar10) == DAT_003752a4) {
      return 1;
    }
    break;
  case 0xe:
    if (*(int *)(DAT_0037527c + iVar10) == DAT_00375468) {
      return 1;
    }
    break;
  case 0xf:
    if (*(int *)(iVar10 + 0x284) == 0x17a) {
      return 1;
    }
    break;
  case 0x10:
    if ((*(uint *)(DAT_00375304 + iVar10) & DAT_003752ac) == 0) {
      return 0;
    }
    iVar10 = *(int *)(DAT_003752e0 + iVar10);
    goto joined_r0x003753d8;
  case 0x11:
    bVar13 = *(int *)(iVar10 + 0x1708) == DAT_00375470;
    if (bVar13) {
      bVar13 = (*(ushort *)(iVar10 + 0x90) & 1) == 0;
    }
    if (((bVar13) &&
        ((*(uint *)(iVar10 + 0x1710) & 0x800) != 0 && *(short **)(iVar10 + 0x1224) != (short *)0x0))
       && (**(short **)(iVar10 + 0x1224) == 0x19)) {
      return 1;
    }
    break;
  case 0x12:
    return *(uint *)(DAT_00375284 + iVar10) & 0x4000 | *(uint *)(DAT_00375288 + iVar10) & 0x8000000;
  case 0x13:
    iVar10 = *(int *)(DAT_003752e0 + iVar10);
joined_r0x003753d8:
    if (iVar10 == DAT_0037546c) {
      return 1;
    }
    return 0;
  case 0x14:
    uVar7 = FUN_003518cc(iVar10);
    return uVar7;
  case 0x15:
    if (*(char *)(DAT_00375474 + iVar10) == '\x01') {
      return 1;
    }
    break;
  case 0x16:
    if (*(char *)(DAT_00375474 + iVar10) == '\x02') {
      return 1;
    }
    break;
  case 0x17:
    if (((*(uint *)(DAT_00375304 + iVar10) & 0x200) != 0) &&
       (0x3e800000 < *(int *)(iVar10 + 0x2240))) {
      return 1;
    }
    break;
  case 0x18:
    if (*(int *)(DAT_0037527c + iVar10) == DAT_00375478) {
      return 1;
    }
    break;
  case 0x19:
    if (*(int *)(DAT_0037527c + iVar10) == DAT_00375280) {
      return 1;
    }
    break;
  case 0x1a:
    uVar7 = *(uint *)(DAT_00375304 + iVar10) & 0x800000;
joined_r0x00375460:
    if (uVar7 != 0) {
      return 1;
    }
    return 0;
  }
  return 0;
}

