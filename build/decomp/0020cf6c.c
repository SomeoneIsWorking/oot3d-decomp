// OoT3D decomp @ 0020cf6c  name=FUN_0020cf6c  size=2292

void FUN_0020cf6c(int param_1,int param_2)

{
  int iVar1;
  short sVar2;
  int *piVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  bool bVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  undefined4 uVar11;
  undefined4 uVar12;

  uVar12 = DAT_0020d274;
  uVar7 = DAT_0020d270;
  uVar4 = DAT_0020d26c;
  *(undefined2 *)(param_1 + 0x488) = 0;
  *(undefined4 *)(param_1 + 0x484) = uVar4;
  *(undefined4 *)(param_1 + 0x438) = uVar7;
  *(undefined1 *)(param_1 + 0x460) = 0;
  FUN_003510b0(param_1,uVar12);
  FUN_00372d4c(uVar4,uVar4,param_1 + 0xbc,0);
  sVar2 = *(short *)(param_1 + 0x1c);
  if ((((sVar2 != 2 && sVar2 != -2) && sVar2 != 4) && sVar2 != 6) && sVar2 != 7) {
    FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_1 + 0x498,0,0,0,0,0);
    uVar4 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x498);
    *(undefined4 *)(param_1 + 0x494) = uVar4;
    FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_1 + 0x4b4,0,0,0,0,0);
    uVar4 = FUN_0034faa8(param_2,param_2 + 0xa70,param_1 + 0x4b4);
    *(undefined4 *)(param_1 + 0x4b0) = uVar4;
  }
  if ((*(byte *)(param_1 + 0x1e) < 0x13) &&
     (iVar5 = param_2 + (uint)*(byte *)(param_1 + 0x1e) * 0x80, *(int *)(DAT_0020d278 + iVar5) != 0)
     ) {
    iVar5 = iVar5 + 0x3a5c;
  }
  else {
    iVar5 = 0;
  }
  iVar5 = iVar5 + 0x10;
  FUN_003357dc(param_1 + 0x360);
  *(int *)(param_1 + 0x368) = iVar5;
  if (*(short *)(param_1 + 0x1c) == 6 || *(short *)(param_1 + 0x1c) == 7) {
    uVar4 = ObjectBankArchive_00358ef8(iVar5,2);
    uVar7 = *(undefined4 *)(param_1 + 0x178);
    uVar12 = 1;
  }
  else {
    uVar4 = ObjectBankArchive_00358ef8(iVar5,1);
    uVar7 = *(undefined4 *)(param_1 + 0x178);
    uVar12 = 4;
  }
  FUN_00337200(param_1 + 0x360,param_2,uVar4,uVar7,uVar12,param_1 + 0x3a8,3);
  *(undefined1 *)(*(int *)(param_1 + 0x36c) + 0xad) = 0;
  iVar6 = 0;
  *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x36c) + 0xc) + 0x10) = 1;
  do {
    uVar4 = FUN_00372f0c(iVar5,iVar6);
    iVar1 = iVar6 * 4;
    iVar6 = iVar6 + 1;
    *(undefined4 *)(param_1 + iVar1 + 0x43c) = uVar4;
    uVar4 = DAT_0020d27c;
  } while (iVar6 < 9);
  *(undefined4 *)(param_1 + 0x438) = DAT_0020d27c;
  *(undefined4 *)(*(int *)(*(int *)(param_1 + 0x36c) + 0xc) + 0xc) = uVar4;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 4:
    uVar4 = FUN_00372f0c(iVar5,8);
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x36c) + 0xc);
    break;
  default:
    uVar4 = *(undefined4 *)(param_1 + 0x44c);
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x36c) + 0xc);
    break;
  case 6:
  case 7:
    uVar4 = *(undefined4 *)(param_1 + 0x444);
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x36c) + 0xc);
    break;
  case 8:
    uVar4 = FUN_00372f0c(iVar5,6);
    uVar7 = *(undefined4 *)(*(int *)(param_1 + 0x36c) + 0xc);
    break;
  case 9:
    uVar4 = FUN_00372f0c(iVar5,5);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x36c) + 0xc),uVar4);
    goto LAB_0015b904;
  case 10:
    uVar4 = FUN_00372f0c(iVar5,7);
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x36c) + 0xc),uVar4);
    goto LAB_0015b904;
  }
  FUN_00372d94(uVar7,uVar4);
