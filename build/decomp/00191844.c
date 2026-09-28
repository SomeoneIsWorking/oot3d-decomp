// OoT3D decomp @ 00191844  name=FUN_00191844  size=1952

void FUN_00191844(int param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  int iVar3;
  undefined4 uVar4;
  float fVar5;
  int iVar6;
  undefined4 uVar7;
  undefined4 *puVar8;
  undefined4 uVar9;
  int iVar10;
  int *piVar11;
  undefined4 uVar12;
  uint uVar13;
  undefined4 uVar14;
  int iVar15;
  short *psVar16;
  uint uVar17;
  undefined4 uVar18;
  bool bVar19;
  bool bVar20;
  uint in_fpscr;
  float fVar21;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  int iStack_bc;
  undefined4 uStack_b8;
  int iStack_a4;
  uint auStack_a0 [4];
  undefined4 uStack_90;
  undefined4 uStack_8c;
  uint auStack_88 [17];
  int *piStack_44;
  undefined4 *puStack_40;
  undefined4 *puStack_3c;
  int iStack_38;

  func_0x00347780(param_2);
  *(undefined1 *)(param_2 + 0x5c75) = 0;
  uVar14 = uRam00191c14;
  *(undefined1 *)(param_2 + 0x5c74) = 0;
  *(undefined4 *)(param_1 + 0x24e4) = uVar14;
  *(undefined4 *)(param_1 + 0x24e8) = uVar14;
  *(undefined4 *)(param_1 + 0x24ec) = uVar14;
  uVar12 = uRam00191c18;
  *(undefined4 *)(param_1 + 0x29ec) = 0;
  uVar7 = uRam00191c20;
  uVar4 = uRam00191c1c;
  *(undefined4 *)(param_1 + 0x29f0) = uRam00191c1c;
  *(undefined4 *)(param_1 + 0x29f4) = uVar14;
  *(undefined4 *)(param_1 + 0x29f8) = uVar14;
  *(undefined4 *)(param_1 + 0x2a00) = uVar14;
  *(undefined4 *)(param_1 + 0x2a04) = uVar7;
  *(undefined4 *)(param_1 + 0x2a08) = uVar12;
  *(undefined4 *)(param_1 + 0x2a10) = uVar14;
  *(undefined4 *)(param_1 + 0x2a14) = uVar12;
  *(undefined4 *)(param_1 + 0x2a18) = uVar14;
  *(undefined4 *)(param_1 + 0x29fc) = uVar7;
  uVar9 = uRam00191c24;
  *(undefined4 *)(param_1 + 0x2a0c) = uVar7;
  *(undefined4 *)(param_1 + 0x2a1c) = uVar9;
  *(undefined4 *)(param_1 + 0x2a20) = uVar14;
  *(undefined4 *)(param_1 + 0x2a24) = uVar14;
  *(undefined4 *)(param_1 + 0x2a28) = uVar14;
  *(undefined4 *)(param_1 + 0x2a38) = uVar14;
  *(undefined4 *)(param_1 + 0x2a3c) = uVar14;
  *(undefined4 *)(param_1 + 0x2a40) = uVar14;
  *(undefined4 *)(param_1 + 0x2a44) = uVar14;
  iStack_38 = param_1 + 0x1000;
  *(undefined1 *)(param_1 + 0x174e) = 0;
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar6 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(iRam00191c28 + iVar6) != 0)
     ) {
    psVar16 = (short *)(iVar6 + 0x3a5c);
  }
  else {
    psVar16 = (short *)0x0;
  }
  *(short **)(param_1 + 0x24e0) = psVar16 + 8;
  uVar7 = func_0x00358ef8(psVar16 + 8,0);
  *(undefined4 *)(param_1 + 0x24dc) = uVar7;
  if (*psVar16 == 0x19f) {
    *(undefined4 *)(iRam00191c2c + 0x58) = 1;
  }
  else {
    *(undefined4 *)(iRam00191c2c + 0x58) = 0;
  }
  *(undefined4 *)(param_2 + 0x5b90) = uRam00191c30;
  *(undefined4 *)(param_2 + 0x5b94) = uRam00191c34;
  *(undefined4 *)(param_2 + 0x5b98) = uRam00191c38;
  *(undefined4 *)(param_2 + 0x5b9c) = uRam00191c3c;
  *(undefined4 *)(param_2 + 0x5ba0) = uRam00191c40;
  *(undefined4 *)(param_2 + 0x5ba4) = uRam00191c44;
  *(undefined4 *)(param_2 + 0x5ba8) = uRam00191c48;
  *(undefined4 *)(param_2 + 0x5bac) = uRam00191c4c;
  *(undefined4 *)(param_2 + 0x5bb0) = uRam00191c50;
  piVar11 = piRam00191c54;
  *(undefined1 *)(param_1 + 3) = 0xff;
  *(int *)(iStack_38 + 0x70c) = iRam00191c58 + piVar11[1] * 0x134;
  *(undefined1 *)(param_1 + 0x1a9) = 0xff;
  *(undefined1 *)(param_1 + 0x1ac) = 0xff;
  *(undefined1 *)(param_1 + 0x1aa) = 0xff;
  func_0x0034d688(param_2,param_1,0xff);
  func_0x0034913c(param_2,param_1);
  *(undefined1 *)(param_1 + 0x1ab) = *(undefined1 *)(param_1 + 0x1a7);
  *(undefined1 *)(param_1 + 0x1b8) = *(undefined1 *)(param_1 + 0x1a7);
  func_0x00250768(param_1,param_2,*(undefined4 *)(param_1 + 0x24dc));
  puStack_3c = (undefined4 *)(param_1 + 0x24f0);
  if (puStack_3c != (undefined4 *)0x0) {
    *puStack_3c = 0;
    *(undefined4 *)(param_1 + 0x24f4) = 0;
    *(undefined4 *)(param_1 + 0x24f8) = 0;
    *(undefined4 *)(param_1 + 0x24fc) = 0;
    *(undefined4 *)(param_1 + 0x2500) = 0;
    *(undefined4 *)(param_1 + 0x2504) = 0;
    *(undefined4 *)(param_1 + 0x24f4) = 0;
    *(undefined4 *)(param_1 + 0x24f8) = 0;
    *(undefined4 *)(param_1 + 0x24fc) = 0;
    *(undefined4 *)(param_1 + 0x2500) = 0;
    *(undefined4 *)(param_1 + 0x2504) = 0;
    *puStack_3c = uRam00191c5c;
  }
  puStack_40 = (undefined4 *)(param_1 + 0x2508);
  if (puStack_40 != (undefined4 *)0x0) {
    *puStack_40 = 0;
    *(undefined4 *)(param_1 + 0x250c) = 0;
    *(undefined4 *)(param_1 + 0x2510) = 0;
    *(undefined4 *)(param_1 + 0x2514) = 0;
    *(undefined4 *)(param_1 + 0x2518) = 0;
    *(undefined4 *)(param_1 + 0x251c) = 0;
    *(undefined4 *)(param_1 + 0x250c) = 0;
    *(undefined4 *)(param_1 + 0x2510) = 0;
    *(undefined4 *)(param_1 + 0x2514) = 0;
    *(undefined4 *)(param_1 + 0x2518) = 0;
    *(undefined4 *)(param_1 + 0x251c) = 0;
    *puStack_40 = uRam00191c60;
  }
  puVar8 = (undefined4 *)(param_1 + 0x2520);
  if (puVar8 != (undefined4 *)0x0) {
    *puVar8 = 0;
    *(undefined4 *)(param_1 + 0x2524) = 0;
    *(undefined4 *)(param_1 + 0x2528) = 0;
    *(undefined4 *)(param_1 + 0x252c) = 0;
    *(undefined4 *)(param_1 + 0x2530) = 0;
    *(undefined4 *)(param_1 + 0x2534) = 0;
    *(undefined4 *)(param_1 + 0x2524) = 0;
    *(undefined4 *)(param_1 + 0x2528) = 0;
    *(undefined4 *)(param_1 + 0x252c) = 0;
    *(undefined4 *)(param_1 + 0x2530) = 0;
    *(undefined4 *)(param_1 + 0x2534) = 0;
    *puVar8 = uRam00191c64;
  }
  *(int *)(param_1 + 0x24f4) = param_1;
  *(int *)(param_1 + 0x24f8) = param_2;
  *(int *)(param_1 + 0x24fc) = param_1 + 0x254;
  auStack_88[0] = *puRam00191c68;
  auStack_88[1] = puRam00191c68[1];
  auStack_88[2] = puRam00191c68[2];
  auStack_88[3] = puRam00191c68[3];
  auStack_88[4] = puRam00191c68[4];
  auStack_88[5] = puRam00191c68[5];
  auStack_88[6] = puRam00191c68[6];
  auStack_88[7] = puRam00191c68[7];
  auStack_88[8] = puRam00191c68[8];
  auStack_88[9] = puRam00191c68[9];
  auStack_88[10] = puRam00191c68[10];
  auStack_88[0xb] = puRam00191c68[0xb];
  auStack_88[0xc] = puRam00191c68[0xc];
  auStack_88[0xd] = puRam00191c68[0xd];
  auStack_88[0xe] = puRam00191c68[0xe];
  auStack_88[0xf] = puRam00191c68[0xf];
  iVar6 = 0;
  do {
    uVar17 = auStack_a0[iVar6 * 2 + 6];
    uVar7 = FUN_0036a924(param_1,param_2,1,auStack_a0[iVar6 * 2 + 7]);
    *(undefined4 *)(param_1 + (uVar17 - 1) * 4 + 0x28cc) = uVar7;
    if (uVar17 == 4) {
      func_0x00347774(uVar7,puStack_40);
    }
    iVar6 = iVar6 + 1;
  } while (iVar6 < 8);
  if (piRam00191c54[1] == 0) {
    iStack_a4 = 0;
    if (*(int *)(iRam00191c28 + param_2) != 0) {
      iStack_a4 = param_2 + 0x3a5c;
    }
    iStack_a4 = iStack_a4 + 0x10;
    uVar7 = FUN_0036a924(param_1,param_2,1,0x3c);
    *(undefined4 *)(param_1 + 0x28f8) = uVar7;
    uVar7 = func_0x00372f0c(iStack_a4,0x2c);
    func_0x00372d94(*(undefined4 *)(*(int *)(param_1 + 0x28f8) + 0xc),uVar7);
    uVar7 = uRam00192020;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x28f8) + 0xc) + 0x10) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x28f8) + 0xc) + 0xc) = uVar7;
    uVar9 = FUN_0036a924(param_1,param_2,1,0x3d);
    *(undefined4 *)(param_1 + 0x290c) = uVar9;
    uVar9 = func_0x00372f0c(iStack_a4,0x2d);
    func_0x00372d94(*(undefined4 *)(*(int *)(param_1 + 0x290c) + 0xc),uVar9);
    iVar6 = 0;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x290c) + 0xc) + 0x10) = 1;
    *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x290c) + 0xc) + 0xc) = uVar7;
    do {
      iVar10 = FUN_0036a924(param_1,param_2,1,0x3e);
      iVar15 = param_1 + iVar6 * 4;
      *(int *)(iVar15 + 0x2910) = iVar10;
      uVar18 = *(undefined4 *)(iVar10 + 0xc);
      uVar9 = func_0x00372f0c(iStack_a4,0x2e);
      func_0x00372d94(uVar18,uVar9);
      iVar6 = iVar6 + 1;
      *(undefined1 *)(*(int *)(*(int *)(iVar15 + 0x2910) + 0xc) + 0x10) = 1;
      *(undefined4 *)(*(int *)(*(int *)(iVar15 + 0x2910) + 0xc) + 0xc) = uVar7;
    } while (iVar6 < 2);
    *(undefined4 *)(param_1 + 0x29bc) = uRam00192024;
    *(undefined4 *)(param_1 + 0x29c0) = uVar14;
    *(undefined4 *)(param_1 + 0x29c4) = uVar14;
  }
  uVar7 = FUN_0036a924(param_1,param_2,1,0x10);
  *(undefined4 *)(param_1 + 0x28ec) = uVar7;
  piVar11 = piRam00191c54;
  auStack_a0[2] = *puRam00192028;
  auStack_a0[3] = puRam00192028[1];
  uStack_90 = puRam00192028[2];
  uStack_8c = puRam00192028[3];
  func_0x0035c358(param_1 + 0x2538,param_1 + 0x254,auStack_a0[piRam00191c54[1] + 2],
                  auStack_a0[piRam00191c54[1] + 4],0xffffffff);
  if (piVar11[1] == 0) {
    *(undefined4 *)(param_1 + 0x2704) = *(undefined4 *)(*(int *)(param_1 + 0x27c) + 0x10);
    uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x24e0),2);
    func_0x00372d94((undefined4 *)(param_1 + 0x2704),uVar7);
    *(undefined4 *)(param_1 + 0x279c) = *(undefined4 *)(*(int *)(param_1 + 0x27c) + 0x10);
    uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x24e0),3);
    func_0x00372d94((undefined4 *)(param_1 + 0x279c),uVar7);
    *(undefined1 *)(param_1 + 0x27ac) = 1;
    *(undefined4 *)(param_1 + 0x27a8) = uVar12;
    *(undefined4 *)(param_1 + 0x2834) = *(undefined4 *)(*(int *)(param_1 + 0x27c) + 0x10);
    uVar7 = func_0x00372f0c(*(undefined4 *)(param_1 + 0x24e0),4);
    func_0x00372d94((undefined4 *)(param_1 + 0x2834),uVar7);
    *(undefined1 *)(param_1 + 0x2844) = 1;
    *(undefined4 *)(param_1 + 0x2840) = uVar12;
  }
  func_0x0034775c(param_1 + 0x254,puStack_3c);
  piVar11 = piRam00191c54;
  uVar17 = 0;
  auStack_a0[0] = *(uint *)(iRam0019202c + 0x1c);
  auStack_a0[1] = *(undefined4 *)(iRam0019202c + 0x20);
  if (*(int *)(**(int **)(*(int *)(*(int *)(param_1 + 0x24dc) + 4) + 0xc) + 8) != 0) {
    do {
      if (auStack_a0[piVar11[1]] != uVar17) {
        func_0x0036932c(*(undefined4 *)(param_1 + 0x27c),uVar17);
      }
      uVar17 = uVar17 + 1;
    } while (uVar17 < *(uint *)(**(int **)(*(int *)(*(int *)(param_1 + 0x24dc) + 4) + 0xc) + 8));
  }
  if (*(int *)(iRam00191c2c + 0x58) == 0) {
    iVar6 = iRam00191c58 + piRam00191c54[1] * 0x134;
    func_0x003476d8(uVar14,param_1,iVar6 + 0x58,*(undefined4 *)(iVar6 + 0x128));
    uVar17 = 0;
    do {
      iVar15 = iVar6 + uVar17 * 4;
      iVar10 = iVar6 + uVar17 * 0xc;
      uVar7 = func_0x0034807c(*(undefined4 *)(param_1 + 0x24e0),*(undefined4 *)(iVar15 + 0x10c));
      FUN_00347550(uVar14,uVar7,1,&uStack_c4,3);
      *(undefined4 *)(iVar10 + 100) = uStack_c4;
      *(undefined4 *)(iVar10 + 0x68) = uStack_c0;
      *(int *)(iVar10 + 0x6c) = iStack_bc;
      piVar11 = (int *)func_0x0034807c(*(undefined4 *)(param_1 + 0x24e0),
                                       *(undefined4 *)(iVar15 + 0x10c));
      uVar7 = VectorSignedToFloat(*(undefined4 *)(*(int *)(*piVar11 + 0x14) + *piVar11 + 0x10),
                                  (byte)(in_fpscr >> 0x15) & 3);
      FUN_00347550(uVar7,piVar11,1,&uStack_c4,3);
      uVar17 = uVar17 + 1;
      *(undefined4 *)(iVar10 + 0x94) = uStack_c4;
      *(undefined4 *)(iVar10 + 0x98) = uStack_c0;
      *(int *)(iVar10 + 0x9c) = iStack_bc;
    } while (uVar17 < 4);
    func_0x003476d8(uVar12,param_1,iVar6 + 0xc4,*(undefined4 *)(iVar6 + 0x11c));
    func_0x003476d8(uVar4,param_1,iVar6 + 0xdc,*(undefined4 *)(iVar6 + 0x11c));
    func_0x003476d8(uVar12,param_1,iVar6 + 0xd0,*(undefined4 *)(iVar6 + 0x120));
    func_0x003476d8(uVar4,param_1,iVar6 + 0xe8,*(undefined4 *)(iVar6 + 0x120));
  }
  iVar6 = (**(code **)(*(int *)*puRam00192068 + 0xc))
                    ((int *)*puRam00192068,0x234,0x192030,uRam00192490);
  uVar12 = 0;
  if (iVar6 != 0) {
    uVar12 = FUN_00347258();
  }
  *(undefined4 *)(param_1 + 0x29d4) = uVar12;
  if (((*puRam00192494 & 1) == 0) && (iVar6 = func_0x003679b4(puRam00192494), iVar6 != 0)) {
    func_0x0036788c(iRam00192498);
  }
  **(undefined4 **)(param_1 + 0x29d4) = *(undefined4 *)(iRam00192498 + 0x174);
  uVar12 = func_0x00347248(0x10000);
  iVar6 = iRam001924a4;
  *(undefined4 *)(param_1 + 0x24c) = uVar12;
  fVar5 = fRam001924a8;
  iVar10 = *(int *)(iVar6 + 0x4ec);
  if (iVar10 != 0) {
    if (iVar10 == -3) {
      *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)(iVar6 + 0x51a);
    }
    else {
      if (iVar10 == 1 || iVar10 == -1) {
        *(undefined1 *)(param_1 + 0x249e) = 0xfe;
      }
      if (iVar10 < 0) {
        iVar15 = 0;
      }
      else {
        iVar15 = iVar10 + -1;
        piStack_44 = piRam00191c54 + iVar15 * 7;
        func_0x0036df4c(param_1 + 0x28,piStack_44 + 0x53c);
        func_0x0036df4c(param_1 + 8,param_1 + 0x28);
        func_0x0036df4c(param_1 + 0x108,param_1 + 0x28);
        *(short *)(param_1 + 0x2280) = (short)(int)*(float *)(param_1 + 0x2c);
        iVar3 = piStack_44[0x53f];
        *(short *)(param_1 + 0xbe) = (short)iVar3;
        *(short *)(param_1 + 0x2220) = (short)iVar3;
        *(undefined2 *)(param_1 + 0x1c) = *(undefined2 *)((int)piStack_44 + 0x14fe);
      }
      piVar11 = piRam00191c54;
      *(uint *)(param_2 + 0x222c) = piRam00191c54[iVar15 * 7 + 0x541] & 0xffffff;
      *(int *)(param_2 + 0x2248) = piVar11[iVar15 * 7 + 0x542];
      if (-2 < iVar10) goto LAB_00192374;
    }
  }
  bVar19 = *(int *)(param_2 + 0x114) != 0;
  uVar17 = 0;
  if (bVar19) {
    uVar17 = (uint)*(byte *)(iVar6 + 0x551);
  }
  bVar20 = uVar17 != 0;
  uVar13 = uVar17;
  if (bVar19 && bVar20) {
    uVar13 = *(uint *)(iVar6 + 0x4e8);
    uVar17 = uVar13 - 4;
  }
  if (((int)uVar17 < 0 != ((bVar19 && bVar20) && SBORROW4(uVar13,4))) &&
     ((*(ushort *)(iRam001924ac + (uVar13 + *piRam00191c54) * 4 + 2) & 0x4000) != 0)) {
    auStack_88[0x10] = param_2 + 0x100;
    if (*(short *)(param_2 + 0x104) == 1) {
      uVar2 = *(ushort *)(iVar6 + -0xfe) & 1;
joined_r0x00192250:
      if (uVar2 == 0) goto LAB_0019236c;
    }
    else if (*(short *)(param_2 + 0x104) == 0x32) {
      uVar2 = *(ushort *)(iRam001924b0 + 0xf0) & 0x20;
      goto joined_r0x00192250;
    }
    if (((*puRam00192494 & 1) == 0) && (iVar15 = func_0x003679b4(puRam00192494), iVar15 != 0)) {
      func_0x0036788c(iRam00192498);
    }
    iVar15 = *(int *)(iRam001924b4 + 0xf3c);
    auStack_88[0xf] = func_0x00372c90(param_2 + 0x118,iVar15);
    if (auStack_88[0xf] != 0) {
      auStack_88[0xe] = 200;
      uVar12 = 0xc0;
      uStack_c0 = 0x20;
      uVar2 = *(ushort *)(auStack_88[0x10] + 4);
      fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piRam001924b8 + 0x110),
                                          (byte)(in_fpscr >> 0x15) & 3);
      if (uVar2 < 0x19) {
        uVar12 = 0x78;
        fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piRam001924b8 + 0x110),
                                            (byte)(in_fpscr >> 0x15) & 3);
      }
      iStack_bc = (int)(fRam001924bc / fVar21 + fVar5);
      if ((iVar15 == 6 || iVar15 == 7) && (uVar2 == 0x60 || uVar2 == 0x61)) {
        uStack_c0 = 0x40;
      }
      uStack_b8 = 0;
      uStack_c4 = 0x100;
      func_0x003471c8(uVar14,param_2,param_2 + 0x224c,auStack_88[0xf],200,uVar12);
    }
  }
