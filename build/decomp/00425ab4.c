// OoT3D decomp @ 00425ab4  name=FUN_00425ab4  size=3076

void FUN_00425ab4(int param_1)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  bool bVar7;
  uint in_fpscr;
  undefined4 uVar8;
  char local_30 [4];
  ushort local_2c [2];
  ushort local_28 [2];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;

  iVar2 = DAT_00425ef0;
  cVar1 = *(char *)(param_1 + 0x100);
  bVar7 = cVar1 != '\x03';
  if (!bVar7) {
    cVar1 = *(char *)(param_1 + 0x101);
  }
  if (bVar7 || cVar1 != '\x02') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  iVar6 = *(int *)(DAT_00425eec + param_1);
  if (*(int *)(DAT_00425ef0 + 0x14) == 0) {
    return;
  }
  FUN_002f9484(local_28,local_2c,local_30);
  switch(*(undefined4 *)(iVar2 + 0x14)) {
  case 1:
    iVar6 = FUN_002f6bb4();
    if (iVar6 != 0) {
      FUN_002f6f6c();
      *(undefined4 *)(iVar2 + 0x14) = 3;
    }
    goto LAB_00425edc;
  case 2:
    iVar6 = FUN_002f6958();
    if (iVar6 != 0) {
      if (*(int *)(iVar2 + 0x10) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      FUN_002f7af4(DAT_00425ef8,DAT_00425ef4,*(undefined4 *)(iVar2 + 0xc));
      *(undefined4 *)(iVar2 + 0x14) = 0;
      FUN_002f87ec(4);
    }
    goto LAB_00425edc;
  case 3:
    if (local_30[0] == '\0') {
      *(undefined4 *)(iVar2 + 0x14) = 4;
    }
    FUN_002f6f6c();
    FUN_002f6e10();
    break;
  case 4:
    if (*(int *)(iVar2 + 0x44) == 1) {
      iVar3 = FUN_0033f428(0x10,0x3e,300,0x86,1);
      if (iVar3 != 0) {
        FUN_0037547c(DAT_00425f04,0,4,DAT_00425f00,DAT_00425f00,DAT_00425efc);
        iVar3 = (int)((ulonglong)((longlong)DAT_00425f08 * (longlong)(int)(local_28[0] - 0x10)) >>
                     0x20);
        *(int *)(iVar2 + 0x18) = (iVar3 >> 5) - (iVar3 >> 0x1f);
        iVar3 = (int)((longlong)(int)(local_2c[0] - 0x3e) * (longlong)DAT_00425f0c +
                      ((ulonglong)(local_2c[0] - 0x3e) << 0x20) >> 0x20);
        *(int *)(iVar2 + 0x1c) = (iVar3 >> 5) - (iVar3 >> 0x1f);
      }
      uVar4 = FUN_0033b5d0();
      if ((uVar4 & 0x20) != 0) {
        FUN_0037547c(DAT_00425f04,0,4,DAT_00425f00,DAT_00425f00,DAT_00425efc);
        iVar3 = *(int *)(iVar2 + 0x18) + -1;
        *(int *)(iVar2 + 0x18) = iVar3;
        if (iVar3 < 0) {
          *(undefined4 *)(iVar2 + 0x18) = 3;
        }
      }
      uVar4 = FUN_0033b5d0();
      if ((uVar4 & 0x10) != 0) {
        FUN_0037547c(DAT_00425f04,0,4,DAT_00425f00,DAT_00425f00,DAT_00425efc);
        iVar3 = *(int *)(iVar2 + 0x18) + 1;
        *(int *)(iVar2 + 0x18) = iVar3;
        if (3 < iVar3) {
          *(undefined4 *)(iVar2 + 0x18) = 0;
        }
      }
      uVar4 = FUN_0033b5d0();
      if ((uVar4 & 0x40) != 0) {
        FUN_0037547c(DAT_00425f04,0,4,DAT_00425f00,DAT_00425f00,DAT_00425efc);
        iVar3 = *(int *)(iVar2 + 0x1c) + -1;
        *(int *)(iVar2 + 0x1c) = iVar3;
        if (iVar3 < 0) {
          *(undefined4 *)(iVar2 + 0x1c) = 2;
        }
      }
      uVar4 = FUN_0033b5d0();
      if ((uVar4 & 0x80) != 0) {
        FUN_0037547c(DAT_00425f04,0,4,DAT_00425f00,DAT_00425f00,DAT_00425efc);
        iVar3 = *(int *)(iVar2 + 0x1c) + 1;
        *(int *)(iVar2 + 0x1c) = iVar3;
        if (2 < iVar3) {
          *(undefined4 *)(iVar2 + 0x1c) = 0;
        }
      }
      if (((*(int *)(iVar6 + 0x284) != 0x7e) && (*(int *)(iVar2 + 0x3c) == 1)) &&
         (iVar6 = FUN_0033f428(0,0xca,0x40,0x40,1), iVar6 != 0)) {
        *(undefined4 *)(iVar2 + 0x14) = 6;
      }
      if ((*(int *)(iVar2 + 0x40) == 1) &&
         (iVar6 = FUN_0033f428(0x106,0xca,0x38,0x26,1), iVar6 != 0)) {
        *(undefined4 *)(iVar2 + 0x14) = 7;
      }
    }
    FUN_002f6f6c();
    FUN_0043c104();
    if (*(int *)(iVar2 + 0x28) == 0) {
      uVar8 = VectorSignedToFloat(*(int *)(iVar2 + 0x1c) * 0x2c + 0x44,(byte)(in_fpscr >> 0x15) & 3)
      ;
      uVar5 = VectorSignedToFloat(*(int *)(iVar2 + 0x18) * 0x48 + 0x10,(byte)(in_fpscr >> 0x15) & 3)
      ;
      FUN_002f7af4(uVar5,uVar8,*(undefined4 *)(iVar2 + 0xc));
      FUN_002f79b4(DAT_00425f14,DAT_00425f10,*(undefined4 *)(iVar2 + 0xc));
    }
    else {
      FUN_002f7af4(DAT_00425ef8,DAT_00425ef4,*(undefined4 *)(iVar2 + 0xc));
    }
    FUN_002f67d4();
    FUN_002f663c();
    goto LAB_00425edc;
  case 5:
    FUN_002f650c();
    FUN_002f5cd4();
LAB_00425edc:
    FUN_002f6e10();
    return;
  case 6:
    iVar6 = FUN_0033f428(0,0xca,0x40,0x40,2);
    if (iVar6 != 0) {
      *(undefined1 *)(DAT_004263c8 + param_1) = 1;
    }
    uVar5 = DAT_004263cc;
    if (local_30[0] != '\0') {
      local_24 = DAT_004263cc;
      local_20 = DAT_004263d4;
      FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,0x22);
      iVar6 = 0x2f;
      do {
        local_24 = uVar5;
        local_20 = uVar5;
        FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x32);
      local_1c = DAT_004263d8;
      FUN_002fcdec(*(undefined4 *)(iVar2 + 8),&local_1c,1,0x22);
      return;
    }
    *(undefined4 *)(iVar2 + 0x14) = 3;
    local_24 = uVar5;
    local_20 = uVar5;
    FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,0x22);
    local_1c = DAT_004263d0;
    FUN_002fcdec(*(undefined4 *)(iVar2 + 8),&local_1c,1,0x22);
    return;
  case 7:
    iVar6 = FUN_0033f428(0x106,0xca,0x38,0x26,2);
    uVar5 = DAT_004263cc;
    if (iVar6 != 0) {
      if (*(int *)(iVar2 + 0x10) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      FUN_002f7af4(DAT_00425ef8,DAT_00425ef4,*(undefined4 *)(iVar2 + 0xc));
      FUN_0037547c(DAT_004263dc,0,4,DAT_00425f00,DAT_00425f00,DAT_00425efc);
      *(undefined4 *)(iVar2 + 0x14) = 10;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      return;
    }
    if (local_30[0] != '\0') {
      local_24 = DAT_004263cc;
      local_20 = DAT_004263cc;
      FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,0x32);
      local_24 = DAT_00425ef8;
      local_20 = uVar5;
      FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,0x26);
      local_1c = DAT_004263d8;
      FUN_002fcdec(*(undefined4 *)(iVar2 + 8),&local_1c,1,0x32);
      return;
    }
    *(undefined4 *)(iVar2 + 0x14) = 3;
    local_24 = uVar5;
    local_20 = uVar5;
    FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,0x26);
    local_24 = DAT_00425ef8;
    local_20 = uVar5;
    FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,0x32);
    return;
  case 8:
    iVar6 = FUN_0033f428(0,0xca,0x40,0x40,2);
    if (iVar6 != 0) {
      *(undefined1 *)(DAT_004263c8 + param_1) = 1;
    }
    uVar5 = DAT_004263cc;
    if (local_30[0] != '\0') {
      local_24 = DAT_004263cc;
      local_20 = DAT_004263d4;
      FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,0x39);
      iVar6 = 0x55;
      do {
        local_24 = uVar5;
        local_20 = uVar5;
        FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,iVar6);
        iVar6 = iVar6 + 1;
      } while (iVar6 < 0x58);
      local_1c = DAT_004263d8;
      FUN_002fcdec(*(undefined4 *)(iVar2 + 8),&local_1c,1,0x39);
      return;
    }
    *(undefined4 *)(iVar2 + 0x14) = 0xc;
    local_24 = uVar5;
    local_20 = uVar5;
    FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,0x39);
    local_1c = DAT_004263d0;
    FUN_002fcdec(*(undefined4 *)(iVar2 + 8),&local_1c,1,0x39);
    return;
  case 9:
    iVar6 = FUN_0033f428(0x106,0xca,0x38,0x26,2);
    uVar5 = DAT_004263cc;
    if (iVar6 == 0) {
      if (local_30[0] != '\0') {
        local_24 = DAT_004263cc;
        local_20 = DAT_004263d4;
        FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,0x3d);
        iVar6 = 0x58;
        do {
          local_24 = uVar5;
          local_20 = uVar5;
          FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,iVar6);
          iVar6 = iVar6 + 1;
        } while (iVar6 < 0x5b);
        local_1c = DAT_004263d8;
        FUN_002fcdec(*(undefined4 *)(iVar2 + 8),&local_1c,1,0x3d);
        return;
      }
      *(undefined4 *)(iVar2 + 0x14) = 0xc;
      local_24 = uVar5;
      local_20 = uVar5;
      FUN_002f9430(*(undefined4 *)(iVar2 + 8),&local_24,1,0x3d);
      local_1c = DAT_004263d0;
      FUN_002fcdec(*(undefined4 *)(iVar2 + 8),&local_1c,1,0x3d);
      return;
    }
    if (*(int *)(iVar2 + 0x10) != 0) {
      FUN_002f6944();
      FUN_003525d4();
      *(undefined4 *)(iVar2 + 0x10) = 0;
    }
    local_1c = DAT_004263d0;
    FUN_002fcdec(*(undefined4 *)(iVar2 + 8),&local_1c,1,0x3d);
    FUN_0037547c(DAT_004263dc,0,4,DAT_00425f00,DAT_00425f00,DAT_00425efc);
    uVar5 = 0;
    *(undefined4 *)(iVar2 + 0x38) = 0;
    *(undefined4 *)(iVar2 + 0x14) = 0xd;