LAB_0015b904:
  *(undefined1 *)(param_1 + 0x19a) = 1;
  uVar4 = DAT_0015bd10;
  switch(*(undefined2 *)(param_1 + 0x1c)) {
  case 0:
  case 1:
  case 2:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
  case 10:
    uVar7 = *(undefined4 *)(DAT_0015bd0c + param_2);
    *(undefined4 *)(param_1 + 0x47c) = DAT_0015bd10;
    iVar5 = FUN_0035b164();
    if (iVar5 == 1) {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0015bd14 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *DAT_0015bd20 = (short)(int)(DAT_0015bd24 / fVar9 + DAT_0015bd1c);
    }
    else {
      fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0015bd14 + 0x110),
                                         (byte)(in_fpscr >> 0x15) & 3);
      *DAT_0015bd20 = (short)(int)(DAT_0015bd18 / fVar9 + DAT_0015bd1c);
    }
    uVar12 = DAT_0015bd28;
    *(undefined4 *)(param_1 + 0x48c) = DAT_0015bd28;
    *(undefined4 *)(param_1 + 0x470) = uVar4;
    *(undefined4 *)(param_1 + 0x474) = uVar4;
    *(undefined4 *)(param_1 + 0x478) = uVar4;
    switch(*(undefined2 *)(param_1 + 0x1c)) {
    case 4:
    case 8:
    case 9:
    case 10:
      uVar11 = 5;
      goto LAB_0015ba74;
    default:
      *(undefined4 *)(param_1 + 0x3a0) = *(undefined4 *)(DAT_0015bd20 + 2);
      break;
    case 6:
      FUN_00353190(uVar4,uVar12,param_1 + 0x360,1);
      break;
    case 7:
      uVar11 = 1;
LAB_0015ba74:
      FUN_00353190(uVar4,uVar12,param_1 + 0x360,uVar11);
    }
    *(undefined4 *)(param_1 + 0x46c) = uVar4;
    *(undefined4 *)(param_1 + 0xc4) = uVar12;
    *(undefined2 *)(param_1 + 0x462) = 0;
    switch(*(undefined2 *)(param_1 + 0x1c)) {
    default:
      FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),param_1 + 0x498,100,0x7f,0x7f,0xff,0);
      FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                   *(undefined4 *)(param_1 + 0x30),param_1 + 0x4b4,100,0x7f,0x7f,0xff,0);
      break;
    case 1:
    case 2:
    case 4:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
      break;
    }
    sVar2 = *(short *)(param_1 + 0x1c);
    if (sVar2 == 1) {
      *(undefined4 *)(param_1 + 0x490) = DAT_0015bd2c;
      return;
    }
    if (sVar2 == 6) {
      iVar5 = *DAT_0015bd38;
      bVar8 = iVar5 == 0x608 || iVar5 == 0x564;
      if (iVar5 != 0x608 && iVar5 != 0x564) {
        bVar8 = iVar5 == 0x60c;
      }
      if (!bVar8) {
        bVar8 = iVar5 == 0x610;
      }
      if (!bVar8) {
        bVar8 = iVar5 == 0x580;
      }
      if (((!bVar8) && (*(int *)(DAT_0015bd3c + 0x4e8) < 4)) ||
         ((*(ushort *)(*(int *)(DAT_0015bd0c + param_2) + 0x1c) & 0xf00) != 0x200)) {
        FUN_00374428(param_1);
      }
      iVar5 = FUN_00357eac(uVar7,param_1);
      uVar4 = DAT_0015bd44;
      if (DAT_0015bd40 < iVar5) {
        FUN_00374428(param_1);
        uVar4 = DAT_0015bd44;
      }
    }
    else {
      uVar4 = DAT_0015bd30;
      if (sVar2 != 7) {
        uVar4 = DAT_0015bd34;
      }
    }
    break;
  case 3:
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,0,0,0);
    uVar7 = FUN_0036ae18(param_1 + 0x1a4,0);
    uVar4 = DAT_0015bd10;
    uVar11 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    uVar12 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    FUN_0035302c(DAT_0015bd10,uVar12,uVar11,DAT_0015bd10,param_1 + 0x1a4,0,2,1);
    uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1e0) = uVar7;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 0x10) = 1;
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0xc),*(undefined4 *)(param_1 + 0x440));
    uVar7 = DAT_0015bd28;
    *(undefined4 *)(param_1 + 0x5c) = DAT_0015bd28;
    *(undefined4 *)(param_1 + 0x58) = uVar7;
    *(undefined4 *)(param_1 + 0x54) = uVar7;
    *(undefined4 *)(param_1 + 0x48c) = uVar7;
    *(undefined4 *)(param_1 + 0x478) = uVar4;
    uVar7 = DAT_0015bfe0;
    *(undefined4 *)(param_1 + 0x46c) = uVar4;
    *(undefined4 *)(param_1 + 0xc4) = uVar7;
    *(undefined2 *)(param_1 + 0x462) = 0;
    fVar9 = (float)VectorSignedToFloat((int)*(short *)(*DAT_0015bd14 + 0x110),
                                       (byte)(in_fpscr >> 0x15) & 3);
    *(short *)(param_1 + 0x462) = (short)(int)(DAT_0015bfe8 / fVar9 + DAT_0015bd1c);
    *(undefined2 *)(param_1 + 0x488) = 4000;
    if (*DAT_0015bd38 == 0x53) {
      FUN_00375bcc(param_1,DAT_0015bffc);
      uVar4 = DAT_0015c000;
    }
    else {
      *(undefined4 *)(param_1 + 0x54) = DAT_0015bfec;
      *(undefined4 *)(param_1 + 0x58) = DAT_0015bff0;
      *(undefined4 *)(param_1 + 0x5c) = DAT_0015bff4;
      *(undefined4 *)(param_1 + 0x478) = DAT_0015bff8;
      uVar4 = DAT_0015c000;
    }
    break;
  case 0xfffe:
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,0,0,0);
    uVar7 = FUN_0036ae18(param_1 + 0x1a4,0);
    uVar4 = DAT_0015bd10;
    uVar11 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    uVar12 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    FUN_0035302c(DAT_0015bd10,uVar12,uVar11,DAT_0015bd10,param_1 + 0x1a4,0,2,1);
    uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x1e0) = uVar7;
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 0x10) = 1;
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0xc),*(undefined4 *)(param_1 + 0x43c));
    *(undefined4 *)(param_1 + 0x47c) = DAT_0015bfdc;
    *(undefined4 *)(param_1 + 0x48c) = DAT_0015bd28;
    *(undefined4 *)(param_1 + 0x478) = uVar4;
    uVar7 = DAT_0015bfe0;
    *(undefined4 *)(param_1 + 0x46c) = uVar4;
    *(undefined4 *)(param_1 + 0xc4) = uVar7;
    *(undefined2 *)(param_2 + 0x3202) = 0xff01;
    *(undefined2 *)(param_2 + 0x3208) = 0xff01;
    *(undefined2 *)(param_2 + 0x31fc) = 0xff01;
    *(undefined2 *)(param_2 + 0x3204) = 0xff01;
    *(undefined2 *)(param_2 + 0x320a) = 0xff01;
    *(undefined2 *)(param_2 + 0x31fe) = 0xff01;
    *(undefined2 *)(param_2 + 0x3206) = 0xff01;
    *(undefined2 *)(param_2 + 0x320c) = 0xff01;
    *(undefined2 *)(param_2 + 0x3200) = 0xff01;
    *(undefined2 *)(param_2 + 0x320e) = 0xfe0c;
    *(undefined2 *)(param_1 + 0x462) = 0x14;
    *(undefined2 *)(param_1 + 0x488) = 4000;
    uVar4 = DAT_0015bfe4;
    break;
  case 0xffff:
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,0,0,0);
    uVar7 = DAT_0015bd28;
    FUN_0035302c(DAT_0015bd28,DAT_0015bd28,DAT_0015bd28,DAT_0015bd48,param_1 + 0x1a4,0,2,1);
    *(undefined1 *)(*(int *)(*(int *)(param_1 + 0x1cc) + 0xc) + 0x10) = 1;
    FUN_00372d94(*(undefined4 *)(*(int *)(param_1 + 0x1cc) + 0xc),*(undefined4 *)(param_1 + 0x43c));
    fVar9 = DAT_0015bd4c;
    piVar3 = DAT_0015bd14;
    uVar4 = DAT_0015bd10;
    *(undefined4 *)(param_1 + 0x47c) = DAT_0015bd10;
    fVar10 = (float)VectorSignedToFloat((int)*(short *)(*piVar3 + 0x110),
                                        (byte)(in_fpscr >> 0x15) & 3);
    *DAT_0015bd20 = (short)(int)(fVar9 / fVar10 + DAT_0015bd1c);
    *(undefined4 *)(param_1 + 0x48c) = uVar7;
    FUN_00353190(uVar4,uVar7,param_1 + 0x360,3);
    *(undefined4 *)(param_1 + 0x478) = uVar4;
    uVar7 = DAT_0015bd50;
    *(undefined4 *)(param_1 + 0x46c) = uVar4;
    *(undefined4 *)(param_1 + 0xc4) = uVar7;
    *(undefined2 *)(param_1 + 0x462) = 0;
    FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_1 + 0x498,100,0x7f,0x7f,0xff,0);
    FUN_003591e4(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_1 + 0x4b4,100,0x7f,0x7f,0xff,0);
    uVar4 = DAT_0015bfd8;
    break;
  default:
    goto switchD_0015b924_default;
  }
  *(undefined4 *)(param_1 + 0x490) = uVar4;
switchD_0015b924_default:
  return;
}
