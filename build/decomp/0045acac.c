// OoT3D decomp @ 0045acac  name=FUN_0045acac  size=2472

void FUN_0045acac(int param_1)

{
  char cVar1;
  char *pcVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int *piVar6;
  short *psVar7;
  undefined2 *puVar8;
  short sVar9;
  undefined2 uVar10;
  ushort uVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  short sVar15;
  bool bVar16;
  bool bVar17;
  uint in_fpscr;
  float fVar18;
  float fVar19;

  iVar12 = *(int *)(DAT_0045b4a8 + param_1);
  iVar13 = FUN_003695f8();
  puVar3 = DAT_0045b4ac;
  if ((((iVar13 == 0) &&
       (((*(short *)(DAT_0045b4ac + 0x565) == 1 || ((int)DAT_0045b4ac[0x53a] < 4)) ||
        (*(short *)(param_1 + 0x104) == 99 && DAT_0045b4ac[0x53a] == 4)))) &&
      ((iVar13 = FUN_00366748(param_1), iVar13 == 0 ||
       ((iVar13 = FUN_00366748(param_1), iVar13 != 0 && (*(short *)(param_1 + 0x104) == 0x4b))))))
     && (*(short *)(param_1 + 0x318c) == 0)) {
    FUN_00475c88(param_1);
  }
  uVar11 = *(ushort *)(puVar3 + 0x55e);
  if (uVar11 == 8) {
switchD_0045ad90_caseD_1:
    iVar13 = (int)(short)(*(short *)(puVar3 + 0x55f) * -0x20 + 0xff);
    if (iVar13 < 0) {
      iVar13 = 0;
    }
    FUN_002d7c28(param_1,iVar13);
    *(short *)(puVar3 + 0x55f) = *(short *)(puVar3 + 0x55f) + 1;
    if (iVar13 == 0) {
LAB_0045afa0:
      *(undefined2 *)(puVar3 + 0x55e) = 0;
    }
  }
  else {
    if (uVar11 < 9) {
      switch(uVar11) {
      default:
        goto switchD_0045ad90_caseD_0;
      case 1:
      case 2:
      case 3:
      case 4:
      case 5:
      case 6:
      case 7:
        goto switchD_0045ad90_caseD_1;
      }
    }
    if (uVar11 == 0xc) goto switchD_0045ad90_caseD_1;
    if (0xc < uVar11) {
      if (uVar11 == 0xd) goto switchD_0045ad90_caseD_1;
      if (uVar11 != 0x32) {
        if (uVar11 == 0x34) {
          *(undefined2 *)(puVar3 + 0x55e) = 1;
          FUN_002d7c28(param_1,0);
          *(undefined2 *)(puVar3 + 0x55e) = 0;
        }
        goto switchD_0045ad90_caseD_0;
      }
      sVar9 = *(short *)(puVar3 + 0x55f) * -0x20 + 0xff;
      if (sVar9 < 0) {
        sVar9 = 0;
      }
      iVar13 = (int)(short)(0xff - sVar9);
      if (0xfe < iVar13) {
        iVar13 = 0xff;
      }
      FUN_002d7974(param_1,iVar13);
      uVar10 = (undefined2)iVar13;
      if (*(short *)(param_1 + 0x2e30) != 0xff) {
        *(undefined2 *)(param_1 + 0x2e30) = uVar10;
      }
      if (*(short *)(param_1 + 0x2e32) != 0xff) {
        *(undefined2 *)(param_1 + 0x2e32) = uVar10;
      }
      if ((int)*(short *)(param_1 + 0x104) - 0x51U < 0x14) {
        if (*(ushort *)(param_1 + 0x2e34) < 0xaa) {
LAB_0045af88:
          *(undefined2 *)(param_1 + 0x2e34) = uVar10;
        }
        else {
          *(undefined2 *)(param_1 + 0x2e34) = 0xaa;
        }
      }
      else if (*(ushort *)(param_1 + 0x2e34) != 0xff) goto LAB_0045af88;
      *(short *)(puVar3 + 0x55f) = *(short *)(puVar3 + 0x55f) + 1;
      if (iVar13 != 0xff) goto switchD_0045ad90_caseD_0;
      goto LAB_0045afa0;
    }
    if ((uVar11 == 9 || uVar11 == 10) || uVar11 == 0xb) goto switchD_0045ad90_caseD_1;
  }
switchD_0045ad90_caseD_0:
  FUN_00470dd0(param_1);
  puVar4 = DAT_0045b4ac;
  if (*(short *)((int)puVar3 + 0x15b2) != 0) {
    *(short *)((int)puVar3 + 0x15b2) = *(short *)((int)puVar3 + 0x15b2) + -4;
    sVar9 = *(short *)(puVar4 + 0x11);
    *(ushort *)(puVar4 + 0x11) = sVar9 + 4U;
    if ((sVar9 + 4U & 0xf) < 4) {
      FUN_0037547c(DAT_0045b4b8,0,4,DAT_0045b4b4,DAT_0045b4b4,DAT_0045b4b0);
    }
    if (*(short *)((int)puVar4 + 0x42) <= *(short *)(puVar4 + 0x11)) {
      *(short *)(puVar4 + 0x11) = *(short *)((int)puVar4 + 0x42);
      *(undefined2 *)((int)puVar3 + 0x15b2) = 0;
    }
  }
  FUN_004715a0(param_1);
  sVar9 = FUN_002d7a78(param_1);
  *(short *)(DAT_0045b4bc + 0xe) = sVar9;
  if (sVar9 == 1) {
    if ((ushort)((*(ushort *)(DAT_0045b4c0 + 4) & *(ushort *)((int)puVar4 + 0x8a)) >>
                (uint)*(byte *)(DAT_0045b4c4 + 2)) == 2) {
LAB_0045aff4:
      pcVar2 = DAT_0045b4bc;
      pcVar2[0xe] = '\0';
      pcVar2[0xf] = '\0';
    }
  }
  else {
    iVar13 = FUN_002d7a78(param_1);
    if (((1 < iVar13) && (iVar13 = FUN_002d7a78(param_1), iVar13 < 5)) &&
       ((ushort)((*(ushort *)(DAT_0045b4c0 + 4) & *(ushort *)((int)puVar4 + 0x8a)) >>
                *(sbyte *)(DAT_0045b4c4 + 2)) == 3)) goto LAB_0045aff4;
  }
  FUN_0047a920(param_1);
  if (((2 < *(short *)((int)puVar3 + 0x155e)) && (iVar13 = FUN_003695f8(), iVar13 == 0)) &&
     (iVar13 = FUN_00366748(param_1), iVar13 == 0)) {
    uVar14 = *(uint *)(iVar12 + 0x1714);
    bVar16 = (uVar14 & 0x1000000) == 0;
    if (bVar16) {
      uVar14 = (uint)*(byte *)(param_1 + 0x5c2d);
    }
    bVar17 = bVar16 && uVar14 == 0;
    if (bVar16 && uVar14 == 0) {
      bVar17 = *(char *)(param_1 + 0x7f12) == '\0';
    }
    if (bVar17) {
      FUN_0037577c(param_1);
    }
  }
  uVar5 = DAT_0045b4c8;
  sVar9 = *(short *)(puVar3 + 0x557);
  if (sVar9 != 0) {
    if (sVar9 < 1) {
      sVar15 = *(short *)(puVar4 + 0x12);
      if (sVar15 != 0) {
        if (-0x32 < sVar9) {
          *(short *)(puVar3 + 0x557) = sVar9 + 1;
          sVar15 = sVar15 + -1;
          goto LAB_0045b2c4;
        }
        *(short *)(puVar3 + 0x557) = sVar9 + 10;
        *(short *)(puVar4 + 0x12) = sVar15 + -10;
        if ((short)(sVar15 + -10) < 0) {
          *(undefined2 *)(puVar4 + 0x12) = 0;
        }
        goto LAB_0045b114;
      }
      *(undefined2 *)(puVar3 + 0x557) = 0;
    }
    else {
      iVar12 = DAT_0045b4d4 +
               ((int)(puVar4[0x2e] & *(uint *)(DAT_0045b4cc + 0x10)) >> *(sbyte *)(DAT_0045b4d0 + 4)
               ) * 2;
      sVar15 = *(short *)(puVar4 + 0x12);
      if ((int)sVar15 < (int)(uint)*(ushort *)(iVar12 + 0x20)) {
        *(short *)(puVar3 + 0x557) = sVar9 + -1;
        sVar15 = sVar15 + 1;
LAB_0045b2c4:
        *(short *)(puVar4 + 0x12) = sVar15;
LAB_0045b114:
        FUN_0037547c(uVar5,0,4,DAT_0045b4b4,DAT_0045b4b4,DAT_0045b4b0);
      }
      else {
        *(undefined2 *)(puVar4 + 0x12) = *(undefined2 *)(iVar12 + 0x20);
        *(undefined2 *)(puVar3 + 0x557) = 0;
      }
    }
  }
  fVar18 = DAT_0045b4e8;
  uVar5 = DAT_0045b4e0;
  iVar12 = DAT_0045b4dc;
  sVar9 = *(short *)(param_1 + 0x2dc8);
  if (sVar9 == 1) {
    fVar18 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0045b4e4 + 0xd9e),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar18 = DAT_0045b4d8 / fVar18 + *(float *)(param_1 + 0x2dd0);
    *(float *)(param_1 + 0x2dd0) = fVar18;
joined_r0x0045b2f8:
    if (iVar12 <= (int)fVar18) {
      *(undefined4 *)(param_1 + 0x2dd0) = uVar5;
      *(undefined2 *)(param_1 + 0x2dc8) = 2;
    }
  }
  else if (sVar9 == 2) {
    fVar19 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0045b4e4 + 0xd9e),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar19 = DAT_0045b4d8 / fVar19 + *(float *)(param_1 + 0x2dd0);
    *(float *)(param_1 + 0x2dd0) = fVar19;
    uVar14 = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar18) << 0x1f;
    in_fpscr = uVar14 | (uint)(NAN(fVar19) || NAN(fVar18)) << 0x1c;
    if ((byte)(uVar14 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) {
LAB_0045b198:
      *(float *)(param_1 + 0x2dd0) = fVar18;
      *(undefined2 *)(param_1 + 0x2dc8) = 0;
      *(undefined2 *)(param_1 + 0x2dca) = *(undefined2 *)(param_1 + 0x2dcc);
    }
  }
  else {
    if (sVar9 == 3) {
      fVar18 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0045b4e4 + 0xd9e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar18 = DAT_0045b4d8 / fVar18 + *(float *)(param_1 + 0x2dd0);
      *(float *)(param_1 + 0x2dd0) = fVar18;
      goto joined_r0x0045b2f8;
    }
    if (sVar9 == 4) {
      fVar19 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0045b4e4 + 0xd9e),
                                          (byte)(in_fpscr >> 0x15) & 3);
      fVar19 = DAT_0045b4d8 / fVar19 + *(float *)(param_1 + 0x2dd0);
      *(float *)(param_1 + 0x2dd0) = fVar19;
      uVar14 = in_fpscr & 0xfffffff | (uint)(fVar19 < fVar18) << 0x1f;
      in_fpscr = uVar14 | (uint)(NAN(fVar19) || NAN(fVar18)) << 0x1c;
      if ((byte)(uVar14 >> 0x1f) == ((byte)(in_fpscr >> 0x1c) & 1)) goto LAB_0045b198;
    }
  }
  *(short *)(*DAT_0045b4e4 + 0xda2) = (short)(int)*(float *)(param_1 + 0x2dd0);
  iVar12 = FUN_003695f8();
  if (iVar12 == 0) {
    uVar14 = FUN_00366748(param_1);
    bVar16 = uVar14 == 0;
    if (bVar16) {
      uVar14 = (uint)*(byte *)(param_1 + 0x5c2d);
    }
    bVar17 = bVar16 && uVar14 == 0;
    if (bVar16 && uVar14 == 0) {
      bVar17 = *(short *)(param_1 + 0x318c) == 0;
    }
    if (((bVar17) && (*(char *)(param_1 + 0x7f12) == '\0')) &&
       ((iVar12 = FUN_0037571c(param_1), iVar12 == 0 ||
        (iVar12 = FUN_0036a7a0(param_1), iVar12 == 0)))) {
      if ((*(char *)((int)puVar4 + 0x4e) != '\0') && (*(char *)((int)puVar4 + 0x46) == '\0')) {
        *(char *)((int)puVar4 + 0x46) = *(char *)(puVar4 + 0x14) + '\x01';
        *(undefined2 *)(puVar3 + 0x560) = 8;
      }
      FUN_00476dfc(param_1);
    }
  }
  pcVar2 = DAT_0045b4bc;
  if (*(short *)((int)puVar3 + 0x155e) == 0) {
    sVar9 = *(short *)(DAT_0045b4bc + 0xe);
    if (((sVar9 == 1 || sVar9 == 2) || sVar9 == 4) && (*(short *)(puVar4 + 0x11) >> 1 != 0)) {
      *(undefined2 *)((int)puVar3 + 0x155e) = 1;
      *(undefined2 *)((int)puVar3 + 0x1566) = 0x8c;
      *(undefined2 *)((int)puVar3 + 0x156a) = 0x50;
      pcVar2[0x10] = '\x01';
      pcVar2[0x11] = '\0';
    }
  }
  else if ((*(short *)(DAT_0045b4bc + 0xe) == 0 || *(short *)(DAT_0045b4bc + 0xe) == 3) &&
          (*(short *)((int)puVar3 + 0x155e) < 5)) {
    *(undefined2 *)((int)puVar3 + 0x155e) = 0;
  }
  pcVar2 = DAT_0045b4bc;
  if (*(short *)(puVar3 + 0x565) == 1) {
    *(short *)((int)puVar3 + 0x1596) =
         *(short *)((int)puVar3 + 0x1596) + *(short *)(param_1 + 0x2e1a);
    *(undefined2 *)(param_1 + 0x2e1a) = 0;
    sVar9 = *(short *)(pcVar2 + 2);
    if (sVar9 == 0) {
      if (999 < *(ushort *)((int)puVar3 + 0x1596)) {
        uVar10 = 1;
LAB_0045b3ec:
        *(undefined2 *)(pcVar2 + 2) = uVar10;
      }
    }
    else if ((sVar9 == 1) && (DAT_0045b4ec <= *(ushort *)((int)puVar3 + 0x1596))) {
      uVar10 = 2;
      goto LAB_0045b3ec;
    }
    psVar7 = DAT_0045b4f0;
    DAT_0045b4f0[1] = 0;
    *psVar7 = 0;
    psVar7[2] = 0;
    uVar11 = *(ushort *)((int)puVar3 + 0x1596);
    psVar7[3] = uVar11;
    while (999 < uVar11) {
      *psVar7 = *psVar7 + 1;
      uVar11 = psVar7[3] - 1000;
      psVar7[3] = uVar11;
    }
    uVar11 = psVar7[3];
    while (99 < uVar11) {
      psVar7[1] = psVar7[1] + 1;
      uVar11 = psVar7[3] - 100;
      psVar7[3] = uVar11;
    }
    uVar11 = psVar7[3];
    while (9 < uVar11) {
      psVar7[2] = psVar7[2] + 1;
      uVar11 = psVar7[3] - 10;
      psVar7[3] = uVar11;
    }
  }
  if (*(short *)(puVar3 + 0x56c) != 0) {
    if ((*(short *)(param_1 + 0x2b80) != 0x31) && (*(short *)(puVar3 + 0x56c) == 1)) {
      *(undefined2 *)(param_1 + 0x2b7e) = 4;
    }
    puVar8 = DAT_0045b6c4;
    uVar14 = DAT_0045b6c0;
    pcVar2 = DAT_0045b4bc;
    if (*(short *)(param_1 + 0x3192) == 0) {
      bVar16 = *(char *)(DAT_0045b6cc + param_1) != '\x01';
      cVar1 = '\x01';
      if (bVar16) {
        cVar1 = *(char *)(param_1 + 0x2e4a);
      }
      if (bVar16 && cVar1 != '\x03') {
        if (*(ushort *)(puVar4 + 3) - 0x4555 < DAT_0045b6c0) {
          *(undefined2 *)(puVar3 + 0x569) = 0;
          *(undefined1 *)(param_1 + 0x5c76) = 4;
          *(undefined1 *)((int)puVar3 + 0x15ab) = 2;
          *(undefined1 *)(param_1 + 0x5c01) = 1;
        }
        else {
          *(short *)(puVar3 + 0x569) = (short)DAT_0045b6d0;
          *(undefined1 *)(param_1 + 0x5c76) = 5;
          *(undefined1 *)((int)puVar3 + 0x15ab) = 3;
          *(undefined1 *)(param_1 + 0x5c01) = 1;
        }
        if (*(short *)(param_1 + 0x104) == 0x5e) {
          *(undefined1 *)(param_1 + 0x5c76) = 0xe;
          *(undefined1 *)((int)puVar3 + 0x15ab) = 0xe;
        }
        puVar3[0x53b] = 0xfffffffe;
        FUN_003348e8(param_1,(int)(short)*puVar4,0x14);
        piVar6 = DAT_0045b4e4;
        *(undefined2 *)(puVar3 + 0x56c) = 0;
        fVar18 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
        FUN_002e7248((int)(DAT_0045b6d4 / fVar18 + DAT_0045b6d8));
        puVar3[0x556] = 0xff;
        *(undefined1 *)((int)puVar3 + 0x156e) = 0xff;
        return;
      }
      *(undefined2 *)(puVar3 + 0x56c) = 3;
      return;
    }
    if (*(short *)(puVar3 + 0x56c) == 2) {
      if (*DAT_0045b4bc == '\0') {
        if (*(ushort *)(puVar4 + 3) - 0x4555 <= DAT_0045b6c0) {
LAB_0045b5b4:
          *(undefined2 *)(puVar3 + 0x56c) = 0;
          *puVar8 = *(undefined2 *)(pcVar2 + 0x1e);
          *(undefined2 *)(param_1 + 0x2b7e) = 4;
          return;
        }
      }
      else if (DAT_0045b6c8 < *(ushort *)(puVar4 + 3)) goto LAB_0045b5b4;
    }
    else {
      *DAT_0045b4bc = '\0';
      if (*(ushort *)(puVar4 + 3) - 0x4555 <= uVar14) {
        *pcVar2 = '\x01';
      }
      *(undefined2 *)(puVar3 + 0x56c) = 2;
      *(undefined2 *)(pcVar2 + 0x1e) = *puVar8;
      *puVar8 = 400;
    }
  }
  return;
}
