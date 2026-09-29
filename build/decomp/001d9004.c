// OoT3D decomp @ 001d9004  name=FUN_001d9004  size=1936

void FUN_001d9004(int param_1,int param_2)

{
  short sVar1;
  int *piVar2;
  float fVar3;
  char cVar4;
  ushort uVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined4 uVar11;
  bool bVar12;

  piVar2 = DAT_001d93d4;
  iVar10 = DAT_001d93d0;
  bVar12 = false;
  if (*(short *)(param_2 + 0x104) == 0x51) {
    bVar12 = *(int *)(DAT_001d93d0 + 8) == 0xfff5;
  }
  *(bool *)(param_1 + 0x1094) = bVar12;
  uVar11 = DAT_001d93d8;
  *(undefined2 *)(*piVar2 + 0xe60) = 0;
  FUN_003510b0(param_1,uVar11);
  uVar8 = DAT_001d93e4;
  uVar11 = DAT_001d93e0;
  *(undefined2 *)(DAT_001d93dc + param_1) = 0;
  iVar6 = *piVar2;
  *(undefined2 *)(iVar6 + 0x5be) = 0;
  *(undefined4 *)(param_1 + 0xeb8) = uVar11;
  *(undefined4 *)(param_1 + 0xebc) = uVar8;
  *(undefined4 *)(param_1 + 0xec0) = uVar11;
  *(undefined4 *)(param_1 + 0x1a8) = 0;
  *(undefined4 *)(param_1 + 0x1ac) = 0;
  *(undefined1 *)(param_1 + 0x19e) = 10;
  if (*(short *)(iVar6 + 0x55c) == 0) {
    *(undefined2 *)(iVar6 + 0x55c) = 0x46;
  }
  if (((int)(short)*(ushort *)(param_1 + 0x1c) & 0x8000U) == 0) {
    *(undefined1 *)(param_1 + 0x1b0) = 0;
    *(undefined4 *)(param_1 + 0xe6c) = 0xe;
  }
  else {
    *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0x7fff;
    *(undefined1 *)(param_1 + 0x1b0) = 1;
    iVar6 = param_2 + 0x3a58;
    cVar4 = FUN_00363c10(iVar6,0xd2);
    *(char *)(param_1 + 0x1b1) = cVar4;
    if (cVar4 < 0) goto LAB_001d9490;
    FUN_0033da8c(iVar6,(int)cVar4,param_2);
    iVar6 = FUN_00373074(iVar6,(int)*(char *)(param_1 + 0x1b1));
    if (iVar6 != 0) {
      *(undefined1 *)(param_1 + 0x1e) = *(undefined1 *)(param_1 + 0x1b1);
    }
    *(undefined4 *)(param_1 + 0xe6c) = 0xc;
  }
  iVar6 = DAT_001d93e8;
  if (*(short *)(param_1 + 0x1c) == 0x7fff) {
    *(undefined2 *)(param_1 + 0x1c) = 1;
  }
  uVar5 = *(ushort *)(param_2 + 0x104);
  if (uVar5 == 0x4c) {
    *(undefined4 *)(param_1 + 0xe54) = 0x10000;
  }
  else {
    bVar12 = uVar5 == 0x5d;
    if (bVar12) {
      uVar5 = (ushort)*(byte *)(param_1 + 0x1b0);
    }
    if (bVar12 && uVar5 == 1) {
      *(undefined4 *)(param_1 + 0xe54) = 0x50000;
    }
    else {
      sVar1 = *(short *)(param_1 + 0x1c);
      if (sVar1 == 3) {
        *(undefined4 *)(param_1 + 0xe54) = 0xb0000;
      }
      else if (sVar1 == 6) {
        *(undefined4 *)(param_1 + 0xe54) = 0xa0000;
        iVar7 = FUN_00350cf4(0x18);
        if ((iVar7 == 0) && (*(short *)(*piVar2 + 0x556) == 0)) {
          if (((*(ushort *)(iVar6 + 0x8a) & 0x40) != 0) && (*(char *)(param_1 + 0x1b0) == '\x01')) {
            *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x300000;
          }
        }
        else {
          *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) & 0xfffdffff | 0x4000000;
        }
      }
      else if (sVar1 == 1) {
        *(undefined4 *)(param_1 + 0xe54) = 0x80;
      }
      else {
        *(undefined4 *)(param_1 + 0xe54) = 0;
      }
    }
  }
  uVar5 = *(ushort *)(param_2 + 0x104);
  bVar12 = uVar5 == 99;
  if (bVar12) {
    uVar5 = *(ushort *)(iVar6 + 0x8a) & 0xf;
  }
  if (((bVar12 && uVar5 == 6) && (iVar7 = FUN_00350cf4(0x18), iVar7 == 0)) &&
     (*(short *)(*piVar2 + 0x556) == 0)) {
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x2000000;
  }
  FUN_0037572c(DAT_001d93ec,param_1);
  uVar8 = DAT_001d93f8;
  *(undefined4 *)(param_1 + 0x70) = DAT_001d93f0;
  FUN_00372d4c(uVar11,DAT_001d93f4,param_1 + 0xbc,uVar8);
  *(undefined2 *)(param_1 + 0x100c) = 0xc;
  *(undefined1 *)(param_1 + 0x1a4) = 2;
  *(undefined4 *)(param_1 + 0x6c) = uVar11;
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xedc,param_1,DAT_001d93fc);
  FUN_00353dd0(param_2);
  FUN_00353d24(param_2,param_1 + 0xf34,param_1,DAT_001d9400);
  FUN_00350eb8(param_2);
  FUN_00350d48(param_2,param_1 + 0xf8c,param_1,DAT_001d9404,param_1 + 0xfac);
  uVar8 = FUN_0035011c(0xb);
  FUN_00350d20(param_1 + 0xa0,uVar8,DAT_001d9408);
  fVar3 = DAT_001d940c;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(float *)(param_1 + 0x40) = *(float *)(param_1 + 0x40) + fVar3;
  *(undefined4 *)(param_1 + 0xe70) = 0;
  if (*(short *)(param_2 + 0x104) == 99) {
    if (*(int *)(DAT_001d9410 + 0x4e8) < 4) {
      if (*(char *)(param_1 + 0x1b0) == '\x01') {
        if ((*(short *)(param_1 + 0x38) == 0) || (*(int *)(iVar10 + 0x10) != 0)) goto LAB_001d9490;
        uVar9 = FUN_00350cf4(0x18);
        bVar12 = uVar9 == 0;
        if (bVar12) {
          uVar9 = (uint)*(ushort *)(param_1 + 0x38);
        }
        if (!bVar12 || uVar9 != 5) goto LAB_001d9490;
      }
      else {
        iVar7 = FUN_00350cf4(0x18);
        if (((iVar7 == 0) && (*(short *)(*piVar2 + 0x556) == 0)) && (*(int *)(iVar10 + 0x10) != 0))
        goto LAB_001d9490;
      }
    }
  }
  else if (*(short *)(param_2 + 0x104) == 0x36) {
    if ((*(int *)(iVar10 + 0x10) == 0) || (iVar7 = FUN_00350cf4(0x18), iVar7 != 0)) {
LAB_001d9490:
      FUN_00374428(param_1);
      return;
    }
    uVar9 = (uint)*(ushort *)(*piVar2 + 0x556);
    bVar12 = uVar9 == 0;
    if (bVar12) {
      uVar9 = *(uint *)(iVar10 + 4);
    }
    if (!bVar12 || uVar9 != 0) goto LAB_001d9490;
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x10000;
  }
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar10 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80,
     *(int *)(DAT_001d97d8 + iVar10) != 0)) {
    iVar10 = iVar10 + 0x3a5c;
  }
  else {
    iVar10 = 0;
  }
  *(int *)(param_1 + 0xe50) = iVar10 + 0x10;
  uVar8 = ObjectBankArchive_00358ef8(iVar10 + 0x10,0);
  iVar10 = DAT_001d97dc;
  FUN_00358ea8(*(undefined4 *)(param_1 + 0xe50),param_2,param_1 + 0x1c4,uVar8,
               *(undefined4 *)(param_1 + 0x178),
               **(undefined4 **)(DAT_001d97dc + (uint)*(byte *)(param_1 + 0x1b0) * 4),
               param_1 + 0x24c,param_1 + 0x760,0x19);
  if (*(char *)(param_1 + 0x1b0) == '\0') {
    FUN_0035c358(param_1 + 0xc74,param_1 + 0x1c4,0,0xffffffff,0xffffffff);
  }
  *(undefined1 *)(param_1 + 0xe74) = 0;
  FUN_00373d40(param_1 + 0x1c4,**(undefined4 **)(iVar10 + (uint)*(byte *)(param_1 + 0x1b0) * 4));
  *(undefined1 *)(param_1 + 0xe9c) = 6;
  *(undefined4 *)(param_1 + 0xea0) = 0;
  *(undefined4 *)(param_1 + 0xea8) = 0;
  *(undefined1 *)(param_1 + 0x1004) = 0;
  *(undefined1 *)(param_1 + 0x100e) = 0xff;
  *(undefined2 *)(param_1 + 0x1010) = 0;
  *(undefined4 *)(DAT_001d97e0 + param_1) = 0;
  *(undefined1 *)(param_1 + 0x1028) = 0;
  *(undefined4 *)(param_1 + 0x102c) = 0;
  *(undefined4 *)(param_1 + 0x1030) = 0;
  sVar1 = *(short *)(param_1 + 0x1c);
  if (sVar1 == 2) {
    *(byte *)(param_1 + 0xeee) = *(byte *)(param_1 + 0xeee) & 0xfe;
    *(byte *)(param_1 + 0xf46) = *(byte *)(param_1 + 0xf46) & 0xfe;
    *(byte *)(param_1 + 0xf9e) = *(byte *)(param_1 + 0xf9e) & 0xfe;
    *(undefined1 *)(param_1 + 0x1a4) = 1;
    *(undefined1 *)(param_1 + 0xe74) = 4;
    *(uint *)(param_1 + 0xe54) = *(uint *)(param_1 + 0xe54) | 0x2000;
    *(undefined2 *)(param_1 + 0xeb4) = 0;
    goto LAB_001d97c0;
  }
  if (sVar1 == 3) {
    *(undefined4 *)(param_1 + 0xe68) = 0;
    *(undefined4 *)(param_1 + 0xe7c) = 0;
    *(undefined4 *)(param_1 + 0x6c) = uVar11;
    FUN_0033d88c(param_1);
    *(undefined4 *)(param_1 + 0xe80) = *(undefined4 *)(param_1 + 0xe8c);
    *(undefined4 *)(param_1 + 0xe84) = *(undefined4 *)(param_1 + 0xe90);
    *(undefined4 *)(param_1 + 0xe88) = *(undefined4 *)(param_1 + 0xe94);
    if ((*(uint *)(param_1 + 0xe54) & 0x8000000) != 0) {
      FUN_0037547c(DAT_001d97ec,param_1 + 0xe80,4,DAT_001d97e8,DAT_001d97e8,DAT_001d97e4);
    }
    uVar11 = z_actor_003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                              *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,0xcb,
                              (int)*(short *)(param_1 + 0xbc),(int)*(short *)(param_1 + 0xbe),1,1,1)
    ;
    *(undefined4 *)(param_1 + 0x1018) = uVar11;
    uVar11 = DAT_001d97f0;
    if ((*(ushort *)(iVar6 + 0x8a) & 0x40) == 0) {
      uVar11 = DAT_001d97f4;
    }
    *(undefined4 *)(param_1 + 0x1024) = uVar11;
    goto LAB_001d97c0;
  }
  if (sVar1 == 7) {
    *(undefined4 *)(param_1 + 0xe70) = 0;
    *(undefined1 *)(param_1 + 0x1a4) = 0x11;
    *(undefined1 *)(param_1 + 0x100e) = 0;
    *(undefined4 *)(param_1 + 0x6c) = uVar11;
    goto LAB_001d97c0;
  }
  if (sVar1 == 8) {
    *(undefined4 *)(param_1 + 0x6c) = uVar11;
    *(undefined4 *)(param_1 + 0xe7c) = 0;
    *(undefined4 *)(param_1 + 0xe68) = 0;
    *(undefined4 *)(param_1 + 0x1034) = 0;
    FUN_0033d694(param_1);
    FUN_0021fd0c(param_2);
    goto LAB_001d97c0;
  }
  if (((*(short *)(param_2 + 0x104) == 99) && (iVar10 = FUN_00350cf4(0x18), iVar10 == 0)) &&
     (*(short *)(*piVar2 + 0x556) == 0)) {
    *(undefined1 *)(param_1 + 0x1a4) = 0x13;
    *(undefined4 *)(param_1 + 0x6c) = uVar11;
    uVar9 = *(uint *)(param_1 + 0xe54) | 0x10000;
LAB_001d97bc:
    *(uint *)(param_1 + 0xe54) = uVar9;
  }
  else {
    uVar5 = *(ushort *)(param_2 + 0x104);
    if (uVar5 != 0x4c) {
      bVar12 = uVar5 != 0x5d;
      if (!bVar12) {
        uVar5 = (ushort)*(byte *)(param_1 + 0x1b0);
      }
      if (bVar12 || uVar5 != 1) {
        *(undefined1 *)(param_1 + 0xe74) = 4;
        FUN_0033d520(uVar11,uVar11,param_1,4);
        uVar9 = *(uint *)(param_1 + 0xe54) & 0xfffeffff;
        goto LAB_001d97bc;
      }
    }
    *(undefined1 *)(param_1 + 0xe74) = 4;
    FUN_0033d520(uVar11,uVar11,param_1,4);
  }
LAB_001d97c0:
  *(undefined2 *)(param_1 + 0xc0) = 0;
  *(undefined2 *)(param_1 + 0x38) = 0;
  *(undefined2 *)(param_1 + 0x18) = 0;
  return;
}