LAB_0019236c:
  *(undefined1 *)(iVar6 + 0x551) = 1;
LAB_00192374:
  if (iVar10 != 2) {
    func_0x0036c494(param_2,0,uRam001924c0);
  }
  *(undefined1 *)(iVar6 + 0x503) = 0;
  if (iVar10 != 2) {
    *(ushort *)(iRam001924c4 + 0xfe) = *(ushort *)(param_1 + 0x1c) & 0xff | 0xd00;
  }
  *(undefined1 *)(iVar6 + 0x503) = 1;
  if (*(short *)(param_2 + 0x104) < 0x10) {
    *(ushort *)(iVar6 + -0xbc) =
         (ushort)*(undefined4 *)(iRam001924c8 + *(short *)(param_2 + 0x104) * 4) |
         *(ushort *)(iVar6 + -0xbc);
  }
  uVar17 = (*(ushort *)(param_1 + 0x1c) & 0xf00) >> 8;
  if ((uVar17 == 5 || uVar17 == 6) && (iRam001924cc <= piRam00191c54[2])) {
    uVar17 = 0xd;
  }
  (**(code **)(iRam001924d0 + uVar17 * 4))(param_2,param_1);
  if ((uVar17 != 0) && (*(int *)(iVar6 + 0x4e4) == 0 || *(int *)(iVar6 + 0x4e4) == 3)) {
    if (((*(uint *)(iRam00191c2c + 0xd0) & 1) == 0) &&
       (iVar10 = func_0x003679b4(uRam001924d4), puVar8 = puRam001924dc, uVar12 = uRam001924d8,
       iVar10 != 0)) {
      *puRam001924dc = uVar14;
      puVar8[1] = uVar12;
      puVar8[2] = uVar14;
    }
    uVar14 = func_0x0034711c(param_2,param_1,param_1 + 0x28,puRam001924dc,0);
    *(undefined4 *)(iStack_38 + 0x724) = uVar14;
    if (*(ushort *)(iVar6 + 0x54e) != 0) {
      *(ushort *)(iVar6 + 0x54e) = *(ushort *)(iVar6 + 0x54e) | 0x8000;
    }
  }
  if (*(short *)(iVar6 + 0x552) != 0) {
    fVar21 = (float)VectorSignedToFloat((int)*(short *)(*piRam001924b8 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)*(short *)(iVar6 + 0x552) < (int)(fRam0019261c / fVar21 + fVar5)) {
      *(undefined2 *)(iVar6 + 0x580) = 3;
      uStack_c0 = 0;
      iStack_bc = 1;
      uStack_c4 = 0;
      func_0x003738d0(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                      *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_2,
                      (int)*(short *)(iRam00192620 + 2),0,0);
      *(byte *)(iStack_38 + 0x72a) = *(byte *)(iStack_38 + 0x72a) & 0xbf;
    }
    else {
      *(undefined2 *)(iVar6 + 0x552) = 0;
    }
  }
  if (*(int *)(iVar6 + 0x548) != 0) {
    uStack_c4 = uRam00192624;
    FUN_0037547c(*(int *)(iVar6 + 0x548),0,4,uRam00192628,uRam00192628);
    *(undefined4 *)(iVar6 + 0x548) = 0;
  }
  func_0x003470b8(param_2);
  *(undefined2 *)(*piRam001924b8 + 0x454) = 0;
  cVar1 = *(char *)((int)piRam00191c54 + 0x2d);
  bVar19 = cVar1 == '\0';
  if (bVar19) {
    cVar1 = *(char *)(param_1 + 2);
  }
  *(bool *)(param_1 + 0x2492) = !bVar19 || cVar1 != '\x02';
  return;
}
