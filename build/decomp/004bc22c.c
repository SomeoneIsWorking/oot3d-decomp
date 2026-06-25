// OoT3D decomp @ 004bc22c  name=FUN_004bc22c  size=964

/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_004bc22c(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  int *piVar5;
  byte bVar6;
  undefined uVar7;
  short sVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  uint in_fpscr;
  float fVar16;
  float fVar17;
  undefined auStack_6c [48];
  undefined auStack_3c [2];
  short local_3a;
  undefined4 local_34;
  undefined4 local_30;
  undefined4 local_2c;
  
  iVar13 = FUN_0036b4ec(param_1 + 0x254);
  uVar12 = DAT_004bc548;
  iVar14 = DAT_004bc544;
  if (iVar13 == 0) {
    if (*(short *)(param_1 + 0x2238) == 0) {
      if (*(int *)(DAT_004bc620 + 4) != 0) {
        FUN_00360a1c(param_1,DAT_004bc624);
        return;
      }
    }
    else {
      if (*(int *)(param_1 + 0x284) == DAT_004bc544) {
        sVar8 = FUN_0036e70c(*(undefined4 *)
                              (param_2 + *(short *)(DAT_004bc628 + param_2) * 4 + 0xa54));
        FUN_00370378(param_1 + 0xbe,(int)(short)(sVar8 + -0x8000),4000);
      }
      iVar14 = FUN_0036b1e0(DAT_004bc62c,param_1 + 0x254);
      if (iVar14 != 0) {
        sVar8 = *(short *)(DAT_004bc630 + *(char *)(param_1 + 0x12ac) * 6 + -4);
        if (sVar8 < 0) {
          sVar8 = -sVar8;
        }
        *(short *)(param_1 + 0x224e) = sVar8;
        return;
      }
    }
    return;
  }
  sVar8 = *(short *)(param_1 + 0x2238);
  if (sVar8 == 0) {
    FUN_00334c44(param_1);
    fVar16 = DAT_004bc568;
    if (*(char *)(param_1 + 0x12ac) != '|') {
      if (*(int *)(param_1 + 0x284) == 0xd8) {
        FUN_00358dfc(DAT_004bc570,param_1 + 0x254,param_2,iVar14);
      }
      else {
        FUN_00358dfc(DAT_004bc570,param_1 + 0x254,param_2,0x198);
      }
      *(undefined2 *)(param_1 + 0x2238) = 2;
      FUN_002be958(param_2,9);
      return;
    }
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xfffff3ff;
    piVar5 = DAT_004bc564;
    *(undefined *)(param_1 + 0xb8) = 0;
    fVar17 = (float)VectorSignedToFloat((int)*(short *)(*piVar5 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    FUN_0035d304(uVar12,uVar12,param_2,param_1,3,0,(int)(fVar16 / fVar17 + DAT_004bc56c));
    return;
  }
  if (1 < sVar8) {
    *(short *)(param_1 + 0x2238) = sVar8 + -1;
  }
  iVar13 = FUN_002bc168(param_2,param_1);
  if (iVar13 == 0) {
    return;
  }
  if (*(short *)(param_1 + 0x2238) != 1) {
    return;
  }
  iVar13 = *(int *)(param_1 + 0x172c);
  if (iVar13 != 0) {
    iVar13 = (int)*(char *)(DAT_004bc54c + param_1);
  }
  if ((iVar13 < 0) ||
     (bVar6 = *(byte *)(param_1 + 0x172a) & 0x20, (*(byte *)(param_1 + 0x172a) & 0x20) != 0)) {
    bVar6 = 1;
  }
  if (bVar6 == 0) {
    if (*(short *)(DAT_004bc550 + 0xb2) != 0) {
      return;
    }
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xfffff3ff;
    *(undefined2 *)(param_1 + 0x224e) = 0;
    *(undefined *)(param_1 + 0x12ac) = 0;
    FUN_0036c5bc(param_2,0);
    FUN_0036ae48();
    FUN_00346fb0(param_1 + 0x1cc);
    iVar13 = *(int *)(param_1 + 0x2cc) + 0x34;
    FUN_003624c8(iVar13,auStack_3c,0);
    local_30 = DAT_004bc554;
    *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + local_3a;
    local_34 = uVar12;
    local_2c = uVar12;
    fVar16 = (float)VectorSignedToFloat((int)local_3a,(byte)(in_fpscr >> 0x15) & 3);
    FUN_003625f8(fVar16 * DAT_004bc558,auStack_6c,&local_34);
    FUN_0036c174(iVar13,iVar13,auStack_6c);
    sVar8 = 0;
    if (*(int *)(param_1 + 0x284) != iVar14) {
      sVar8 = -0x8000;
    }
    FUN_002c0948(param_1,param_2);
    sVar8 = *(short *)(param_1 + 0xbe) + sVar8;
    *(short *)(param_1 + 0xbe) = sVar8;
    *(short *)(param_1 + 0x2220) = sVar8;
    return;
  }
  *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) & 0xfffff3ff;
  *(undefined2 *)(param_1 + 0x224e) = 0;
  *(undefined *)(param_1 + 0x12ac) = 0;
  FUN_0036c5bc(param_2,0);
  FUN_0036ae48();
  FUN_00346fb0(param_1 + 0x1cc);
  *(undefined *)(param_1 + 0x172b) = 0;
  if ((*(byte *)(param_1 + 0x172a) & 0x20) != 0) {
    *(byte *)(param_1 + 0x172a) = *(byte *)(param_1 + 0x172a) & 0xdf;
    if (*(char *)((uint)*(byte *)(DAT_004bc55c + 7) + DAT_004bc560) == '\a') {
      uVar7 = 0x1c;
    }
    else {
      uVar7 = 0x1d;
    }
    *(undefined *)(param_1 + 0x1ac) = uVar7;
    *(undefined *)(param_1 + 0x1749) = 4;
    FUN_003518dc(param_1,param_2);
    return;
  }
  iVar14 = *(int *)(param_1 + 0x172c);
  iVar13 = *(int *)(param_2 + 0x20ac);
  if (*(int *)(iVar13 + 0x172c) == 0) {
    bVar15 = *(int *)(iVar13 + 0x1724) == iVar14;
    if (!bVar15) {
      bVar15 = (DAT_00336f24 & ~*(uint *)(iVar14 + 4)) == 0;
    }
    if (!bVar15) goto LAB_00336c04;
  }
  *(uint *)(iVar14 + 4) = *(uint *)(iVar14 + 4) | 0x100;
LAB_00336c04:
  *(int *)(iVar13 + 0x172c) = iVar14;
  *(undefined *)(iVar13 + 0x172b) = 0;
  if (*(short *)(iVar14 + 0x116) == -1) {
    FUN_0036e980(param_2,iVar14,1);
    *(uint *)(iVar14 + 4) = *(uint *)(iVar14 + 4) | 0x100;
    if ('\x01' < *(char *)(DAT_00336f28 + iVar13)) {
      FUN_0034d688(param_2,iVar13,0xff);
    }
  }
  else {
    if ((*(uint *)(iVar13 + 4) & 0x100) == 0) {
      *(uint *)(iVar13 + 4) = *(uint *)(iVar13 + 4) | 0x100;
      *(undefined2 *)(DAT_00336f2c + iVar13) = *(undefined2 *)(iVar14 + 0x116);
    }
    else {
      *(undefined2 *)(DAT_00336f2c + iVar13) = 0;
    }
    uVar4 = DAT_00336f48;
    iVar3 = DAT_00336f44;
    uVar2 = DAT_00336f34;
    uVar12 = DAT_00336f30;
    uVar9 = *(uint *)(iVar13 + 0x1710);
    if ((uVar9 & 0x800000) == 0) {
      bVar15 = (uVar9 & 0x8000000) == 0;
      if (!bVar15) {
        uVar9 = (uint)*(byte *)(iVar13 + 0x1a7);
      }
      if (bVar15 || uVar9 == 1) {
        if ((*(char *)(iVar14 + 2) == '\x04') && (*(char *)(iVar13 + 0x1a9) != '\x02')) {
          FUN_0035976c(param_2,iVar13,DAT_00336f38);
          FUN_00358dfc(uVar4,iVar13 + 0x254,param_2);
        }
        else {
          uVar7 = *(undefined *)(iVar13 + 0x2a6);
          *(undefined *)(iVar13 + 0x2a6) = 0;
          FUN_0036055c(param_2,iVar13,uVar12,0);
          *(undefined *)(iVar13 + 0x2a6) = uVar7;
          *(uint *)(iVar13 + 0x1710) = *(uint *)(iVar13 + 0x1710) | 0x20000040;
          if (*(short *)(DAT_00336f2c + iVar13) != 0) {
            FUN_00367c7c(param_2,*(short *)(DAT_00336f2c + iVar13),*(undefined4 *)(iVar13 + 0x172c))
            ;
            *(undefined4 *)(iVar13 + 0x16f8) = *(undefined4 *)(iVar13 + 0x172c);
          }
          iVar10 = FUN_003518cc(iVar13);
          if (iVar10 == 0) {
            iVar11 = *(int *)(iVar13 + 0x1724);
            bVar15 = SBORROW4(iVar11,iVar14);
            iVar10 = iVar11 - iVar14;
            if (iVar11 != iVar14) {
              bVar15 = SBORROW4(*(int *)(iVar14 + 0x98),iVar3);
              iVar10 = *(int *)(iVar14 + 0x98) - iVar3;
            }
            if (iVar10 < 0 == bVar15) {
              uVar12 = FUN_0034d628(iVar13);
              FUN_00359aa0(iVar13 + 0x254,param_2,uVar12);
            }
            else {
              FUN_00358dfc(uVar4,iVar13 + 0x254,param_2,0xe3);
            }
          }
        }
      }
      else {
        FUN_0035976c(param_2,iVar13,DAT_00336f38);
        FUN_00360190(DAT_00336f40,uVar2,uVar2,DAT_00336f3c,iVar13 + 0x254,param_2,0x34,0);
      }
      if (*(int *)(iVar13 + 0x284) == 0xe3) {
        FUN_003603f8(param_2,iVar13,0x19);
      }
      *(undefined4 *)(iVar13 + 0x6c) = uVar2;
      *(undefined4 *)(iVar13 + 0x221c) = uVar2;
      iVar14 = DAT_00336f50;
      uVar12 = DAT_00336f4c;
      *(undefined *)(iVar13 + 0x1749) = 0;
      *(undefined4 *)(iVar14 + 0xcc) = uVar12;
      *(undefined *)(iVar14 + 0xd4) = 0;
    }
    else {
      uVar1 = *(undefined2 *)(iVar13 + 0x2238);
      if ('\x01' < *(char *)(iVar13 + 0x1a9)) {
        FUN_0034d688(param_2,iVar13,0xff);
      }
      uVar12 = DAT_00336f30;
      uVar7 = *(undefined *)(iVar13 + 0x2a6);
      *(undefined *)(iVar13 + 0x2a6) = 0;
      FUN_0036055c(param_2,iVar13,uVar12,0);
      *(undefined *)(iVar13 + 0x2a6) = uVar7;
      *(uint *)(iVar13 + 0x1710) = *(uint *)(iVar13 + 0x1710) | 0x20000040;
      if (*(short *)(iVar13 + 0x116) != 0) {
        FUN_00367c7c(param_2,*(short *)(iVar13 + 0x116),*(undefined4 *)(iVar13 + 0x172c));
        *(undefined4 *)(iVar13 + 0x16f8) = *(undefined4 *)(iVar13 + 0x172c);
      }
      *(undefined2 *)(iVar13 + 0x2238) = uVar1;
    }
    *(uint *)(iVar13 + 0x1710) = *(uint *)(iVar13 + 0x1710) | 0x20000040;
  }
  iVar14 = *(int *)(iVar13 + 0x1724);
  if ((*(int *)(iVar13 + 0x172c) == iVar14) &&
     ((*(ushort *)(*(int *)(iVar13 + 0x172c) + 0x116) & 0xff00) != 0x200)) {
    *(uint *)(iVar14 + 4) = *(uint *)(iVar14 + 4) | 0x100;
    FUN_002be958(param_2,0xb);
    return;
  }
  return;
}

