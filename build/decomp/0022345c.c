// OoT3D decomp @ 0022345c  name=z_demo_effect_0022345c  size=4012

void z_demo_effect_0022345c(int param_1,int param_2)

{
  ushort uVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  uint *puVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uVar7;
  int iVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  int iVar12;
  int *piVar13;
  uint uVar14;
  uint in_fpscr;
  float fVar15;
  float fVar16;
  undefined8 uVar17;

  uVar1 = *(ushort *)(param_1 + 0x1c);
  uVar14 = uVar1 & 0xff;
  if (*(short *)(DAT_00223858 + uVar14 * 2) == 1) {
    iVar8 = 0;
LAB_002234b0:
    *(char *)(param_1 + 0x27c) = (char)iVar8;
  }
  else {
    iVar8 = FUN_00363c10(param_2 + 0x3a58);
    if (-1 < iVar8) goto LAB_002234b0;
  }
  uVar3 = DAT_00223860;
  puVar2 = DAT_0022385c;
  iVar8 = 0;
  do {
    uVar10 = DAT_002238a0;
    iVar12 = param_1 + iVar8 * 4;
    *(undefined4 *)(iVar12 + 0x2a8) = 0;
    iVar9 = (**(code **)(*(int *)*puVar2 + 0xc))
                      ((int *)*puVar2,0x98,s_d__home_queen_dailyBuild_game_us_00223864,uVar10);
    uVar10 = 0;
    if (iVar9 != 0) {
      uVar10 = FUN_00352e80();
    }
    *(undefined4 *)(iVar12 + 0x2c0) = uVar10;
    iVar9 = param_1 + iVar8 * 0xc;
    iVar8 = iVar8 + 1;
    *(undefined4 *)(iVar9 + 0x2d8) = uVar3;
    *(undefined4 *)(iVar9 + 0x2dc) = uVar3;
    *(undefined4 *)(iVar9 + 0x2e0) = uVar3;
  } while (iVar8 < 3);
  *(undefined4 *)(param_1 + 0x2cc) = 0;
  *(undefined4 *)(param_1 + 0x2d0) = 0;
  *(undefined4 *)(param_1 + 0x2d4) = 0;
  FUN_0033da8c(param_2 + 0x3a58,*(undefined1 *)(param_1 + 0x27c),param_2);
  iVar8 = 1;
  *(undefined1 *)(param_1 + 0x19a) = 1;
  if (*(byte *)(param_1 + 0x27c) < 0x13) {
    iVar9 = param_2 + (uint)*(byte *)(param_1 + 0x27c) * 0x80;
    iVar8 = *(int *)(DAT_002238a4 + iVar9);
    if (iVar8 == 0) goto LAB_00223574;
    iVar9 = iVar9 + 0x3a5c;
  }
  else {
LAB_00223574:
    iVar9 = 0;
  }
  iVar9 = iVar9 + 0x10;
  if ((*DAT_002238a8 & 1) == 0) {
    uVar17 = FUN_003679b4(DAT_002238a8);
    iVar8 = (int)((ulonglong)uVar17 >> 0x20);
    if ((int)uVar17 != 0) {
      FUN_0036788c(DAT_002238ac);
      iVar8 = DAT_002238b4;
    }
  }
  uVar10 = DAT_002238b8;
  piVar13 = *(int **)(DAT_002238ac + 0x17c);
  piVar13[2] = *(int *)(param_1 + 0x178);
  *(undefined2 *)(param_1 + 0x290) = 0;
  FUN_0037572c(uVar10,param_1,iVar8);
  uVar7 = DAT_002242c0;
  fVar15 = DAT_002242b4;
  fVar16 = DAT_00223f88;
  piVar6 = DAT_00223f84;
  iVar8 = DAT_002238dc;
  uVar5 = DAT_002238d0;
  uVar10 = DAT_002238c4;
  uVar11 = uVar3;
  switch(uVar14) {
  case 0:
    iVar8 = 0;
    *(undefined4 *)(param_1 + 0x2a0) = DAT_002238bc;
    *(undefined4 *)(param_1 + 0x29c) = DAT_002238c0;
    do {
      uVar11 = ObjectBankArchive_00358ef8(iVar9,0);
      iVar12 = param_1 + iVar8 * 4;
      *(undefined4 *)(iVar12 + 0x2b4) = uVar11;
      uVar11 = (**(code **)(*piVar13 + 8))(piVar13,uVar11,1);
      *(undefined4 *)(iVar12 + 0x2a8) = uVar11;
      FUN_0047d548(uVar11,2);
      **(undefined4 **)(iVar12 + 0x2c0) = *(undefined4 *)(*(int *)(iVar12 + 0x2a8) + 0x10);
      uVar11 = FUN_00372f0c(iVar9,0);
      FUN_00372d94(*(undefined4 *)(iVar12 + 0x2c0),uVar11);
      iVar8 = iVar8 + 1;
      *(undefined1 *)(*(int *)(iVar12 + 0x2c0) + 0x10) = 1;
      *(undefined4 *)(*(int *)(iVar12 + 0x2c0) + 0xc) = uVar10;
    } while (iVar8 < 3);
    break;
  case 1:
    *(undefined4 *)(param_1 + 0x2a0) = DAT_002238c8;
    *(undefined4 *)(param_1 + 0x29c) = DAT_002238cc;
    FUN_0037572c(uVar5,param_1);
    uVar10 = ObjectBankArchive_00358ef8(iVar9,0);
    uVar10 = (**(code **)(*piVar13 + 8))(piVar13,uVar10,1);
    *(undefined4 *)(param_1 + 0x2a8) = uVar10;
    FUN_0047d548(uVar10,2);
    **(undefined4 **)(param_1 + 0x2c0) = *(undefined4 *)(*(int *)(param_1 + 0x2a8) + 0x10);
    uVar10 = FUN_00372f0c(iVar9,0);
    FUN_00372d94(*(undefined4 *)(param_1 + 0x2c0),uVar10);
    uVar11 = DAT_002238c4;
    *(undefined1 *)(*(int *)(param_1 + 0x2c0) + 0x10) = 1;
    iVar8 = *(int *)(param_1 + 0x2c0);
    goto LAB_002241d0;
  case 2:
    *(undefined4 *)(param_1 + 0x2a0) = DAT_002238d4;
    uVar10 = DAT_002238e0;
    *(undefined4 *)(param_1 + 0x29c) = DAT_002238d8;
    *(undefined1 *)(param_1 + 0x289) = 0xff;
    *(undefined1 *)(param_1 + 0x28a) = 5;
    *(undefined2 *)(iVar8 + param_1) = 0;
    FUN_0037572c(uVar10,param_1);
    *(undefined1 *)(param_1 + 0x27d) = 0xbc;
    *(undefined1 *)(param_1 + 0x27e) = 0xff;
    puVar2 = DAT_002238e4;
    *(undefined1 *)(param_1 + 0x27f) = 0xff;
    *(undefined1 *)(param_1 + 0x280) = 0;
    *(undefined1 *)(param_1 + 0x281) = 100;
    *(undefined1 *)(param_1 + 0x282) = 0xff;
    iVar8 = (**(code **)(*(int *)*puVar2 + 0xc))
                      ((int *)*puVar2,0x1b8,s_d__home_queen_dailyBuild_game_us_00223864,DAT_002238e8
                      );
    uVar10 = 0;
    if (iVar8 != 0) {
      uVar10 = FUN_00348f34(iVar8,DAT_002238ec);
    }
    *(undefined4 *)(param_1 + 0x2cc) = uVar10;
    FUN_00348be4();
    uVar10 = ObjectBankArchive_00372c90(iVar9,2);
    FUN_00348a64(*(undefined4 *)(param_1 + 0x2cc),0,uVar10,DAT_002238f4,DAT_002238f4,DAT_002238f0,
                 DAT_002238f0);
    if (((*DAT_002238a8 & 1) == 0) && (iVar8 = FUN_003679b4(DAT_002238a8), iVar8 != 0)) {
      FUN_0036788c(DAT_002238ac);
    }
    uVar10 = BoardModelFactory_0034897c
                       (*(undefined4 *)(DAT_00223f44 + 0x47c),*(undefined4 *)(param_1 + 0x2cc),
                        *(undefined4 *)(param_1 + 0x178),0);
    *(undefined4 *)(param_1 + 0x2d0) = uVar10;
    break;
  case 3:
    *(undefined1 *)(param_1 + 0x289) = 0xff;
    *(undefined4 *)(param_1 + 0x2a0) = DAT_00223f54;
    *(undefined4 *)(param_1 + 0x29c) = DAT_00223f58;
    uVar10 = ObjectBankArchive_00358ef8(iVar9,0);
    *(undefined4 *)(param_1 + 0x2b4) = uVar10;
    uVar10 = (**(code **)(*piVar13 + 8))(piVar13,uVar10,1);
    *(undefined4 *)(param_1 + 0x2a8) = uVar10;
    FUN_0047d548(uVar10,2);
    **(undefined4 **)(param_1 + 0x2c0) = *(undefined4 *)(*(int *)(param_1 + 0x2a8) + 0x10);
    uVar10 = FUN_00372f0c(iVar9,0);
    FUN_00372d94(*(undefined4 *)(param_1 + 0x2c0),uVar10);
    *(undefined1 *)(*(int *)(param_1 + 0x2c0) + 0x10) = 1;
    iVar8 = *(int *)(param_1 + 0x2c0);
    uVar11 = DAT_002242cc;
    goto LAB_002241d0;
  case 4:
    FUN_0037572c(DAT_002238d0,param_1);
    *(undefined4 *)(param_1 + 0x2a0) = DAT_00223f5c;
    *(undefined1 *)(param_1 + 0x27d) = 0xff;
    *(undefined1 *)(param_1 + 0x27e) = 0xaa;
    *(undefined1 *)(param_1 + 0x27f) = 0xff;
    *(undefined1 *)(param_1 + 0x280) = 0xff;
    *(undefined1 *)(param_1 + 0x281) = 0;
    *(undefined1 *)(param_1 + 0x282) = 0xff;
    uVar10 = DAT_00223f60;
    *(undefined1 *)(param_1 + 0x289) = 0;
    *(undefined1 *)(param_1 + 0x28b) = 0;
    *(undefined1 *)(param_1 + 0x28c) = 0;
    *(undefined4 *)(param_1 + 0x29c) = uVar10;
    *(undefined2 *)(param_1 + 0x292) = 0;
    FUN_00333700(param_1,piVar13,iVar9);
    break;
  case 5:
    if (*DAT_00223f64 == 0x13d) {
      FUN_0037572c(DAT_00223f68,param_1);
    }
    else {
      FUN_0037572c(DAT_002238d0,param_1);
    }
    *(undefined4 *)(param_1 + 0x2a0) = DAT_00223f5c;
    *(undefined1 *)(param_1 + 0x27d) = 0xaa;
    *(undefined1 *)(param_1 + 0x27e) = 0xff;
    *(undefined1 *)(param_1 + 0x27f) = 0xff;
    *(undefined1 *)(param_1 + 0x280) = 0;
    *(undefined1 *)(param_1 + 0x281) = 0x28;
    *(undefined1 *)(param_1 + 0x282) = 0xff;
    *(undefined1 *)(param_1 + 0x289) = 1;
    *(undefined1 *)(param_1 + 0x28a) = 4;
    uVar10 = DAT_00223f6c;
    *(undefined1 *)(param_1 + 0x28b) = 0;
    *(undefined1 *)(param_1 + 0x28c) = 0;
    *(undefined2 *)(param_1 + 0x28e) = 0;
    *(undefined4 *)(param_1 + 0x29c) = uVar10;
    *(undefined2 *)(param_1 + 0x292) = 1;
    FUN_00333700(param_1,piVar13,iVar9);
    break;
  case 6:
    if (*DAT_00223f64 == 0xee) {
      FUN_0037572c(DAT_00223f70,param_1);
    }
    else {
      FUN_0037572c(DAT_00223f74,param_1);
    }
    *(undefined4 *)(param_1 + 0x2a0) = DAT_00223f5c;
    *(undefined1 *)(param_1 + 0x27d) = 0xaa;
    *(undefined1 *)(param_1 + 0x27e) = 0xff;
    *(undefined1 *)(param_1 + 0x27f) = 0xaa;
    *(undefined1 *)(param_1 + 0x280) = 0;
    *(undefined1 *)(param_1 + 0x281) = 200;
    *(undefined1 *)(param_1 + 0x282) = 0;
    uVar10 = DAT_00223f78;
    *(undefined1 *)(param_1 + 0x289) = 2;
    *(undefined1 *)(param_1 + 0x28b) = 0;
    *(undefined1 *)(param_1 + 0x28c) = 0;
    *(undefined4 *)(param_1 + 0x29c) = uVar10;
    *(undefined2 *)(param_1 + 0x292) = 2;
    FUN_00333700(param_1,piVar13,iVar9);
    break;
  case 7:
    *(undefined4 *)(param_1 + 0x2a0) = DAT_00223f7c;
    *(undefined4 *)(param_1 + 0x29c) = DAT_00223f80;
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(DAT_002238dc + param_1) = (short)(int)(fVar16 / fVar15 + DAT_00223f8c);
    *(undefined1 *)(param_1 + 0x289) = 4;
    *(undefined1 *)(param_1 + 0x28a) = 0xff;
    *(undefined1 *)(param_1 + 0x28b) = 0;
    uVar10 = ObjectBankArchive_00358ef8(iVar9,0);
    *(undefined4 *)(param_1 + 0x2b4) = uVar10;
    uVar10 = (**(code **)(*piVar13 + 8))(piVar13,uVar10,1);
    *(undefined4 *)(param_1 + 0x2a8) = uVar10;
    FUN_0047d548(uVar10,2);
    **(undefined4 **)(param_1 + 0x2c0) = *(undefined4 *)(*(int *)(param_1 + 0x2a8) + 0x10);
    uVar10 = FUN_00372f0c(iVar9,0);
    FUN_00372d94(*(undefined4 *)(param_1 + 0x2c0),uVar10);
    *(undefined1 *)(*(int *)(param_1 + 0x2c0) + 0x10) = 0;
    iVar8 = *(int *)(param_1 + 0x2c0);
    goto LAB_002241d0;
  case 8:
    *(undefined4 *)(param_1 + 0x2a0) = DAT_002242b8;
    *(undefined4 *)(param_1 + 0x29c) = DAT_002242bc;
    *(undefined1 *)(param_1 + 0x28b) = 0;
    *(undefined1 *)(param_1 + 0x28a) = 0;
    *(undefined1 *)(param_1 + 0x289) = 0;
    *(undefined2 *)(param_1 + 0x28e) = 0;
    *(undefined1 *)(param_1 + 0x27d) = 0;
    *(undefined2 *)(param_1 + 0x292) = 3;
    FUN_0037572c(uVar7,param_1);
    iVar8 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x8b,0,0,0
                         ,0);
    if (iVar8 != 0) {
      FUN_0037572c(DAT_002242c4,iVar8);
    }
    iVar8 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                         *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,iVar8,param_2,0x8b,0,0,0,
                         0x11);
    if (iVar8 != 0) {
      FUN_0037572c(DAT_002242c8);
    }
    piVar13[2] = *(int *)(param_1 + 0x178);
    uVar10 = ObjectBankArchive_00358ef8(iVar9,0);
    *(undefined4 *)(param_1 + 0x2b4) = uVar10;
    uVar10 = (**(code **)(*piVar13 + 8))(piVar13,uVar10,1);
    *(undefined4 *)(param_1 + 0x2a8) = uVar10;
    uVar10 = ObjectBankArchive_00358ef8(iVar9,1);
    *(undefined4 *)(param_1 + 0x2b8) = uVar10;
    uVar10 = (**(code **)(*piVar13 + 8))(piVar13,uVar10,1);
    *(undefined4 *)(param_1 + 0x2ac) = uVar10;
    FUN_0047d548(uVar10,2);
    **(undefined4 **)(param_1 + 0x2c4) = *(undefined4 *)(*(int *)(param_1 + 0x2ac) + 0x10);
    uVar10 = FUN_00372f0c(iVar9,0);
    FUN_00372d94(*(undefined4 *)(param_1 + 0x2c4),uVar10);
    *(undefined1 *)(*(int *)(param_1 + 0x2c4) + 0x10) = 1;
    iVar8 = *(int *)(param_1 + 0x2c4);
    uVar11 = DAT_002242cc;
    goto LAB_002241d0;
  case 9:
    *(undefined1 *)(param_1 + 0x28b) = 0xc;
    FUN_00333628(param_1,piVar13,iVar9);
    break;
  case 10:
    *(undefined1 *)(param_1 + 0x28b) = 0xd;
    FUN_00333628(param_1,piVar13,iVar9);
    break;
  case 0xb:
    *(undefined1 *)(param_1 + 0x28b) = 0xb;
    FUN_00333628(param_1,piVar13,iVar9);
    break;
  case 0xc:
    *(undefined1 *)(param_1 + 0x28b) = 0xe;
    FUN_00333628(param_1,piVar13,iVar9);
    break;
  case 0xd:
    *(undefined1 *)(param_1 + 0x28b) = 0xf;
    FUN_00333628(param_1,piVar13,iVar9);
    break;
  case 0xe:
    *(undefined1 *)(param_1 + 0x28b) = 0x10;
    FUN_00333628(param_1,piVar13,iVar9);
    break;
  case 0xf:
    goto switchD_002235ec_caseD_f;
  case 0x10:
    *(undefined4 *)(param_1 + 0x2a0) = DAT_00223f7c;
    *(undefined4 *)(param_1 + 0x29c) = DAT_002242b0;
    fVar16 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(DAT_002238dc + param_1) = (short)(int)(fVar15 / fVar16 + DAT_00223f8c);
    *(undefined1 *)(param_1 + 0x289) = 2;
    *(undefined1 *)(param_1 + 0x28a) = 0;
    *(undefined1 *)(param_1 + 0x28b) = 0;
    uVar10 = ObjectBankArchive_00358ef8(iVar9,0);
    *(undefined4 *)(param_1 + 0x2b4) = uVar10;
    uVar10 = (**(code **)(*piVar13 + 8))(piVar13,uVar10,1);
    *(undefined4 *)(param_1 + 0x2a8) = uVar10;
    FUN_0047d548(uVar10,2);
    **(undefined4 **)(param_1 + 0x2c0) = *(undefined4 *)(*(int *)(param_1 + 0x2a8) + 0x10);
    uVar10 = FUN_00372f0c(iVar9,0);
    FUN_00372d94(*(undefined4 *)(param_1 + 0x2c0),uVar10);
    *(undefined1 *)(*(int *)(param_1 + 0x2c0) + 0x10) = 0;
    iVar8 = *(int *)(param_1 + 0x2c0);
    goto LAB_002241d0;
  case 0x11:
    *(undefined4 *)(param_1 + 0x2a0) = DAT_00223f7c;
    *(undefined4 *)(param_1 + 0x29c) = DAT_00223f90;
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piVar6 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x28e) = (short)(int)(fVar16 / fVar15 + DAT_00223f8c);
    *(undefined1 *)(param_1 + 0x289) = 4;
    *(undefined1 *)(param_1 + 0x28a) = 0;
    *(undefined1 *)(param_1 + 0x28b) = 0;
    *(undefined2 *)(param_1 + 0x292) = 4;
    uVar10 = ObjectBankArchive_00358ef8(iVar9,0);
    *(undefined4 *)(param_1 + 0x2b4) = uVar10;
    uVar10 = (**(code **)(*piVar13 + 8))(piVar13,uVar10,1);
    *(undefined4 *)(param_1 + 0x2a8) = uVar10;
    FUN_0047d548(uVar10,2);
    **(undefined4 **)(param_1 + 0x2c0) = *(undefined4 *)(*(int *)(param_1 + 0x2a8) + 0x10);
    uVar10 = FUN_00372f0c(iVar9,0);
    FUN_00372d94(*(undefined4 *)(param_1 + 0x2c0),uVar10);
    *(undefined1 *)(*(int *)(param_1 + 0x2c0) + 0x10) = 0;
    iVar8 = *(int *)(param_1 + 0x2c0);
