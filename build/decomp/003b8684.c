// OoT3D decomp @ 003b8684  name=FUN_003b8684  size=1216

void FUN_003b8684(int param_1,int param_2)

{
  short sVar1;
  int iVar2;
  ushort uVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  undefined4 uVar8;
  bool bVar9;
  bool bVar10;
  uint in_fpscr;

  iVar4 = FUN_00373074(param_2 + 0x3a58,(int)*(char *)(param_1 + 0x45c));
  uVar8 = DAT_003b89a8;
  if ((iVar4 == 0) && (0 < *(short *)(param_1 + 0x1c))) {
    return;
  }
  FUN_00372d4c(DAT_003b89a8,DAT_003b89a0,param_1 + 0xbc,DAT_003b89a4);
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar4 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_003b89ac + iVar4) != 0)
     ) {
    iVar4 = iVar4 + 0x3a5c;
  }
  else {
    iVar4 = 0;
  }
  uVar5 = ObjectBankArchive_00358ef8(iVar4 + 0x10,0);
  FUN_00353e78(iVar4 + 0x10,param_2,param_1 + 0x1a4,uVar5,*(undefined4 *)(param_1 + 0x178),
               0xffffffff,param_1 + 0x47c,param_1 + 0x8f4,0x16);
  FUN_0035c358(param_1 + 0x228,param_1 + 0x1a4,0,0xffffffff,1);
  *(undefined1 *)(param_1 + 0x219) = 0;
  FUN_00353dd0(param_2,param_1 + 0x400);
  FUN_00353d24(param_2,param_1 + 0x400,param_1,DAT_003b89b0);
  FUN_00350318(param_1 + 0xa0,0,DAT_003b89b4);
  iVar6 = DAT_003b89cc;
  iVar4 = DAT_003b89b8;
  sVar1 = *(short *)(param_1 + 0x1c);
  bVar9 = sVar1 == 1;
  if (bVar9) {
    sVar1 = *(short *)(param_1 + 0xc0);
  }
  bVar10 = bVar9 && sVar1 == 1;
  if (bVar9 && sVar1 == 1) {
    bVar10 = *(int *)(DAT_003b89b8 + 4) == 0;
  }
  if (bVar10) {
    *(byte *)(param_1 + 0x412) = *(byte *)(param_1 + 0x412) & 0xfe;
    *(undefined2 *)(param_1 + 0x45e) = 1;
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,*(undefined4 *)(iVar6 + 4));
    uVar5 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(DAT_003b89d0,uVar8,uVar5,uVar8,param_1 + 0x1a4,
                 *(undefined4 *)(iVar6 + *(short *)(param_1 + 0x45e) * 4),2);
    uVar5 = DAT_003b89d4;
    *(undefined4 *)(param_1 + 0x3f8) = uVar8;
    *(undefined4 *)(param_1 + 0x3fc) = uVar5;
    *(ushort *)(iVar4 + 0x158a) = *(ushort *)(iVar4 + 0x158a) & 0x7fff;
    return;
  }
  FUN_0037572c(DAT_003b89bc,param_1);
  *(undefined1 *)(param_1 + 0x1f) = 6;
  *(undefined2 *)(DAT_003b89c0 + param_1) = 0;
  *(undefined2 *)(param_1 + 0x476) = 1;
  uVar5 = DAT_003b89c4;
  *(undefined4 *)(param_1 + 0x478) = uVar8;
  *(undefined4 *)(param_1 + 0x3fc) = uVar5;
  iVar2 = DAT_003b89c8;
  iVar6 = (int)*(short *)(param_2 + 0x104);
  if (iVar6 == 99) {
    if (*(int *)(iVar4 + 4) != 1) {
LAB_003b893c:
      iVar6 = *(int *)(iVar4 + 4);
      bVar9 = iVar6 != 0;
      if (!bVar9) {
        iVar6 = *(int *)(iVar4 + 0x10);
      }
      if (bVar9 || iVar6 != 0) {
LAB_003b8ab8:
        FUN_00374428(param_1);
        return;
      }
      if (*(short *)(param_1 + 0xc0) == 5) {
        if ((*(ushort *)(DAT_003b89c8 + 0xee) & 0x100) == 0) {
          uVar3 = *(ushort *)(iVar4 + 0x158a) & 0xf;
          switch(uVar3) {
          case 0:
          case 2:
          case 3:
          case 4:
          case 7:
            if (*(short *)(param_1 + 0x1c) == 2) {
LAB_003b8acc:
              switch(uVar3) {
              case 0:
              case 2:
                FUN_0035c414(param_1,2);
                *(undefined4 *)(param_1 + 0x3fc) = DAT_003b8bbc;
                *(undefined2 *)(iVar4 + 0x158a) = 0;
                return;
              case 1:
                *(undefined1 *)(param_1 + 0x1f) = 3;
                FUN_0035c414(param_1,2);
                *(undefined4 *)(param_1 + 0x3fc) = DAT_003b8bc0;
                FUN_0035239c(0x3c);
                return;
              case 3:
                FUN_0035c414(param_1,4);
                uVar8 = DAT_003b8bc4;
                break;
              case 4:
                FUN_0035c414(param_1,6);
                uVar8 = DAT_003b8bc8;
                *(undefined2 *)(param_1 + 0x464) = 8;
                break;
              case 5:
              case 6:
                *(undefined1 *)(param_1 + 0x1f) = 3;
                FUN_0035c414(param_1,6);
                uVar8 = DAT_003b8bcc;
                *(undefined2 *)(param_1 + 0x464) = 8;
                break;
              case 7:
                FUN_0035c414(param_1,2);
                uVar8 = DAT_003b8bd0;
                break;
              default:
                return;
              }
              *(undefined4 *)(param_1 + 0x3fc) = uVar8;
              return;
            }
            break;
          case 1:
            if (*(short *)(param_1 + 0x1c) == 3) goto LAB_003b8acc;
            break;
          case 5:
          case 6:
            if (*(short *)(param_1 + 0x1c) == 4) goto LAB_003b8acc;
          }
        }
        goto LAB_003b8ab8;
      }
      if ((*(short *)(param_1 + 0xc0) != 7) || ((*(ushort *)(DAT_003b89c8 + 0xee) & 0x100) == 0))
      goto LAB_003b8ab8;
      FUN_0035c414(param_1,8);
      *(undefined2 *)(param_1 + 0x466) = 3;
      goto LAB_003b89fc;
    }
    uVar7 = *(uint *)(iVar4 + 0x10);
    bVar9 = uVar7 == 0;
    if (bVar9) {
      uVar7 = (uint)*(ushort *)(param_1 + 0xc0);
    }
    bVar10 = bVar9 && uVar7 == 1;
    if (bVar9 && uVar7 == 1) {
      bVar10 = (*(ushort *)(DAT_003b89c8 + 0xee) & 0x10) == 0;
    }
    if (!bVar10) goto LAB_003b8ab8;
  }
  else {
    if (iVar6 != 0x36) {
      if (iVar6 != 99) {
        bVar9 = iVar6 == 0x4c;
        if (bVar9) {
          iVar6 = *(int *)(iVar4 + 4);
        }
        bVar10 = bVar9 && iVar6 == 0;
        if (bVar9 && iVar6 == 0) {
          bVar10 = *(int *)(iVar4 + 0x10) == 1;
        }
        if (bVar10) {
          if (*(short *)(param_1 + 0xc0) == 6) {
            if ((*(ushort *)(DAT_003b89c8 + 0xee) & 0x100) == 0) {
LAB_003b8a54:
              FUN_0035c414(param_1,7);
              *(undefined4 *)(param_1 + 0x3fc) = uVar5;
              if ((*(ushort *)(iVar2 + 0xee) & 0x100) == 0) {
                *(undefined2 *)(param_1 + 0x1c) = 5;
              }
              return;
            }
          }
          else if ((*(short *)(param_1 + 0xc0) == 8) &&
                  ((*(ushort *)(DAT_003b89c8 + 0xee) & 0x100) != 0)) goto LAB_003b8a54;
        }
        goto LAB_003b8ab8;
      }
      goto LAB_003b893c;
    }
    if (*(int *)(iVar4 + 4) != 1) goto LAB_003b8ab8;
    if (*(int *)(iVar4 + 0x10) == 0) {
      if (*(short *)(param_1 + 0xc0) != 3) goto LAB_003b8ab8;
      uVar3 = *(ushort *)(DAT_003b89c8 + 0xee);
    }
    else {
      if (*(int *)(iVar4 + 0x10) != 1) goto LAB_003b8ab8;
      if (*(short *)(param_1 + 0xc0) == 2) {
        if ((*(ushort *)(DAT_003b89c8 + 0xee) & 0x10) != 0) goto LAB_003b8ab8;
        goto LAB_003b891c;
      }
      if (*(short *)(param_1 + 0xc0) != 4) goto LAB_003b8ab8;
      uVar3 = *(ushort *)(DAT_003b89c8 + 0xee);
    }
    if ((uVar3 & 0x10) == 0) goto LAB_003b8ab8;
  }
LAB_003b891c:
  FUN_0035c414(param_1,9);
LAB_003b89fc:
  *(undefined4 *)(param_1 + 0x3fc) = uVar5;
  return;
}
