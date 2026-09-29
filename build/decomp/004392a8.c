// OoT3D decomp @ 004392a8  name=FUN_004392a8  size=6420

void FUN_004392a8(int param_1)

{
  char cVar1;
  uint *puVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  uint in_fpscr;
  char local_30 [4];
  undefined1 auStack_2c [4];
  undefined1 auStack_28 [4];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  FUN_002f9484(auStack_28,auStack_2c,local_30);
  iVar6 = DAT_0043aa0c;
  uVar5 = DAT_0043a364;
  puVar2 = DAT_0043a360;
  uVar4 = DAT_0043965c;
  iVar7 = DAT_00439658;
  switch(*(undefined4 *)(DAT_00439658 + 0x24)) {
  case 0:
    iVar6 = 0;
LAB_00439338:
    local_20 = uVar4;
    local_1c = VectorSignedToFloat((4 - *(int *)(iVar7 + 0x2c)) * -0x10,(byte)(in_fpscr >> 0x15) & 3
                                  );
    FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
LAB_0043936c:
    if (iVar6 - 6U < 8) {
      local_20 = VectorSignedToFloat((4 - *(int *)(iVar7 + 0x2c)) * 0x50,
                                     (byte)(in_fpscr >> 0x15) & 3);
      local_1c = uVar4;
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
    }
    if (iVar6 - 0xeU < 8) {
      local_20 = uVar4;
      local_1c = VectorSignedToFloat((4 - *(int *)(iVar7 + 0x2c)) * 0x10,
                                     (byte)(in_fpscr >> 0x15) & 3);
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
    }
    iVar6 = iVar6 + 1;
    if (iVar6 < 0x2b) goto LAB_00439330;
    if (3 < *(int *)(iVar7 + 0x2c)) {
      iVar6 = FUN_00313ce0(0x4c);
      uVar4 = 0;
      if (iVar6 != 0) {
        uVar4 = FUN_002f57f0(iVar6,DAT_00439660,0x20,0x10,0);
      }
      *(undefined4 *)(iVar7 + 0x1c) = uVar4;
      *(undefined4 *)(iVar7 + 0x24) = 1;
    }
LAB_00439438:
    iVar6 = *(int *)(iVar7 + 0x2c) + 1;
    goto LAB_0043a354;
  case 1:
    *(undefined4 *)(DAT_00439658 + 0x2c) = 0;
    if (*(int *)(iVar7 + 0x38) == 0) {
      uVar3 = FUN_0033b5ec();
      if ((uVar3 & 1) != 0) {
        if (*(int *)(iVar7 + 0x34) != 0) {
          FUN_0037547c(DAT_0043966c,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
          *(undefined4 *)(iVar7 + 0x24) = 8;
          *(undefined4 *)(iVar7 + 0x2c) = 0;
          break;
        }
        FUN_0037547c(DAT_00439670,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
        *(undefined4 *)(iVar7 + 0x24) = 7;
        *(undefined4 *)(iVar7 + 0x2c) = 0;
        goto LAB_00439b44;
      }
      uVar3 = FUN_0033b5d0();
      if ((uVar3 & 0x20) == 0) {
        uVar3 = FUN_0033b5d0();
        if (((uVar3 & 0x10) != 0) && (*(int *)(iVar7 + 0x34) == 0)) {
          FUN_0037547c(DAT_00439674,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
          *(undefined4 *)(iVar7 + 0x34) = 1;
        }
      }
      else if (*(int *)(iVar7 + 0x34) == 1) {
        FUN_0037547c(DAT_00439674,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
        *(undefined4 *)(iVar7 + 0x34) = 0;
      }
    }
    uVar3 = FUN_0033b5d0();
    if ((uVar3 & 0x40) == 0) {
      uVar3 = FUN_0033b5d0();
      if (((uVar3 & 0x80) != 0) && (*(int *)(iVar7 + 0x38) == 0)) {
        FUN_0037547c(DAT_00439674,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
        *(undefined4 *)(iVar7 + 0x38) = 1;
      }
    }
    else if (*(int *)(iVar7 + 0x38) == 1) {
      FUN_0037547c(DAT_00439674,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
      *(undefined4 *)(iVar7 + 0x38) = 0;
    }
    iVar6 = FUN_0033f428(0x27,0x60,0x78,0x30,0);
    if (iVar6 == 0) {
      iVar6 = FUN_0033f428(0xa4,0x60,0x78,0x30,0);
      if (iVar6 == 0) {
        iVar6 = FUN_0033f428(4,0xcc,0x34,0x20,1);
        if (iVar6 == 0) {
          iVar6 = FUN_0033f428(0x70,0xcc,0x60,0x20,0);
          if (iVar6 != 0) {
            *(undefined4 *)(iVar7 + 0x24) = 6;
            *(undefined4 *)(iVar7 + 0x38) = 1;
            break;
          }
          uVar3 = FUN_0033b5ec();
          bVar8 = (uVar3 & 1) != 0;
          if (bVar8) {
            uVar3 = *(uint *)(iVar7 + 0x38);
          }
          if (bVar8 && uVar3 != 0) {
            FUN_0037547c(DAT_0043966c,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
            *(undefined4 *)(iVar7 + 0x24) = 0xf;
            *(undefined4 *)(iVar7 + 0x2c) = 0;
          }
          iVar6 = FUN_0033b5ec();
          if ((iVar6 != 8) && (iVar6 = FUN_0033b5ec(), iVar6 != 2)) break;
          uVar4 = 2;
        }
        else {
          uVar4 = 5;
        }
        goto LAB_00439f24;
      }
      *(undefined4 *)(iVar7 + 0x24) = 3;
      *(undefined4 *)(iVar7 + 0x34) = 1;
    }
    else {
      *(undefined4 *)(iVar7 + 0x24) = 4;
      *(undefined4 *)(iVar7 + 0x34) = 0;
    }
    *(undefined4 *)(iVar7 + 0x38) = 0;
    break;
  case 2:
    if (*(int *)(DAT_00439658 + 0x1c) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar7 + 0x1c) = 0;
    }
    if (*(int *)(iVar7 + 0x20) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar7 + 0x20) = 0;
    }
    uVar4 = DAT_0043965c;
    iVar6 = 0;
    do {
      local_20 = uVar4;
      local_1c = VectorSignedToFloat(*(int *)(iVar7 + 0x2c) * -0x10,(byte)(in_fpscr >> 0x15) & 3);
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
      do {
        if (iVar6 - 6U < 8) {
          local_20 = VectorSignedToFloat(*(int *)(iVar7 + 0x2c) * -0x50,(byte)(in_fpscr >> 0x15) & 3
                                        );
          local_1c = uVar4;
          FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
        }
        if (iVar6 - 0xeU < 8) {
          local_20 = uVar4;
          local_1c = VectorSignedToFloat(*(int *)(iVar7 + 0x2c) << 4,(byte)(in_fpscr >> 0x15) & 3);
          FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
        }
        iVar6 = iVar6 + 1;
        if (0x2a < iVar6) {
          if (3 < *(int *)(iVar7 + 0x2c)) {
            FUN_002fd84c(0,1);
            FUN_002e9920(0);
            FUN_002f87ec(5);
          }
          goto LAB_00439438;
        }
      } while (5 < iVar6);
    } while( true );
  case 3:
    iVar6 = FUN_0033f428(0xa4,0x60,0x78,0x30,2);
    uVar4 = DAT_0043965c;
    iVar7 = DAT_00439658;
    if (iVar6 == 0) {
      local_20 = DAT_0043965c;
      if (local_30[0] == '\0') {
        local_1c = DAT_0043965c;
        FUN_002f9430(*(undefined4 *)(DAT_00439658 + 8),&local_20,1,9);
        local_24 = DAT_00439bec;
        FUN_002fcdec(*(undefined4 *)(iVar7 + 8),&local_24,1,9);
        local_20 = DAT_00439bf0;
        local_1c = uVar4;
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x22);
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x23);
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x24);
        uVar4 = 1;
        goto LAB_00439f24;
      }
      local_1c = DAT_00439bf4;
      FUN_002f9430(*(undefined4 *)(DAT_00439658 + 8),&local_20,1,9);
      local_24 = DAT_00439bf8;
      FUN_002fcdec(*(undefined4 *)(iVar7 + 8),&local_24,1,9);
      local_20 = uVar4;
      local_1c = uVar4;
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x22);
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x23);
      uVar4 = *(undefined4 *)(iVar7 + 8);
      uVar5 = 0x24;
    }
    else {
      FUN_0037547c(DAT_0043966c,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
      local_24 = DAT_00439bec;
      iVar7 = DAT_00439658;
      *(undefined4 *)(DAT_00439658 + 0x24) = 8;
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      FUN_002fcdec(*(undefined4 *)(iVar7 + 8),&local_24,1,9);
      local_20 = DAT_00439bf0;
      local_1c = DAT_0043965c;
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x22);
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x23);
      uVar4 = *(undefined4 *)(iVar7 + 8);
      uVar5 = 0x24;
    }
    goto LAB_0043a9dc;
  case 4:
    iVar6 = FUN_0033f428(0x27,0x60,0x78,0x30,2);
    uVar4 = DAT_00439bfc;
    iVar7 = DAT_00439658;
    if (iVar6 != 0) {
      FUN_0037547c(DAT_00439670,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
      local_24 = DAT_00439bec;
      iVar7 = DAT_00439658;
      *(undefined4 *)(DAT_00439658 + 0x24) = 7;
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 0;
      FUN_002fcdec(*(undefined4 *)(iVar7 + 8),&local_24,1,0xd);
      local_20 = DAT_00439bf0;
      local_1c = DAT_00439bfc;
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x1f);
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x20);
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x21);
LAB_00439b44:
      FUN_0044b9ac();
      break;
    }
    local_20 = DAT_00439bfc;
    if (local_30[0] != '\0') {
      local_1c = DAT_00439bf4;
      FUN_002f9430(*(undefined4 *)(DAT_00439658 + 8),&local_20,1,0xd);
      local_24 = DAT_00439bf8;
      FUN_002fcdec(*(undefined4 *)(iVar7 + 8),&local_24,1,0xd);
      local_20 = uVar4;
      local_1c = uVar4;
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x1f);
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x20);
      uVar4 = *(undefined4 *)(iVar7 + 8);
      uVar5 = 0x21;
      goto LAB_0043a9dc;
    }
    local_1c = DAT_00439bfc;
    FUN_002f9430(*(undefined4 *)(DAT_00439658 + 8),&local_20,1,0xd);
    local_24 = DAT_00439bec;
    FUN_002fcdec(*(undefined4 *)(iVar7 + 8),&local_24,1,0xd);
    local_20 = DAT_00439bf0;
    local_1c = uVar4;
    FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x1f);
    FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x20);
    FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x21);
    uVar4 = 1;
    goto LAB_00439f24;
  case 5:
    iVar6 = FUN_0033f428(4,0xcc,0x34,0x20,2);
    uVar4 = DAT_00439bfc;
    iVar7 = DAT_00439658;
    if (iVar6 == 0) {
      local_20 = DAT_00439bfc;
      if (local_30[0] == '\0') {
        local_1c = DAT_00439bfc;
        FUN_002f9430(*(undefined4 *)(DAT_00439658 + 8),&local_20,1,0x11);
        local_24 = DAT_00439bec;
        FUN_002fcdec(*(undefined4 *)(iVar7 + 8),&local_24,1,0x11);
        local_20 = DAT_00439bf0;
        local_1c = uVar4;
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x25);
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x26);
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x27);
        *(undefined4 *)(iVar7 + 0x24) = 1;
        break;
      }
      local_1c = DAT_00439bf4;
      FUN_002f9430(*(undefined4 *)(DAT_00439658 + 8),&local_20,1,0x11);
      local_24 = DAT_00439bf8;
      FUN_002fcdec(*(undefined4 *)(iVar7 + 8),&local_24,1,0x11);
      local_20 = uVar4;
      local_1c = uVar4;
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x25);
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x26);
      uVar4 = *(undefined4 *)(iVar7 + 8);
      uVar5 = 0x27;
      goto LAB_0043a9dc;
    }
    FUN_0037547c(DAT_00439670,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
    iVar7 = DAT_00439658;
    local_24 = DAT_00439bec;
    FUN_002fcdec(*(undefined4 *)(DAT_00439658 + 8),&local_24,1,0x11);
    local_20 = DAT_00439bf0;
    local_1c = DAT_00439bfc;
    FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x25);
    FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x26);
    FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x27);
    *(undefined4 *)(iVar7 + 0x2c) = 0;
    uVar4 = 2;
    goto LAB_00439f24;
  case 6:
    iVar6 = FUN_0033f428(0x70,0xcc,0x60,0x20,2);
    uVar4 = DAT_00439bfc;
    iVar7 = DAT_00439658;
    if (iVar6 == 0) {
      local_20 = DAT_00439bfc;
      if (local_30[0] == '\0') {
        local_1c = DAT_00439bfc;
        FUN_002f9430(*(undefined4 *)(DAT_00439658 + 8),&local_20,1,0x15);
        local_24 = DAT_00439bec;
        FUN_002fcdec(*(undefined4 *)(iVar7 + 8),&local_24,1,0x15);
        local_20 = DAT_00439bf0;
        local_1c = uVar4;
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x28);
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x29);
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x2a);
        *(undefined4 *)(iVar7 + 0x24) = 1;
        break;
      }
      local_1c = DAT_00439bf4;
      FUN_002f9430(*(undefined4 *)(DAT_00439658 + 8),&local_20,1,0x15);
      local_24 = DAT_0043a35c;
      FUN_002fcdec(*(undefined4 *)(iVar7 + 8),&local_24,1,0x15);
      local_20 = uVar4;
      local_1c = uVar4;
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x28);
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x29);
      uVar4 = *(undefined4 *)(iVar7 + 8);
      uVar5 = 0x2a;
      goto LAB_0043a9dc;
    }
    FUN_0037547c(DAT_0043966c,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
    iVar7 = DAT_00439658;
    local_24 = DAT_00439bec;
    FUN_002fcdec(*(undefined4 *)(DAT_00439658 + 8),&local_24,1,0x15);
    local_20 = DAT_00439bf0;
    local_1c = DAT_00439bfc;
    FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x28);
    FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x29);
    FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,0x2a);
    *(undefined4 *)(iVar7 + 0x2c) = 0;
    uVar4 = 0xf;
    goto LAB_00439f24;
  case 7:
    iVar6 = 0;
    do {
      if (iVar6 - 6U < 8) {
        local_20 = VectorSignedToFloat(*(int *)(iVar7 + 0x2c) * -0x50,(byte)(in_fpscr >> 0x15) & 3);
        local_1c = uVar5;
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
      }
      if (iVar6 - 0xeU < 8) {
        local_20 = uVar5;
        local_1c = VectorSignedToFloat(*(int *)(iVar7 + 0x2c) << 4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x2b);
    iVar6 = *(int *)(iVar7 + 0x2c);
    if (3 < iVar6) {
      *(undefined4 *)(iVar7 + 0x34) = 1;
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      *(undefined4 *)(iVar7 + 0x24) = 10;
      break;
    }
    goto LAB_0043a1e0;
  case 8:
    iVar6 = 0;
    do {
      if (iVar6 - 6U < 8) {
        local_20 = VectorSignedToFloat(*(int *)(iVar7 + 0x2c) * -0x50,(byte)(in_fpscr >> 0x15) & 3);
        local_1c = uVar5;
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
      }
      if (iVar6 - 0xeU < 8) {
        local_20 = uVar5;
        local_1c = VectorSignedToFloat(*(int *)(iVar7 + 0x2c) << 4,(byte)(in_fpscr >> 0x15) & 3);
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x2b);
    iVar6 = *(int *)(iVar7 + 0x2c);
    if (3 < iVar6) {
      FUN_0044b85c();
      FUN_002fdac8(param_1,0);
      *(undefined4 *)(iVar7 + 0x24) = 9;
      iVar6 = 0;
LAB_0043a354:
      *(int *)(iVar7 + 0x2c) = iVar6;
      break;
    }
    goto LAB_0043a1e0;
  case 9:
    iVar6 = *(int *)(DAT_00439658 + 0x2c) + 1;
    *(int *)(DAT_00439658 + 0x2c) = iVar6;
    if (iVar6 == 2) {
      if (((*DAT_0043a9e4 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_0043a9e4), iVar7 != 0)) {
        FUN_0036788c(DAT_0043a9e8);
      }
      *(undefined1 *)(DAT_0043a9f4 + 0x21) = 1;
    }
    else if ((2 < iVar6) && (iVar6 = FUN_002fdaa4(), iVar6 != 0)) {
      FUN_002fda7c();
      if (((*DAT_0043a9e4 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_0043a9e4), iVar6 != 0)) {
        FUN_0036788c(DAT_0043a9e8);
      }
      uVar5 = DAT_00439668;
      uVar4 = DAT_00439664;
      *(undefined1 *)(DAT_0043a9f4 + 0x21) = 0;
      FUN_0037547c(DAT_0043a9f8,0,4,uVar5,uVar5,uVar4);
      *(undefined4 *)(iVar7 + 0x24) = 10;
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      *(undefined4 *)(iVar7 + 0x34) = 1;
      FUN_0044b6ec();
    }
    break;
  case 10:
    iVar6 = 0;
    do {
      if ((iVar6 - 6U < 8) && (iVar6 != 9 && iVar6 != 0xd)) {
        local_20 = VectorSignedToFloat((4 - *(int *)(iVar7 + 0x2c)) * 0x50,
                                       (byte)(in_fpscr >> 0x15) & 3);
        local_1c = uVar5;
        FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
      }
      iVar6 = iVar6 + 1;
    } while (iVar6 < 0x2b);
    local_20 = VectorSignedToFloat((4 - *(int *)(iVar7 + 0x2c)) * 0x50,(byte)(in_fpscr >> 0x15) & 3)
    ;
    local_1c = uVar5;
    FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,0);
    FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1);
    iVar6 = *(int *)(iVar7 + 0x2c);
    if (3 < iVar6) {
      *(undefined4 *)(iVar7 + 0x24) = 0xb;
      *(undefined4 *)(iVar7 + 0x34) = 1;
    }
LAB_0043a1e0:
    *(int *)(iVar7 + 0x2c) = iVar6 + 1;
    break;
  case 0xb:
    *(undefined4 *)(DAT_00439658 + 0x2c) = 0;
    iVar6 = FUN_0033f428(0x27,0x60,0x78,0x30,0);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar7 + 0x24) = 0xc;
      *(undefined4 *)(iVar7 + 0x34) = 0;
      break;
    }
    iVar6 = FUN_0033f428(0xa4,0x60,0x78,0x30,0);
    if (iVar6 != 0) {
      *(undefined4 *)(iVar7 + 0x24) = 0xd;
      *(undefined4 *)(iVar7 + 0x34) = 1;
      break;
    }
    uVar3 = FUN_0033b5d0();
    if (((uVar3 & 0x20) != 0) && (*(int *)(iVar7 + 0x34) == 1)) {
      FUN_0037547c(DAT_00439674,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
      *(undefined4 *)(iVar7 + 0x34) = 0;
    }
    uVar3 = FUN_0033b5d0();
    if (((uVar3 & 0x10) != 0) && (*(int *)(iVar7 + 0x34) == 0)) {
      FUN_0037547c(DAT_00439674,0,4,DAT_00439668,DAT_00439668,DAT_00439664);
      *(undefined4 *)(iVar7 + 0x34) = 1;
    }
    uVar3 = FUN_0033b5ec();
    if ((uVar3 & 1) == 0) break;
    if (*(int *)(iVar7 + 0x34) == 0) {
      FUN_0037547c(DAT_0043aa04,0,4,DAT_0043aa00,DAT_0043aa00,DAT_0043a9fc);
      uVar4 = 0x10;
    }
    else {
      uVar4 = 0xe;
      *(undefined4 *)(iVar7 + 0x2c) = 0;
    }
LAB_00439f24:
    *(undefined4 *)(iVar7 + 0x24) = uVar4;
    break;
  case 0xc:
    iVar6 = FUN_0033f428(0x27,0x60,0x78,0x30,2);
    uVar4 = DAT_0043aa14;
    iVar7 = DAT_0043aa0c;
    if (iVar6 == 0) {
      local_20 = DAT_0043aa14;
      if (local_30[0] == '\0') {
        local_1c = DAT_0043aa14;
        FUN_002f9430(*(undefined4 *)(DAT_0043aa0c + 0x14),&local_20,1,0);
        local_24 = DAT_0043aa08;
        FUN_002fcdec(*(undefined4 *)(iVar7 + 0x14),&local_24,1,0);
        local_20 = DAT_0043aa10;
        *(undefined4 *)(iVar7 + 0x24) = 0xb;
        local_1c = uVar4;
        FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,2);
        FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,3);
        uVar4 = *(undefined4 *)(iVar7 + 0x14);
        uVar5 = 4;
      }
      else {
        local_1c = DAT_0043aa18;
        FUN_002f9430(*(undefined4 *)(DAT_0043aa0c + 0x14),&local_20,1,0);
        local_24 = DAT_0043aa1c;
        FUN_002fcdec(*(undefined4 *)(iVar7 + 0x14),&local_24,1,0);
        local_20 = uVar4;
        local_1c = uVar4;
        FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,2);
        FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,3);
        uVar4 = *(undefined4 *)(iVar7 + 0x14);
        uVar5 = 4;
      }
    }
    else {
      FUN_0037547c(DAT_0043aa04,0,4,DAT_0043aa00,DAT_0043aa00,DAT_0043a9fc);
      iVar7 = DAT_0043aa0c;
      local_24 = DAT_0043aa08;
      FUN_002fcdec(*(undefined4 *)(DAT_0043aa0c + 0x14),&local_24,1,0);
      local_20 = DAT_0043aa10;
      *(undefined4 *)(iVar7 + 0x24) = 0x10;
      local_1c = DAT_0043a364;
      FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,2);
      FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,3);
      uVar4 = *(undefined4 *)(iVar7 + 0x14);
      uVar5 = 4;
    }
    goto LAB_0043a9dc;
  case 0xd:
    iVar6 = FUN_0033f428(0xa4,0x60,0x78,0x30,2);
    uVar4 = DAT_0043aa14;
    iVar7 = DAT_0043aa0c;
    if (iVar6 == 0) {
      local_20 = DAT_0043aa14;
      if (local_30[0] != '\0') {
        local_1c = DAT_0043aa18;
        FUN_002f9430(*(undefined4 *)(DAT_0043aa0c + 0x14),&local_20,1);
        local_24 = DAT_0043aa1c;
        FUN_002fcdec(*(undefined4 *)(iVar7 + 0x14),&local_24,1);
        local_20 = uVar4;
        local_1c = uVar4;
        FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,5);
        FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,6);
        FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,7);
        break;
      }
      local_1c = DAT_0043aa14;
      FUN_002f9430(*(undefined4 *)(DAT_0043aa0c + 0x14),&local_20,1);
      local_24 = DAT_0043aa08;
      FUN_002fcdec(*(undefined4 *)(iVar7 + 0x14),&local_24,1);
      local_20 = DAT_0043aa10;
      *(undefined4 *)(iVar7 + 0x24) = 0xb;
      local_1c = uVar4;
      FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,5);
      FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,6);
      uVar4 = *(undefined4 *)(iVar7 + 0x14);
      uVar5 = 7;
    }
    else {
      FUN_0037547c(DAT_0043aa20,0,4,DAT_0043aa00,DAT_0043aa00,DAT_0043a9fc);
      iVar7 = DAT_0043aa0c;
      local_24 = DAT_0043aa08;
      FUN_002fcdec(*(undefined4 *)(DAT_0043aa0c + 0x14),&local_24,1);
      *(undefined4 *)(iVar7 + 0x2c) = 0;
      local_20 = DAT_0043aa10;
      *(undefined4 *)(iVar7 + 0x24) = 0xe;
      local_1c = DAT_0043aa14;
      FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,5);
      FUN_002f9430(*(undefined4 *)(iVar7 + 0x14),&local_20,1,6);
      uVar4 = *(undefined4 *)(iVar7 + 0x14);
      uVar5 = 7;
    }
