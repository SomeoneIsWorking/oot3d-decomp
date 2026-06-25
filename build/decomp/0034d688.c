// OoT3D decomp @ 0034d688  name=FUN_0034d688  size=1592

void FUN_0034d688(int param_1,int param_2,uint param_3)

{
  int iVar1;
  ushort uVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  uint uVar12;
  bool bVar13;
  bool bVar14;
  
  if ((int)param_3 < 0xfe) {
    if (param_3 == 0xfc) {
      uVar12 = 1;
    }
    else if (param_3 == 0x59) {
      uVar12 = 2;
    }
    else {
      uVar12 = (uint)*(char *)(DAT_0034dca8 + param_3);
    }
  }
  else {
    uVar12 = 0;
  }
  if (param_3 == 0x44) {
    FUN_0033187c(3,1);
    *(undefined4 *)(param_2 + 0x172c) = 0;
    FUN_0034913c(param_1,param_2);
    return;
  }
  uVar2 = (*(ushort *)(DAT_0034dcb4 + 0x8a) & *(ushort *)(DAT_0034dcac + 6)) >>
          *(sbyte *)(DAT_0034dcb0 + 3);
  if (param_3 == 0x45) {
    if (uVar2 == 2) {
LAB_0034d764:
      FUN_0033187c(3,1);
    }
    else {
      FUN_0033187c(3,2);
    }
  }
  else {
    if (param_3 != 0x46) {
      if (*(char *)(param_2 + 0x1a9) == *(char *)(param_2 + 0x1ac)) {
        if (((*(uint *)(param_2 + 0x1710) & 0x400000) == 0) ||
           (iVar5 = FUN_002c26e4(uVar12), iVar5 != 0)) goto LAB_0034d7fc;
        if (uVar12 != 0) goto LAB_0034d7d0;
      }
      else {
LAB_0034d7d0:
        if (-1 < *(char *)(param_2 + 0x1ac)) {
          return;
        }
        iVar5 = FUN_002c26e4(uVar12);
        if (iVar5 == 0) {
          if (uVar12 != 0) {
            return;
          }
        }
        else {
LAB_0034d7fc:
          bVar13 = uVar12 == 0;
          if (!bVar13) {
            bVar13 = (*(uint *)(param_2 + 0x1710) & 0x8000000) == 0;
          }
          if (!bVar13) {
            if ((*(ushort *)(param_2 + 0x90) & 1) == 0) {
              return;
            }
            if (uVar12 != 0x10 && uVar12 != 0x11) {
              return;
            }
          }
        }
      }
      iVar5 = DAT_0034dcbc;
      if (*(char *)(DAT_0034dcb8 + param_1) == '\0') {
        if (uVar12 == 6) {
          cVar3 = *(char *)((uint)*DAT_0034dcc0 + DAT_0034dcbc);
joined_r0x0034d874:
          if (cVar3 == '\0') goto LAB_0034d8b4;
        }
        else if (uVar12 == 0x2e) {
          cVar3 = *(char *)((uint)DAT_0034dcc0[0x10] + DAT_0034dcbc);
          goto joined_r0x0034d874;
        }
        iVar6 = FUN_002c26cc(param_2,uVar12);
        if (-1 < iVar6) {
          uVar7 = (uint)*(byte *)((uint)DAT_0034dcc0[*(byte *)(DAT_0034dcc4 + iVar6 * 4)] + iVar5);
          bVar13 = false;
          bVar14 = uVar7 != 0;
          if (bVar14) {
            uVar7 = *(uint *)(param_1 + 0x20b0);
            bVar13 = (int)(uVar7 - 3) < 0;
          }
          if (bVar13 == (bVar14 && SBORROW4(uVar7,3))) {
LAB_0034d8b4:
            FUN_0037547c(DAT_0034dcd0,0,4,DAT_0034dccc,DAT_0034dccc,DAT_0034dcc8);
            return;
          }
        }
      }
      if (uVar12 == 0x42) {
        iVar5 = FUN_003318bc(param_1,0,3);
        uVar8 = DAT_0034dcd0;
        if (iVar5 != 0) {
          if (*(char *)(param_1 + 0x208f) == '\0') {
            *(undefined *)(param_1 + 0x208f) = 1;
            uVar8 = DAT_0034dcd8;
          }
          else {
            FUN_003513c0(param_1);
            uVar8 = DAT_0034dcd8;
            if (*(char *)(param_1 + 0x208f) == '\0') {
              uVar8 = DAT_0034dcd4;
            }
          }
        }
LAB_0034da50:
        FUN_0037547c(uVar8,0,4,DAT_0034dccc,DAT_0034dccc,DAT_0034dcc8);
        return;
      }
      if (uVar12 == 0x1b) {
        uVar8 = DAT_0034dcd0;
        if (*(char *)((uint)DAT_0034dcc0[1] + iVar5) != '\0') {
          bVar13 = *(char *)(DAT_0034dcdc + param_1) == '\x02';
          if (!bVar13) {
            bVar13 = (*(ushort *)(param_2 + 0x90) & 1) == 0;
          }
          if (bVar13) {
            return;
          }
          FUN_0036055c(param_1,param_2,DAT_0034dce0,0);
          FUN_003604f0(param_2 + 0x254,param_1,0x88);
          iVar5 = DAT_0034dce8;
          uVar8 = DAT_0034dce4;
          *(undefined *)(param_2 + 0x1749) = 0;
          *(undefined4 *)(iVar5 + 0xcc) = uVar8;
          *(undefined *)(iVar5 + 0xd4) = 0;
          return;
        }
        goto LAB_0034da50;
      }
      iVar5 = FUN_002c26b4(param_2,uVar12);
      cVar3 = (char)uVar12;
      if (-1 < iVar5) {
        if (((uVar12 == 0x18) && ('\0' < *(char *)(DAT_0034dcec + 0x3b))) ||
           ((uVar8 = DAT_0034dcd0, *(short *)(DAT_0034dcec + 0x84) != 0 &&
            ((*(short *)(DAT_0034dcec + 0x80) == 0 &&
             ((int)(uint)*(byte *)(DAT_0034dcf0 + iVar5) <= (int)*(char *)(DAT_0034dcb4 + 0x47))))))
           ) {
          *(char *)(param_2 + 0x1ac) = cVar3;
          *(undefined *)(param_2 + 0x1749) = 4;
          return;
        }
        goto LAB_0034da50;
      }
      if ((int)uVar12 < 0x3a) {
        if ((uVar12 - 0x1c < 2) || (0x1e < (int)uVar12)) {
          uVar7 = FUN_003518cc(param_2);
          bVar14 = uVar7 == 0;
          bVar13 = bVar14 || 0x21 < uVar12;
          if (!bVar14 && uVar12 != 0x22) {
            uVar7 = uVar12 - 0x25;
            bVar13 = 4 < uVar7;
          }
          if (bVar13 && ((!bVar14 && uVar12 != 0x22) && uVar7 != 5)) {
            return;
          }
          FUN_00343f0c(param_1,param_1 + 0x224c);
          *(char *)(param_2 + 0x1ac) = cVar3;
          *(undefined *)(param_2 + 0x1749) = 4;
          return;
        }
        if (((int)*(char *)(param_2 + 0x1a9) == uVar12) &&
           ((*(int *)(param_2 + 0x1224) != 0 || (iVar5 = FUN_002c26cc(param_2,uVar12), iVar5 < 0))))
        {
          iVar5 = DAT_0034dd28;
          *(undefined4 *)(DAT_0034dd28 + 0x50) = 1;
          *(undefined4 *)(iVar5 + 0x4c) = 1;
          return;
        }
        bVar4 = FUN_0033b548(param_2,uVar12);
        iVar5 = DAT_0034dcf8;
        *(byte *)(param_2 + 0x1b1) = bVar4;
        bVar4 = *(byte *)(iVar5 + (uint)bVar4 * 5);
        if ((((-1 < *(char *)(param_2 + 0x1a9)) && (iVar6 = FUN_002c26b4(param_2,uVar12), iVar6 < 0)
             ) && (*(byte *)(param_2 + 0x1aa) != param_3)) &&
           (*(char *)(DAT_0034dcfc +
                      (uint)*(byte *)(iVar5 + (uint)*(byte *)(param_2 + 0x1b0) * 5) * 6 +
                     (uint)bVar4) != '\0')) {
          *(char *)(param_2 + 0x1aa) = (char)param_3;
          if (*(char *)(param_2 + 0x1749) == '\x04') {
            *(undefined *)(param_2 + 0x1749) = 0;
          }
          *(uint *)(param_2 + 0x1710) = *(uint *)(param_2 + 0x1710) | 0x100;
          return;
        }
        iVar5 = FUN_00355a60(param_2);
        bVar13 = iVar5 != 0;
        if (bVar13) {
          iVar5 = *(int *)(param_2 + 0x1224);
        }
        if (bVar13 && iVar5 != 0) {
          FUN_00374428();
          *(undefined4 *)(param_2 + 0x128) = 0;
          *(undefined4 *)(param_2 + 0x1224) = 0;
        }
        FUN_0036b02c(param_1,param_2);
        iVar5 = DAT_0034dd00;
        uVar10 = *(uint *)(param_2 + 0x1710);
        iVar6 = *(int *)(param_2 + 0x284);
        piVar9 = (int *)(DAT_0034dd00 + (uint)*(byte *)(param_2 + 0x1b3) * 4);
        uVar7 = 0;
        *(uint *)(param_2 + 0x1710) = uVar10 & 0xfefffff7;
        do {
          iVar11 = *piVar9;
          bVar13 = SBORROW4(iVar6,iVar11);
          iVar1 = iVar6 - iVar11;
          if (iVar6 != iVar11) {
            piVar9 = piVar9 + 6;
            bVar13 = SBORROW4(uVar7 + 1,0x36);
            iVar1 = uVar7 - 0x35;
            uVar7 = uVar7 + 1;
          }
        } while (iVar1 < 0 != bVar13);
        *(char *)(param_2 + 0x1ac) = cVar3;
        *(char *)(param_2 + 0x1a9) = cVar3;
        iVar6 = DAT_0034dd08;
        uVar8 = DAT_0034dd04;
        *(undefined *)(param_2 + 0x1b0) = *(undefined *)(param_2 + 0x1b1);
        *(uint *)(param_2 + 0x1710) = uVar10 & 0xfefffff7;
        *(undefined4 *)(param_2 + 0x2244) = uVar8;
        *(undefined4 *)(param_2 + 0x2240) = uVar8;
        *(undefined2 *)(iVar6 + param_2) = 0;
        (**(code **)(DAT_0034dd0c + uVar12 * 4))(param_1,param_2);
        FUN_0033b504(param_2,*(undefined *)(param_2 + 0x1b0));
        if (0x35 < uVar7) {
          return;
        }
        FUN_00317dbc(param_2 + 0x254,
                     *(undefined4 *)(iVar5 + ((uint)*(byte *)(param_2 + 0x1b3) + uVar7 * 6) * 4));
        return;
      }
      if (*(char *)(param_2 + 0x1b7) == '\0') {
        cVar3 = cVar3 + -0x39;
      }
      else {
        cVar3 = '\0';
      }
      *(char *)(param_2 + 0x1b7) = cVar3;
      goto LAB_0034da78;
    }
    if (uVar2 == 3) goto LAB_0034d764;
    FUN_0033187c(3);
  }
  *(undefined4 *)(param_2 + 0x172c) = 0;
  FUN_0034913c(param_1,param_2);
LAB_0034da78:
  FUN_0036f59c(param_2,DAT_0034dcf4);
  *(uint *)(param_2 + 0x1714) = *(uint *)(param_2 + 0x1714) | 8;
  return;
}

