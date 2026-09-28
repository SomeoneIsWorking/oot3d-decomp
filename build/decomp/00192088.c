// OoT3D decomp @ 00192088  name=FUN_00192088  size=1348

void FUN_00192088(undefined4 param_1)

{
  char cVar1;
  undefined2 uVar2;
  ushort uVar3;
  int *piVar4;
  float fVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  uint uVar10;
  int unaff_r4;
  int unaff_r5;
  int iVar11;
  int iVar12;
  int unaff_r11;
  bool in_ZR;
  bool bVar13;
  bool bVar14;
  uint in_fpscr;
  float fVar15;
  undefined4 unaff_s16;
  int in_stack_00000090;

  if (!in_ZR) {
    param_1 = FUN_00347258();
  }
  *(undefined4 *)(unaff_r5 + 0x9d4) = param_1;
  if (((*puRam00192494 & 1) == 0) && (iVar7 = func_0x003679b4(puRam00192494), iVar7 != 0)) {
    func_0x0036788c(iRam00192498);
  }
  **(undefined4 **)(unaff_r5 + 0x9d4) = *(undefined4 *)(iRam00192498 + 0x174);
  uVar8 = func_0x00347248(0x10000);
  iVar7 = iRam001924a4;
  *(undefined4 *)(unaff_r4 + 0x24c) = uVar8;
  fVar5 = fRam001924a8;
  iVar11 = *(int *)(iVar7 + 0x4ec);
  if (iVar11 != 0) {
    if (iVar11 == -3) {
      *(undefined2 *)(unaff_r4 + 0x1c) = *(undefined2 *)(iVar7 + 0x51a);
    }
    else {
      if (iVar11 == 1 || iVar11 == -1) {
        *(undefined1 *)(unaff_r5 + 0x49e) = 0xfe;
      }
      piVar4 = piRam00191c54;
      if (iVar11 < 0) {
        iVar12 = 0;
      }
      else {
        iVar12 = iVar11 + -1;
        func_0x0036df4c(unaff_r4 + 0x28,piRam00191c54 + iVar12 * 7 + 0x53c);
        func_0x0036df4c(unaff_r4 + 8,unaff_r4 + 0x28);
        func_0x0036df4c(unaff_r4 + 0x108,unaff_r4 + 0x28);
        *(short *)(unaff_r4 + 0x2280) = (short)(int)*(float *)(unaff_r4 + 0x2c);
        uVar2 = (undefined2)piVar4[iVar12 * 7 + 0x53f];
        *(undefined2 *)(unaff_r4 + 0xbe) = uVar2;
        *(undefined2 *)(unaff_r4 + 0x2220) = uVar2;
        *(undefined2 *)(unaff_r4 + 0x1c) = *(undefined2 *)((int)piVar4 + iVar12 * 0x1c + 0x14fe);
      }
      piVar4 = piRam00191c54;
      *(uint *)(unaff_r11 + 0x222c) = piRam00191c54[iVar12 * 7 + 0x541] & 0xffffff;
      *(int *)(unaff_r11 + 0x2248) = piVar4[iVar12 * 7 + 0x542];
      if (-2 < iVar11) goto LAB_00192374;
    }
  }
  bVar13 = *(int *)(unaff_r11 + 0x114) != 0;
  uVar9 = 0;
  if (bVar13) {
    uVar9 = (uint)*(byte *)(iVar7 + 0x551);
  }
  bVar14 = uVar9 != 0;
  uVar10 = uVar9;
  if (bVar13 && bVar14) {
    uVar10 = *(uint *)(iVar7 + 0x4e8);
    uVar9 = uVar10 - 4;
  }
  if (((int)uVar9 < 0 != ((bVar13 && bVar14) && SBORROW4(uVar10,4))) &&
     ((*(ushort *)(iRam001924ac + (uVar10 + *piRam00191c54) * 4 + 2) & 0x4000) != 0)) {
    if (*(short *)(unaff_r11 + 0x104) == 1) {
      uVar3 = *(ushort *)(iVar7 + -0xfe) & 1;
joined_r0x00192250:
      if (uVar3 == 0) goto LAB_0019236c;
    }
    else if (*(short *)(unaff_r11 + 0x104) == 0x32) {
      uVar3 = *(ushort *)(iRam001924b0 + 0xf0) & 0x20;
      goto joined_r0x00192250;
    }
    if (((*puRam00192494 & 1) == 0) && (iVar12 = func_0x003679b4(puRam00192494), iVar12 != 0)) {
      func_0x0036788c(iRam00192498);
    }
    iVar12 = func_0x00372c90(unaff_r11 + 0x118,*(undefined4 *)(iRam001924b4 + 0xf3c));
    if (iVar12 != 0) {
      VectorSignedToFloat((int)*(short *)(*piRam001924b8 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
      if (*(ushort *)(unaff_r11 + 0x104) < 0x19) {
        VectorSignedToFloat((int)*(short *)(*piRam001924b8 + 0x110),(byte)(in_fpscr >> 0x15) & 3);
      }
      func_0x003471c8();
    }
  }
LAB_0019236c:
  *(undefined1 *)(iVar7 + 0x551) = 1;
LAB_00192374:
  if (iVar11 != 2) {
    func_0x0036c494();
  }
  *(undefined1 *)(iVar7 + 0x503) = 0;
  if (iVar11 != 2) {
    *(ushort *)(iRam001924c4 + 0xfe) = *(ushort *)(unaff_r4 + 0x1c) & 0xff | 0xd00;
  }
  *(undefined1 *)(iVar7 + 0x503) = 1;
  if (*(short *)(unaff_r11 + 0x104) < 0x10) {
    *(ushort *)(iVar7 + -0xbc) =
         (ushort)*(undefined4 *)(iRam001924c8 + *(short *)(unaff_r11 + 0x104) * 4) |
         *(ushort *)(iVar7 + -0xbc);
  }
  uVar9 = (*(ushort *)(unaff_r4 + 0x1c) & 0xf00) >> 8;
  if ((uVar9 == 5 || uVar9 == 6) && (iRam001924cc <= piRam00191c54[2])) {
    uVar9 = 0xd;
  }
  (**(code **)(iRam001924d0 + uVar9 * 4))();
  if ((uVar9 != 0) && (*(int *)(iVar7 + 0x4e4) == 0 || *(int *)(iVar7 + 0x4e4) == 3)) {
    if (((*(uint *)(iRam00191c2c + 0xd0) & 1) == 0) &&
       (iVar11 = func_0x003679b4(uRam001924d4), puVar6 = puRam001924dc, uVar8 = uRam001924d8,
       iVar11 != 0)) {
      *puRam001924dc = unaff_s16;
      puVar6[1] = uVar8;
      puVar6[2] = unaff_s16;
    }
    uVar8 = func_0x0034711c();
    *(undefined4 *)(in_stack_00000090 + 0x724) = uVar8;
    if (*(ushort *)(iVar7 + 0x54e) != 0) {
      *(ushort *)(iVar7 + 0x54e) = *(ushort *)(iVar7 + 0x54e) | 0x8000;
    }
  }
  if (*(short *)(iVar7 + 0x552) != 0) {
    fVar15 = (float)VectorSignedToFloat((int)*(short *)(*piRam001924b8 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    if ((int)*(short *)(iVar7 + 0x552) < (int)(fRam0019261c / fVar15 + fVar5)) {
      *(undefined2 *)(iVar7 + 0x580) = 3;
      func_0x003738d0(*(undefined4 *)(unaff_r4 + 0x28),*(undefined4 *)(unaff_r4 + 0x2c),
                      *(undefined4 *)(unaff_r4 + 0x30),unaff_r11 + 0x208c);
      *(byte *)(in_stack_00000090 + 0x72a) = *(byte *)(in_stack_00000090 + 0x72a) & 0xbf;
    }
    else {
      *(undefined2 *)(iVar7 + 0x552) = 0;
    }
  }
  if (*(int *)(iVar7 + 0x548) != 0) {
    FUN_0037547c(*(int *)(iVar7 + 0x548),0,4,uRam00192628);
    *(undefined4 *)(iVar7 + 0x548) = 0;
  }
  func_0x003470b8();
  *(undefined2 *)(*piRam001924b8 + 0x454) = 0;
  cVar1 = *(char *)((int)piRam00191c54 + 0x2d);
  bVar13 = cVar1 == '\0';
  if (bVar13) {
    cVar1 = *(char *)(unaff_r4 + 2);
  }
  *(bool *)(unaff_r5 + 0x492) = !bVar13 || cVar1 != '\x02';
  return;
}
