// OoT3D decomp @ 0042d0c0  name=FUN_0042d0c0  size=2200

void FUN_0042d0c0(int param_1)

{
  char cVar1;
  short sVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  bool bVar9;
  uint in_fpscr;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined1 auStack_84 [72];
  undefined4 local_3c;
  undefined4 local_38;
  char local_34 [4];
  undefined1 auStack_30 [4];
  undefined1 auStack_2c [4];
  undefined4 local_28;
  undefined4 local_24;

  iVar3 = DAT_0042d654;
  if (*(int *)(DAT_0042d654 + 0x38) == 0) {
    return;
  }
  cVar1 = *(char *)(param_1 + 0x100);
  bVar9 = cVar1 != '\x03';
  if (!bVar9) {
    cVar1 = *(char *)(param_1 + 0x101);
  }
  if (bVar9 || cVar1 != '\x02') {
    return;
  }
  if (param_1 == 0) {
    return;
  }
  sVar2 = *(short *)(param_1 + 0x104);
  if (sVar2 == 0xf) {
LAB_0042d140:
    *(undefined4 *)(DAT_0042d654 + 0x5c) = 1;
  }
  else {
    if (sVar2 < 0x10) {
      if ((sVar2 == 10 || sVar2 == 0xd) || sVar2 == 0xe) goto LAB_0042d140;
    }
    else if ((sVar2 == 0x19 || sVar2 == 0x1a) || sVar2 == 0x4f) goto LAB_0042d140;
    *(undefined4 *)(DAT_0042d654 + 0x5c) = 0;
  }
  FUN_002f9484(auStack_2c,auStack_30,local_34);
  uVar4 = DAT_0042d658;
  switch(*(undefined4 *)(iVar3 + 0x38)) {
  case 1:
    FUN_002f0a34(*(undefined4 *)(iVar3 + 0x50),(int)*(short *)(param_1 + 0x104));
    if ((int)*(short *)(param_1 + 0x104) - 0x51U < 0x14) {
      FUN_00441668(param_1);
    }
    if (local_34[0] != '\0') break;
    uVar4 = 2;
    goto LAB_0042d324;
  case 2:
    uVar7 = FUN_0033b5ec();
    if ((uVar7 & 0x200) != 0) {
      *(undefined4 *)(iVar3 + 0x54) = 1;
    }
    uVar7 = FUN_0033b5ec();
    if ((uVar7 & 0x100) != 0) {
      *(undefined4 *)(iVar3 + 0x58) = 1;
    }
    iVar5 = FUN_002f1268();
    if (iVar5 == 0) {
      if (*(int *)(iVar3 + 0x5c) == 0) {
        FUN_002f06b8();
      }
    }
    else if (local_34[0] == '\0') {
      FUN_00442f18();
    }
    else {
      FUN_00443590();
    }
    uVar7 = FUN_0033b5ec();
    if ((uVar7 & 2) != 0) {
      FUN_002fd84c(0,1);
      *(undefined4 *)(iVar3 + 0x44) = 0;
      iVar5 = FUN_002f1268();
      if (iVar5 == 0) {
        uVar4 = 10;
      }
      else {
        uVar4 = 8;
      }
      *(undefined4 *)(iVar3 + 0x38) = uVar4;
    }
    iVar5 = FUN_0033f428(4,0xcc,0x34,0x20,1);
    if (iVar5 != 0) {
      *(undefined4 *)(iVar3 + 0x38) = 3;
    }
    iVar5 = FUN_0033f428(0x7c,0xc6,0x48,0x2a,1);
    if (iVar5 != 0) {
      *(undefined4 *)(iVar3 + 0x38) = 5;
    }
    iVar5 = FUN_0033f428(200,0xce,0x36,0x22,1);
    if (iVar5 != 0 || *(int *)(iVar3 + 0x58) != 0) {
      *(undefined4 *)(iVar3 + 0x38) = 4;
    }
    iVar5 = FUN_0033f428(0x42,0xce,0x36,0x22,1);
    if (iVar5 == 0 && *(int *)(iVar3 + 0x54) == 0) break;
    uVar4 = 6;
    goto LAB_0042d324;
  case 3:
    iVar5 = FUN_0033f428(4,0xcc,0x34,0x20,2);
    if (iVar5 == 0) goto joined_r0x0042d670;
    FUN_002fd84c(0,1);
    *(undefined4 *)(iVar3 + 0x44) = 0;
    iVar5 = FUN_002f1268();
    if (iVar5 != 0) goto LAB_0042d4b8;
LAB_0042d4c0:
    uVar4 = 10;
    goto LAB_0042d324;
  case 4:
    iVar5 = FUN_0033f428(200,0xce,0x36,0x22,2);
    if (iVar5 != 0 || *(int *)(iVar3 + 0x58) != 0) {
      FUN_002f0618();
      FUN_002f8a34(0);
      local_8c = DAT_0042d65c;
      FUN_0037547c(DAT_0042d664,0,4,DAT_0042d660,DAT_0042d660);
      FUN_00343270(*(undefined4 *)(iVar3 + 0x14));
      FUN_00343270(*(undefined4 *)(iVar3 + 0x10));
      return;
    }
    goto joined_r0x0042d670;
  case 5:
    iVar5 = FUN_0033f428(0x7c,0xc6,0x48,0x2a,2);
    if (iVar5 == 0) goto joined_r0x0042d670;
    FUN_002fd84c(0,1);
    *(undefined4 *)(iVar3 + 0x44) = 0;
    iVar5 = FUN_002f1268();
    if (iVar5 == 0) goto LAB_0042d4c0;
LAB_0042d4b8:
    uVar4 = 8;
LAB_0042d324:
    *(undefined4 *)(iVar3 + 0x38) = uVar4;
    break;
  case 6:
    iVar5 = FUN_0033f428(0x42,0xce,0x36,0x22,2);
    if (iVar5 != 0 || *(int *)(iVar3 + 0x54) != 0) {
      FUN_002f0618();
      FUN_002f0444(0);
      local_8c = DAT_0042d65c;
      FUN_0037547c(DAT_0042d664,0,4,DAT_0042d660,DAT_0042d660);
      FUN_00343270(*(undefined4 *)(iVar3 + 0x14));
      FUN_00343270(*(undefined4 *)(iVar3 + 0x10));
      return;
    }
joined_r0x0042d670:
    if (local_34[0] == '\0') {
      *(undefined4 *)(iVar3 + 0x38) = 1;
    }
    break;
  case 7:
    iVar5 = FUN_00443410();
    if (iVar5 != 0) {
      FUN_00343270(*(undefined4 *)(iVar3 + 0x14));
      *(undefined4 *)(iVar3 + 0x38) = 1;
    }
    break;
  case 8:
    iVar5 = FUN_00442d98();
    if (iVar5 == 0) break;
    goto code_r0x0042d5bc;
  case 9:
    FUN_002f0a34(*(undefined4 *)(iVar3 + 0x50),(int)*(short *)(param_1 + 0x104));
    uVar4 = DAT_0042d658;
    iVar5 = 0;
    do {
      local_38 = uVar4;
      local_3c = uVar4;
      if (iVar5 != 0) {
        local_38 = VectorSignedToFloat(*(int *)(iVar3 + 0x44) * 0x12,(byte)(in_fpscr >> 0x15) & 3);
      }
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x10),&local_3c,1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1e);
    iVar5 = *(int *)(iVar3 + 0x44) + -1;
    *(int *)(iVar3 + 0x44) = iVar5;
    if (iVar5 < 0) {
      *(undefined4 *)(iVar3 + 0x44) = 0;
      FUN_00343270(*(undefined4 *)(iVar3 + 0x10));
      *(undefined4 *)(iVar3 + 0x38) = 1;
    }
    break;
  case 10:
    iVar5 = 0;
    do {
      local_38 = uVar4;
      local_3c = uVar4;
      if (iVar5 != 0) {
        local_38 = VectorSignedToFloat(*(int *)(iVar3 + 0x44) * 0x12,(byte)(in_fpscr >> 0x15) & 3);
      }
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x10),&local_3c,1,iVar5);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 0x1e);
    iVar5 = *(int *)(iVar3 + 0x44) + 1;
    *(int *)(iVar3 + 0x44) = iVar5;
    if (iVar5 < 5) break;
