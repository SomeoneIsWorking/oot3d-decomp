// OoT3D decomp @ 0041c778  name=FUN_0041c778  size=1652

void FUN_0041c778(int param_1,int param_2)

{
  ushort *puVar1;
  int iVar2;
  undefined1 uVar3;
  int extraout_r1;
  int extraout_r1_00;
  int extraout_r1_01;
  int extraout_r1_02;
  int extraout_r1_03;
  int extraout_r1_04;
  int extraout_r1_05;
  int extraout_r1_06;
  int extraout_r1_07;
  int extraout_r1_08;
  int extraout_r1_09;
  int extraout_r1_10;
  int iVar4;
  int iVar5;
  undefined8 uVar6;

  if (*(char *)(param_2 + 0x100) == '\x03') {
    if (*(char *)(param_2 + 0x101) != '\x02' && *(char *)(param_2 + 0x101) != '\0') {
      return;
    }
    FUN_0042a540(param_2 + 0x601c,param_2);
  }
  if (*(char *)(param_1 + 10) == '\0') {
    return;
  }
  if (*(char *)(param_1 + 0xb) != '\0') {
    return;
  }
  if (*(char *)(param_1 + 8) != '\0') {
    FUN_003016e0(1);
  }
  *(int *)(param_1 + 4) = param_2;
  *(undefined1 *)(*(int *)(param_1 + 0xbe8) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xbec) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xbf0) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xbf4) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xbfc) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc00) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc04) + 0x6c) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc08) + 0x6c) = 0;
  if (*(int *)(param_1 + 0x24) < 1) {
    iVar4 = FUN_002fde54();
    *(bool *)(param_1 + 0x14) = iVar4 != 0;
    iVar4 = FUN_0033f238();
    *(bool *)(param_1 + 0x15) = iVar4 != 0;
    iVar4 = FUN_003063a0();
    *(bool *)(param_1 + 0x16) = iVar4 != 0;
    puVar1 = DAT_0041ce34;
    *(uint *)(param_1 + 0x18) = (uint)*DAT_0041ce30;
    *(uint *)(param_1 + 0x1c) = (uint)*puVar1;
  }
  else {
    *(bool *)(param_1 + 0x14) = 1 < *(int *)(param_1 + 0x24);
    *(bool *)(param_1 + 0x15) = *(int *)(param_1 + 0x24) == 5;
    *(bool *)(param_1 + 0x16) = *(int *)(param_1 + 0x24) == 1;
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + -1;
  }
  iVar4 = 0;
  do {
    FUN_004277b8(param_1 + iVar4 * 0x1c + 0x1120);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  iVar4 = extraout_r1;
  switch(*(undefined1 *)(param_1 + 8)) {
  case 1:
    uVar6 = FUN_002fde08(param_1 + 0x2e0,0,1);
    iVar4 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) break;
    FUN_00307840(param_1 + 0x2e0,0,1,0x12,1);
    iVar4 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xee0) + 0x6c) = 0;
    uVar3 = 2;
    goto LAB_0041ca18;
  case 2:
    FUN_00426870(param_1);
    iVar4 = extraout_r1_00;
    break;
  case 3:
    iVar5 = 0;
    do {
      iVar4 = param_1 + iVar5 * 0x1c;
      uVar6 = FUN_002fde08(*(int *)(iVar4 + 0x1124) + 0x2e0,1,*(int *)(iVar4 + 0x112c) + 3);
      iVar2 = DAT_0041ce38;
      iVar4 = (int)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 == 0) goto switchD_0041c8f0_caseD_0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    *(undefined1 *)(DAT_0041ce38 + param_1) = 1;
    *(undefined1 *)(iVar2 + 0x1c + param_1) = 1;
    *(undefined1 *)(iVar2 + 0x38 + param_1) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 1;
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar3 = 4;
    goto LAB_0041ca18;
  case 4:
    FUN_00426e48(param_1);
    iVar4 = extraout_r1_01;
    break;
  case 5:
    FUN_00427014(param_1);
    iVar4 = extraout_r1_02;
    break;
  case 6:
    uVar6 = FUN_002fde08(param_1 + 0x2e0,1,0xf);
    iVar4 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) break;
    *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 1;
    FUN_00344670(*(undefined4 *)(param_1 + 0xc60),0xc9);
    iVar4 = DAT_0041ce3c;
    *(undefined1 *)(*(int *)(param_1 + 0xc64) + 0x6c) = 1;
    if (*(short *)(iVar4 + 0x44) < 1) {
      *(undefined2 *)(iVar4 + 0x44) = 0x30;
    }
    iVar5 = DAT_0041ce40;
    if ((*(char *)(*(int *)(param_1 + 4) + 0x100) == '\a') && (-1 < *(short *)(DAT_0041ce40 + 0xc0))
       ) {
      *(short *)(iVar4 + 0x7e) = *(short *)(DAT_0041ce40 + 0xc0);
      *(undefined2 *)(iVar5 + 0xc0) = 0xffff;
    }
    FUN_002fdac8(*(undefined4 *)(param_1 + 4),0);
    uVar3 = 7;
    iVar4 = extraout_r1_03;
    goto LAB_0041ca18;
  case 7:
    uVar6 = FUN_002fdaa4();
    iVar4 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) break;
    FUN_002fda7c();
    FUN_0037547c(DAT_0041ce4c,0,4,DAT_0041ce48,DAT_0041ce48,DAT_0041ce44);
    iVar4 = 0;
    *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 0;
    do {
      FUN_00307840(param_1 + 0x2e0,1,iVar4 + 0xf,0x15,1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 9);
    *(undefined1 *)(*(int *)(param_1 + 0xc64) + 0x6c) = 0;
    iVar4 = extraout_r1_04;
    if ((*DAT_0041ce50 & 1) == 0) {
      uVar6 = FUN_003679b4(DAT_0041ce50);
      iVar4 = (int)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 != 0) {
        FUN_0036788c(DAT_0041ce54);
        iVar4 = DAT_0041ce5c;
      }
    }
    *(undefined1 *)(DAT_0041ce60 + 0x21) = 0;
    uVar3 = 8;
    goto LAB_0041ca18;
  case 8:
    FUN_00426b74(param_1);
    iVar4 = extraout_r1_05;
    break;
  case 9:
    iVar5 = 0;
    do {
      iVar4 = param_1 + iVar5 * 0x1c;
      uVar6 = FUN_002fde08(*(int *)(iVar4 + 0x1124) + 0x2e0,1,*(int *)(iVar4 + 0x112c) + 3);
      iVar2 = DAT_0041ce38;
      iVar4 = (int)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 == 0) goto switchD_0041c8f0_caseD_0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    *(undefined1 *)(DAT_0041ce38 + param_1) = 1;
    *(undefined1 *)(iVar2 + 0x1c + param_1) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 1;
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar3 = 10;
    goto LAB_0041ca18;
  case 10:
    FUN_004272fc(param_1);
    iVar4 = extraout_r1_06;
    break;
  case 0xb:
    iVar5 = 0;
    do {
      iVar4 = param_1 + iVar5 * 0x1c;
      uVar6 = FUN_002fde08(*(int *)(iVar4 + 0x1124) + 0x2e0,1,*(int *)(iVar4 + 0x112c) + 3);
      iVar4 = (int)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 == 0) goto switchD_0041c8f0_caseD_0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    FUN_002fda08(param_1 + 0x1120);
    FUN_002fda08(param_1 + 0x113c);
    *(undefined1 *)(*(int *)(param_1 + 0xee0) + 0x6c) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xae0) + 0x6c) = 1;
    FUN_00307840(param_1 + 0x2e0,0,1,0x13,1);
    FUN_00307840(param_1 + 0x2e0,1,0xfa,0x10,1);
    FUN_00307840(param_1 + 0x2e0,0,0xfa,0x10,1);
    uVar3 = 0x10;
    iVar4 = extraout_r1_07;
    goto LAB_0041ca18;
  case 0xc:
    FUN_00426c80(param_1);
    iVar4 = extraout_r1_08;
    break;
  case 0xd:
    iVar5 = 0;
    do {
      iVar4 = param_1 + iVar5 * 0x1c;
      uVar6 = FUN_002fde08(*(int *)(iVar4 + 0x1124) + 0x2e0,1,*(int *)(iVar4 + 0x112c) + 3);
      iVar2 = DAT_0041ce38;
      iVar4 = (int)((ulonglong)uVar6 >> 0x20);
      if ((int)uVar6 == 0) goto switchD_0041c8f0_caseD_0;
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    *(undefined1 *)(DAT_0041ce38 + param_1) = 1;
    *(undefined1 *)(iVar2 + 0x1c + param_1) = 1;
    *(undefined1 *)(iVar2 + 0x54 + param_1) = 1;
    *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 1;
    iVar4 = *(int *)(param_1 + 0x10);
    if (iVar4 != 0) {
      *(undefined4 *)(param_1 + 0x10) = 0;
    }
    uVar3 = 0xe;
    goto LAB_0041ca18;
  case 0xe:
    FUN_00427424(param_1);
    iVar4 = extraout_r1_09;
    break;
  case 0xf:
    FUN_004275c0(param_1);
    iVar4 = extraout_r1_10;
    break;
  case 0x10:
    uVar6 = FUN_002fde08(param_1 + 0x2e0,0,0xfa);
    iVar4 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) break;
    uVar6 = FUN_002fde08(param_1 + 0x2e0,1,0xfa);
    iVar4 = (int)((ulonglong)uVar6 >> 0x20);
    if ((int)uVar6 == 0) break;
    uVar3 = 0x11;
LAB_0041ca18:
    *(undefined1 *)(param_1 + 8) = uVar3;
  }
switchD_0041c8f0_caseD_0:
  FUN_004267b4(param_1,iVar4);
  FUN_002fd8e8(DAT_0041ce64,param_1 + 0x2e0);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}
