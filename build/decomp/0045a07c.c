// OoT3D decomp @ 0045a07c  name=FUN_0045a07c  size=2892

void FUN_0045a07c(int param_1)

{
  ushort uVar1;
  undefined1 uVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  int iVar6;
  short *psVar7;
  char cVar8;
  undefined2 uVar9;
  short sVar10;
  short sVar11;
  short sVar12;
  int iVar13;
  uint uVar14;
  undefined4 uVar15;
  int iVar16;
  ushort *puVar17;
  bool bVar18;
  bool bVar19;
  uint in_fpscr;
  float fVar20;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  float local_38;
  int local_34;
  int local_30;

  local_30 = param_1 + 0x2ba4;
  iVar16 = param_1 + 0x28a0;
  local_34 = *(int *)(DAT_0045a3b0 + param_1);
  if (*(short *)(*DAT_0045a3b4 + 400) != 2 && *(short *)(*DAT_0045a3b4 + 400) != 3) {
    FUN_0047b124(param_1 + 0x20f8,param_1);
  }
  iVar6 = DAT_0045a3c4;
  fVar5 = DAT_0045a3c0;
  fVar4 = DAT_0045a3bc;
  iVar3 = DAT_0045a3b8;
  if ((*(short *)(DAT_0045a3b8 + 0x62) == 5) && (iVar13 = FUN_003769d8(iVar16), iVar13 == 5)) {
    fVar20 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0045a3b4 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(iVar6 + 0x1c) = (short)(int)(fVar4 / fVar20 + fVar5);
    *(undefined4 *)(iVar3 + -0x14f8) = 0;
    *(undefined2 *)(iVar3 + 0x62) = 0;
    cVar8 = *(char *)(iVar3 + -0x1480);
    if (((cVar8 != ';' && cVar8 != '<') && cVar8 != '=') && cVar8 != 'U') {
      cVar8 = *(char *)(DAT_0045a3c8 + 0x56f);
      if (cVar8 == '\0') {
        cVar8 = -1;
      }
      *(char *)(iVar3 + -0x1480) = cVar8;
    }
    iVar13 = DAT_0045a3cc;
    iVar16 = 0;
    do {
      puVar17 = (ushort *)(DAT_0045a3d0 + iVar16 * 2);
      if ((ushort)*(byte *)((uint)*(byte *)(iVar13 + 0x2d) + iVar3 + -0x1474) == *puVar17) {
        *(ushort *)(iVar3 + 0x8a) = *(ushort *)(iVar3 + 0x8a) & 0x7f80;
        FUN_003716f0(param_1,(int)*(short *)(DAT_0045a3d4 + iVar16 * 2),0x14,7);
        sVar11 = *(short *)(DAT_0045a3d8 + iVar16 * 2);
        uVar2 = (undefined1)sVar11;
        *(undefined1 *)((uint)*(byte *)(iVar13 + sVar11) + iVar3 + -0x1474) = uVar2;
        uVar1 = *puVar17;
        if (*(byte *)(iVar3 + -0x147f) == uVar1) {
          *(undefined1 *)(iVar3 + -0x147f) = uVar2;
        }
        if (*(byte *)(iVar3 + -0x147e) == uVar1) {
          *(undefined1 *)(iVar3 + -0x147e) = uVar2;
        }
        if (*(byte *)(iVar3 + -0x147d) == uVar1) {
          *(undefined1 *)(iVar3 + -0x147d) = uVar2;
        }
      }
      iVar16 = iVar16 + 1;
    } while (iVar16 < 3);
  }
  uVar14 = FUN_003695f8();
  bVar18 = uVar14 != 0;
  if (!bVar18) {
    uVar14 = (uint)*(ushort *)(DAT_0045a3dc + param_1);
  }
  if ((bVar18 || uVar14 != 0) || (iVar13 = FUN_00366748(param_1), iVar13 != 0)) goto LAB_0045abc4;
  uVar14 = *(uint *)(local_34 + 0x1714);
  bVar18 = (uVar14 & 0x1000000) == 0;
  if (bVar18) {
    iVar16 = param_1 + 0x5c00;
    uVar14 = (uint)*(byte *)(param_1 + 0x5c2d);
  }
  bVar19 = bVar18 && uVar14 == 0;
  if (bVar18 && uVar14 == 0) {
    bVar19 = *(char *)(DAT_0045a3e0 + param_1) == '\0';
  }
  if ((!bVar19) || (iVar13 = FUN_0037577c(param_1), iVar13 != 0)) goto LAB_0045abc4;
  uVar14 = (uint)*(ushort *)(iVar3 + 0x94);
  bVar18 = SBORROW4(uVar14,1);
  iVar13 = uVar14 - 1;
  if (uVar14 != 1) {
    bVar18 = SBORROW4((int)*(char *)(iVar16 + 0x74),2);
    iVar13 = *(char *)(iVar16 + 0x74) + -2;
  }
  if ((iVar13 < 0 == bVar18) ||
     ((*(short *)(param_1 + 0x104) == 0x4b && (iVar16 = FUN_0036e864(param_1,0x38), iVar16 != 0))))
  goto LAB_0045abc4;
  switch(*(undefined2 *)(iVar3 + 0x5e)) {
  default:
    switch(*(undefined2 *)(iVar3 + 0x62)) {
    case 1:
    case 7:
      *(undefined2 *)(iVar6 + 0x1c) = 0x1e;
      *(undefined2 *)(iVar6 + 0x1a) = 0x1e;
      *(undefined2 *)(iVar3 + 0x68) = 0x8c;
      *(undefined2 *)(iVar3 + 0x6c) = 0x50;
      if (*(short *)(iVar3 + 0x62) == 1) {
        uVar9 = 2;
      }
      else {
        uVar9 = 8;
      }
LAB_0045a7c4:
      *(undefined2 *)(iVar3 + 0x62) = uVar9;
      break;
    case 2:
    case 8:
      sVar11 = *(short *)(iVar6 + 0x1c) + -1;
      *(short *)(iVar6 + 0x1c) = sVar11;
      if (sVar11 == 0) {
        *(undefined2 *)(iVar6 + 0x1c) = 0x1e;
        if (*(short *)(iVar3 + 0x62) == 2) {
          uVar9 = 3;
        }
        else {
          uVar9 = 9;
        }
        goto LAB_0045a7c4;
      }
      break;
    case 3:
    case 9:
      sVar11 = *(short *)(iVar3 + 0x68);
      sVar12 = *(short *)(iVar6 + 0x1c);
      sVar10 = FUN_00368d94(sVar11 + -0x1a);
      *(short *)(iVar3 + 0x68) = sVar11 - sVar10;
      sVar11 = *(short *)(iVar3 + -0x14be);
      if (sVar11 < 0xa1) {
        sVar10 = FUN_00368d94(*(short *)(iVar3 + 0x6c) + -0x2e,(int)sVar12);
      }
      else {
        sVar10 = FUN_00368d94(*(short *)(iVar3 + 0x6c) + -0x36,(int)sVar12);
      }
      *(short *)(iVar3 + 0x6c) = *(short *)(iVar3 + 0x6c) - sVar10;
      *(short *)(iVar6 + 0x1c) = sVar12 + -1;
      if ((short)(sVar12 + -1) != 0) goto switchD_0045a730_caseD_4;
      *(undefined2 *)(iVar6 + 0x1c) = 0x1e;
      *(undefined2 *)(iVar3 + 0x68) = 0x1a;
      if (sVar11 < 0xa1) {
        uVar9 = 0x2e;
      }
      else {
        uVar9 = 0x36;
      }
      *(undefined2 *)(iVar3 + 0x6c) = uVar9;
      if (*(short *)(iVar3 + 0x62) == 3) {
        uVar9 = 4;
      }
      else {
        uVar9 = 10;
      }
      *(undefined2 *)(iVar3 + 0x62) = uVar9;
LAB_0045a888:
      if (*(short *)(iVar3 + -0x14be) < 0xa1) {
        uVar9 = 0x2e;
      }
      else {
        uVar9 = 0x36;
      }
      *(undefined2 *)(iVar3 + 0x6c) = uVar9;
      goto LAB_0045a89c;
    case 4:
    case 10:
switchD_0045a730_caseD_4:
      if (*(short *)(iVar3 + 0x62) == 4 || *(short *)(iVar3 + 0x62) == 10) goto LAB_0045a888;
LAB_0045a89c:
      sVar11 = *(short *)(iVar3 + 0x62);
      if ((sVar11 < 3) ||
         (sVar12 = *(short *)(iVar6 + 0x1a) + -1, *(short *)(iVar6 + 0x1a) = sVar12, sVar12 != 0))
      break;
      *(undefined2 *)(iVar6 + 0x1a) = 0x1e;
      if (sVar11 == 4) {
        sVar11 = *(short *)(iVar3 + 100) + -1;
        *(short *)(iVar3 + 100) = sVar11;
        if (sVar11 < 1) {
          iVar16 = FUN_0036e864(param_1,0x37);
          uVar15 = DAT_0045ac80;
          if ((iVar16 != 0) &&
             (sVar11 = *(short *)(param_1 + 0x104),
             ((sVar11 == 0x4f || sVar11 == 0x1a) || sVar11 == 0xe) || sVar11 == 0xf)) {
            fVar20 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0045a3b4 + 0x110),
                                                (byte)(in_fpscr >> 0x15) & 3);
            *(short *)(iVar6 + 0x1c) = (short)(int)(fVar4 / fVar20 + fVar5);
            uVar9 = 6;
            goto LAB_0045aa94;
          }
          fVar20 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0045a3b4 + 0x110),
                                              (byte)(in_fpscr >> 0x15) & 3);
          *(short *)(iVar6 + 0x1c) = (short)(int)(fVar4 / fVar20 + fVar5);
          *(undefined2 *)(iVar3 + 0x62) = 5;
          *(undefined4 *)(iVar3 + -0x14f8) = 0;
          FUN_00367c7c(param_1,uVar15,0);
          FUN_0036e980(param_1,0,8);
        }
        else if (sVar11 < 0x3d) {
          uVar15 = DAT_0045ac7c;
          if ((sVar11 < 0xb) || (uVar15 = DAT_0045ac84, (DAT_0045ac6c[4] & 1U) != 0)) {
            local_44 = DAT_0045ac70;
            FUN_0037547c(uVar15,0,4,DAT_0045ac74,DAT_0045ac74);
          }
        }
        else if (DAT_0045ac6c[4] == 1) {
          local_44 = DAT_0045ac70;
          FUN_0037547c(DAT_0045ac78,0,4,DAT_0045ac74,DAT_0045ac74);
        }
      }
      else {
        sVar11 = *(short *)(iVar3 + 100) + 1;
        *(short *)(iVar3 + 100) = sVar11;
        if (((*(ushort *)(iVar3 + 0x8c) & 1) != 0) && (sVar11 == 0xf0)) {
          FUN_00367c7c(param_1,DAT_0045ac88,0);
          *(ushort *)(iVar3 + 0x8c) = *(ushort *)(iVar3 + 0x8c) & 0xfffe;
          uVar9 = 0;
LAB_0045aa94:
          *(undefined2 *)(iVar3 + 0x62) = uVar9;
        }
      }
      uVar14 = (uint)*(short *)(iVar3 + 100);
      iVar16 = (int)((longlong)(int)uVar14 * (longlong)DAT_0045ac8c + ((ulonglong)uVar14 << 0x20) >>
                    0x20);
      if (uVar14 + ((iVar16 >> 5) - (iVar16 >> 0x1f)) * -0x3c != 0) break;
      goto LAB_0045aac0;
    case 6:
      sVar11 = *(short *)(iVar6 + 0x1c) + -1;
      *(short *)(iVar6 + 0x1c) = sVar11;
      if (sVar11 == 0) {
        *(undefined2 *)(iVar3 + 0x62) = 0;
      }
    }
    break;
  case 1:
    *(undefined2 *)(iVar6 + 0x18) = 0x1e;
    *(undefined2 *)(iVar6 + 0x16) = 0x1e;
    *(short *)(iVar3 + 0x60) = *(short *)(iVar3 + -0x14bc) >> 1;
    *(undefined2 *)(iVar3 + 0x5e) = 2;
    goto LAB_0045ab14;
  case 2:
    sVar11 = *(short *)(iVar6 + 0x18) + -1;
    *(short *)(iVar6 + 0x18) = sVar11;
    if (sVar11 == 0) {
      *(undefined2 *)(iVar6 + 0x18) = 0x1e;
      uVar9 = 3;
      goto LAB_0045a374;
    }
    goto LAB_0045ab14;
  case 3:
  case 7:
    sVar11 = *(short *)(iVar3 + 0x66);
    sVar12 = *(short *)(iVar6 + 0x18);
    sVar10 = FUN_00368d94(sVar11 + -0x1a);
    *(short *)(iVar3 + 0x66) = sVar11 - sVar10;
    sVar11 = *(short *)(iVar3 + -0x14be);
    if (sVar11 < 0xa1) {
      sVar10 = FUN_00368d94(*(short *)(iVar3 + 0x6a) + -0x2e,(int)sVar12);
    }
    else {
      sVar10 = FUN_00368d94(*(short *)(iVar3 + 0x6a) + -0x36,(int)sVar12);
    }
    *(short *)(iVar3 + 0x6a) = *(short *)(iVar3 + 0x6a) - sVar10;
    *(short *)(iVar6 + 0x18) = sVar12 + -1;
    if ((short)(sVar12 + -1) != 0) goto switchD_0045a2c4_caseD_4;
    *(undefined2 *)(iVar6 + 0x18) = 0x1e;
    *(undefined2 *)(iVar3 + 0x66) = 0x1a;
    if (sVar11 < 0xa1) {
      uVar9 = 0x2e;
    }
    else {
      uVar9 = 0x36;
    }
    *(undefined2 *)(iVar3 + 0x6a) = uVar9;
    if (*(short *)(iVar3 + 0x5e) == 3) {
      uVar9 = 4;
    }
    else {
      uVar9 = 8;
    }
    *(undefined2 *)(iVar3 + 0x5e) = uVar9;
