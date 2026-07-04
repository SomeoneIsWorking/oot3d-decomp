// OoT3D decomp @ 002e25f0  name=FUN_002e25f0  size=2092

void FUN_002e25f0(undefined4 *param_1)

{
  char cVar1;
  short sVar2;
  int *piVar3;
  uint *puVar4;
  undefined4 *puVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  bool bVar11;
  uint in_fpscr;
  undefined4 extraout_s0;
  undefined4 uVar12;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 extraout_s0_02;
  undefined4 extraout_s0_03;
  undefined4 extraout_s0_04;
  undefined4 extraout_s0_05;
  undefined4 extraout_s0_06;
  undefined4 extraout_s0_07;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 extraout_s1_02;
  undefined4 extraout_s1_03;
  undefined4 extraout_s1_04;
  undefined4 extraout_s1_05;
  undefined4 extraout_s1_06;
  undefined4 extraout_s1_07;
  undefined4 uVar13;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined4 extraout_s2_02;
  undefined4 extraout_s2_03;
  undefined4 extraout_s2_04;
  undefined4 extraout_s2_05;
  undefined4 extraout_s2_06;
  undefined4 extraout_s2_07;
  undefined4 uVar14;
  uint local_230;
  uint local_22c;
  undefined4 local_228;
  undefined4 local_224;
  undefined1 auStack_220 [396];
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 local_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 local_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 local_54;
  undefined4 local_50;
  undefined4 local_4c;
  int local_48;
  undefined4 local_44;
  undefined4 *local_40;
  undefined4 *local_3c;
  undefined4 *local_38;
  undefined4 local_34;
  undefined4 *local_30;
  
  local_44 = *param_1;
  FUN_002ea9e0(local_44,0,0);
  local_30 = param_1 + 0x987;
  uVar12 = extraout_s0;
  uVar13 = extraout_s1;
  uVar14 = extraout_s2;
  if (*(char *)(DAT_002e2a58 + (int)param_1) == '\0') goto LAB_002e2ddc;
  local_230 = (uint)*(byte *)(param_1 + 0x2a1);
  local_22c = 0xff;
  uVar12 = VectorUnsignedToFloat((uint)*(ushort *)(param_1 + 0x29f),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00464b0c(uVar12,param_1[0x29e],param_1[0x17f2],param_1 + 0x77,
               *(undefined1 *)((int)param_1 + 0xa82),*(undefined1 *)((int)param_1 + 0xa83));
  FUN_002de690(param_1[0x66],param_1[0x67],param_1[0x29d],param_1 + 0x62);
  FUN_00471b84(param_1 + 0x62,0xf);
  puVar5 = param_1 + 0x16ed;
  FUN_00324744(puVar5,param_1 + 0x77);
  FUN_00372224(&uStack_84,param_1 + 0xa7);
  uVar12 = DAT_002e2a5c;
  local_4c = DAT_002e2a5c;
  local_50 = DAT_002e2a5c;
  local_54 = DAT_002e2a5c;
  local_48 = DAT_002e2a60;
  FUN_002d9688(puVar5,puVar5,&uStack_84);
  *(undefined2 *)(*DAT_002e2a64 + 0x174) = 7;
  uVar6 = (uint)*(byte *)((int)param_1 + 0x7f12);
  bVar11 = SBORROW4(uVar6,3);
  iVar7 = uVar6 - 3;
  if (uVar6 != 3) {
    bVar11 = SBORROW4(uVar6,0xb);
    iVar7 = uVar6 - 0xb;
  }
  if (uVar6 != 3 && uVar6 != 0xb) {
    bVar11 = SBORROW4(param_1[0x1fba],0x38);
    iVar7 = param_1[0x1fba] + -0x38;
  }
  if (iVar7 < 0 == bVar11) {
    FUN_002e5a38(auStack_220);
    local_48 = CONCAT31(local_48._1_3_,10);
    local_22c = 400;
    local_224 = 0xf0;
    local_230 = 0;
    local_228 = 0;
    FUN_0045b6dc(auStack_220,&local_230);
    FUN_00463cf8(auStack_220,0xf);
    if (*(char *)((int)param_1 + 0x7f12) != '\0') {
      (*(code *)param_1[0x1fbe])(param_1 + 0x1f42,0);
    }
    param_1[0x6d] = DAT_002e2a68;
  }
  FUN_0045cd50(param_1 + 0x1fc5,0);
  puVar4 = DAT_002e2a70;
  local_48 = param_1[0x1fce];
  local_54 = uVar12;
  local_50 = uVar12;
  local_4c = uVar12;
  if (DAT_002e2a6c < (int)param_1[0x1fce]) {
    local_34 = DAT_002e2a74;
    if ((float)param_1[0x1fce] == (float)param_1[0x1fcf]) {
      if (((*DAT_002e2a70 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_002e2a70), iVar7 != 0)) {
        FUN_0036788c(DAT_002e2a78);
      }
      FUN_003339e8(local_34,6,&local_54,0);
    }
    else {
      local_94 = *DAT_002e2a84;
      uStack_90 = DAT_002e2a84[1];
      uStack_8c = DAT_002e2a84[2];
      uStack_88 = DAT_002e2a84[3];
      uStack_84 = DAT_002e2a84[4];
      local_80 = DAT_002e2a84[5];
      uStack_7c = DAT_002e2a84[6];
      uStack_78 = DAT_002e2a84[7];
      uStack_74 = DAT_002e2a84[8];
      uStack_70 = DAT_002e2a84[9];
      local_6c = DAT_002e2a84[10];
      uStack_68 = DAT_002e2a84[0xb];
      uStack_64 = DAT_002e2a84[0xc];
      uStack_60 = DAT_002e2a84[0xd];
      uStack_5c = DAT_002e2a84[0xe];
      uStack_58 = DAT_002e2a84[0xf];
      if (((*DAT_002e2a70 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_002e2a70), iVar7 != 0)) {
        FUN_0036788c(DAT_002e2a78);
      }
      local_230 = 0;
      FUN_002e74c0(local_34,6,&local_54,&local_94);
      if (((*puVar4 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_002e2a70), iVar7 != 0)) {
        FUN_0036788c(DAT_002e2a78);
      }
      local_230 = 0;
      FUN_002e74c0(local_34,6,&local_54,&uStack_84);
      if (((*puVar4 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_002e2a70), iVar7 != 0)) {
        FUN_0036788c(DAT_002e2a78);
      }
      local_230 = 0;
      FUN_002e74c0(local_34,6,&local_54,&uStack_74);
      iVar7 = param_1[0x1fcf];
      if (DAT_002e2a6c < iVar7) {
        local_54 = uVar12;
        local_50 = uVar12;
        local_4c = uVar12;
        local_48 = iVar7;
        if (((*puVar4 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_002e2a70), iVar7 != 0)) {
          FUN_0036788c(DAT_002e2a78);
        }
        local_230 = 0;
        FUN_002e74c0(local_34,6,&local_54,&uStack_64);
      }
    }
  }
  if (*DAT_002e2a88 != '\0') {
    FUN_0045b6f4(DAT_002e2a8c,0);
  }
  piVar3 = DAT_002e2a64;
  sVar2 = *(short *)(*DAT_002e2a64 + 400);
  if (sVar2 == 2) {
    FUN_00462ad4(param_1 + 0x1f19);
    *(undefined2 *)(*piVar3 + 400) = 3;
LAB_002e2aa4:
    local_48 = 0;
    FUN_00463244(param_1 + 0x1f19,&local_48);
    uVar12 = extraout_s0_00;
    uVar13 = extraout_s1_00;
    uVar14 = extraout_s2_00;
  }
  else {
    if (sVar2 < 4) {
      if (sVar2 == 3) goto LAB_002e2aa4;
    }
    else {
      *(undefined2 *)(*DAT_002e2a64 + 400) = 0;
    }
    local_38 = param_1 + 0xc64;
    if (((*(char *)(param_1 + 0x170b) != '\0') && (*(char *)((int)param_1 + 0x31a5) == '\0')) &&
       (param_1[0xa26] != 0)) {
      param_1[0xa09] = (uint)(*(char *)((int)param_1 + 0x31a6) != '\x01');
      cVar1 = *(char *)(param_1 + 0x170b);
      if (((((cVar1 == '\x01' || cVar1 == '\x04') || cVar1 == '\x05') || cVar1 == '\x1d') ||
          cVar1 == '\x06') || cVar1 == '\b') {
        if ((*(int *)(DAT_002e2e54 + (int)param_1) == 0) ||
           (*(char *)(*(int *)(DAT_002e2e54 + (int)param_1) + 0xad) != '\0')) {
          param_1[0xa27] = 0;
        }
        else {
          param_1[0xa27] = 1;
        }
        local_230 = 1;
        FUN_002de22c(cVar1,local_38,local_30,param_1 + 0x62);
        FUN_002d9664(param_1[0x6e],param_1[0x6f],param_1[0x70],local_30,local_44,
                     *(undefined1 *)(param_1 + 0x170b),*(undefined1 *)((int)param_1 + 0x31a3));
      }
      else {
        FUN_002d9664(param_1[0x6e],param_1[0x6f],param_1[0x70],local_30,local_44,cVar1,0);
      }
    }
    if (*(char *)((int)param_1 + 0x31a6) == '\0') {
      FUN_004594c0(param_1);
    }
    FUN_0046421c(param_1);
    FUN_0045c23c(param_1);
    FUN_0045fe90(param_1,0);
    uVar12 = FUN_0035bfb4(param_1 + 0x29c,local_44);
    FUN_0035bf50(uVar12,param_1[0x29c],0);
    FUN_0045f064(param_1,uVar12);
    local_3c = param_1 + 0x130c;
    FUN_002d960c(local_3c,param_1[0x17f2]);
    local_40 = param_1 + 0x1403;
    FUN_002d960c(local_40,param_1[0x17f2]);
    if ((int)*(short *)(param_1 + 0x1805) != (int)*(short *)(param_1 + 0x170c)) {
      local_230 = (int)*(short *)(param_1 + 0x170c) & 0xff;
      local_22c = local_230;
      FUN_0046245c(param_1,local_3c,local_230,local_230);
      *(undefined2 *)(param_1 + 0x1805) = *(undefined2 *)(param_1 + 0x170c);
    }
    if (*(short *)(*piVar3 + 0xfd0) == 0) {
      FUN_0045bfc4(param_1,local_3c);
      FUN_002d9560(param_1,local_3c,3);
      FUN_002d9560(param_1,local_40,3);
    }
    if (*(char *)((int)param_1 + 0x326f) != '\0') {
      FUN_00463524(param_1,param_1 + 0x62,local_44);
    }
    FUN_004618e4(param_1,param_1 + 0x823);
    if (*(char *)((int)param_1 + 0x31a6) == '\0') {
      local_230 = 0;
      FUN_0045943c((float)param_1[0x6e] + (float)param_1[0xc65],
                   (float)param_1[0x6f] + (float)param_1[0xc66],
                   (float)param_1[0x70] + (float)param_1[0xc67],param_1,local_38,param_1 + 0x62,
                   local_44);
    }
    FUN_0045fe08(param_1);
    iVar7 = *piVar3;
    uVar12 = extraout_s0_01;
    uVar13 = extraout_s1_01;
    uVar14 = extraout_s2_01;
    if (*(short *)(iVar7 + 0x454) != 0) {
      local_230 = *(ushort *)(iVar7 + 0x45c) & 0xff;
      local_22c = 3;
      FUN_002d9490(local_44,*(ushort *)(iVar7 + 0x456) & 0xff,*(ushort *)(iVar7 + 0x458) & 0xff,
                   *(ushort *)(iVar7 + 0x45a) & 0xff);
      uVar12 = extraout_s0_02;
      uVar13 = extraout_s1_02;
      uVar14 = extraout_s2_02;
    }
    if (*(char *)((int)param_1 + 0x3261) == '\x01') {
      local_230 = (uint)*(byte *)((int)param_1 + 0x3265);
      local_22c = 3;
      FUN_002d9490(local_44,*(undefined1 *)((int)param_1 + 0x3262),
                   *(undefined1 *)((int)param_1 + 0x3263),*(undefined1 *)(param_1 + 0xc99));
      uVar12 = extraout_s0_03;
      uVar13 = extraout_s1_03;
      uVar14 = extraout_s2_03;
    }
    if (*(char *)((int)param_1 + 0x3266) != '\0') {
      FUN_0045999c(param_1);
      uVar12 = extraout_s0_04;
      uVar13 = extraout_s1_04;
      uVar14 = extraout_s2_04;
    }
  }
  if (*(int *)(DAT_002e2e58 + 0x4e4) == 0) {
    FUN_0045a07c(param_1);
    uVar12 = extraout_s0_05;
    uVar13 = extraout_s1_05;
    uVar14 = extraout_s2_05;
  }
  if (*(short *)(DAT_002e2e5c + (int)param_1) != 0) {
    FUN_00458a74(param_1);
    uVar12 = extraout_s0_06;
    uVar13 = extraout_s1_06;
    uVar14 = extraout_s2_06;
  }
LAB_002e2ddc:
  if (*(char *)((int)param_1 + 0x361) != '\0') {
    FUN_002d84c4(&local_4c,param_1[*(short *)(param_1 + 0x299) + 0x295]);
    FUN_004592d0(param_1 + 0x62);
    *(undefined1 *)((int)param_1 + 0x361) = 0;
    uVar12 = extraout_s0_07;
    uVar13 = extraout_s1_07;
    uVar14 = extraout_s2_07;
    if ((*(char *)(param_1 + 0x170b) != '\0') && (*(char *)((int)param_1 + 0x31a5) == '\0')) {
      uVar14 = param_1[0x70];
      uVar13 = param_1[0x6f];
      uVar12 = param_1[0x6e];
    }
  }
  iVar7 = param_1[*(short *)(param_1 + 0x299) + 0x295];
  iVar8 = *(int *)(iVar7 + 0xd4);
  iVar9 = *(int *)(iVar8 + 0xa54);
  iVar10 = *(int *)(DAT_0046fcec + iVar8);
  if (*(short *)(iVar7 + 0x1a8) != 0) {
    return;
  }
  FUN_00320d7c(uVar12,uVar13,uVar14,iVar8,(int)*(short *)(iVar7 + 0x1aa),7);
  if ((*(short *)(iVar7 + 0x1aa) == 0) && (*(short *)(iVar7 + 0x1b0) != 0)) {
    *(undefined2 *)(iVar10 + 0x118) = 0;
    *(uint *)(iVar10 + 0x1710) = *(uint *)(iVar10 + 0x1710) & 0xdfffffff;
    if ((*(char *)(iVar10 + 0x12bc) != '\0') &&
       (FUN_0036e980(*(undefined4 *)(iVar7 + 0xd4),iVar10,7), *(char *)(DAT_0046fcf0 + 1) != '\0'))
    {
      *(undefined1 *)(DAT_0046fcf0 + 1) = 0;
      FUN_002e547c(iVar9,iVar10);
      *(undefined2 *)(iVar9 + 400) = 0xffff;
    }
    *(ushort *)(iVar9 + 0x194) = *(ushort *)(iVar9 + 0x194) | 8;
  }
  iVar8 = DAT_0046fcf4;
  iVar9 = *(int *)(*(int *)(iVar7 + 0xd4) + DAT_0046fcf4 + *(short *)(iVar7 + 0x196) * 4);
  if (*(short *)(iVar9 + 0x1aa) == *(short *)(iVar7 + 0x1ac)) {
    *(undefined2 *)(iVar9 + 0x1aa) = *(undefined2 *)(iVar7 + 0x1aa);
  }
  iVar9 = *(int *)(*(int *)(iVar7 + 0xd4) + iVar8 + *(short *)(iVar7 + 0x1aa) * 4);
  if (*(short *)(iVar9 + 0x196) == *(short *)(iVar7 + 0x1ac)) {
    *(undefined2 *)(iVar9 + 0x196) = *(undefined2 *)(iVar7 + 0x196);
  }
  iVar8 = *(int *)(*(int *)(iVar7 + 0xd4) + iVar8 + *(short *)(iVar7 + 0x1aa) * 4);
  if (*(short *)(iVar8 + 0x1ac) == 0) {
    *(undefined2 *)(iVar8 + 0x1a6) = 0;
  }
  *(undefined2 *)(iVar7 + 0x1aa) = 0;
  *(undefined2 *)(iVar7 + 0x196) = 0;
  *(undefined2 *)(iVar7 + 0x1a8) = 0xffff;
  *(undefined1 *)(*(int *)(iVar7 + 0xd4) + 0x3261) = 0;
  FUN_0036963c(*(undefined4 *)(iVar7 + 0xd4),(int)*(short *)(iVar7 + 0x1ac));
  return;
}