code_r0x0042d5bc:
    FUN_002f0618();
    FUN_002f87ec(3);
  }
  iVar5 = FUN_002f1268();
  if (iVar5 == 0) {
    if (*(int *)(iVar3 + 0x5c) != 0) {
      FUN_002f8160(*(undefined4 *)(iVar3 + 0x24));
    }
    FUN_00442a94();
    if (*(int *)(iVar3 + 0x5c) != 0) {
      local_28 = DAT_0042d9d8;
      local_24 = DAT_0042d9d4;
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x10),&local_28,1,0);
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x10),&local_28,1,0xc);
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x10),&local_28,1,0xd);
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x10),&local_28,1,0xe);
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x10),&local_28,1,0xf);
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x10),&local_28,1,0x10);
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x10),&local_28,1,0x11);
    }
    uVar6 = (uint)*(short *)(DAT_0042d9dc + *(int *)(iVar3 + 0x48) * 2);
    uVar7 = (uint)*(byte *)(DAT_0042d9ec + uVar6);
    bVar9 = (*(uint *)(DAT_0042d9e0 + (uVar6 & 0xfffffffc) + 0xeb4) &
            *(uint *)(DAT_0042d9e4 + (uVar6 & 3) * 4)) >>
            (*(uint *)(DAT_0042d9e8 + (uVar6 & 3) * 4) & 0xff) == uVar7;
    if (bVar9) {
      uVar7 = *(uint *)(iVar3 + 0x5c);
    }
    if (bVar9 && uVar7 == 0) {
      local_3c = DAT_0042d658;
    }
    else {
      local_3c = DAT_0042d9d0;
    }
    local_38 = DAT_0042d658;
    FUN_002f9430(*(undefined4 *)(iVar3 + 0x10),&local_3c,1,0x11);
    return;
  }
  FUN_00443184();
  FUN_00442490();
  cVar1 = *(char *)(param_1 + 0x100);
  bVar9 = cVar1 == '\x03';
  if (bVar9) {
    cVar1 = *(char *)(param_1 + 0x101);
  }
  if ((bVar9 && cVar1 == '\x02') && (param_1 != 0)) {
    iVar8 = (int)*(short *)(param_1 + 0x104);
    iVar5 = iVar8;
    if (iVar8 == 0x11) {
      iVar5 = 0;
    }
    switch(iVar8) {
    case 0x11:
      iVar5 = 0;
      break;
    case 0x12:
      iVar5 = 1;
      break;
    case 0x13:
      iVar5 = 2;
      break;
    case 0x14:
      iVar5 = 3;
      break;
    case 0x15:
      iVar5 = 4;
      break;
    case 0x16:
      iVar5 = 5;
      break;
    case 0x17:
      iVar5 = 6;
      break;
    case 0x18:
      iVar5 = 7;
    }
    FUN_00371738(auStack_84,DAT_0042d9b8,0x50);
    local_8c = *(undefined4 *)(DAT_0042d9bc + 0x10);
    uStack_88 = *(undefined4 *)(DAT_0042d9bc + 0x14);
    FUN_002fc40c(*(undefined4 *)(iVar3 + 0x14),auStack_84 + iVar5 * 8,&local_8c,1,0x14);
  }
  FUN_002f8160(*(undefined4 *)(iVar3 + 0x20));
  FUN_0044281c();
  FUN_00442634(param_1);
  FUN_002f01cc();
  iVar8 = DAT_0042d9c4;
  iVar5 = DAT_0042d9c0;
  if (param_1 != 0) {
    local_3c = 0;
    local_38 = 0;
    if (((int)*(short *)(param_1 + 0x104) - 3U < 0xe) &&
       (-1 < *(char *)((uint)*(ushort *)(DAT_0042d9c0 + 0x92) + DAT_0042d9c4))) {
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x14),&local_3c,1,0x13);
      FUN_002fcb04(*(undefined4 *)(iVar3 + 0x18),
                   (int)*(char *)((uint)*(ushort *)(iVar5 + 0x92) + iVar8),0);
      FUN_002fcc88(DAT_0042d9cc,DAT_0042d9c8,*(undefined4 *)(iVar3 + 0x18));
    }
    else {
      local_3c = DAT_0042d9d0;
      FUN_002f9430(*(undefined4 *)(iVar3 + 0x14),&local_3c,1,0x13);
      FUN_002fcc88(DAT_0042d9d8,DAT_0042d9d4,*(undefined4 *)(iVar3 + 0x18));
    }
  }
  FUN_004422e0();
  return;
}
