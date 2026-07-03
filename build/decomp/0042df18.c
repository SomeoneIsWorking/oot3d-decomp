// OoT3D decomp @ 0042df18  name=FUN_0042df18  size=5344

/* WARNING: Type propagation algorithm not settling */

void FUN_0042df18(int param_1)

{
  char cVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  ushort uVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  int iVar12;
  int iVar13;
  int iVar14;
  bool bVar15;
  undefined4 uVar16;
  undefined8 uVar17;
  ulonglong uVar18;
  undefined4 local_64;
  undefined4 local_60;
  undefined4 local_5c;
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  char local_4c [4];
  undefined1 auStack_48 [4];
  undefined1 auStack_44 [4];
  int local_40;
  int local_3c;
  int local_38;
  int local_34;
  
  piVar2 = DAT_0042ea00;
  if (DAT_0042ea00[0xd] == 0) {
    return;
  }
  FUN_002f9484(auStack_44,auStack_48,local_4c);
  iVar14 = 0;
  *piVar2 = param_1;
  iVar13 = 0;
  iVar11 = 0;
  if (*(char *)(param_1 + 0x100) == '\x03') {
    if (*(char *)(param_1 + 0x101) != '\x02') {
      return;
    }
    iVar7 = 2;
    if (param_1 != 0) {
      iVar7 = DAT_0042ea04;
    }
    piVar2[4] = param_1;
    iVar11 = param_1;
    if (param_1 != 0) {
      iVar14 = param_1 + 0x2ba4;
      iVar13 = *(int *)(iVar7 + param_1);
    }
  }
  uVar16 = extraout_r1;
  if ((*DAT_0042ea08 & 1) == 0) {
    uVar17 = FUN_003679b4(DAT_0042ea08);
    uVar16 = (int)((ulonglong)uVar17 >> 0x20);
    if ((int)uVar17 != 0) {
      FUN_0036788c(DAT_0042ea0c);
      uVar16 = DAT_0042ea14;
    }
  }
  local_34 = DAT_0042ea18;
  if (((*(char *)(DAT_0042ea18 + 0xf38) == '\0') || (piVar2[0xd] != 2 && piVar2[0xd] != 1)) &&
     (*(char *)(DAT_0042ea1c + iVar11) < '\x02')) {
    if (*(short *)(iVar11 + 0x104) == 0x4b) {
      uVar17 = FUN_0036e864(iVar11,0x38);
      uVar16 = (undefined4)((ulonglong)uVar17 >> 0x20);
      if ((int)uVar17 != 0) goto LAB_0042e034;
    }
  }
  else {
LAB_0042e034:
    FUN_003016e0(1,uVar16);
  }
  iVar7 = DAT_0042ea20;
  if (iVar11 != 0) {
    if (*(short *)(DAT_0042ea24 + iVar11) == 0) {
      local_38 = iVar11 + 0x5c00;
      cVar1 = *(char *)(iVar11 + 0x5c2d);
      bVar15 = cVar1 != '\0';
      if (!bVar15) {
        cVar1 = *(char *)(DAT_0042ea28 + iVar11);
      }
      if (bVar15 || cVar1 != '\0') goto LAB_0042e164;
      if (((*DAT_0042ea08 & 1) == 0) && (iVar8 = FUN_003679b4(DAT_0042ea08), iVar8 != 0)) {
        FUN_0036788c(DAT_0042ea0c);
      }
      if (((*(char *)(local_34 + 0xf38) != '\0') ||
          ((int)DAT_0042ea30 <= *(int *)(DAT_0042ea2c + 8))) ||
         ((DAT_0042ea30 <= *(ushort *)(iVar7 + 0xa0) ||
          ((((iVar8 = FUN_0037577c(iVar11), iVar8 != 0 || ('\x01' < *(char *)(local_38 + 0x74))) ||
            (*(short *)(iVar7 + 0x80) == 8 || *(short *)(iVar7 + 0x80) == 9)) ||
           ((*(short *)(iVar11 + 0x104) == 0x4b && (iVar8 = FUN_0036e864(iVar11,0x38), iVar8 != 0)))
           ))))) goto LAB_0042e164;
      uVar9 = piVar2[0x1a] & 0x1fbfffff;
    }
    else {
LAB_0042e164:
      uVar9 = piVar2[0x1a] | 0xe0400000;
    }
    piVar2[0x1a] = uVar9;
    if (iVar13 != 0 && iVar14 != 0) {
      iVar8 = FUN_00374be8(iVar11,0);
      if ((iVar8 == 0) && (*(short *)(*DAT_0042ea34 + 0x4b2) != 0x20)) {
        local_3c = iVar13 + 0x1000;
        uVar5 = (ushort)*(byte *)(iVar13 + 0x1749);
        bVar15 = uVar5 == 0;
        if (bVar15) {
          uVar5 = *(ushort *)(iVar14 + 0x230);
        }
        if ((((bVar15 && uVar5 == 0) || (iVar8 = FUN_00374be8(iVar11,0xc), iVar8 != 0)) ||
            (iVar8 = FUN_00374be8(iVar11,0), iVar8 != 0)) || (*(char *)(local_3c + 0x749) == '\x02')
           ) {
          uVar9 = piVar2[0x1a] | 0x10000000;
        }
        else {
          uVar9 = piVar2[0x1a] & 0xefffffff;
        }
        piVar2[0x1a] = uVar9;
      }
      else {
        piVar2[0x1a] = piVar2[0x1a] & 0xefffffff;
      }
      if ((*(uint *)(DAT_0042ea38 + iVar13) & 0x8000000) == 0) {
        piVar2[0x20] = 0;
      }
      else {
        piVar2[0x20] = 1;
      }
      if ((*(ushort *)(iVar13 + 0x90) & 1) == 0) {
        *(undefined1 *)(iVar7 + 0x75) = 0xff;
      }
    }
  }
  iVar8 = FUN_00374be8(iVar11,8);
  if (((iVar8 != 0) || (iVar8 = FUN_00374be8(iVar11,7), iVar8 != 0)) ||
     ((iVar8 = FUN_00374be8(param_1,0x12), iVar8 != 0 ||
      ((iVar8 = FUN_00374be8(iVar11,10), iVar8 != 0 ||
       (iVar8 = FUN_00374be8(iVar11,0xb), iVar8 != 0)))))) {
    *(undefined1 *)(iVar7 + 0x73) = 0xff;
    *(undefined1 *)(iVar7 + 0x72) = 0xff;
    *(undefined1 *)(iVar7 + 0x71) = 0xff;
    *(undefined1 *)(iVar7 + 0x70) = 0xff;
    *(undefined1 *)(iVar7 + 0x75) = 0xff;
  }
  iVar8 = FUN_00374be8(iVar11,0x10);
  if (iVar8 == 0) {
    iVar10 = FUN_00374be8(iVar11,0xc);
    iVar8 = DAT_0042ea2c;
    if (iVar10 != 0) {
      *(undefined1 *)(iVar7 + 0x75) = 0xff;
      if ((*(int *)(iVar8 + 4) != 0) &&
         ((ushort)((*(ushort *)(iVar8 + 0x8a) & *(ushort *)(DAT_0042ea3c + 2)) >>
                  *(sbyte *)(DAT_0042ea40 + 1)) == 2)) {
        *(undefined1 *)(iVar7 + 0x73) = 0xff;
        *(undefined1 *)(iVar7 + 0x72) = 0xff;
        *(undefined1 *)(iVar7 + 0x71) = 0xff;
        *(undefined1 *)(iVar7 + 0x70) = 0xff;
      }
      cVar1 = *(char *)(iVar8 + 0x81);
      if (((cVar1 != '\x11' && cVar1 != '\0') && cVar1 != 'E') && cVar1 != 'F') {
        *(undefined1 *)(iVar7 + 0x70) = 0xff;
      }
      cVar1 = *(char *)(iVar8 + 0x82);
      if (((cVar1 != '\x11' && cVar1 != '\0') && cVar1 != 'E') && cVar1 != 'F') {
        *(undefined1 *)(iVar7 + 0x71) = 0xff;
      }
      cVar1 = *(char *)(iVar8 + 0x83);
      if (((cVar1 != '\x11' && cVar1 != '\0') && cVar1 != 'E') && cVar1 != 'F') {
        *(undefined1 *)(iVar7 + 0x72) = 0xff;
      }
      cVar1 = *(char *)(iVar8 + 0x84);
      if (((cVar1 != '\x11' && cVar1 != '\0') && cVar1 != 'E') && cVar1 != 'F') {
        *(undefined1 *)(iVar7 + 0x73) = 0xff;
      }
    }
  }
  else {
    *(undefined1 *)(iVar7 + 0x73) = 0xff;
    *(undefined1 *)(iVar7 + 0x72) = 0xff;
    *(undefined1 *)(iVar7 + 0x71) = 0xff;
    *(undefined1 *)(iVar7 + 0x70) = 0xff;
    *(undefined1 *)(iVar7 + 0x75) = 0xff;
  }
  local_40 = iVar13 + 0x1000;
  if (*(int *)(iVar13 + 0x16f8) != 0) {
    iVar10 = FUN_00374be8(iVar11,0x14);
    iVar8 = DAT_0042ea2c;
    if (iVar10 != 0) {
      *(undefined1 *)(iVar7 + 0x75) = 0xff;
      iVar10 = 1;
      do {
        switch(*(undefined1 *)(iVar8 + iVar10 + 0x80)) {
        case 0x10:
        case 0x19:
        case 0x1b:
        case 0x1c:
        case 0x1d:
        case 0x1e:
        case 0x21:
        case 0x22:
        case 0x23:
        case 0x2d:
        case 0x2e:
        case 0x2f:
        case 0x30:
        case 0x31:
        case 0x32:
        case 0x33:
        case 0x34:
        case 0x35:
        case 0x36:
        case 0x37:
          *(undefined1 *)(iVar8 + iVar10 + 0x156f) = 0xff;
        }
        iVar10 = iVar10 + 1;
      } while (iVar10 < 5);
    }
    iVar8 = FUN_00374be8(iVar11,0x13);
    if (iVar8 != 0) {
      *(undefined1 *)(iVar7 + 0x73) = 0xff;
      *(undefined1 *)(iVar7 + 0x72) = 0xff;
      *(undefined1 *)(iVar7 + 0x71) = 0xff;
      *(undefined1 *)(iVar7 + 0x70) = 0xff;
      *(undefined1 *)(iVar7 + 0x75) = 0xff;
    }
  }
  if (*(short *)(iVar13 + 0x118) != 0) {
    *(undefined1 *)(iVar7 + 0x73) = 0xff;
    *(undefined1 *)(iVar7 + 0x72) = 0xff;
    *(undefined1 *)(iVar7 + 0x71) = 0xff;
    *(undefined1 *)(iVar7 + 0x70) = 0xff;
    *(undefined1 *)(iVar7 + 0x75) = 0xff;
  }
  if (iVar13 != 0) {
    piVar2[0x1c] = (uint)*(byte *)(local_40 + 0x749);
  }
  piVar2[0xe] = 0;
  piVar2[0x18] = 0;
  switch(piVar2[0xd]) {
  default:
    goto code_r0x0042f274;
  case 1:
    FUN_002f43d8(0);
    if (iVar11 != 0) {
      piVar2[0x1b] = (int)*(short *)(iVar11 + 0x104);
    }
    if (local_4c[0] == '\0') {
      piVar2[0xd] = 2;
    }
    goto code_r0x0042f274;
  case 2:
    if (iVar11 != 0) {
      FUN_00439114(piVar2[0xb],(int)*(short *)(iVar11 + 0x104));
    }
    iVar8 = FUN_00441658();
    if (iVar8 == 0) {
      uVar9 = FUN_002f008c();
      if ((((uVar9 & 0x80) == 0) && (uVar9 = FUN_002f008c(), (uVar9 & 0x40) == 0)) &&
         (uVar9 = FUN_002f008c(), (uVar9 & 0x10) == 0)) {
        uVar18 = FUN_002f008c();
        uVar16 = (undefined4)(uVar18 >> 0x20);
        if ((uVar18 & 0x20) == 0) goto LAB_0042e6bc;
      }
      uVar17 = FUN_002f00f4();
      uVar16 = (undefined4)((ulonglong)uVar17 >> 0x20);
      if ((int)uVar17 != 0) {
        FUN_002f009c();
        uVar16 = extraout_r1_01;
      }
    }
    else {
      uVar18 = FUN_002f5cc4();
      uVar16 = (undefined4)(uVar18 >> 0x20);
      if ((uVar18 & 0x80) == 0) {
        piVar2[0x1f] = 0;
      }
      else {
        iVar8 = piVar2[0x1f];
        piVar2[0x1f] = iVar8 + 1;
        if (0x1e < iVar8 + 1) {
          uVar17 = FUN_002f00f4();
          uVar16 = (undefined4)((ulonglong)uVar17 >> 0x20);
          if ((int)uVar17 != 0) {
            FUN_002f009c();
            piVar2[0x1f] = 0;
            uVar16 = extraout_r1_00;
          }
        }
      }
    }
LAB_0042e6bc:
    if ((*DAT_0042ea08 & 1) == 0) {
      uVar17 = FUN_003679b4(DAT_0042ea08);
      uVar16 = (int)((ulonglong)uVar17 >> 0x20);
      if ((int)uVar17 != 0) {
        FUN_0036788c(DAT_0042ea0c);
        uVar16 = DAT_0042ea14;
      }
    }
    if ((*(char *)(local_34 + 0xf38) == '\0') ||
       (iVar8 = FUN_002f43e8(*(char *)(local_34 + 0xf38),uVar16), uVar3 = DAT_0042ea48,
       uVar16 = DAT_0042ea44, iVar8 != 0)) {
      uVar16 = DAT_0042ea48;
      FUN_002f8b80(DAT_0042ea48,DAT_0042ea48,piVar2[1],1,0x14);
      FUN_002f8b80(uVar16,uVar16,piVar2[1],1,0x12);
      FUN_002f8b80(uVar16,uVar16,piVar2[1],1,0x13);
    }
    else {
      FUN_002f8b80(DAT_0042ea48,DAT_0042ea44,piVar2[1],1,0x14);
      FUN_002f8b80(uVar3,uVar16,piVar2[1],1,0x12);
      FUN_002f8b80(uVar3,uVar16,piVar2[1],1,0x13);
    }
    iVar8 = FUN_0035b164();
    if (iVar8 != 0) {
      FUN_002f8b80(DAT_0042ea48,DAT_0042ea44,piVar2[1],1,0x14);
    }
    iVar8 = FUN_0033f428(0xc0,0xca,0x40,0x26,1);
    if (iVar8 == 0) {
      iVar8 = FUN_0033f428(0x40,0xca,0x40,0x26,1);
      if (iVar8 == 0) {
        iVar8 = FUN_0033f428(0x80,0xca,0x40,0x26,1);
        if (iVar8 == 0) {
          iVar8 = FUN_0033f428(0,0xba,0x34,0x34,1);
          if (iVar8 == 0) {
            if (*(char *)(local_40 + 0x749) == '\0') {
              uVar9 = FUN_002f43e8();
              bVar15 = uVar9 == 0;
              if (bVar15) {
                uVar9 = piVar2[0x1a];
              }
              if (bVar15 && (uVar9 & 0x10000000) == 0) {
                iVar8 = FUN_0033f428(0,0,0x34,0x34,1);
joined_r0x0042e9f4:
                if (iVar8 != 0) {
                  iVar8 = 0xb;
                  goto LAB_0042e914;
                }
              }
            }
            else if ((*(char *)(local_40 + 0x749) == '\x01') && (iVar8 = FUN_002f43e8(), iVar8 == 0)
                    ) {
              iVar8 = FUN_0033f428(0,0,0x34,0x34,1);
              goto joined_r0x0042e9f4;
            }
          }
          else {
            iVar8 = FUN_002f43e8();
            if ((iVar8 == 0) && (iVar8 = FUN_002efff8(), iVar8 == 1)) {
              iVar8 = 10;
              goto LAB_0042e914;
            }
          }
        }
        else {
          uVar9 = FUN_002f43e8();
          bVar15 = uVar9 == 0;
          if (bVar15) {
            uVar9 = piVar2[0x1a];
          }
          if (((bVar15 && (uVar9 & 0x40000000) == 0) && (iVar8 = FUN_0035b164(), iVar8 != 1)) &&
             (iVar8 = FUN_00374be8(param_1,3), iVar8 == 0)) {
            iVar8 = 9;
            goto LAB_0042e914;
          }
        }
      }
      else {
        uVar9 = FUN_002f43e8();
        bVar15 = uVar9 == 0;
        if (bVar15) {
          uVar9 = piVar2[0x1a];
        }
        if ((bVar15 && (uVar9 & 0x80000000) == 0) && (iVar8 = FUN_00374be8(param_1,3), iVar8 == 0))
        {
          iVar8 = 8;
LAB_0042e914:
          piVar2[0xd] = iVar8;
        }
      }
      if (*(char *)((uint)*(byte *)(DAT_0042f540 + 7) + DAT_0042f544) == '\a') {
        FUN_002efea0(0,7);
      }
      else if (*(char *)((uint)*(byte *)(DAT_0042f540 + 8) + DAT_0042f544) == '\b') {
        FUN_002efea0(0,8);
      }
      piVar2[0x11] = 0;
      piVar2[0x12] = 0;
      piVar2[0xf] = 0;
      piVar2[0x10] = 0;
      piVar2[0x13] = 0;
      piVar2[0x14] = 0;
      iVar8 = FUN_002f43e8();
      if (iVar8 == 0) {
        iVar8 = FUN_0033f428(0x10a,2,0x34,0x34,1);
        cVar1 = '\0';
        if (iVar8 != 0) {
          cVar1 = *(char *)(DAT_0042ea2c + 0x83);
        }
        if ((iVar8 != 0 && cVar1 != -1) && ((piVar2[0x1a] & 0x4000000U) == 0)) {
          piVar2[0xf] = 1;
          piVar2[0xd] = 5;
          piVar2[0x11] = 1;
        }
        iVar8 = FUN_0033f428(0x10a,0xba,0x34,0x34,1);
        cVar1 = '\0';
        if (iVar8 != 0) {
          cVar1 = *(char *)(DAT_0042ea2c + 0x84);
        }
        if ((iVar8 != 0 && cVar1 != -1) && ((piVar2[0x1a] & 0x2000000U) == 0)) {
          piVar2[0x10] = 1;
          piVar2[0xd] = 6;
          piVar2[0x12] = 1;
        }
        iVar8 = FUN_0033f428(0x11c,0x43,0x29,0x29,1);
        cVar1 = '\0';
        if (iVar8 != 0) {
          cVar1 = *(char *)(DAT_0042ea2c + 0x82);
        }
        if ((iVar8 != 0 && cVar1 != -1) && ((piVar2[0x1a] & 0x1000000U) == 0)) {
          *(undefined4 *)(DAT_0042f548 + 0xc4) = 0x400;
          piVar2[0xd] = 3;
          piVar2[0x13] = 1;
        }
        iVar8 = FUN_0033f428(0x10a,0x6d,0x29,0x29,1);
        cVar1 = '\0';
        if (iVar8 != 0) {
          cVar1 = *(char *)(DAT_0042ea2c + 0x81);
        }
        if ((iVar8 != 0 && cVar1 != -1) && ((piVar2[0x1a] & 0x800000U) == 0)) {
          *(undefined4 *)(DAT_0042f548 + 0xc4) = 0x800;
          piVar2[0xd] = 4;
          piVar2[0x14] = 1;
        }
      }
      uVar9 = FUN_0033b5ec();
      if ((((uVar9 & 8) == 0) || ((piVar2[0x1a] & 0x400000U) != 0)) ||
         (iVar8 = FUN_0035b164(), iVar8 == 1)) goto code_r0x0042f274;
      FUN_002f43d8(1);
      iVar8 = 0xe;
      piVar2[0x17] = 0;
    }
    else {
      uVar9 = FUN_002f43e8();
      bVar15 = uVar9 == 0;
      if (bVar15) {
        uVar9 = piVar2[0x1a];
      }
      if ((!bVar15 || (uVar9 & 0x20000000) != 0) || (iVar8 = FUN_00374be8(param_1,3), iVar8 != 0))
      goto code_r0x0042f274;
      iVar8 = 7;
    }
    break;
  case 3:
    *(undefined4 *)(DAT_0042f548 + 0xc4) = 0x400;
    if ((local_4c[0] != '\0') && (iVar8 = FUN_002f43e8(), iVar8 != 1)) goto code_r0x0042f274;
    piVar2[0x13] = 0;
    goto LAB_0042ed10;
  case 4:
    *(undefined4 *)(DAT_0042f548 + 0xc4) = 0x800;
    if ((local_4c[0] != '\0') && (iVar8 = FUN_002f43e8(), iVar8 != 1)) goto code_r0x0042f274;
    piVar2[0x14] = 0;
LAB_0042ed10:
    iVar8 = 2;
    break;
  case 5:
    piVar2[0x11] = 1;
    piVar2[0xf] = 0;
    if ((local_4c[0] == '\0') || (iVar8 = FUN_002f43e8(), iVar8 == 1)) {
      piVar2[0xd] = 2;
      piVar2[0x11] = 0;
    }
    goto code_r0x0042f274;
  case 6:
    piVar2[0x12] = 1;
    piVar2[0x10] = 0;
    if ((local_4c[0] == '\0') || (iVar8 = FUN_002f43e8(), iVar8 == 1)) {
      piVar2[0xd] = 2;
      piVar2[0x12] = 0;
    }
    goto code_r0x0042f274;
  case 7:
    iVar8 = FUN_002f43e8();
    if ((iVar8 == 1) || ((piVar2[0x1a] & 0x20000000U) != 0)) goto LAB_0042f0c4;
    iVar8 = FUN_00374be8(param_1,3);
    if (iVar8 == 1) goto code_r0x0042f274;
    iVar8 = FUN_0033f428(0xc0,0xca,0x40,0x26,2);
    if (iVar8 == 0) goto joined_r0x0042f1a4;
    FUN_002f43d8(1);
    iVar8 = 0xc;
    piVar2[0x17] = 0;
    break;
  case 8:
    iVar8 = FUN_002f43e8();
    if ((iVar8 == 1) || ((piVar2[0x1a] & 0x80000000U) != 0)) goto LAB_0042f0c4;
    iVar8 = FUN_00374be8(param_1,3);
    if (iVar8 == 1) goto code_r0x0042f274;
    iVar8 = FUN_0033f428(0x40,0xca,0x40,0x26,2);
    if (iVar8 == 0) goto joined_r0x0042f1a4;
    FUN_002f43d8(1);
    iVar8 = 0x10;
    piVar2[0x17] = 0;
    break;
  case 9:
    iVar8 = FUN_002f43e8();
    if ((iVar8 == 1) || ((piVar2[0x1a] & 0x40000000U) != 0)) goto LAB_0042f0c4;
    iVar8 = FUN_00374be8(param_1,3);
    if (iVar8 == 1) goto code_r0x0042f274;
    iVar8 = FUN_0033f428(0x80,0xca,0x40,0x26,2);
    if (iVar8 == 0) goto joined_r0x0042f1a4;
    FUN_002f43d8(1);
    iVar8 = 0x14;
    piVar2[0x17] = 0;
    break;
  case 10:
    iVar8 = FUN_002f43e8();
    if ((iVar8 != 1) && (iVar8 = FUN_002efff8(), iVar8 != 0)) {
      iVar8 = FUN_0033f428(0,0xba,0x34,0x34,2);
      if (iVar8 == 0) goto joined_r0x0042f1a4;
      piVar2[0x18] = 1;
    }
    goto LAB_0042f0c4;
  case 0xb:
    iVar8 = FUN_002f43e8();
    if ((iVar8 != 1) && ((piVar2[0x1a] & 0x10000000U) == 0)) {
      iVar8 = FUN_0033f428(0,0,0x34,0x34,2);
      if (iVar8 != 0) {
        piVar2[0xe] = *(short *)(iVar14 + 0x230) + 1;
        piVar2[0xd] = 1;
        if (*(char *)(local_40 + 0x749) == '\x01') {
          *(undefined4 *)(DAT_0042f548 + 0xc4) = 1;
        }
        goto code_r0x0042f274;
      }
joined_r0x0042f1a4:
      if (local_4c[0] != '\0') goto code_r0x0042f274;
    }
    goto LAB_0042f0c4;
  case 0xc:
    iVar8 = FUN_002f43e8();
    if (iVar8 != 1) {
      iVar8 = FUN_002ef9b4();
      if (iVar8 != 0) {
        FUN_002fd84c(1);
        piVar2[0xd] = 0;
        FUN_002f8a34(1);
      }
      goto code_r0x0042f274;
    }
    goto code_r0x0042ee90;
  case 0xd:
    iVar8 = FUN_002ef684();
    goto joined_r0x0042efd8;
  case 0xe:
    iVar8 = FUN_002f43e8();
    if (iVar8 != 1) {
      iVar12 = FUN_002ef9b4();
      iVar4 = DAT_0042f550;
      iVar10 = DAT_0042f54c;
      iVar8 = DAT_0042ea2c;
      if (iVar12 != 0) {
        sVar6 = *(short *)(DAT_0042ea2c + 0x48) + *(short *)(iVar7 + 0x5c);
        *(short *)(DAT_0042ea2c + 0x48) = sVar6;
        *(undefined2 *)(iVar7 + 0x5c) = 0;
        iVar10 = DAT_0042f554 +
                 ((int)(*(uint *)(iVar8 + 0xb8) & *(uint *)(iVar10 + 0x10)) >> *(sbyte *)(iVar4 + 4)
                 ) * 2;
        if ((int)(uint)*(ushort *)(iVar10 + 0x20) < (int)sVar6) {
          *(undefined2 *)(iVar8 + 0x48) = *(undefined2 *)(iVar10 + 0x20);
        }
        else if (sVar6 < 0) {
          *(undefined2 *)(iVar8 + 0x48) = 0;
        }
        FUN_002fd84c(1);
        piVar2[0xd] = 0;
        FUN_0043ac88(0);
      }
      goto code_r0x0042f274;
    }
    FUN_002efd88();
    FUN_00343270(piVar2[1]);
    goto LAB_0042f0c4;
  case 0xf:
    iVar8 = FUN_002ef684();
    goto joined_r0x0042efd8;
  case 0x10:
    iVar8 = FUN_002f43e8();
    if (iVar8 != 1) {
      iVar8 = FUN_002ef9b4();
      if (iVar8 != 0) {
        FUN_002fd84c(1);
        piVar2[0xd] = 0;
        FUN_002f0444(1);
      }
      goto code_r0x0042f274;
    }
    goto code_r0x0042ee90;
  case 0x11:
    iVar8 = FUN_002ef684();
    goto joined_r0x0042efd8;
  case 0x12:
    iVar8 = FUN_002f43e8();
    bVar15 = iVar8 == 1;
    if (bVar15) {
      iVar8 = piVar2[0x1d];
    }
    if (!bVar15 || iVar8 != 0) {
      iVar8 = FUN_002ef9b4();
      if (iVar8 != 0) {
        piVar2[0xd] = 0;
        if (piVar2[0x1d] == 1) {
          FUN_0043c018(1);
        }
        else {
          if (piVar2[0x1d] != 2) goto code_r0x0042f274;
          FUN_0043bdc4();
        }
        piVar2[0x1d] = 0;
      }
      goto code_r0x0042f274;
    }
    goto code_r0x0042ee90;
  case 0x13:
    iVar8 = FUN_002ef684();
    goto joined_r0x0042efd8;
  case 0x14:
    iVar8 = FUN_002f43e8();
    if (iVar8 != 1) {
      iVar8 = FUN_002ef9b4();
      if (iVar8 != 0) {
        FUN_002fd84c(1);
        piVar2[0xd] = 0;
        FUN_002f8708(1);
      }
      goto code_r0x0042f274;
    }
code_r0x0042ee90:
    FUN_002efd88();
    FUN_00343270(piVar2[1]);
    piVar2[0xd] = 1;
    goto code_r0x0042f274;
  case 0x15:
    iVar8 = FUN_002ef684();
joined_r0x0042efd8:
    if (iVar8 != 0) {
      FUN_00343270(piVar2[1]);
      FUN_002efd88();
LAB_0042f0c4:
      piVar2[0xd] = 1;
    }
    goto code_r0x0042f274;
  case 0x16:
    iVar8 = FUN_002ef9b4();
    if (iVar8 == 0) goto code_r0x0042f274;
    FUN_002fd84c(1);
    iVar8 = 0x17;
  }
  piVar2[0xd] = iVar8;
code_r0x0042f274:
  FUN_004439a4();
  FUN_0033c25c(0);
  if (piVar2[9] != 0) {
    FUN_002f0e08();
  }
  if (piVar2[10] != 0) {
    FUN_002ef2c0();
    FUN_002eef74(piVar2[10]);
    FUN_002f0c84(piVar2[10]);
  }
  iVar4 = DAT_0042f550;
  iVar10 = DAT_0042f54c;
  iVar8 = DAT_0042ea2c;
  iVar12 = (int)*(short *)(DAT_0042ea2c + 0x48);
  if (iVar12 != piVar2[0x15]) {
    piVar2[0x15] = iVar12;
    if (iVar12 < (int)(uint)*(ushort *)
                             (DAT_0042f554 +
                              ((int)(*(uint *)(iVar8 + 0xb8) & *(uint *)(iVar10 + 0x10)) >>
                              (uint)*(byte *)(iVar4 + 4)) * 2 + 0x20)) {
      FUN_002fcb04(piVar2[7],iVar12,0);
    }
    else {
      FUN_002fcb04(piVar2[7],iVar12,1);
    }
  }
  if (iVar11 != 0) {
    local_58 = 0;
    local_5c = DAT_0042f558;
    FUN_002f9430(piVar2[1],&local_5c,1,0x1b);
    FUN_002fcc88(DAT_0042f560,DAT_0042f55c,piVar2[8]);
    iVar8 = DAT_0042f568;
    local_5c = DAT_0042f564;
    local_58 = DAT_0042f564;
    if (((int)*(short *)(iVar11 + 0x104) - 3U < 0xe) &&
       (-1 < *(char *)((uint)*(ushort *)(iVar7 + 0x92) + DAT_0042f568))) {
      FUN_002f9430(piVar2[1],&local_5c,1,0x1b);
      FUN_002fcb04(piVar2[8],(int)*(char *)((uint)*(ushort *)(iVar7 + 0x92) + iVar8),0);
      FUN_002fcc88(DAT_0042f570,DAT_0042f56c,piVar2[8]);
    }
  }
  FUN_0044423c();
  FUN_00444ce0();
  uVar16 = FUN_0044481c();
  if (iVar14 != 0 && iVar13 != 0) {
    bVar15 = *(short *)(iVar14 + 0x230) != 0;
    local_5c = uVar16;
    if (bVar15) {
      local_5c = DAT_0042f578;
    }
    local_64 = *(undefined4 *)(DAT_0042f574 + 8);
    local_60 = *(undefined4 *)(DAT_0042f574 + 0xc);
    local_58 = DAT_0042f564;
    if (!bVar15) {
      if (*(char *)(local_40 + 0x749) == '\x01') {
        local_5c = DAT_0042f578;
        local_58 = DAT_0042f57c;
      }
      else {
        local_5c = DAT_0042f580;
        local_58 = DAT_0042f564;
        if (*(short *)(*DAT_0042ea34 + 0x4b2) == 0x20) {
          local_58 = DAT_0042f57c;
        }
      }
    }
    FUN_002fc40c(piVar2[1],&local_5c,&local_64,1,0x1c);
  }
  if (iVar11 != 0 && iVar14 != 0) {
    FUN_00444544(iVar11,iVar14);
  }
  FUN_00444a90();
  FUN_002f8160(piVar2[5]);
  FUN_002f8160(piVar2[6]);
  FUN_002f94a8(piVar2[0xc]);
  iVar11 = piVar2[0x1b];
  if (iVar11 != 0xf) {
    if (iVar11 < 0x10) {
      if ((iVar11 != 10 && iVar11 != 0xd) && iVar11 != 0xe) {
        return;
      }
    }
    else if ((iVar11 != 0x19 && iVar11 != 0x1a) && iVar11 != 0x4f) {
      return;
    }
  }
  local_54 = DAT_0042f558;
  local_50 = DAT_0042f55c;
  FUN_002f9430(piVar2[1],&local_54,1,0);
  return;
}

