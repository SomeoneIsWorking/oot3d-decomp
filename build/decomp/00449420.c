// OoT3D decomp @ 00449420  name=FUN_00449420  size=1268

undefined4 FUN_00449420(int param_1)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint *puVar4;
  int iVar5;
  int iVar6;
  undefined4 extraout_r1;
  uint uVar7;
  undefined4 uVar8;
  int iVar9;
  bool bVar10;
  bool bVar11;
  bool bVar12;
  uint uVar13;
  uint uVar14;
  undefined8 uVar15;
  float local_34;
  float local_30;
  float local_2c;
  float local_28;
  
  *(undefined1 *)(param_1 + 0x6017) = 0;
  FUN_00451c10(param_1);
  FUN_0045ce8c();
  uVar8 = 0;
  uVar7 = 0xff;
  if ((int)(uint)*(byte *)(param_1 + 0x5c76) >> 5 == 1) {
    uVar7 = FUN_00452018();
  }
  else {
    switch(*(byte *)(param_1 + 0x5c76)) {
    case 9:
    case 10:
    case 0xb:
    case 0xc:
      uVar8 = 3;
    case 3:
    case 5:
    case 7:
    case 0xd:
    case 0x11:
      uVar7 = DAT_004498dc;
      break;
    case 0xe:
    case 0xf:
      FUN_002e4660(param_1,&local_34);
      uVar8 = 3;
      iVar6 = VectorFloatToUnsigned(local_34 * DAT_004498e0,3);
      uVar13 = VectorFloatToUnsigned(local_30 * DAT_004498e0,3);
      uVar14 = VectorFloatToUnsigned(local_2c * DAT_004498e0,3);
      uVar7 = VectorFloatToUnsigned(local_28 * DAT_004498e0,3);
      uVar7 = uVar7 & 0xff | iVar6 << 0x18 | (uVar13 & 0xff) << 0x10 | (uVar14 & 0xff) << 8;
      break;
    case 0x10:
      uVar8 = 3;
      break;
    case 0x12:
      uVar7 = DAT_004498d4;
      break;
    case 0x13:
      uVar7 = DAT_004498d8;
    }
  }
  FUN_002e461c(param_1 + 0x7f14,uVar8);
  *(uint *)(param_1 + 0x7f18) = uVar7;
  iVar2 = DAT_004498e8;
  iVar6 = DAT_004498e4;
  sVar1 = *(short *)(param_1 + 0x104);
  iVar9 = DAT_004498e4 + -2;
  if (sVar1 == 0x51) {
    iVar5 = *(int *)(DAT_004498e8 + 8);
joined_r0x004495c0:
    if (iVar5 == DAT_004498e4) {
code_r0x00449614:
      FUN_00455d70();
    }
  }
  else {
    if (sVar1 == 0x6b) {
      iVar5 = *(int *)(DAT_004498e8 + 8);
      goto joined_r0x004495c0;
    }
    if (sVar1 != 0x17) {
      if (sVar1 != 0x61) {
        bVar10 = false;
        if (sVar1 == 0x47) {
          bVar10 = *(int *)(DAT_004498e8 + 8) == 0xfff6;
        }
        if (bVar10) goto code_r0x00449614;
        goto LAB_00449618;
      }
      if (*(int *)(DAT_004498e8 + 8) != iVar9) goto LAB_00449618;
      goto code_r0x00449614;
    }
    if (*(int *)(DAT_004498e8 + 8) == 0xfff2) goto code_r0x00449614;
  }