LAB_0045a4a0:
    if (*(short *)(iVar3 + -0x14be) < 0xa1) {
      uVar9 = 0x2e;
    }
    else {
      uVar9 = 0x36;
    }
    *(undefined2 *)(iVar3 + 0x6a) = uVar9;
    goto LAB_0045a4b4;
  case 4:
  case 8:
switchD_0045a2c4_caseD_4:
    if (*(short *)(iVar3 + 0x5e) == 4 || *(short *)(iVar3 + 0x5e) == 8) goto LAB_0045a4a0;
LAB_0045a4b4:
    if (((2 < *(short *)(iVar3 + 0x5e)) && (iVar16 = FUN_00366748(param_1), iVar16 == 0)) &&
       (sVar11 = *(short *)(iVar6 + 0x16) + -1, *(short *)(iVar6 + 0x16) = sVar11, sVar11 == 0)) {
      if (*(short *)(iVar3 + 0x60) != 0) {
        *(short *)(iVar3 + 0x60) = *(short *)(iVar3 + 0x60) + -1;
      }
      *(undefined2 *)(iVar6 + 0x16) = 0x1e;
      sVar11 = *(short *)(iVar3 + 0x60);
      if (sVar11 == 0) {
        *(undefined2 *)(iVar3 + 0x5e) = 10;
        if (*(short *)(iVar6 + 0x10) != 0) {
          *(undefined2 *)(iVar3 + -0x14bc) = 0;
          (**(code **)(DAT_0045ac68 + param_1))(param_1,0xfffffffe);
        }
        *(undefined2 *)(iVar6 + 0x10) = 0;
      }
      else {
        if (sVar11 < 0x3d) {
          if (sVar11 < 0xb) {
            local_44 = DAT_0045ac70;
            uVar15 = DAT_0045ac7c;
          }
          else {
            if ((DAT_0045ac6c[4] & 1U) == 0) break;
LAB_0045aac0:
            local_44 = DAT_0045ac70;
            uVar15 = DAT_0045ac84;
          }
        }
        else {
          if (DAT_0045ac6c[4] != 1) break;
          local_44 = DAT_0045ac70;
          uVar15 = DAT_0045ac78;
        }
        DAT_0045ac70 = local_44;
        FUN_0037547c(uVar15,0,4,DAT_0045ac74,DAT_0045ac74);
      }
    }
    break;
  case 5:
  case 0xb:
    *(undefined2 *)(iVar6 + 0x18) = 0x1e;
    *(undefined2 *)(iVar6 + 0x16) = 0x1e;
    if (*(short *)(iVar3 + 0x5e) == 5) {
      uVar9 = 6;
    }
    else {
      uVar9 = 0xc;
    }
