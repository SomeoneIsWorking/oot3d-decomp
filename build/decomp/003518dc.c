// OoT3D decomp @ 003518dc  name=FUN_003518dc  size=2168

undefined4 FUN_003518dc(int param_1,int param_2,uint param_3)

{
  char cVar1;
  undefined4 uVar2;
  undefined2 uVar3;
  short sVar4;
  int iVar5;
  undefined4 uVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 extraout_r1;
  undefined4 uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  bool bVar14;
  uint in_fpscr;
  undefined8 uVar15;
  undefined auStack_258 [524];
  undefined4 local_4c;
  int local_48;
  int local_44;
  int local_40;
  
  uVar6 = DAT_00351c80;
  uVar2 = DAT_00351c78;
  uVar9 = DAT_00351c74;
  cVar1 = *(char *)(param_1 + 0x1749);
  if (cVar1 == '\0') {
    return 0;
  }
  bVar14 = (*(uint *)(param_1 + 0x1710) & 0x8000000) != 0;
  if (bVar14) {
    param_3 = (uint)*(byte *)(param_1 + 0x1a7);
  }
  if (!bVar14 || param_3 == 1) {
    bVar14 = (*(ushort *)(param_1 + 0x90) & 1) == 0;
    if (bVar14) {
      bVar14 = (*(uint *)(param_1 + 0x1710) & 0x800000) == 0;
    }
    if (bVar14) {
      return 0;
    }
  }
  local_40 = param_1 + 0x1200;
  if (cVar1 == '\x03') {
    FUN_0036055c(param_2,param_1,DAT_00351c7c,0);
    if (*(short *)(local_40 + 0xe2) != 0) {
      *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x20000000;
    }
    FUN_0034bbfc(param_1);
    goto LAB_00351df4;
  }
  local_44 = param_1 + 0x2200;
  if (cVar1 != '\x04') {
    if (cVar1 == '\x02') {
      iVar5 = FUN_0034dd2c(param_1);
      if (iVar5 == 0) {
        uVar11 = 10;
      }
      else if (*(int *)(DAT_0035218c + 4) == 0) {
        uVar11 = 7;
      }
      else {
        uVar11 = 0xb;
      }
    }
    else {
      uVar11 = 6;
    }
    uVar8 = FUN_0036c5bc(param_2,0);
    iVar13 = FUN_00332284(uVar8,uVar11);
    iVar5 = DAT_00351c9c;
    if (iVar13 != 0) {
      if ((*(uint *)(param_1 + 0x1710) & 0x800000) == 0) {
        if (*(int *)(param_1 + 0x1708) == DAT_00352190) {
          uVar9 = FUN_0034d628(param_1);
          uVar11 = FUN_003603c0(param_1 + 0x254,uVar9);
          uVar11 = VectorSignedToFloat(uVar11,(byte)(in_fpscr >> 0x15) & 3);
          FUN_00360190(uVar6,uVar2,uVar11,uVar2,param_1 + 0x254,param_2,uVar9,2);
        }
        FUN_0036055c(param_2,param_1,DAT_00352194,1);
        *(undefined2 *)(local_44 + 0x38) = 0xc;
        *(undefined2 *)(param_1 + 0x4a) = *(undefined2 *)(param_1 + 0xbe);
        *(undefined2 *)(param_1 + 0x175a) = 0;
        *(undefined2 *)(param_1 + 0x1758) = 0;
        *(undefined2 *)(param_1 + 0x1756) = 0;
        *(undefined2 *)(param_1 + 0x1754) = 0;
        *(undefined2 *)(param_1 + 0x1752) = 0;
        *(undefined2 *)(param_1 + 0x1750) = 0;
        *(undefined2 *)(param_1 + 0x4c) = 0;
        *(undefined2 *)(param_1 + 0x48) = 0;
      }
      else {
        *(uint *)(param_1 + 0x29b8) = *(uint *)(param_1 + 0x29b8) & 0xfffffffe;
      }
      uVar6 = DAT_0035219c;
      uVar9 = DAT_00352198;
      *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x100000;
      FUN_0037547c(DAT_003521a0,0,4,uVar6,uVar6,uVar9);
      *(undefined4 *)(param_1 + 0x6c) = uVar2;
      *(undefined4 *)(param_1 + 0x221c) = uVar2;
      return 1;
    }
    *(undefined *)(param_1 + 0x1749) = 0;
    uVar2 = DAT_00352198;
    *(undefined4 *)(iVar5 + 0xcc) = uVar9;
    uVar9 = DAT_0035219c;
    *(undefined *)(iVar5 + 0xd4) = 0;
    FUN_0037547c(DAT_003521ec,0,4,uVar9,uVar9,uVar2);
    return 0;
  }
  iVar13 = 0;
  iVar5 = FUN_002c26b4(param_1,(int)*(char *)(param_1 + 0x1ac));
  uVar11 = DAT_00351ca0;
  if (-1 < iVar5) {
    if ((iVar5 == 3) && ('\0' < *(char *)(DAT_00351c84 + 0x3b))) {
      FUN_0036055c(param_2,param_1,DAT_00351c98,1);
      *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x30000000;
      uVar6 = FUN_0034d628(param_1);
      FUN_003604f0(param_1 + 0x254,param_2,uVar6);
      FUN_002be958(param_2,4);
    }
    else {
      FUN_002be350(param_2,param_1,DAT_00351c88,0);
      *(char *)(param_1 + 0x2237) = (char)iVar5 + -3;
      FUN_003318bc(param_2,*(undefined *)(DAT_00351c8c + iVar5),4);
      *(undefined *)(param_2 + 0x7f40) = 1;
      FUN_00358dfc(DAT_00351c90,param_1 + 0x254,param_2,0xed);
      if (iVar5 == 5) {
        uVar3 = FUN_00371808(param_2,DAT_00351c94,0xffffff9b,0,0);
        *(undefined2 *)(local_40 + 0xe4) = uVar3;
      }
      else {
        FUN_002be958(param_2,10);
      }
    }
    iVar5 = DAT_00351c9c;
    *(undefined4 *)(param_1 + 0x6c) = uVar2;
    *(undefined4 *)(param_1 + 0x221c) = uVar2;
    *(undefined *)(param_1 + 0x1749) = 0;
    *(undefined4 *)(iVar5 + 0xcc) = uVar9;
    *(undefined *)(iVar5 + 0xd4) = 0;
    return 1;
  }
  uVar12 = (int)*(char *)(param_1 + 0x1ac) - 0x2b;
  if ((int)uVar12 < 0) {
    iVar13 = FUN_002c0930(param_1);
    iVar13 = iVar13 + -1;
    if ((-1 < iVar13) && (iVar13 < 6)) {
      uVar7 = (uint)*(char *)(param_1 + 0x1ac);
      if (0x22 < (int)uVar7) goto LAB_00351b38;
      if (*(int *)(param_1 + 0x172c) != 0) {
        bVar14 = uVar7 == 0x22;
        if (bVar14) {
          uVar7 = (uint)*(byte *)(param_1 + 0x172b);
        }
        if ((bVar14 && uVar7 == 0x1b) || (*(char *)(param_1 + 0x172b) == '\x19')) goto LAB_00351b38;
      }
    }
    iVar5 = FUN_002c0930(param_1,(int)*(char *)(param_1 + 0x1ac));
    uVar6 = DAT_00352160;
    if (iVar5 < 0) {
      FUN_002be350(param_2,param_1,DAT_00352174,0);
      uVar11 = extraout_r1;
      if ((*DAT_00352178 & 1) == 0) {
        uVar15 = FUN_003679b4(DAT_00352178);
        uVar11 = (int)((ulonglong)uVar15 >> 0x20);
        if ((int)uVar15 != 0) {
          FUN_0036788c(DAT_0035217c);
          uVar11 = DAT_00352184;
        }
      }
      FUN_004972a0(DAT_00352188,uVar11);
      FUN_00358dfc(uVar6,param_1 + 0x254,param_2,0x7e);
      *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x8000000;
      if (*(int *)(param_1 + 0x1740) == 0) {
        uVar6 = 0x5a;
      }
      else {
        uVar6 = 0x5b;
      }
      FUN_002be958(param_2,uVar6);
      if (*(int *)(param_1 + 0x1740) != 0) {
        *(uint *)(param_1 + 0x1714) = *(uint *)(param_1 + 0x1714) | 0x2000000;
        uVar6 = FUN_0036c5bc(param_2,0);
        FUN_003521f0(uVar6,8,*(undefined4 *)(param_1 + 0x1740));
      }
    }
    else if (iVar5 == 0xc) {
      FUN_002be350(param_2,param_1,DAT_00352164,0);
      FUN_00358dfc(uVar6,param_1 + 0x254,param_2,DAT_00352168);
      FUN_002be958(param_2,3);
    }
    else if (iVar5 - 1U < 3) {
      FUN_002be350(param_2,param_1,DAT_0035216c,0);
      FUN_00358dfc(uVar6,param_1 + 0x254,param_2,0x1b4);
      if (iVar5 == 1) {
        uVar6 = 1;
      }
      else {
        uVar6 = 5;
      }
      FUN_002be958(param_2,uVar6);
    }
    else {
      FUN_002be350(param_2,param_1,DAT_00352170,0);
      *(undefined *)(param_2 + 0x7f40) = 0xd3;
      uVar8 = FUN_003603c0(param_1 + 0x254,0x1b8);
      uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00360190(uVar6,uVar2,uVar8,uVar11,param_1 + 0x254,param_2,0x1b8,2);
      FUN_002be958(param_2,2);
    }
    *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x30000000;
    goto LAB_00351df4;
  }
LAB_00351b38:
  if (*(char *)(param_2 + 0x225d) != '\0') {
    return 1;
  }
  if (*(short *)(param_2 + 0x225e) != 0) {
    return 1;
  }
  FUN_002be350(param_2,param_1,DAT_00351ca4,0);
  if (-1 < (int)uVar12) {
    iVar5 = (int)*(short *)(DAT_00351cac + (uint)*(byte *)(DAT_00351ca8 + uVar12) * 6 + -4);
    if (iVar5 < 1) {
      iVar5 = -iVar5;
    }
    sVar4 = FUN_002f748c(iVar5 + -1);
    if (sVar4 != 0) {
      FUN_00346fb0(param_1 + 0x1cc);
      iVar5 = DAT_00351cb0 + sVar4 * 0x44;
      local_48 = *(int *)(iVar5 + 0x40);
      if (local_48 == 0) {
        local_48 = FUN_00324fd0(iVar5);
        *(int *)(iVar5 + 0x40) = local_48;
      }
      *(int *)(param_1 + 0x1cc) = local_48;
      *(undefined *)(param_1 + 0x250) = 1;
      local_4c = *(undefined4 *)(param_1 + 0x24c);
      FUN_00324f44(auStack_258,iVar5,DAT_00351cb4);
      uVar8 = FUN_00324eac(auStack_258,local_4c,local_48,0,0);
      *(undefined4 *)(param_1 + 0x1d0) = uVar8;
    }
  }
  bVar14 = (int)uVar12 < 0;
  if (bVar14) {
    uVar12 = iVar13 + 0x18;
  }
  *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x30000040;
  iVar5 = *(int *)(param_1 + 0x172c);
  if (!bVar14) {
    uVar12 = uVar12 + 1;
  }
  if (iVar5 == 0) {
LAB_00351d24:
    if (uVar12 == 0x1d) {
      *(undefined *)(param_1 + 0x2237) = 1;
      *(short *)(param_1 + 0x116) = (short)DAT_00352154;
      FUN_002be958(param_2,1);
    }
    else {
      *(undefined *)(param_1 + 0x2237) = 2;
      *(undefined2 *)(param_1 + 0x116) = 0xcf;
      FUN_002be958(param_2,4);
    }
  }
  else {
    uVar7 = (uint)*(char *)(param_1 + 0x172b);
    if (uVar7 == uVar12) {
      if (uVar7 == 4) {
        if (*(char *)(param_1 + 0x1ac) != '.') goto LAB_00351d24;
        FUN_00355830(0x10,0xffffffff);
        FUN_002be350(param_2,param_1,DAT_00352150,0);
        *(uint *)(param_1 + 0x1710) = *(uint *)(param_1 + 0x1710) | 0x20000000;
        *(undefined2 *)(local_44 + 0x38) = 0x50;
        *(undefined *)(param_1 + 0x2237) = 0xff;
      }
    }
    else if (uVar7 != 0x19) {
      bVar14 = uVar7 != 0x1b;
      if (!bVar14) {
        uVar7 = (uint)*(byte *)(param_1 + 0x1ac);
      }
      if (bVar14 || uVar7 != 0x23) goto LAB_00351d24;
    }
    *(uint *)(iVar5 + 4) = *(uint *)(iVar5 + 4) | 0x100;
    *(undefined4 *)(param_1 + 0x16f8) = *(undefined4 *)(param_1 + 0x172c);
  }
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x100;
  *(char *)(param_1 + 0x172b) = (char)uVar12;
  if (*(char *)(local_44 + 0x37) < 0) {
    uVar10 = *(undefined4 *)(DAT_00352158 + (uint)*(byte *)(param_1 + 0x1b3) * 4 + 0x3c0);
    uVar8 = FUN_003603c0(param_1 + 0x254,uVar10);
    uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00360190(uVar6,uVar2,uVar8,uVar11,param_1 + 0x254,param_2,uVar10,2);
  }
  else {
    FUN_003604f0(param_1 + 0x254,param_2,
                 *(undefined4 *)(DAT_0035215c + *(char *)(local_44 + 0x37) * 4));
  }
LAB_00351df4:
  iVar5 = DAT_00351c9c;
  *(undefined4 *)(param_1 + 0x6c) = uVar2;
  *(undefined4 *)(param_1 + 0x221c) = uVar2;
  *(undefined *)(param_1 + 0x1749) = 0;
  *(undefined4 *)(iVar5 + 0xcc) = uVar9;
  *(undefined *)(iVar5 + 0xd4) = 0;
  return 1;
}

