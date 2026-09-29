// OoT3D decomp @ 00458aa0  name=FUN_00458aa0  size=1576

void FUN_00458aa0(int param_1,undefined4 param_2)

{
  short sVar1;
  undefined1 uVar2;
  short *psVar3;
  int *piVar4;
  ushort *puVar5;
  short *psVar6;
  undefined4 uVar7;
  ushort uVar8;
  int iVar9;
  int iVar10;
  uint uVar11;
  int iVar12;
  ushort *puVar13;
  char cVar14;
  int iVar15;
  int iVar16;
  uint in_fpscr;
  float fVar17;
  undefined8 uVar18;

  puVar13 = (ushort *)(param_1 + 0x318c);
  if ((*DAT_00458f94 & 1) == 0) {
    uVar18 = FUN_003679b4(DAT_00458f94);
    param_2 = (undefined4)((ulonglong)uVar18 >> 0x20);
    if ((int)uVar18 != 0) {
      FUN_0036788c(DAT_00458f98);
      param_2 = DAT_00458fa0;
    }
  }
  iVar15 = *(int *)(DAT_00458fa4 + 0x2d4);
  if (*puVar13 - 3 < 4) {
    *(undefined4 *)(DAT_00458fa8 + param_1) = 0;
    FUN_0032e780(0,param_2);
    FUN_002f43d8(1);
  }
  uVar7 = DAT_004590ec;
  piVar4 = DAT_00458fb0;
  psVar3 = DAT_00458fac;
  uVar8 = *puVar13;
  if (uVar8 == 6) {
    return;
  }
  if (uVar8 < 7) {
    switch(uVar8) {
    default:
      goto switchD_00458b58_caseD_0;
    case 1:
      FUN_003725e0(param_1);
      *(undefined2 *)((int)piVar4 + 0x155e) = 0;
      *(undefined2 *)((int)piVar4 + 0x1562) = 0;
      puVar5 = DAT_00458fbc;
      iVar15 = DAT_00458fb4;
      *(ushort *)(piVar4 + 0x563) = *(ushort *)(piVar4 + 0x563) & 0xfffe;
      psVar6 = DAT_00458fc0;
      iVar9 = DAT_00458fb8;
      uVar11 = (uint)*(byte *)(iVar15 + 0x2d);
      uVar8 = *puVar5;
      if (*(byte *)(uVar11 + DAT_00458fb8) == uVar8) {
        uVar2 = (undefined1)*DAT_00458fc0;
        *(undefined1 *)((uint)*(byte *)(iVar15 + *DAT_00458fc0) + DAT_00458fb8) = uVar2;
        if (*(byte *)((int)piVar4 + 0x81) == uVar8) {
          *(undefined1 *)((int)piVar4 + 0x81) = uVar2;
        }
        if (*(byte *)((int)piVar4 + 0x82) == uVar8) {
          *(undefined1 *)((int)piVar4 + 0x82) = uVar2;
        }
        if (*(byte *)((int)piVar4 + 0x83) == uVar8) {
          *(undefined1 *)((int)piVar4 + 0x83) = uVar2;
        }
      }
      uVar8 = puVar5[1];
      if (*(byte *)(uVar11 + iVar9) == uVar8) {
        sVar1 = psVar6[1];
        uVar2 = (undefined1)sVar1;
        *(undefined1 *)((uint)*(byte *)(iVar15 + sVar1) + iVar9) = uVar2;
        if (*(byte *)((int)piVar4 + 0x81) == uVar8) {
          *(undefined1 *)((int)piVar4 + 0x81) = uVar2;
        }
        if (*(byte *)((int)piVar4 + 0x82) == uVar8) {
          *(undefined1 *)((int)piVar4 + 0x82) = uVar2;
        }
        if (*(byte *)((int)piVar4 + 0x83) == uVar8) {
          *(undefined1 *)((int)piVar4 + 0x83) = uVar2;
        }
      }
      uVar8 = puVar5[2];
      if (*(byte *)(uVar11 + iVar9) == uVar8) {
        sVar1 = psVar6[2];
        uVar2 = (undefined1)sVar1;
        *(undefined1 *)((uint)*(byte *)(iVar15 + sVar1) + iVar9) = uVar2;
        if (*(byte *)((int)piVar4 + 0x81) == uVar8) {
          *(undefined1 *)((int)piVar4 + 0x81) = uVar2;
        }
        if (*(byte *)((int)piVar4 + 0x82) == uVar8) {
          *(undefined1 *)((int)piVar4 + 0x82) = uVar2;
        }
        if (*(byte *)((int)piVar4 + 0x83) == uVar8) {
          *(undefined1 *)((int)piVar4 + 0x83) = uVar2;
        }
      }
      cVar14 = (char)piVar4[0x20];
      if (((cVar14 != ';' && cVar14 != '<') && cVar14 != '=') && cVar14 != 'U') {
        if (*(char *)((int)piVar4 + 0x156f) == '\0') {
          *(undefined1 *)(piVar4 + 0x20) = 0xff;
        }
        else {
          *(char *)(piVar4 + 0x20) = *(char *)((int)piVar4 + 0x156f);
        }
      }
      fVar17 = (float)VectorSignedToFloat((int)*(short *)(*DAT_00458fc4 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      *(short *)((int)piVar4 + 0x1552) = (short)(int)(DAT_00458fc8 / fVar17 + DAT_00458fcc);
      *(undefined2 *)(piVar4 + 0x13) = 0;
      piVar4[0x556] = 0xff;
      *(undefined1 *)((int)piVar4 + 0x156e) = 0xff;
      *(undefined2 *)((int)piVar4 + 0x158a) = 0;
      *(undefined2 *)(piVar4 + 0x563) = 0;
      *(undefined2 *)((int)piVar4 + 0x158e) = 0;
      *(undefined2 *)(piVar4 + 0x564) = 0;
      *(undefined1 *)(piVar4 + 0x55d) = 0;
      *(undefined1 *)((int)piVar4 + 0x1573) = 0;
      *(undefined1 *)((int)piVar4 + 0x1572) = 0;
      *(undefined1 *)((int)piVar4 + 0x1571) = 0;
      *(undefined1 *)(piVar4 + 0x55c) = 0;
      *(undefined1 *)((int)piVar4 + 0x156f) = 0;
      *(undefined1 *)((int)piVar4 + 0x1575) = 0;
      *(undefined2 *)(piVar4 + 0x55f) = 0;
      *(undefined2 *)((int)piVar4 + 0x157a) = 0;
      *(undefined2 *)(piVar4 + 0x55e) = 0;
      *(undefined1 *)((int)piVar4 + 0x1576) = 0;
      FUN_002d9f68(param_1);
      *psVar3 = 0x14;
      uVar8 = 2;
      break;
    case 3:
      sVar1 = *DAT_00458fac;
      *DAT_00458fac = sVar1 + -1;
      if ((short)(sVar1 + -1) != 0) {
        return;
      }
      *(undefined2 *)(param_1 + 0x309c) = 8;
      *puVar13 = 4;
      iVar9 = FUN_0035b164();
      if (iVar9 != 0) {
        if (((*DAT_00458f94 & 1) == 0) && (iVar15 = FUN_003679b4(DAT_00458f94), iVar15 != 0)) {
          FUN_0036788c(DAT_00458f98);
        }
        iVar15 = DAT_00458fd0;
        iVar9 = 0;
        iVar12 = DAT_00458fd0 + 0x918;
        do {
          iVar16 = iVar12 + iVar9 * 4;
          iVar9 = iVar9 + 1;
          iVar10 = *(int *)(iVar16 + 0x418);
          if (iVar10 != 0) {
            *(undefined1 *)(iVar10 + 0x6c) = 0;
          }
          iVar10 = *(int *)(iVar16 + 0x818);
          if (iVar10 != 0) {
            *(undefined1 *)(iVar10 + 0x6c) = 0;
          }
        } while (iVar9 < 0x100);
        *(undefined1 *)(iVar15 + 0xd) = 0;
        *(undefined4 *)(iVar15 + 0x3e4) = 0xffffffff;
        *(undefined1 *)(iVar15 + 8) = 9;
        *(undefined1 *)(iVar15 + 0xb) = 0;
        *(undefined1 *)(iVar15 + 0xc) = 0;
        return;
      }
      FUN_002e0f7c();
      FUN_0047ff4c(iVar15);
      uVar8 = 5;
      break;
    case 5:
      if (*(char *)(iVar15 + 8) == '\x11') {
        cVar14 = *(char *)(iVar15 + 9);
      }
      else {
        cVar14 = '\0';
      }
      if (cVar14 == '\x01' || cVar14 == '\x03') {
        FUN_002e62dc(param_1);
        iVar15 = *piVar4;
        iVar9 = iVar15 - DAT_00458fd4;
        if (iVar15 == DAT_00458fd4) {
          iVar12 = 4;
LAB_00458ec4:
          *piVar4 = iVar12;
        }
        else {
          if (iVar15 <= DAT_00458fd4) {
            iVar12 = DAT_00458fd8;
            if (iVar15 != 0xc) {
              if (iVar15 == 0x8d) {
                iVar12 = 0x82;
              }
              else if (iVar15 == 0x301) {
                iVar12 = 0x28;
              }
              else {
                iVar12 = DAT_00458fdc;
                if (iVar15 != 0x305) goto LAB_00458ec8;
              }
            }
            goto LAB_00458ec4;
          }
          if (iVar9 != 4) {
            if (iVar9 == 8) {
              iVar12 = 0x37;
            }
            else if (iVar9 == 0xc) {
              iVar12 = 0x10;
            }
            else {
              iVar12 = DAT_00458fe0;
              if (iVar9 != 0x14) goto LAB_00458ec8;
            }
            goto LAB_00458ec4;
          }
          *piVar4 = 0;
        }
LAB_00458ec8:
        FUN_0036f4f0(param_1);
        piVar4[0x53b] = -2;
        *(undefined1 *)((int)piVar4 + 0x15ab) = 2;
        *(undefined2 *)(piVar4 + 0x11) = 0x30;
        FUN_0032c5dc(10);
        if (cVar14 == '\x03') {
          if (((*DAT_00458f94 & 1) == 0) && (iVar15 = FUN_003679b4(DAT_00458f94), iVar15 != 0)) {
            FUN_0036788c(DAT_00458f98);
          }
          FUN_00480408(DAT_00458fe4,param_1);
          *piVar4 = (int)*(short *)(DAT_00458fe8 + param_1);
          *(undefined2 *)(piVar4 + 0x570) = *(undefined2 *)(param_1 + 0x104);
        }
        else {
          *(undefined2 *)((int)piVar4 + 0x15b2) = 0;
          *(undefined2 *)(piVar4 + 0x560) = 0;
          *(undefined2 *)((int)piVar4 + 0x1582) = 0;
          *(undefined2 *)(piVar4 + 0x561) = 0;
          *(short *)((int)piVar4 + 0x1586) = (short)*(char *)((int)piVar4 + 0x47);
          *(undefined1 *)((int)piVar4 + 0x47) = 0;
          *(undefined1 *)((int)piVar4 + 0x46) = 0;
        }
        uVar8 = *puVar13 + 1;
      }
      else {
        if (cVar14 != '\x02') {
          return;
        }
        *(undefined1 *)(param_1 + 0x101) = 0;
        *(undefined4 *)(param_1 + 0xc) = uVar7;
        *(undefined4 *)(param_1 + 0x10) = 0x2e8;
        FUN_00331754(0);
        uVar8 = *puVar13 + 1;
      }
    }
    goto LAB_0045906c;
  }
  switch(uVar8) {
  case 0x14:
    *puVar13 = 0x15;
    *psVar3 = 0;
    FUN_002d9f68(param_1);
    FUN_00338cd8(0x20);
    return;
  case 0x15:
    uVar8 = 0x16;
    *DAT_00458fac = 0x32;
    break;
  case 0x16:
    sVar1 = *DAT_00458fac;
    *DAT_00458fac = sVar1 + -1;
    if ((short)(sVar1 + -1) != 0) {
      return;
    }
    *psVar3 = 0x40;
    uVar8 = 0x17;
    break;
  case 0x17:
    sVar1 = *DAT_00458fac;
    *DAT_00458fac = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      *psVar3 = 0x32;
      *puVar13 = 0x18;
    }
    return;
  case 0x18:
    FUN_002fd84c(0);
    FUN_0047a2e8(param_1);
    sVar1 = *psVar3;
    *psVar3 = sVar1 + -1;
    if ((short)(sVar1 + -1) == 0) {
      *puVar13 = 0;
      iVar15 = DAT_004590f4;
      uVar7 = DAT_004590f0;
      *(undefined1 *)(param_1 + 0x31a7) = *(undefined1 *)(param_1 + 0x31b8);
      *(undefined4 *)(param_1 + 0x3214) = uVar7;
      *(undefined2 *)(iVar15 + param_1) = 0;
      return;
    }
  default:
    goto switchD_00458b58_caseD_0;
  }
LAB_0045906c:
  *puVar13 = uVar8;
switchD_00458b58_caseD_0:
  return;
}