LAB_0045a374:
    *(undefined2 *)(iVar3 + 0x5e) = uVar9;
    goto LAB_0045ab14;
  case 6:
  case 0xc:
    sVar11 = *(short *)(iVar6 + 0x18) + -1;
    *(short *)(iVar6 + 0x18) = sVar11;
    if (sVar11 == 0) {
      *(undefined2 *)(iVar6 + 0x18) = 0x1e;
      if (*(short *)(iVar3 + 0x5e) == 6) {
        uVar9 = 7;
      }
      else {
        uVar9 = 0xd;
      }
      goto LAB_0045a374;
    }
    break;
  case 10:
    sVar11 = *(short *)(iVar3 + 0x62);
    if (sVar11 == 0) {
      *(undefined2 *)(iVar3 + 0x5e) = 0;
      goto LAB_0045abc4;
    }
    *(undefined2 *)(iVar6 + 0x1c) = 0x1e;
    *(undefined2 *)(iVar6 + 0x1a) = 0x1e;
    *(undefined2 *)(iVar3 + 0x68) = 0x8c;
    if (sVar11 < 7) {
      uVar9 = 2;
    }
    else {
      uVar9 = 8;
    }
    *(undefined2 *)(iVar3 + 0x6c) = 0x50;
    *(undefined2 *)(iVar3 + 0x62) = uVar9;
    *(undefined2 *)(iVar3 + 0x5e) = 0;
    goto LAB_0045ab08;
  case 0xd:
    sVar11 = *(short *)(iVar3 + 0x66);
    sVar12 = *(short *)(iVar6 + 0x18);
    sVar10 = FUN_00368d94(sVar11 + -0x1a);
    *(short *)(iVar3 + 0x66) = sVar11 - sVar10;
    sVar11 = *(short *)(iVar3 + -0x14be);
    if (sVar11 < 0xa1) {
      sVar10 = FUN_00368d94(*(short *)(iVar3 + 0x6a) + -0x2e,(int)sVar12);
    }
    else {
      sVar10 = FUN_00368d94(*(short *)(iVar3 + 0x6a) + -0x36,(int)sVar12);
    }
    *(short *)(iVar3 + 0x6a) = *(short *)(iVar3 + 0x6a) - sVar10;
    *(short *)(iVar6 + 0x18) = sVar12 + -1;
    if ((short)(sVar12 + -1) == 0) {
      *(undefined2 *)(iVar6 + 0x18) = 0x1e;
      *(undefined2 *)(iVar3 + 0x66) = 0x1a;
      if (sVar11 < 0xa1) {
        uVar9 = 0x2e;
      }
      else {
        uVar9 = 0x36;
      }
      *(undefined2 *)(iVar3 + 0x6a) = uVar9;
      *(undefined2 *)(iVar3 + 0x5e) = 0xe;
LAB_0045a674:
      if (*(short *)(iVar3 + -0x14be) < 0xa1) {
        uVar9 = 0x2e;
      }
      else {
        uVar9 = 0x36;
      }
      *(undefined2 *)(iVar3 + 0x6a) = uVar9;
    }