LAB_0043a9dc:
    FUN_002f9430(uVar4,&local_20,1,uVar5);
    break;
  case 0xe:
    if (*(int *)(DAT_0043aa0c + 0x1c) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar6 + 0x1c) = 0;
    }
    if (*(int *)(iVar6 + 0x20) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar6 + 0x20) = 0;
    }
    uVar4 = DAT_0043aa14;
    iVar7 = 0;
    do {
      if ((iVar7 - 6U < 8) && (iVar7 != 9 && iVar7 != 0xd)) {
        local_20 = VectorSignedToFloat(*(int *)(iVar6 + 0x2c) * -0x50,(byte)(in_fpscr >> 0x15) & 3);
        local_1c = uVar4;
        FUN_002f9430(*(undefined4 *)(iVar6 + 8),&local_20,1,iVar7);
      }
      if (iVar7 - 0x16U < 9) {
        local_20 = uVar4;
        local_1c = VectorSignedToFloat(*(int *)(iVar6 + 0x2c) * -0x10 + -0xa8,
                                       (byte)(in_fpscr >> 0x15) & 3);
        FUN_002f9430(*(undefined4 *)(iVar6 + 8),&local_20,1,iVar7);
      }
      iVar7 = iVar7 + 1;
    } while (iVar7 < 0x2b);
    local_20 = VectorSignedToFloat(*(int *)(iVar6 + 0x2c) * -0x50,(byte)(in_fpscr >> 0x15) & 3);
    local_1c = uVar4;
    FUN_002f9430(*(undefined4 *)(iVar6 + 0x14),&local_20,1,0);
    FUN_002f9430(*(undefined4 *)(iVar6 + 0x14),&local_20,1);
    if (3 < *(int *)(iVar6 + 0x2c)) {
      FUN_002fd84c(0,1);
      FUN_002e9920(0);
      FUN_002f87ec(5);
    }
    *(int *)(iVar6 + 0x2c) = *(int *)(iVar6 + 0x2c) + 1;
    break;
  case 0xf:
    DAT_0043a360[3] = *DAT_0043a360;
    puVar2[4] = puVar2[1];
    puVar2[5] = puVar2[2];
    if (*(int *)(iVar7 + 0x1c) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar7 + 0x1c) = 0;
    }
    if (*(int *)(iVar7 + 0x20) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar7 + 0x20) = 0;
    }
    uVar4 = DAT_0043a364;
    iVar6 = 0;
    do {
      local_20 = uVar4;
      local_1c = VectorSignedToFloat(*(int *)(iVar7 + 0x2c) * -0x10,(byte)(in_fpscr >> 0x15) & 3);
      FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
      do {
        if (iVar6 - 6U < 8) {
          local_20 = VectorSignedToFloat(*(int *)(iVar7 + 0x2c) * -0x50,(byte)(in_fpscr >> 0x15) & 3
                                        );
          local_1c = uVar4;
          FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
        }
        if (iVar6 - 0xeU < 8) {
          local_20 = uVar4;
          local_1c = VectorSignedToFloat(*(int *)(iVar7 + 0x2c) << 4,(byte)(in_fpscr >> 0x15) & 3);
          FUN_002f9430(*(undefined4 *)(iVar7 + 8),&local_20,1,iVar6);
        }
        iVar6 = iVar6 + 1;
        if (0x2a < iVar6) {
          iVar6 = *(int *)(iVar7 + 0x2c);
          if (iVar6 < 4) goto LAB_0043a1e0;
          FUN_002e9768();
          iVar6 = DAT_0043a368;
          *puVar2 = (uint)*(byte *)(DAT_0043a368 + 0x2d);
          puVar2[1] = (uint)*(byte *)(iVar6 + 0x13d8);
          puVar2[2] = (uint)*(byte *)(iVar6 + 0xf);
          FUN_002e9658();
          FUN_002f74a4(4);
          *(undefined4 *)(iVar7 + 0x40) = 0xfffffffe;
          *(undefined4 *)(iVar7 + 0x2c) = 0;
          *(undefined4 *)(iVar7 + 0x28) = 3;
          *(undefined4 *)(iVar7 + 0x3c) = 1;
          goto switchD_004392d4_default;
        }
      } while (5 < iVar6);
    } while( true );
  case 0x10:
    cVar1 = *(char *)(param_1 + 0x100);
    bVar8 = cVar1 == '\x03';
    if (bVar8) {
      cVar1 = *(char *)(param_1 + 0x101);
    }
    if (bVar8 && cVar1 == '\x02') {
      *(undefined4 *)(DAT_0043ac84 + 0x4e4) = 1;
      *(undefined1 *)(param_1 + 0x5c2d) = 0x14;
      *(undefined1 *)(param_1 + 0x5c76) = 2;
      FUN_002fd84c(0,1);
      FUN_002e9920(1);
    }
  }
switchD_004392d4_default:
  FUN_002e9768();
  return;
LAB_00439330:
  if (iVar6 < 6) goto LAB_00439338;
  goto LAB_0043936c;
}