LAB_002241d0:
    *(undefined4 *)(iVar8 + 0xc) = uVar11;
    break;
  case 0x12:
    *(undefined4 *)(param_1 + 0x2a0) = DAT_00223f48;
    *(undefined4 *)(param_1 + 0x29c) = DAT_00223f4c;
    *(undefined1 *)(param_1 + 0x289) = 0xff;
    *(undefined1 *)(param_1 + 0x28a) = 0;
    *(undefined1 *)(param_1 + 0x28b) = 0;
    *(undefined2 *)(param_1 + 0x28e) = 0;
    switch(uVar1 >> 0xc) {
    case 0:
      *(undefined1 *)(param_1 + 0x27d) = 0xff;
      *(undefined1 *)(param_1 + 0x27e) = 0xff;
      *(undefined1 *)(param_1 + 0x27f) = 0xff;
      *(undefined1 *)(param_1 + 0x280) = 0xff;
      *(undefined1 *)(param_1 + 0x281) = 0x32;
      *(undefined1 *)(param_1 + 0x282) = 0;
      break;
    case 1:
      *(undefined1 *)(param_1 + 0x27d) = 0xff;
      *(undefined1 *)(param_1 + 0x27e) = 0xff;
      *(undefined1 *)(param_1 + 0x27f) = 0xff;
      *(undefined1 *)(param_1 + 0x280) = 0;
      *(undefined1 *)(param_1 + 0x281) = 0x96;
      *(undefined1 *)(param_1 + 0x282) = 0xff;
      break;
    case 2:
    case 6:
      *(undefined1 *)(param_1 + 0x27d) = 0xff;
      *(undefined1 *)(param_1 + 0x27e) = 0xff;
      *(undefined1 *)(param_1 + 0x27f) = 0xff;
      *(undefined1 *)(param_1 + 0x280) = 0;
      *(undefined1 *)(param_1 + 0x281) = 200;
      *(undefined1 *)(param_1 + 0x282) = 0;
      break;
    case 3:
      *(undefined1 *)(param_1 + 0x27d) = 0xff;
      *(undefined1 *)(param_1 + 0x27e) = 0xff;
      *(undefined1 *)(param_1 + 0x27f) = 0xff;
      *(undefined1 *)(param_1 + 0x280) = 0xff;
      *(undefined1 *)(param_1 + 0x281) = 0x96;
      *(undefined1 *)(param_1 + 0x282) = 0;
      break;
    case 4:
      *(undefined1 *)(param_1 + 0x27d) = 0xff;
      *(undefined1 *)(param_1 + 0x27e) = 0xff;
      *(undefined1 *)(param_1 + 0x27f) = 0xff;
      *(undefined1 *)(param_1 + 0x280) = 200;
      *(undefined1 *)(param_1 + 0x281) = 0xff;
      *(undefined1 *)(param_1 + 0x282) = 0;
      break;
    case 5:
      *(undefined1 *)(param_1 + 0x27d) = 0xff;
      *(undefined1 *)(param_1 + 0x27e) = 0xff;
      *(undefined1 *)(param_1 + 0x27f) = 0xff;
      *(undefined1 *)(param_1 + 0x280) = 200;
      *(undefined1 *)(param_1 + 0x281) = 0x32;
      *(undefined1 *)(param_1 + 0x282) = 0xff;
    }
    *(undefined2 *)(param_1 + 0x292) = 7;
    FUN_0037572c(uVar3,param_1);
    iVar8 = (**(code **)(*(int *)*DAT_002238e4 + 0xc))
                      ((int *)*DAT_002238e4,0x1b8,s_d__home_queen_dailyBuild_game_us_00223864,
                       DAT_00223f50);
    uVar10 = 0;
    if (iVar8 != 0) {
      uVar10 = FUN_00348f34(iVar8,DAT_002238ec);
    }
    *(undefined4 *)(param_1 + 0x2cc) = uVar10;
    FUN_00348be4();
    uVar10 = ObjectBankArchive_00372c90(iVar9,2);
    FUN_00348a64(*(undefined4 *)(param_1 + 0x2cc),0,uVar10,DAT_002238f4,DAT_002238f4,DAT_002238f0,
                 DAT_002238f0);
    iVar8 = DAT_00223f44;
    puVar4 = DAT_002238a8;
    iVar9 = 0;
    do {
      if (((*puVar4 & 1) == 0) && (iVar12 = FUN_003679b4(DAT_002238a8), iVar12 != 0)) {
        FUN_0036788c(DAT_002238ac);
      }
      uVar10 = BoardModelFactory_0034897c
                         (*(undefined4 *)(iVar8 + 0x47c),*(undefined4 *)(param_1 + 0x2cc),
                          *(undefined4 *)(param_1 + 0x178),0);
      iVar12 = iVar9 * 4;
      iVar9 = iVar9 + 1;
      *(undefined4 *)(param_1 + iVar12 + 0x2d0) = uVar10;
    } while (iVar9 < 2);
    break;
  case 0x13:
    if (*(short *)(param_2 + 0x104) == 0x43) {
      if ((*(uint *)(param_2 + 0x7fbc) & 0x80000) != 0) goto LAB_00224480;
      *(undefined1 *)(param_1 + 3) = 0xff;
      *(uint *)(param_2 + 0x7fbc) = *(uint *)(param_2 + 0x7fbc) | 0x80000;
    }
    *(undefined1 *)(param_1 + 0x289) = 0x13;
    *(undefined1 *)(param_1 + 0x28a) = 0;
    FUN_00333544(param_2,param_1,piVar13,iVar9);
    break;
  case 0x14:
    if (*(short *)(param_2 + 0x104) == 0x43) {
      if ((*(uint *)(param_2 + 0x7fbc) & 0x100000) != 0) goto LAB_00224480;
      *(undefined1 *)(param_1 + 3) = 0xff;
      *(uint *)(param_2 + 0x7fbc) = *(uint *)(param_2 + 0x7fbc) | 0x100000;
    }
    *(undefined1 *)(param_1 + 0x289) = 0x14;
    *(undefined1 *)(param_1 + 0x28a) = 0;
    FUN_00333544(param_2,param_1,piVar13,iVar9);
    break;
  case 0x15:
    if (*(short *)(param_2 + 0x104) == 0x43) {
      if ((*(uint *)(param_2 + 0x7fbc) & 0x200000) != 0) goto LAB_00224480;
      *(undefined1 *)(param_1 + 3) = 0xff;
      *(uint *)(param_2 + 0x7fbc) = *(uint *)(param_2 + 0x7fbc) | 0x200000;
    }
    *(undefined1 *)(param_1 + 0x289) = 0x15;
    *(undefined1 *)(param_1 + 0x28a) = 0;
    FUN_00333544(param_2,param_1,piVar13,iVar9);
    FUN_00375d3c(param_2,param_2 + 0x208c,param_1,9);
    if ((*(short *)(param_2 + 0x104) == 2) && ((*(ushort *)(DAT_002245a4 + 0x38) & 0x20) != 0)) {
LAB_00224480:
      FUN_00374428(param_1);
      return;
    }
    break;
  case 0x16:
    *(undefined4 *)(param_1 + 0x2a0) = DAT_002245a8;
    *(undefined4 *)(param_1 + 0x29c) = DAT_002245ac;
    *(undefined1 *)(param_1 + 0x28b) = 0;
    *(undefined1 *)(param_1 + 0x28a) = 0;
    *(undefined1 *)(param_1 + 0x289) = 0;
    *(undefined2 *)(param_1 + 0x292) = 2;
    uVar10 = ObjectBankArchive_00358ef8(iVar9,1);
    uVar11 = FUN_00372f0c(iVar9,1);
    piVar6 = DAT_002245b0;
    iVar8 = 0;
    do {
      iVar9 = (**(code **)(*piVar13 + 8))(piVar13,uVar10,1);
      iVar12 = param_1 + iVar8 * 4;
      *(int *)(iVar12 + 0x2a8) = iVar9;
      FUN_00372d94(*(undefined4 *)(iVar9 + 0xc),uVar11);
      *(undefined1 *)(*(int *)(*(int *)(iVar12 + 0x2a8) + 0xc) + 0x10) = 0;
      *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x2a8) + 0xc) + 0xc) = uVar3;
      if (*piVar6 == 0) {
        *(undefined4 *)(*(int *)(*(int *)(iVar12 + 0x2a8) + 0xc) + 8) = uVar3;
        FUN_003586ec();
      }
      FUN_003695cc(uVar3,uVar3,uVar3,uVar3,*(undefined4 *)(iVar12 + 0x2a8),0,4,2);
      iVar8 = iVar8 + 1;
    } while (iVar8 < 3);
    break;
  case 0x17:
    *(undefined1 *)(param_1 + 0x28b) = 0x61;
    FUN_00333628(param_1,piVar13,iVar9);
    break;
  case 0x18:
  case 0x19:
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x2000000;
    goto switchD_002235ec_caseD_f;
  }
switchD_002235ec_default:
  piVar13[2] = 0;
  FUN_00372d4c(uVar3,uVar3,param_1 + 0xbc,0);
  *(undefined4 *)(param_1 + 0x2a4) = DAT_002245b4;
  return;
switchD_002235ec_caseD_f:
  *(undefined4 *)(param_1 + 0x2a0) = DAT_0022459c;
  *(undefined4 *)(param_1 + 0x29c) = DAT_002245a0;
  *(undefined1 *)(param_1 + 0x280) = 0;
  *(undefined1 *)(param_1 + 0x281) = 100;
  *(undefined1 *)(param_1 + 0x282) = 0xff;
  FUN_003357dc(param_1 + 0x1a4);
  *(undefined2 *)(DAT_002238dc + param_1) = 0;
  goto switchD_002235ec_default;
}
