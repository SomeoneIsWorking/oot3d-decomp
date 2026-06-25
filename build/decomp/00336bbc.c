// OoT3D decomp @ 00336bbc  name=FUN_00336bbc  size=872

void FUN_00336bbc(int param_1,int param_2)

{
  undefined uVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  
  iVar10 = *(int *)(param_1 + 0x20ac);
  if (*(int *)(iVar10 + 0x172c) == 0) {
    bVar11 = *(int *)(iVar10 + 0x1724) == param_2;
    if (!bVar11) {
      bVar11 = (DAT_00336f24 & ~*(uint *)(param_2 + 4)) == 0;
    }
    if (!bVar11) goto LAB_00336c04;
  }
  *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x100;
LAB_00336c04:
  *(int *)(iVar10 + 0x172c) = param_2;
  *(undefined *)(iVar10 + 0x172b) = 0;
  if (*(short *)(param_2 + 0x116) == -1) {
    FUN_0036e980(param_1,param_2,1);
    *(uint *)(param_2 + 4) = *(uint *)(param_2 + 4) | 0x100;
    if ('\x01' < *(char *)(DAT_00336f28 + iVar10)) {
      FUN_0034d688(param_1,iVar10,0xff);
    }
  }
  else {
    if ((*(uint *)(iVar10 + 4) & 0x100) == 0) {
      *(uint *)(iVar10 + 4) = *(uint *)(iVar10 + 4) | 0x100;
      *(undefined2 *)(DAT_00336f2c + iVar10) = *(undefined2 *)(param_2 + 0x116);
    }
    else {
      *(undefined2 *)(DAT_00336f2c + iVar10) = 0;
    }
    uVar4 = DAT_00336f48;
    iVar9 = DAT_00336f44;
    uVar3 = DAT_00336f34;
    uVar8 = DAT_00336f30;
    uVar5 = *(uint *)(iVar10 + 0x1710);
    if ((uVar5 & 0x800000) == 0) {
      bVar11 = (uVar5 & 0x8000000) == 0;
      if (!bVar11) {
        uVar5 = (uint)*(byte *)(iVar10 + 0x1a7);
      }
      if (bVar11 || uVar5 == 1) {
        if ((*(char *)(param_2 + 2) == '\x04') && (*(char *)(iVar10 + 0x1a9) != '\x02')) {
          FUN_0035976c(param_1,iVar10,DAT_00336f38);
          FUN_00358dfc(uVar4,iVar10 + 0x254,param_1);
        }
        else {
          uVar1 = *(undefined *)(iVar10 + 0x2a6);
          *(undefined *)(iVar10 + 0x2a6) = 0;
          FUN_0036055c(param_1,iVar10,uVar8,0);
          *(undefined *)(iVar10 + 0x2a6) = uVar1;
          *(uint *)(iVar10 + 0x1710) = *(uint *)(iVar10 + 0x1710) | 0x20000040;
          if (*(short *)(DAT_00336f2c + iVar10) != 0) {
            FUN_00367c7c(param_1,*(short *)(DAT_00336f2c + iVar10),*(undefined4 *)(iVar10 + 0x172c))
            ;
            *(undefined4 *)(iVar10 + 0x16f8) = *(undefined4 *)(iVar10 + 0x172c);
          }
          iVar6 = FUN_003518cc(iVar10);
          if (iVar6 == 0) {
            iVar7 = *(int *)(iVar10 + 0x1724);
            bVar11 = SBORROW4(iVar7,param_2);
            iVar6 = iVar7 - param_2;
            if (iVar7 != param_2) {
              bVar11 = SBORROW4(*(int *)(param_2 + 0x98),iVar9);
              iVar6 = *(int *)(param_2 + 0x98) - iVar9;
            }
            if (iVar6 < 0 == bVar11) {
              uVar8 = FUN_0034d628(iVar10);
              FUN_00359aa0(iVar10 + 0x254,param_1,uVar8);
            }
            else {
              FUN_00358dfc(uVar4,iVar10 + 0x254,param_1,0xe3);
            }
          }
        }
      }
      else {
        FUN_0035976c(param_1,iVar10,DAT_00336f38);
        FUN_00360190(DAT_00336f40,uVar3,uVar3,DAT_00336f3c,iVar10 + 0x254,param_1,0x34,0);
      }
      if (*(int *)(iVar10 + 0x284) == 0xe3) {
        FUN_003603f8(param_1,iVar10,0x19);
      }
      *(undefined4 *)(iVar10 + 0x6c) = uVar3;
      *(undefined4 *)(iVar10 + 0x221c) = uVar3;
      iVar9 = DAT_00336f50;
      uVar8 = DAT_00336f4c;
      *(undefined *)(iVar10 + 0x1749) = 0;
      *(undefined4 *)(iVar9 + 0xcc) = uVar8;
      *(undefined *)(iVar9 + 0xd4) = 0;
    }
    else {
      uVar2 = *(undefined2 *)(iVar10 + 0x2238);
      if ('\x01' < *(char *)(iVar10 + 0x1a9)) {
        FUN_0034d688(param_1,iVar10,0xff);
      }
      uVar8 = DAT_00336f30;
      uVar1 = *(undefined *)(iVar10 + 0x2a6);
      *(undefined *)(iVar10 + 0x2a6) = 0;
      FUN_0036055c(param_1,iVar10,uVar8,0);
      *(undefined *)(iVar10 + 0x2a6) = uVar1;
      *(uint *)(iVar10 + 0x1710) = *(uint *)(iVar10 + 0x1710) | 0x20000040;
      if (*(short *)(iVar10 + 0x116) != 0) {
        FUN_00367c7c(param_1,*(short *)(iVar10 + 0x116),*(undefined4 *)(iVar10 + 0x172c));
        *(undefined4 *)(iVar10 + 0x16f8) = *(undefined4 *)(iVar10 + 0x172c);
      }
      *(undefined2 *)(iVar10 + 0x2238) = uVar2;
    }
    *(uint *)(iVar10 + 0x1710) = *(uint *)(iVar10 + 0x1710) | 0x20000040;
  }
  iVar9 = *(int *)(iVar10 + 0x1724);
  if ((*(int *)(iVar10 + 0x172c) == iVar9) &&
     ((*(ushort *)(*(int *)(iVar10 + 0x172c) + 0x116) & 0xff00) != 0x200)) {
    *(uint *)(iVar9 + 4) = *(uint *)(iVar9 + 4) | 0x100;
    FUN_002be958(param_1,0xb);
    return;
  }
  return;
}