LAB_004265f8:
    *(undefined4 *)(iVar2 + 0x28) = uVar5;
    return;
  case 10:
    iVar6 = FUN_002f6958();
    if (iVar6 != 0) {
      *(undefined4 *)(iVar2 + 0x14) = 0xb;
      *(undefined4 *)(iVar2 + 0x38) = 5;
      *(undefined4 *)(iVar2 + 0x20) = 0xffffffff;
      return;
    }
    break;
  case 0xb:
    iVar6 = FUN_0043bdfc();
    if (iVar6 != 0) {
      if (*(int *)(iVar2 + 0x10) != 0) {
        FUN_002f6944();
        FUN_003525d4();
      }
      iVar6 = FUN_00313ce0(0x4c,param_1);
      uVar5 = 0;
      if (iVar6 != 0) {
        uVar5 = FUN_002f57f0(iVar6,0x9a0,0x20,0x11,0);
      }
      *(undefined4 *)(iVar2 + 0x10) = uVar5;
      *(undefined4 *)(iVar2 + 0x14) = 0xc;
      uVar5 = 1;
      goto LAB_004265f8;
    }
    break;
  case 0xc:
    if (*(int *)(iVar2 + 0x44) == 1) {
      if ((*(int *)(iVar2 + 0x3c) == 1) && (iVar6 = FUN_0033f428(0,0xca,0x40,0x40,1), iVar6 != 0)) {
        *(undefined4 *)(iVar2 + 0x14) = 8;
      }
      if ((*(int *)(iVar2 + 0x40) == 1) &&
         (iVar6 = FUN_0033f428(0x106,0xca,0x38,0x26,1), iVar6 != 0)) {
        *(undefined4 *)(iVar2 + 0x14) = 9;
      }
    }
    iVar6 = FUN_002f650c();
    if (((iVar6 == 0) && (FUN_002f5cd4(), *(int *)(iVar2 + 0x2c) == 0)) &&
       (iVar6 = FUN_002f5cc4(), iVar6 == 0)) {
      FUN_002f6f6c();
    }
    FUN_002f6e10();
    if (*(int *)(iVar2 + 0x28) == 0) {
      uVar8 = VectorSignedToFloat(*(int *)(iVar2 + 0x1c) * 0x2c + 0x44,(byte)(in_fpscr >> 0x15) & 3)
      ;
      uVar5 = VectorSignedToFloat(*(int *)(iVar2 + 0x18) * 0x48 + 0x10,(byte)(in_fpscr >> 0x15) & 3)
      ;
      FUN_002f7af4(uVar5,uVar8,*(undefined4 *)(iVar2 + 0xc));
      FUN_002f79b4(DAT_00425f14,DAT_00425f10,*(undefined4 *)(iVar2 + 0xc));
      return;
    }
    FUN_002f7af4(DAT_00425ef8,DAT_00425ef4,*(undefined4 *)(iVar2 + 0xc));
    return;
  case 0xd:
    iVar6 = FUN_002f55d4();
    if (iVar6 != 0) {
      *(undefined4 *)(iVar2 + 0x38) = 5;
      uVar5 = 0xe;
LAB_00426644:
      *(undefined4 *)(iVar2 + 0x14) = uVar5;
      return;
    }
    break;
  case 0xe:
    iVar6 = FUN_002f6bb4();
    if (iVar6 != 0) {
      uVar5 = 4;
      goto LAB_00426644;
    }
    break;
  case 0xf:
    iVar6 = FUN_002f55d4();
    if (iVar6 != 0) {
      if (*(int *)(iVar2 + 0x10) != 0) {
        FUN_002f6944();
        FUN_003525d4();
        *(undefined4 *)(iVar2 + 0x10) = 0;
      }
      FUN_002f7af4(DAT_00426744,DAT_00426740,*(undefined4 *)(iVar2 + 0xc));
      *(undefined4 *)(iVar2 + 0x14) = 0;
      FUN_002f87ec(4);
      return;
    }
    break;
  case 0x10:
    iVar6 = FUN_002f53c8();
    if (iVar6 != 0) {
      if (*(int *)(iVar2 + 0x10) != 0) {
        FUN_002f6944();
        FUN_003525d4();
      }
      iVar6 = FUN_00313ce0(0x4c,param_1);
      uVar5 = 0;
      if (iVar6 != 0) {
        uVar5 = FUN_002f57f0(iVar6,0x9a0,0x20,0x11,0);
      }
      *(undefined4 *)(iVar2 + 0x10) = uVar5;
      *(undefined4 *)(iVar2 + 0x14) = 0xc;
      *(undefined4 *)(iVar2 + 0x28) = 1;
      *(undefined4 *)(iVar2 + 0x38) = 0;
      return;
    }
  }
  return;
}
