// OoT3D decomp @ 004439a4  name=FUN_004439a4  size=2084

void FUN_004439a4(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 extraout_r1;
  undefined4 uVar4;
  int iVar5;
  undefined8 uVar6;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  
  iVar1 = DAT_00443cfc;
  switch(*(undefined4 *)(DAT_00443cfc + 0x34)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
    FUN_00343270(*(undefined4 *)(DAT_00443cfc + 4));
    uVar2 = DAT_00443d04;
    uVar4 = DAT_00443d00;
    iVar5 = 0x24;
    do {
      local_1c = uVar4;
      local_18 = uVar2;
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar5);
      uVar3 = DAT_00443d08;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x3b);
    local_20 = DAT_00443d08;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0xb);
    FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0xc);
    uVar4 = extraout_r1;
    if ((*DAT_00443d0c & 1) == 0) {
      uVar6 = FUN_003679b4(DAT_00443d0c);
      uVar4 = (int)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != 0) {
        FUN_0036788c(DAT_00443d10);
        uVar4 = DAT_00443d18;
      }
    }
    if ((*(char *)(DAT_00443d1c + 0xf38) == '\0') ||
       (iVar5 = FUN_002f43e8(*(char *)(DAT_00443d1c + 0xf38),uVar4), iVar5 != 0)) {
      FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0x12);
      iVar5 = FUN_0035b164();
      if (iVar5 != 1) {
        FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0x14);
      }
      FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0x13);
    }
    FUN_002efd88();
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),0,7,0xc0,0x2a,0x2a);
    local_1c = DAT_00443d20;
    if (*(int *)(iVar1 + 0x44) == 0) {
      local_18 = DAT_00443d20;
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0xd);
      iVar5 = 0x2c;
      local_1c = DAT_00443d30;
      local_18 = uVar2;
      do {
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x2f);
      local_20 = uVar3;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0xd);
      FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),1,0x10f,7,0x2a,0x2a);
    }
    else {
      local_18 = DAT_00443d24;
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0xd);
      iVar5 = 0x2c;
      do {
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x2f);
      local_20 = DAT_00443d28;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0xd);
      FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),1,DAT_00443d2c,9,0x2a,0x2a);
    }
    local_1c = DAT_00443d20;
    if (*(int *)(iVar1 + 0x48) == 0) {
      local_18 = DAT_00443d20;
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0xe);
      iVar5 = 0x2f;
      local_1c = DAT_00443d30;
      local_18 = uVar2;
      do {
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x32);
      local_20 = uVar3;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0xe);
      FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),2,0x10f,0xbf,0x2a,0x2a);
    }
    else {
      local_18 = DAT_00443d24;
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0xe);
      iVar5 = 0x2f;
      do {
        FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar5);
        iVar5 = iVar5 + 1;
      } while (iVar5 < 0x32);
      local_20 = DAT_00443d28;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0xe);
      FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),2,0x10f,0xc1,0x2a,0x2a);
    }
    local_1c = DAT_00443d20;
    if (*(int *)(iVar1 + 0x4c) == 0) {
      local_18 = DAT_00443d20;
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x20);
      local_1c = DAT_00443d30;
      local_18 = uVar2;
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x2a);
      local_20 = uVar3;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0x20);
      FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),3,0x114,0x3e,0x2a,0x2a);
    }
    else {
      local_18 = DAT_00443d24;
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x20);
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x2a);
      local_20 = DAT_00443d28;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0x20);
      FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),3,0x114,0x40,0x2a,0x2a);
    }
    local_1c = DAT_00443d20;
    if (*(int *)(iVar1 + 0x50) == 0) {
      local_18 = DAT_00443d20;
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x21);
      local_1c = DAT_00443d30;
      local_18 = uVar2;
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x2b);
      local_20 = uVar3;
      FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0x21);
      FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),4,0x103,0x68,0x2a,0x2a);
      return;
    }
    local_18 = DAT_00443d24;
    FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x21);
    FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x2b);
    local_20 = DAT_00443d28;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0x21);
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),4,0x103,0x6a,0x2a,0x2a);
    break;
  case 7:
    local_1c = DAT_00444234;
    local_18 = DAT_00444238;
    FUN_002f9430(*(undefined4 *)(DAT_00443cfc + 4),&local_1c,1,0x13);
    iVar5 = 0x38;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x3b);
    local_20 = DAT_00444230;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0x13);
    return;
  case 8:
    local_1c = DAT_00443d20;
    local_18 = DAT_00443d24;
    FUN_002f9430(*(undefined4 *)(DAT_00443cfc + 4),&local_1c,1,0x12);
    iVar5 = 0x32;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x35);
    local_20 = DAT_00444230;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0x12);
    return;
  case 9:
    local_1c = DAT_00444234;
    local_18 = DAT_00444238;
    FUN_002f9430(*(undefined4 *)(DAT_00443cfc + 4),&local_1c,1,0x14);
    iVar5 = 0x35;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x38);
    local_20 = DAT_00444230;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0x14);
    return;
  case 10:
    local_1c = DAT_00443d20;
    local_18 = DAT_00443d24;
    FUN_002f9430(*(undefined4 *)(DAT_00443cfc + 4),&local_1c,1,0xc);
    iVar5 = 0x27;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x2a);
    local_20 = DAT_00443d28;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0xc);
    FUN_002f8d40(*(undefined4 *)(iVar1 + 0x14),0,7,0xc2,0x2a,0x2a);
    return;
  case 0xb:
    local_1c = DAT_00443d20;
    local_18 = DAT_00443d24;
    FUN_002f9430(*(undefined4 *)(DAT_00443cfc + 4),&local_1c,1,0xb);
    FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,0x1c);
    iVar5 = 0x24;
    do {
      FUN_002f9430(*(undefined4 *)(iVar1 + 4),&local_1c,1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x27);
    local_20 = DAT_00443d28;
    FUN_002fcdec(*(undefined4 *)(iVar1 + 4),&local_20,1,0xb);
    return;
  }
  return;
}