LAB_00449618:
  uVar7 = (uint)*(ushort *)(DAT_004498ec + 0xf4);
  bVar10 = (*(ushort *)(DAT_004498ec + 0xf4) & 0x400) == 0;
  if (bVar10) {
    uVar7 = *(uint *)(iVar2 + 4);
  }
  bVar11 = uVar7 == 0;
  bVar12 = bVar10 && bVar11;
  if (bVar10 && bVar11) {
    uVar7 = (uint)*(ushort *)(param_1 + 0x104);
  }
  uVar13 = (*(ushort *)(*(int *)(param_1 + 0x20ac) + 0x1c) & 0xf00) >> 8;
  if (bVar10 && bVar11) {
    bVar12 = uVar7 == 0x57;
  }
  if ((!bVar12) || (uVar13 != 5 && uVar13 != 4)) {
    FUN_00338db4(param_1);
  }
  iVar5 = DAT_004498f0;
  *(undefined4 *)(DAT_004498f0 + 0x558) = *(undefined4 *)(param_1 + 0xa68);
  *(undefined1 *)(iVar5 + 0x56e) = *(undefined1 *)(param_1 + 0xa6c);
  if (((*(short *)(param_1 + 0x104) == 0x5c) && ((*(uint *)(iVar2 + 0x1a8) & 0x800) != 0)) &&
     (iVar5 = FUN_0036e864(param_1,0x1f), iVar5 == 0)) {
    FUN_0032eb30();
  }
  *(undefined4 *)(param_1 + 0x5bf8) = 0;
  *(undefined4 *)(param_1 + 0x5bfc) = 0;
  uVar3 = DAT_004498fc;
  uVar8 = DAT_004498f8;
  sVar1 = *(short *)(param_1 + 0x104);
  if (sVar1 == 0x51) {
    if (*(int *)(iVar2 + 8) != DAT_004498f4) goto LAB_0044970c;
LAB_004496fc:
    *(undefined4 *)(param_1 + 0x7f3c) = DAT_004498f8;
    *(undefined4 *)(param_1 + 0x7f38) = uVar8;
  }
  else {
    if (sVar1 != 0x55) {
      if ((sVar1 != 0x34) || (*(int *)(iVar2 + 8) != iVar9 && *(int *)(iVar2 + 8) != DAT_004498f4))
      goto LAB_0044970c;
      goto LAB_004496fc;
    }
    if (*(int *)(iVar2 + 8) == iVar6) goto LAB_004496fc;
LAB_0044970c:
    *(undefined4 *)(param_1 + 0x7f3c) = DAT_004498fc;
    *(undefined4 *)(param_1 + 0x7f38) = uVar3;
  }
  iVar6 = (int)*(short *)(param_1 + 0x104);
  if (iVar6 == 0x47) {
    if (*(int *)(iVar2 + 8) != 0xfff8) goto LAB_00449770;
  }
  else if (iVar6 == 0x51) {
    if (*(int *)(iVar2 + 8) != 0xfff7) {
LAB_00449770:
      uVar8 = 1;
      goto LAB_00449774;
    }
  }
  else {
    bVar10 = iVar6 != 0x5a;
    if (!bVar10) {
      iVar6 = *(int *)(iVar2 + 8) + -0xff00;
    }
    if (bVar10 || iVar6 != 0xf2) goto LAB_00449770;
  }
  uVar8 = 0;
LAB_00449774:
  FUN_00331754(uVar8);
  *(undefined1 *)(DAT_00449900 + param_1) = 0;
  FUN_003016e0(1);
  puVar4 = DAT_00449904;
  uVar8 = extraout_r1;
  if ((*DAT_00449904 & 1) == 0) {
    uVar15 = FUN_003679b4(DAT_00449904);
    uVar8 = (int)((ulonglong)uVar15 >> 0x20);
    if ((int)uVar15 != 0) {
      FUN_0036788c(DAT_00449908);
      uVar8 = DAT_00449910;
    }
  }
  *(undefined4 *)(DAT_00449908 + 0x164) = *(undefined4 *)(param_1 + 0x1b0);
  if ((*puVar4 & 1) == 0) {
    uVar15 = FUN_003679b4(DAT_00449904,uVar8);
    uVar8 = (int)((ulonglong)uVar15 >> 0x20);
    if ((int)uVar15 != 0) {
      FUN_0036788c(DAT_00449908);
      uVar8 = DAT_00449910;
    }
  }
  FUN_002ffb3c(DAT_00449908,uVar8);
  if (((*puVar4 & 1) == 0) && (iVar6 = FUN_003679b4(DAT_00449904), iVar6 != 0)) {
    FUN_0036788c(DAT_00449908);
  }
  iVar6 = DAT_00449914;
  *(undefined1 *)(DAT_00449914 + 0x21) = 0;
  *(undefined1 *)(iVar6 + 9) = 0;
  FUN_0045699c();
  *(undefined4 *)(param_1 + 4) = DAT_00449918;
  *(undefined1 *)(param_1 + 0x101) = 2;
  *(int *)(DAT_0044991c + 4) = param_1 + 0x14;
  if (*(short *)(param_1 + 0x43dc) != 0) {
    if (*(short *)(param_1 + 0x43de) == 0) {
      iVar6 = 0;
      if (*(short *)(param_1 + 0x43dc) != 0) {
        do {
          iVar9 = param_1 + 0x3a58 + iVar6 * 0x70;
          uVar8 = *(undefined4 *)(iVar9 + 0x9a0);
          FUN_002f70c4(iVar9 + 0x988);
          FUN_0034fc6c(uVar8);
          iVar6 = iVar6 + 1;
        } while (iVar6 < (int)(uint)*(ushort *)(param_1 + 0x43dc));
      }
      *(undefined2 *)(param_1 + 0x43dc) = 0;
    }
    else {
      *(short *)(param_1 + 0x43de) = *(short *)(param_1 + 0x43de) + -1;
    }
  }
  FUN_002e4514(param_1);
  FUN_002e2e60(param_1);
  FUN_002e25f0(param_1);
  uVar7 = (uint)*(ushort *)(param_1 + 0x104);
  bVar10 = uVar7 == 0x1a;
  if (bVar10) {
    uVar7 = *(uint *)(iVar2 + 4);
  }
  if ((bVar10 && uVar7 == 0) && (iVar6 = FUN_0036e864(param_1,0x37), iVar6 == 0)) {
    FUN_003655d0(0);
  }
  return 2;
}

