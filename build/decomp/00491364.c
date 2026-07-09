// OoT3D decomp @ 00491364  name=FUN_00491364  size=5028

void FUN_00491364(int param_1,int param_2,undefined2 *param_3)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  char *pcVar6;
  undefined1 uVar7;
  undefined4 uVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  uint extraout_r1;
  bool bVar14;
  bool bVar15;
  bool bVar16;
  uint in_fpscr;
  float fVar17;
  
  iVar13 = DAT_00491724;
  uVar8 = *(undefined4 *)(param_1 + 0x20ac);
  bVar16 = false;
  if (*(char *)(param_2 + 0x11) != '\0') {
    return;
  }
  iVar9 = *(int *)(DAT_00491724 + 0x4e4);
  bVar14 = iVar9 != 0;
  bVar15 = iVar9 != 3;
  if (bVar14 && bVar15) {
    iVar9 = (int)*(short *)(param_1 + 0x104);
  }
  if ((((((bVar14 && bVar15) && iVar9 != 0x51) && iVar9 != 0x6b) &&
       (fVar17 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00491728 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3),
       (int)(DAT_0049172c / fVar17 + DAT_00491730) < (int)(uint)*(ushort *)(param_2 + 0x20))) &&
      ((uVar10 = *(uint *)(param_1 + 0x18),
       ((uVar10 & 1) != 0 || (uVar10 & 2) != 0) || (uVar10 & 8) != 0 ||
       (iVar9 = FUN_0033f428(0,0,0x140,0xf0,2), iVar9 != 0)))) &&
     (*(int *)(iVar13 + 0x4dc) != 0xfedc)) {
    uVar10 = FUN_002f43e8();
    bVar14 = uVar10 == 0;
    if (bVar14) {
      uVar10 = (uint)*(byte *)(DAT_00491734 + param_1);
    }
    if (bVar14 && uVar10 == 0) {
      FUN_0037547c(DAT_00491740,0,4,DAT_0049173c,DAT_0049173c,DAT_00491738);
      bVar16 = true;
    }
  }
  if (*(char *)(param_2 + 0x10) != '\0') {
    bVar16 = true;
  }
  if ((*(short *)(param_2 + 0x20) != param_3[1]) && (!bVar16)) {
    return;
  }
  *(int *)(param_1 + 0x22ac) = *(int *)(param_1 + 0x22ac) + 1;
  iVar9 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_1 + 0x22bc));
  if ((iVar9 != 0) && (*(short *)(DAT_00491744 + iVar9) == 0x25)) {
    FUN_00367c48();
    *(undefined1 *)(param_1 + 0x22a8) = 0;
  }
  *(undefined1 *)(param_1 + 0x22a0) = 4;
  *(undefined1 *)(param_2 + 0x11) = 1;
  FUN_0033d13c(0);
  *(undefined1 *)(iVar13 + 0x59d) = 1;
  iVar9 = DAT_00491748;
  bVar16 = *(int *)(iVar13 + 0x4e4) != 0;
  uVar11 = 0;
  uVar10 = extraout_r1;
  if (bVar16) {
    uVar11 = (uint)*(ushort *)(param_2 + 0x20);
    uVar10 = (uint)(ushort)param_3[1];
  }
  if (bVar16 && uVar11 != uVar10) {
    *(undefined1 *)(iVar13 + 0x576) = 1;
  }
  *(undefined4 *)(iVar9 + 8) = 0;
  iVar12 = DAT_004929b8;
  pcVar6 = DAT_004926d0;
  uVar5 = DAT_004926b0;
  uVar4 = DAT_00492654;
  iVar9 = DAT_00491748;
  switch(*param_3) {
  default:
    return;
  case 1:
    FUN_003716f0(param_1,0xa0,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049264c;
    return;
  case 2:
    FUN_003716f0(param_1,0xa0,0x14,10);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492650;
    return;
  case 3:
    FUN_003716f0(param_1,DAT_00492654,0x14,10);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049264c;
    return;
  case 4:
    FUN_003716f0(param_1,DAT_00492658,0x14,10);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492650;
    return;
  case 5:
    FUN_003716f0(param_1,0xee,0x14,10);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492650;
    return;
  case 6:
    FUN_003716f0(param_1,0xa0,0x14,10);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049265c;
    return;
  case 7:
    FUN_003716f0(param_1,0xee,0x14,0xb);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049265c;
    return;
  case 8:
    *(undefined4 *)(DAT_00491748 + 0xe98) = 0;
    *(undefined1 *)(iVar13 + 0x53b) = 0;
    if ((*(ushort *)(iVar9 + 0xef4) & 0x20) != 0) {
      if (*(int *)(iVar13 + 0x4e8) < 4) {
        if (*(int *)(iVar9 + 4) == 0) {
          *(undefined1 *)(param_1 + 0x5c00) = 1;
        }
        else {
          *(undefined1 *)(param_1 + 0x5c00) = 0;
        }
      }
      FUN_003716f0(param_1,DAT_00492664,0x14,3);
      *(undefined1 *)(iVar13 + 0x5ab) = 3;
      return;
    }
    *(ushort *)(iVar9 + 0xef4) = *(ushort *)(iVar9 + 0xef4) | 0x20;
    FUN_003716f0(param_1,0xa0,0x14,0xb);
    uVar8 = DAT_00492660;
    goto LAB_004923c8;
  case 9:
    FUN_003716f0(param_1,DAT_00492654,0x14,0xc);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492650;
    return;
  case 10:
    FUN_003716f0(param_1,0xbb,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492650;
    return;
  case 0xb:
    FUN_003716f0(param_1,0xee,0x14,3);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492660;
    return;
  case 0xc:
    FUN_003716f0(param_1,DAT_00492668,0x14,2);
    return;
  case 0xd:
    FUN_003716f0(param_1,0x10e,0x14,2);
    break;
  case 0xe:
    FUN_003716f0(param_1,DAT_0049266c,0x14,2);
    return;
  case 0xf:
  case 0x1a:
    FUN_003716f0(param_1,0x53,0x14,3);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492670;
    return;
  case 0x10:
  case 0x1b:
    FUN_003716f0(param_1,0x53,0x14,3);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492674;
    return;
  case 0x11:
  case 0x1c:
    FUN_003716f0(param_1,0x53,0x14,3);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492678;
    return;
  case 0x12:
    FUN_003716f0(param_1,0x324,0x14,2);
    break;
  case 0x13:
    FUN_003716f0(param_1,DAT_00492658,0x14,4);
    *(undefined4 *)(DAT_00491748 + 8) = 0x8000;
    return;
  case 0x15:
    goto switchD_00491534_caseD_15;
  case 0x16:
    FUN_00376a78(param_1,0x5d);
    FUN_003716f0(param_1,0x123,0x14);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492650;
    return;
  case 0x17:
    FUN_003716f0(param_1,0xa0,0x14,3);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049267c;
    return;
  case 0x18:
    FUN_003716f0(param_1,0x28,0x14,2);
    return;
  case 0x19:
    *(undefined1 *)(param_1 + 0x5c00) = 0;
    FUN_003716f0(param_1,0x6b,0x14,3);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492650;
    return;
  case 0x1d:
    FUN_003716f0(param_1,0x6b,0x14,3);
    *(undefined1 *)(iVar13 + 0x5a3) = 0;
    return;
  case 0x1e:
    FUN_003716f0(param_1,0x6b,0x14,3);
    FUN_00376a78(param_1,0x67);
    *(undefined1 *)(iVar13 + 0x5a3) = 1;
    return;
  case 0x1f:
    FUN_003716f0(param_1,0x6b,0x14,3);
    *(undefined1 *)(iVar13 + 0x5a3) = 2;
    return;
  case 0x20:
    *(undefined1 *)(param_1 + 0x5c00) = 1;
    FUN_003716f0(param_1,0xcd,0x14,0xb);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049265c;
    *(undefined1 *)(param_1 + 0x5c76) = 0xb;
    return;
  case 0x21:
    FUN_003716f0(param_1,0xcd,0x14,3);
    return;
  case 0x22:
    FUN_003716f0(param_1,0xa0,0x14,3);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492660;
    return;
  case 0x23:
    FUN_003716f0(param_1,0xcd,0x14,4);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492650;
    return;
  case 0x26:
    FUN_003716f0(param_1,0xa0,0x14,4);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492670;
    return;
  case 0x27:
    FUN_003716f0(param_1,0x53,0x14,4);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492680;
    return;
  case 0x28:
    *(undefined1 *)(param_1 + 0x5c00) = 0;
    FUN_003716f0(param_1,0x53,0x14,4);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492684;
    return;
  case 0x29:
    FUN_003716f0(param_1,DAT_00492688,0x14,2);
    return;
  case 0x2a:
    FUN_003716f0(param_1,0xdb,0x14,4);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049265c;
    return;
  case 0x2b:
    FUN_003716f0(param_1,DAT_0049268c,0x14,4);
    return;
  case 0x2c:
    FUN_003716f0(param_1,800,0x14,0x11);
    return;
  case 0x2e:
    FUN_003716f0(param_1,0x324,0x14,4);
    return;
  case 0x2f:
    FUN_00376a78(param_1,0x5e);
    *(ushort *)(DAT_00492690 + 0xf6) = *(ushort *)(DAT_00492690 + 0xf6) | 0x10;
    FUN_003716f0(param_1,0xdb,0x14,4);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049264c;
    return;
  case 0x30:
    FUN_003716f0(param_1,DAT_00492694,0x14,0xf);
    uVar7 = 0xf;
LAB_004923ec:
    *(undefined1 *)(iVar13 + 0x5ab) = uVar7;
    return;
  case 0x31:
    FUN_003716f0(param_1,DAT_00492698,0x14,4);
    return;
  case 0x32:
    FUN_003716f0(param_1,DAT_0049269c,0x14,0x11);
    return;
  case 0x33:
    FUN_003716f0(param_1,0xcd,0x14,0x29);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049267c;
    return;
  case 0x34:
    FUN_003716f0(param_1,0x53,0x14,0xb);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_004926a0;
    return;
  case 0x35:
    FUN_003716f0(param_1,DAT_004926a4,0x14,3);
    return;
  case 0x36:
    *(undefined1 *)(param_1 + 0x5c00) = 1;
    FUN_003716f0(param_1,uVar4,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049265c;
    return;
  case 0x37:
    FUN_003716f0(param_1,DAT_004926a8,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049264c;
    return;
  case 0x38:
    FUN_003716f0(param_1,0xdb,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492670;
    return;
  case 0x39:
    FUN_003716f0(param_1,DAT_00492658,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492660;
    return;
  case 0x3a:
    FUN_003716f0(param_1,DAT_004926ac,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049264c;
    return;
  case 0x3b:
    FUN_003716f0(param_1,0x102,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049264c;
    return;
  case 0x3c:
    FUN_003716f0(param_1,0x10e,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049265c;
    return;
  case 0x3d:
    FUN_003716f0(param_1,0x108,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492650;
    return;
  case 0x3e:
    *(undefined1 *)(param_1 + 0x5c00) = 0;
    FUN_003716f0(param_1,0xee,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492678;
    return;
  case 0x3f:
    FUN_003716f0(param_1,0xee,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_004926a0;
    return;
  case 0x40:
    FUN_003716f0(param_1,0xcd,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492674;
    return;
  case 0x41:
  case 0x49:
    *(undefined1 *)(param_1 + 0x5c00) = 1;
    FUN_003716f0(param_1,uVar5,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049265c;
    return;
  case 0x42:
    FUN_003716f0(param_1,0x554,0x14,2);
    return;
  case 0x43:
    FUN_003716f0(param_1,0x27e);
    return;
  case 0x44:
    FUN_003716f0(param_1,0xa0,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492674;
    return;
  case 0x45:
    FUN_003716f0(param_1,DAT_004926b4,0x14,2);
    return;
  case 0x46:
    FUN_003716f0(param_1,DAT_00492658,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492670;
    break;
  case 0x47:
    *(ushort *)(DAT_00491748 + 0x8a) = *(ushort *)(DAT_00491748 + 0x8a) | 0x100;
    FUN_0034913c(param_1,uVar8);
    *(ushort *)(iVar9 + 0x8a) = *(ushort *)(iVar9 + 0x8a) | 0x1000;
    FUN_0034913c(param_1,uVar8);
    *(undefined1 *)(param_1 + 0x5c00) = 1;
    FUN_003716f0(param_1,0x53,0x14,2);
    *(undefined4 *)(iVar9 + 8) = DAT_0049264c;
    return;
  case 0x48:
    FUN_003716f0(param_1,0x400,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492650;
    break;
  case 0x4a:
    FUN_003716f0(param_1,0x157,0x14);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492660;
    *(undefined1 *)(iVar13 + 0x5ab) = 3;
    return;
  case 0x4b:
    *(undefined1 *)(param_1 + 0x5c00) = 1;
    FUN_003716f0(param_1,uVar5,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492670;
    return;
  case 0x4c:
    *(undefined1 *)(param_1 + 0x5c00) = 0;
    FUN_003716f0(param_1,uVar5,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492674;
    return;
  case 0x4d:
    *(undefined1 *)(param_1 + 0x5c00) = 1;
    FUN_003716f0(param_1,uVar5,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_00492678;
    return;
  case 0x4e:
    FUN_003716f0(param_1,DAT_004926b0,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_004926a0;
    return;
  case 0x4f:
  case 0x50:
  case 0x51:
  case 0x52:
  case 0x53:
  case 0x54:
  case 0x55:
  case 0x56:
  case 0x57:
  case 0x58:
  case 0x59:
  case 0x5a:
  case 0x5b:
  case 0x5c:
  case 0x5d:
    FUN_003716f0(param_1,DAT_004926b0,0x14,2);
    return;
  case 0x5e:
    FUN_003716f0(param_1,DAT_004926b8,0x14,3);
    return;
  case 0x5f:
    uVar2 = *(ushort *)(DAT_00492690 + 0xf4);
    if (((uVar2 & 0x100) != 0 && (uVar2 & 0x200) != 0) && (uVar2 & 0x400) != 0) {
      FUN_003716f0(param_1,0x53,0x14,2);
      *(undefined4 *)(DAT_00491748 + 8) = DAT_00492660;
      return;
    }
    iVar13 = *(int *)(iVar13 + 0x4e8);
    if (iVar13 == 8) {
      FUN_003716f0(param_1,0xfc,0x14,2);
      return;
    }
    if (iVar13 == 9) {
      FUN_003716f0(param_1,DAT_004926bc,0x14,2);
      return;
    }
    if (iVar13 != 10) {
      return;
    }
    goto switchD_00491534_caseD_15;
  case 0x60:
    if ((*(uint *)(DAT_00491748 + 0xbc) & *(uint *)(DAT_004926c0 + 0x10)) == 0) {
      *(ushort *)(DAT_00491748 + 0xf04) = *(ushort *)(DAT_00491748 + 0xf04) | 0x100;
      FUN_003716f0(param_1,0x610,0x14,3);
      *(undefined1 *)(iVar13 + 0x5ab) = 3;
      return;
    }
    goto LAB_004923b0;
  case 0x61:
    if ((*(uint *)(DAT_00491748 + 0xbc) & *(uint *)(DAT_004926c0 + 0xc)) == 0) {
      FUN_003716f0(param_1,0x580,0x14,3);
      uVar7 = 3;
      goto LAB_004923ec;
    }
LAB_004923b0:
    FUN_003716f0(param_1,0x6b,0x14,5);
    uVar8 = DAT_0049264c;
LAB_004923c8:
    *(undefined4 *)(iVar9 + 8) = uVar8;
    return;
  case 0x62:
    FUN_003716f0(param_1,0x564,0x14,3);
    *(undefined1 *)(iVar13 + 0x5ab) = 3;
    return;
  case 99:
    FUN_003716f0(param_1,DAT_004926c4,0x14,2);
    break;
  case 100:
    FUN_003716f0(param_1,0xee,0x14,3);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049267c;
    *(undefined1 *)(iVar13 + 0x5ab) = 3;
    return;
  case 0x65:
    FUN_003716f0(param_1,DAT_004926c8,0x14,0xf);
    return;
  case 0x66:
    FUN_003716f0(param_1,0x590,0x14,2);
    return;
  case 0x67:
    iVar12 = FUN_003716f0(param_1,DAT_004926cc,0x14,2);
    iVar9 = DAT_00491748;
    if (iVar12 == 0) {
      return;
    }
    *(undefined1 *)(param_1 + 0x5c00) = 0;
    *(undefined1 *)(param_1 + 0x5c77) = 1;
    uVar8 = DAT_00492660;
    *(undefined4 *)(iVar13 + 0x4e4) = 1;
    *(undefined4 *)(iVar9 + 8) = uVar8;
    return;
  case 0x68:
    cVar1 = *DAT_004926d0;
    if (cVar1 == '\0') {
      iVar13 = FUN_003716f0(param_1,0x8d,0x14,2);
      if (iVar13 != 0) {
        *(undefined4 *)(DAT_00491748 + 8) = DAT_0049265c;
      }
    }
    else {
      if (cVar1 != '\x01') {
        if (cVar1 == '\x02') {
          iVar13 = FUN_003716f0(param_1,0xa0,0x14,2);
          if (iVar13 != 0) {
            *(undefined4 *)(DAT_00491748 + 8) = DAT_00492678;
          }
          *pcVar6 = '\0';
          return;
        }
        return;
      }
      iVar13 = FUN_003716f0(param_1,DAT_004926bc,0x14,2);
      if (iVar13 != 0) {
        *(undefined4 *)(DAT_00491748 + 8) = DAT_0049264c;
      }
    }
    *pcVar6 = *pcVar6 + '\x01';
    return;
  case 0x69:
    FUN_003716f0(param_1,0xe4,0x14,2);
    *(undefined4 *)(DAT_00491748 + 8) = DAT_0049264c;
    return;
  case 0x6a:
    FUN_003716f0(param_1,0x574,0x14,2);
    return;
  case 0x6b:
    FUN_003716f0(param_1,DAT_004926d4,0x14,2);
    return;
  case 0x6c:
    FUN_003716f0(param_1,DAT_004926d8,0x14,2);
    return;
  case 0x6d:
    FUN_003716f0(param_1,0x540,0x14,2);
    return;
  case 0x6e:
    FUN_003716f0(param_1,0x544,0x14,2);
    return;
  case 0x6f:
    FUN_003716f0(param_1,DAT_004929a8,0x14,2);
    return;
  case 0x70:
    FUN_003716f0(param_1,DAT_004929ac,0x14,2);
    return;
  case 0x71:
    iVar9 = FUN_00350cf4(0xbb);
    if ((((iVar9 == 0) || (iVar9 = FUN_00350cf4(0xbc), iVar9 == 0)) ||
        (iVar9 = FUN_00350cf4(0xbd), iVar9 == 0)) ||
       (((iVar9 = FUN_00350cf4(0xbe), iVar9 == 0 || (iVar9 = FUN_00350cf4(0xbf), iVar9 == 0)) ||
        (iVar9 = FUN_00350cf4(0xad), iVar9 == 0)))) {
      *(undefined4 *)(DAT_004929b8 + 8) = DAT_004929b4;
      *(int *)(param_1 + 0x22ac) = *(int *)(param_1 + 0x22ac) + 1;
      iVar13 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_1 + 0x22bc));
      if (iVar13 == 0) goto LAB_004927fc;
      sVar3 = *(short *)(DAT_004929bc + iVar13);
    }
    else {
      uVar8 = FUN_00375750(param_1 + 0x118,0);
      *(undefined4 *)(param_1 + 0x229c) = uVar8;
      iVar9 = DAT_004929b8;
      *(undefined4 *)(param_1 + 0x22ac) = 0;
      *(undefined2 *)(DAT_004929b0 + param_1) = 0;
      uVar8 = DAT_004929b4;
      *(undefined1 *)(iVar13 + 0x5a2) = 1;
      *(undefined4 *)(iVar9 + 8) = uVar8;
      *(int *)(param_1 + 0x22ac) = *(int *)(param_1 + 0x22ac) + 1;
      iVar13 = FUN_0036c5bc(param_1,(int)(short)*(undefined4 *)(param_1 + 0x22bc));
      if (iVar13 == 0) goto LAB_004927fc;
      sVar3 = *(short *)(DAT_004929bc + iVar13);
    }
    if (sVar3 == 0x25) {
      FUN_00367c48();
      *(undefined1 *)(param_1 + 0x22a8) = 0;
    }
LAB_004927fc:
    *(undefined1 *)(param_1 + 0x22a0) = 3;
    return;
  case 0x72:
    FUN_003716f0(param_1,DAT_004929c0,0x14,2);
    return;
  case 0x73:
    FUN_003716f0(param_1,0x594,0x14,2);
    break;
  case 0x74:
    if ((*(ushort *)(DAT_004929c4 + 4) & 0x100) == 0) {
      FUN_003716f0(param_1,0x610,0x14,3);
    }
    else {
      FUN_003716f0(param_1,0x580,0x14,3);
    }
    *(undefined1 *)(iVar13 + 0x5ab) = 3;
    return;
  case 0x75:
    *(undefined4 *)(iVar13 + 0x4e4) = 3;
    FUN_00347cc4(0x6f);
    *(undefined1 *)(param_1 + 0x5c00) = 0;
    FUN_003716f0(param_1,0xcd,0x14,3);
    *(undefined4 *)(DAT_004929b8 + 8) = DAT_004926a0;
    return;
  case 0x76:
    *DAT_004929cc = (short)DAT_004929c8;
    FUN_0036ebdc(param_1);
    *(undefined4 *)(iVar13 + 0x4ec) = 0xfffffffe;
    break;
  case 0x77:
    *(undefined2 *)(DAT_004929b8 + 0xc) = 0x8000;
    *(undefined2 *)(iVar12 + 0x15a8) = 0x8000;
    FUN_003716f0(param_1,0x5f0,0x14,3);
    return;
  case 0x79:
    FUN_003716f0(param_1,DAT_004929d0,0x14,2);
    *(undefined4 *)(DAT_004929b8 + 8) = DAT_00492680;
  }
  *(undefined1 *)(iVar13 + 0x5ab) = 2;
  return;
switchD_00491534_caseD_15:
  FUN_003716f0(param_1,0x102,0x14,3);
  *(undefined4 *)(DAT_00491748 + 8) = DAT_00492650;
  return;
}

