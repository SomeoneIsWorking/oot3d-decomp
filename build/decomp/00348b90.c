// OoT3D decomp @ 00348b90  name=FUN_00348b90  size=84

undefined4 FUN_00348b90(int *param_1,undefined4 param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  int iVar13;

  FUN_00371738(param_1 + 1,param_2,0x120);
  param_1[0x47] = 0;
  param_1[8] = param_1[8] | 0xc0;
  *param_1 = (int)(param_1 + 1);
  if (param_1[0x67] != 0) {
    FUN_003445d4(param_1);
    param_1[0x67] = 0;
  }
  if (param_1[0x67] == 0) {
    param_1[0x49] = 0;
    if ((*(uint *)(*param_1 + 0x1c) & 0x100) == 0) {
      iVar3 = 1;
    }
    else {
      iVar3 = 2;
    }
    param_1[0x4a] = iVar3;
    FUN_002c1678(iVar3,param_1 + 0x4b);
    FUN_002c1678(param_1[0x4a],param_1 + 0x4d);
    uVar1 = DAT_00348f10;
    iVar4 = *(int *)(*param_1 + 0xc);
    iVar3 = iVar4;
    if (iVar4 == 0) {
      iVar3 = 4;
    }
    iVar3 = iVar3 * 0xc;
    uVar6 = *(uint *)(*param_1 + 0x1c);
    if ((uVar6 & 0x80) == 0) {
      iVar9 = iVar4;
      if (iVar4 == 0) {
        iVar9 = 4;
      }
      iVar9 = iVar9 * 0xc;
    }
    else {
      iVar9 = 0;
    }
    if ((uVar6 & 0x10) == 0) {
      iVar10 = iVar4;
      if (iVar4 == 0) {
        iVar10 = 4;
      }
      iVar10 = iVar10 << 3;
    }
    else {
      iVar10 = 0;
    }
    if ((uVar6 & 8) == 0) {
      iVar11 = iVar4;
      if (iVar4 == 0) {
        iVar11 = 4;
      }
      iVar11 = iVar11 << 4;
    }
    else {
      iVar11 = 0;
    }
    if ((uVar6 & 0x40) == 0) {
      if (iVar4 == 0) {
        iVar4 = 4;
      }
      iVar4 = iVar4 << 3;
    }
    else {
      iVar4 = 0;
    }
    iVar13 = 0;
    iVar7 = iVar3 + iVar9 + iVar10;
    iVar8 = iVar7 + iVar11;
    if (0 < param_1[0x4a]) {
      do {
        iVar5 = DAT_00348f14;
        FUN_002d15d8(DAT_00348f14,param_1[iVar13 + 0x4b]);
        FUN_002c150c(iVar5,iVar4 + iVar8,0,iVar5 + 0x52);
        iVar12 = *(int *)*param_1;
        if (*(int *)*param_1 == 0) {
          iVar12 = DAT_00348f18;
        }
        FUN_002d14c4(iVar5,0,iVar3,iVar12);
        FUN_0030e604(100000,0);
        if ((*(uint *)(*param_1 + 0x1c) & 0x80) == 0) {
          iVar12 = *(int *)(*param_1 + 0x11c);
          if (iVar12 == 0) {
            iVar12 = DAT_00348f1c;
          }
          FUN_002d14c4(iVar5,iVar3,iVar9,iVar12);
        }
        FUN_0030e604(100000,0);
        if ((*(uint *)(*param_1 + 0x1c) & 0x10) == 0) {
          iVar12 = *(int *)(*param_1 + 4);
          if (iVar12 == 0) {
            iVar12 = DAT_00348f20;
          }
          FUN_002d14c4(iVar5,iVar3 + iVar9,iVar10,iVar12);
        }
        FUN_0030e604(100000,0);
        if ((*(uint *)(*param_1 + 0x1c) & 8) == 0) {
          iVar12 = *(int *)(*param_1 + 8);
          if (iVar12 == 0) {
            iVar12 = DAT_00348f24;
          }
          FUN_002d14c4(iVar5,iVar7,iVar11,iVar12);
        }
        FUN_0030e604(100000,0);
        if ((*(uint *)(*param_1 + 0x1c) & 0x40) == 0) {
          iVar12 = *(int *)(*param_1 + 0x118);
          if (iVar12 == 0) {
            iVar12 = DAT_00348f20;
          }
          FUN_002d14c4(iVar5,iVar8,iVar10,iVar12);
        }
        FUN_0030e604(100000,0);
        FUN_002c14a8(iVar5,uVar1,param_1 + iVar13 + 0x68);
        uVar2 = DAT_00348f28;
        FUN_002d15d8(DAT_00348f28,param_1[iVar13 + 0x4d]);
        iVar12 = *(int *)(*param_1 + 0x10);
        iVar5 = *(int *)(*param_1 + 0x14);
        if (iVar12 == 0) {
          if (iVar5 == 0) {
            iVar5 = 4;
          }
          FUN_002c150c(uVar2,iVar5 << 1,DAT_00348f30,DAT_00348f2c);
        }
        else {
          if (iVar5 == 0) {
            iVar5 = 4;
          }
          FUN_002c150c(uVar2,iVar5 << 1,iVar12,DAT_00348f2c);
        }
        FUN_0030e604(100000,0);
        FUN_002c14a8(uVar2,uVar1,param_1 + iVar13 + 0x6a);
        iVar13 = iVar13 + 1;
      } while (iVar13 < param_1[0x4a]);
    }
    param_1[0x67] = 1;
    return 0;
  }
  return 0;
}
