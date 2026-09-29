// OoT3D decomp @ 001f69b4  name=FUN_001f69b4  size=1708

void FUN_001f69b4(int param_1,int param_2)

{
  ushort uVar1;
  short sVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined1 uVar10;
  int iVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  uint in_fpscr;
  float fVar17;
  float fVar18;

  *(undefined1 *)(param_1 + 0x19a) = 1;
  uVar16 = DAT_001f6d10;
  uVar15 = DAT_001f6d0c;
  uVar1 = *(ushort *)(param_1 + 0x1c);
  *(char *)(param_1 + 0x214) = (char)((uVar1 & 0x4000) >> 0xe);
  *(ushort *)(param_1 + 0x1a8) = *(ushort *)(param_1 + 0x1c) >> 8 & 0x3f;
  *(ushort *)(param_1 + 0x1c) = *(ushort *)(param_1 + 0x1c) & 0xff;
  iVar11 = FUN_0036405c(param_2);
  if (iVar11 != 0) {
LAB_001f6cf8:
    FUN_00374428(param_1);
    return;
  }
  FUN_003510b0(param_1,DAT_001f6d14);
  FUN_00353dd0(param_2,param_1 + 0x1b8);
  FUN_00353d24(param_2,param_1 + 0x1b8,param_1,DAT_001f6d18);
  *(undefined2 *)(param_1 + 0x1b0) = 1;
  uVar9 = DAT_001f6d58;
  uVar8 = DAT_001f6d54;
  uVar7 = DAT_001f6d50;
  uVar6 = DAT_001f6d4c;
  uVar5 = DAT_001f6d40;
  uVar4 = DAT_001f6d3c;
  uVar3 = DAT_001f6d38;
  uVar14 = DAT_001f6d24;
  uVar12 = DAT_001f6d1c;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
  case 1:
  case 2:
    FUN_0037572c(DAT_001f6d1c,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar12;
    uVar15 = DAT_001f6d20;
    break;
  case 3:
    fVar17 = (float)FUN_003738a8(DAT_001f6d30);
    uVar15 = DAT_001f6d34;
    uVar12 = DAT_001f6d24;
    *(short *)(param_1 + 0x18) = (short)(int)fVar17;
    FUN_0037572c(uVar12,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar12;
    break;
  case 4:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xf:
  case 0x10:
  case 0x19:
    FUN_0037572c(DAT_001f6d24,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar14;
    uVar15 = DAT_001f6d48;
    break;
  case 5:
    FUN_0037572c(DAT_001f6d38,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar3;
    uVar15 = uVar4;
    break;
  case 6:
    *(undefined2 *)(param_1 + 0x1b0) = 0;
    uVar15 = DAT_001f6d2c;
    FUN_0037572c(uVar14,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar14;
    break;
  case 7:
    *(undefined2 *)(param_1 + 0x1b0) = 0;
    uVar15 = DAT_001f6d34;
    FUN_0037572c(uVar3,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar3;
    break;
  case 8:
  case 9:
  case 10:
    FUN_0037572c(DAT_001f6d40,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar5;
    uVar15 = DAT_001f6d44;
    break;
  case 0xe:
    FUN_0037572c(DAT_001f6d4c,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar6;
    uVar15 = DAT_001f6d48;
    break;
  case 0x11:
    *(undefined2 *)(param_1 + 0x1b0) = 0;
    FUN_0037572c(uVar14,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar14;
    uVar15 = DAT_001f6d28;
    break;
  case 0x12:
    FUN_0037572c(DAT_001f6d54,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar8;
    uVar15 = uVar7;
    break;
  case 0x13:
    FUN_0037572c(DAT_001f6d4c,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar6;
    uVar15 = DAT_001f6d20;
    break;
  case 0x14:
    FUN_0037572c(DAT_001f6d24,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar14;
    uVar15 = DAT_001f6d20;
    break;
  case 0x15:
  case 0x16:
  case 0x17:
  case 0x18:
    FUN_0037572c(DAT_001f6d58,param_1,param_1);
    *(undefined4 *)(param_1 + 0x1b4) = uVar9;
    uVar16 = DAT_001f6d60;
    uVar15 = DAT_001f6d5c;
    *(undefined2 *)(param_1 + 0x34) = 0x4000;
  }
  iVar11 = DAT_001f6d64;
  uVar10 = FUN_00363c10(param_2 + 0x3a58,
                        (int)*(short *)(DAT_001f6d64 + *(short *)(param_1 + 0x1c) * 4));
  *(undefined1 *)(param_1 + 0x1e) = uVar10;
  *(undefined4 *)(param_1 + 0x210) = 0;
  if (*(char *)(param_1 + 0x1e) < '\0') goto LAB_001f6cf8;
  FUN_00372f38(param_1,param_2,param_1 + 0x210,
               *(undefined1 *)(iVar11 + *(short *)(param_1 + 0x1c) * 4 + 2),0);
  sVar2 = *(short *)(param_1 + 0x1c);
  if (sVar2 == 2) {
    uVar12 = *(undefined4 *)(param_1 + 0x210);
    uVar14 = 0x6e;
LAB_001f6dc0:
    FUN_00369178(uVar12,uVar14);
  }
  else {
    if (sVar2 < 3) {
      if (sVar2 == 0) {
        uVar12 = *(undefined4 *)(param_1 + 0x210);
        uVar14 = 0x6c;
      }
      else {
        if (sVar2 != 1) goto LAB_001f6dd4;
        uVar12 = *(undefined4 *)(param_1 + 0x210);
        uVar14 = 0x6d;
      }
      goto LAB_001f6dc0;
    }
    if (sVar2 == 0x13) {
      FUN_00369178(*(undefined4 *)(param_1 + 0x210),0x71);
    }
    else if (sVar2 == 0x14) {
      uVar12 = *(undefined4 *)(param_1 + 0x210);
      uVar14 = 0x70;
      goto LAB_001f6dc0;
    }
  }
LAB_001f6dd4:
  uVar12 = DAT_001f7060;
  *(undefined2 *)(param_1 + 0x1ae) = 0;
  FUN_00372d4c(uVar15,uVar16,param_1 + 0xbc,uVar12);
  *(undefined1 *)(param_1 + 0xd0) = 0xb4;
  *(undefined4 *)(param_1 + 0x3c) = *(undefined4 *)(param_1 + 0x28);
  *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x44) = *(undefined4 *)(param_1 + 0x30);
  *(undefined2 *)(param_1 + 0x1aa) = 0;
  if ((uVar1 & 0x8000) == 0) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_001f7064;
    *(undefined2 *)(param_1 + 0x1b2) = 0xffff;
    return;
  }
  *(undefined2 *)(param_1 + 0x1b2) = 0xf;
  uVar15 = DAT_001f6d5c;
  *(undefined2 *)(param_1 + 0x1ac) = 0x23;
  *(undefined4 *)(param_1 + 0x6c) = uVar15;
  *(undefined4 *)(param_1 + 100) = uVar15;
  *(undefined4 *)(param_1 + 0x70) = uVar15;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
    FUN_00376a78(param_2,0x84);
    break;
  case 1:
    FUN_00376a78(param_2,0x85);
    break;
  case 2:
    FUN_00376a78(param_2,0x86);
    break;
  case 3:
    FUN_00376a78(param_2,0x83);
    break;
  case 4:
  case 0xb:
    FUN_00376a78(param_2,0x8e);
    break;
  case 5:
    FUN_00376a78(param_2,3);
    break;
  default:
    break;
  case 8:
    FUN_00376a78(param_2,0x92);
    break;
  case 9:
    FUN_00376a78(param_2,0x93);
    break;
  case 10:
    FUN_00376a78(param_2,0x94);
    break;
  case 0xc:
    uVar15 = 2;
    goto LAB_001f7018;
  case 0xd:
    uVar15 = 7;
    goto LAB_001f7018;
  case 0xe:
    uVar15 = 0x43;
    goto LAB_001f7018;
  case 0xf:
    uVar15 = 0x44;
    goto LAB_001f7018;
  case 0x10:
    uVar15 = 0x3c;
LAB_001f7018:
    iVar11 = FUN_00371e40(param_1,param_2);
    if (iVar11 == 0) {
      FUN_00346778(param_1,param_2,uVar15);
    }
    break;
  case 0x11:
    FUN_00376a78(param_2,0x77);
    break;
  case 0x12:
    FUN_00352dbc(param_2,0x70);
    break;
  case 0x13:
    FUN_00376a78(param_2,0x88);
    break;
  case 0x14:
    FUN_00376a78(param_2,0x87);
  }
  *(undefined4 *)(param_1 + 0x1a4) = DAT_001f7068;
  iVar11 = *(int *)(DAT_002b1874 + param_2);
  if (*(short *)(param_1 + 0x1aa) != 0) {
    iVar13 = FUN_00371e40(param_1,param_2);
    if (iVar13 == 0) {
      FUN_003724dc(DAT_002b187c,DAT_002b1878,param_1,param_2,(int)*(short *)(param_1 + 0x1aa));
      *(short *)(param_1 + 0x1b2) = *(short *)(param_1 + 0x1b2) + 1;
    }
    else {
      *(undefined2 *)(param_1 + 0x1aa) = 0;
    }
  }
  if (*(short *)(param_1 + 0x1b2) != 0) {
    if (*(int *)(DAT_002b1880 + iVar11) != 0 && *(int *)(DAT_002b1880 + iVar11) != param_1) {
      FUN_00374428(param_1);
    }
    uVar15 = *(undefined4 *)(iVar11 + 0x2c);
    uVar16 = *(undefined4 *)(iVar11 + 0x30);
    *(undefined4 *)(param_1 + 0x28) = *(undefined4 *)(iVar11 + 0x28);
    *(undefined4 *)(param_1 + 0x2c) = uVar15;
    *(undefined4 *)(param_1 + 0x30) = uVar16;
    if ((*(short *)(param_1 + 0x1c) < 4) || (*(short *)(param_1 + 0x1c) == 0x11)) {
      *(short *)(param_1 + 0xbe) = *(short *)(param_1 + 0xbe) + 0x280;
    }
    fVar17 = (float)FUN_002cfca0((int)(short)(*(short *)(param_1 + 0x1b2) * (short)DAT_002b1884));
    iVar11 = DAT_002b1890;
    fVar18 = (float)VectorSignedToFloat((int)*(short *)(param_1 + 0x1b2),
                                        (byte)(in_fpscr >> 0x15) & 3);
    fVar17 = DAT_002b188c + fVar17 * fVar18 * DAT_002b1888 + *(float *)(param_1 + 0x2c);
    *(float *)(param_1 + 0x2c) = fVar17;
    if (*(int *)(iVar11 + 4) == 0) {
      *(float *)(param_1 + 0x2c) = fVar17 + DAT_002b1894;
    }
    return;
  }
  *(undefined4 *)(param_1 + 0x140) = 0;
  *(undefined4 *)(param_1 + 0x13c) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  return;
}