LAB_0045a694:
    sVar11 = *(short *)(iVar6 + 0x16) + -1;
    *(short *)(iVar6 + 0x16) = sVar11;
    if (sVar11 != 0) break;
    sVar11 = *(short *)(iVar3 + 0x60) + 1;
    *(short *)(iVar3 + 0x60) = sVar11;
    *(undefined2 *)(iVar6 + 0x16) = 0x1e;
    if (sVar11 == 0xe0f) {
      *(undefined2 *)(iVar6 + 0x18) = 0x3c;
      uVar9 = 0xf;
      goto LAB_0045a374;
    }
    goto LAB_0045aac0;
  case 0xe:
    if (*(short *)(iVar3 + 0x5e) == 0xe) goto LAB_0045a674;
    if (2 < *(short *)(iVar3 + 0x5e)) goto LAB_0045a694;
    break;
  case 0xf:
    break;
  }
  if (*(short *)(iVar3 + 0x5e) == 0 || *(short *)(iVar3 + 0x5e) == 10) {
LAB_0045ab08:
    if (*(short *)(iVar3 + 0x62) == 0) goto LAB_0045abc4;
  }
LAB_0045ab14:
  psVar7 = DAT_0045ac6c;
  DAT_0045ac6c[3] = 0;
  psVar7[1] = 0;
  *psVar7 = 0;
  psVar7[2] = 10;
  if (*(short *)(iVar3 + 0x5e) == 0) {
    sVar11 = *(short *)(iVar3 + 100);
  }
  else {
    sVar11 = *(short *)(iVar3 + 0x60);
  }
  psVar7[4] = sVar11;
  while (0x3b < sVar11) {
    sVar11 = psVar7[1];
    sVar12 = sVar11 + 1;
    psVar7[1] = sVar12;
    if (9 < sVar12) {
      *psVar7 = *psVar7 + 1;
      psVar7[1] = sVar11 + -9;
    }
    sVar11 = psVar7[4] + -0x3c;
    psVar7[4] = sVar11;
  }
  sVar11 = psVar7[4];
  while (9 < sVar11) {
    psVar7[3] = psVar7[3] + 1;
    sVar11 = psVar7[4] + -10;
    psVar7[4] = sVar11;
  }
LAB_0045abc4:
  if (*(ushort *)(local_30 + 0x27e) != 0) {
    local_38 = (float)VectorUnsignedToFloat
                                ((uint)*(ushort *)(local_30 + 0x27e),(byte)(in_fpscr >> 0x15) & 3);
    local_44 = DAT_0045ac90;
    local_40 = DAT_0045ac90;
    local_3c = DAT_0045ac90;
    local_38 = local_38 * DAT_0045ac94;
    if (((*DAT_0045ac98 & 1) == 0) && (iVar16 = FUN_003679b4(DAT_0045ac98), iVar16 != 0)) {
      FUN_0036788c(DAT_0045ac9c);
    }
    FUN_003339e8(DAT_0045aca8,4,&local_44,0);
  }
  return;
}
