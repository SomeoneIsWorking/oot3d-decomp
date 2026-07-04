// OoT3D decomp @ 0044ff18  name=FUN_0044ff18  size=2704

void FUN_0044ff18(int *param_1,int param_2)

{
  char cVar1;
  ushort uVar2;
  short sVar3;
  char *pcVar4;
  undefined1 *puVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  undefined4 *puVar10;
  undefined4 uVar11;
  int iVar12;
  undefined4 uVar13;
  int iVar14;
  undefined4 uVar15;
  int iVar16;
  int *piVar17;
  undefined4 *puVar18;
  undefined4 uVar19;
  uint uVar20;
  undefined1 uVar21;
  float fVar22;
  undefined4 *puStack_8f8;
  undefined4 *puStack_8f4;
  undefined4 *puStack_7e0;
  undefined4 uStack_7d8;
  undefined4 uStack_7d4;
  undefined4 uStack_7d0;
  undefined4 uStack_7cc;
  undefined4 uStack_7c8;
  undefined4 uStack_7c4;
  undefined4 uStack_7c0;
  undefined4 uStack_7bc;
  undefined4 uStack_7b8;
  undefined4 uStack_7b4;
  undefined4 uStack_7b0;
  undefined4 uStack_7ac;
  undefined4 uStack_7a8;
  undefined4 uStack_7a4;
  undefined4 uStack_7a0;
  undefined4 uStack_79c;
  undefined4 uStack_798;
  undefined4 uStack_794;
  undefined4 uStack_790;
  undefined4 uStack_78c;
  undefined4 uStack_788;
  undefined4 uStack_784;
  undefined4 uStack_780;
  float fStack_77c;
  undefined4 *puStack_778;
  undefined4 *puStack_774;
  undefined4 uStack_660;
  undefined4 uStack_65c;
  undefined4 uStack_658;
  undefined4 uStack_654;
  undefined4 uStack_650;
  undefined4 uStack_64c;
  undefined4 uStack_648;
  undefined4 uStack_644;
  undefined4 uStack_640;
  undefined4 uStack_63c;
  undefined4 uStack_638;
  undefined4 uStack_634;
  undefined4 uStack_630;
  undefined4 uStack_62c;
  undefined4 uStack_628;
  undefined4 uStack_624;
  undefined4 uStack_620;
  undefined4 uStack_61c;
  undefined4 uStack_618;
  undefined4 uStack_614;
  undefined4 uStack_610;
  undefined4 uStack_60c;
  undefined4 uStack_608;
  undefined4 uStack_604;
  undefined4 uStack_600;
  undefined4 uStack_5fc;
  undefined4 uStack_5f8;
  undefined4 uStack_5f4;
  float afStack_5f0 [3];
  float fStack_5e4;
  undefined4 uStack_5e0;
  float fStack_5dc;
  float fStack_5d8;
  undefined4 uStack_5d4;
  float fStack_5d0;
  float fStack_5cc;
  undefined4 uStack_5c8;
  float fStack_5c4;
  undefined1 auStack_5c0 [40];
  undefined1 auStack_598 [40];
  undefined1 auStack_570 [40];
  undefined1 auStack_548 [160];
  undefined4 uStack_4a8;
  undefined4 uStack_4a4;
  undefined4 uStack_4a0;
  undefined4 uStack_49c;
  undefined4 uStack_498;
  undefined4 uStack_494;
  undefined4 uStack_490;
  undefined4 uStack_48c;
  undefined4 uStack_488;
  undefined4 uStack_484;
  undefined4 uStack_480;
  undefined4 uStack_47c;
  undefined4 uStack_478;
  undefined4 uStack_474;
  undefined4 uStack_470;
  undefined4 uStack_46c;
  undefined4 uStack_468;
  undefined4 uStack_464;
  undefined4 uStack_460;
  undefined4 uStack_45c;
  undefined4 uStack_458;
  undefined1 auStack_454 [16];
  ushort *puStack_444;
  ushort auStack_33c [350];
  undefined4 uStack_80;
  undefined1 auStack_7c [64];
  int *piStack_3c;
  int *piStack_38;
  
  uVar20 = uRam00450394;
  iVar9 = iRam00450390;
  *(undefined2 *)(iRam00450390 + 0xb0) = 0;
  if (*(ushort *)(iVar9 + -0x14f4) - 0x4555 < uVar20) {
    *(undefined4 *)(iVar9 + -0x14f0) = 0;
  }
  else {
    *(undefined4 *)(iVar9 + -0x14f0) = 1;
  }
  *(undefined4 *)(*param_1 + 0x10) = uRam00450398;
  *(int **)(*param_1 + 0x14) = param_1;
  FUN_002de738(param_2 + 0x2c,0x50,0x50,0x50,0x50,0x50,0x50);
  FUN_0034faa8(param_1,param_1 + 0x29c,param_2 + 0x2c);
  FUN_002de738(param_2 + 0x44,0x50,0x50,0x50,0x50,0x50,0x50);
  FUN_0034faa8(param_1,param_1 + 0x29c,param_2 + 0x44);
  *(undefined1 *)(param_2 + 0x1a) = 0;
  *(undefined2 *)(param_2 + 0x1c) = 0;
  *(undefined1 *)(param_2 + 0x23) = 0;
  *(undefined2 *)(param_2 + 0x24) = 0;
  *(undefined1 *)(param_2 + 0x5c) = 0;
  *(undefined1 *)(param_2 + 0x10) = 99;
  uVar15 = uRam0045039c;
  *(undefined1 *)(param_2 + 0x11) = 99;
  *(undefined4 *)(param_2 + 0x60) = uVar15;
  *(undefined4 *)(param_2 + 0x68) = uVar15;
  *(undefined4 *)(param_2 + 100) = uVar15;
  *(undefined1 *)(param_2 + 0x21) = 0;
  *(undefined1 *)(param_2 + 0x22) = 0;
  uVar19 = uRam004503a0;
  *(undefined1 *)(param_2 + 0xa5) = 0;
  *(undefined1 *)(param_2 + 0xa6) = 0;
  *(undefined4 *)(param_2 + 200) = uVar19;
  *(undefined1 *)(param_2 + 0xcc) = 0;
  *(undefined1 *)(param_2 + 0xcd) = 0;
  *(undefined1 *)(param_2 + 0xce) = 0;
  *(undefined1 *)(param_2 + 0xcf) = 0;
  *(undefined1 *)(param_2 + 0xd0) = 0;
  *(undefined1 *)(param_2 + 0xd1) = 0;
  *(undefined1 *)(param_2 + 0xd2) = 0;
  *(undefined1 *)(param_2 + 0xd3) = 0;
  *(undefined1 *)(param_2 + 0xd4) = 0;
  *(undefined1 *)(param_2 + 0xd5) = 0;
  *(undefined1 *)(param_2 + 0xd9) = 0;
  *(undefined1 *)(param_2 + 0xda) = 0;
  *(undefined1 *)(param_2 + 0xdb) = 0;
  *(undefined1 *)(param_2 + 0xdc) = 0;
  *(undefined1 *)(param_2 + 0xdd) = 0;
  *(undefined1 *)(param_2 + 0x1b) = 0;
  *(undefined1 *)(param_2 + 0xd6) = 0;
  puVar5 = puRam004503a4;
  *(undefined1 *)(param_2 + 0xd7) = 0;
  *(undefined1 *)(param_2 + 0xd8) = 0;
  *(undefined4 *)(param_2 + 0x268) = 0;
  *(undefined4 *)(param_2 + 0x8c) = uVar19;
  pcVar4 = pcRam004503a8;
  *puVar5 = 0;
  iVar12 = iRam004503ac;
  puVar5[1] = 0;
  puVar5[2] = 0;
  puVar5[3] = 0;
  pcVar4[0x12] = '\0';
  pcVar4[0x13] = '\0';
  *(undefined1 *)(iVar12 + 0x59d) = 0;
  *(undefined4 *)(param_2 + 0x84) = uVar15;
  *(undefined2 *)(param_2 + 0x7e) = 0;
  *(undefined2 *)(param_2 + 0x7c) = 0;
  *(undefined2 *)(param_2 + 0x7a) = 0;
  *(undefined2 *)(param_2 + 0x78) = 0;
  *(undefined2 *)(param_2 + 0x76) = 0;
  *(undefined2 *)(param_2 + 0x74) = 0;
  *(undefined2 *)(param_2 + 0x72) = 0;
  *(undefined2 *)(param_2 + 0x70) = 0;
  *(undefined2 *)(param_2 + 0x6e) = 0;
  *(undefined2 *)(param_2 + 0x6c) = 0;
  *(undefined4 *)(param_2 + 0x88) = uVar15;
  fVar22 = (float)FUN_002cfca0((int)(short)(*(short *)(iVar9 + -0x14f4) + -0x8000));
  *(float *)(param_2 + 4) = fVar22 * fRam004503b0 * *(float *)(pcVar4 + 0x1c);
  fVar22 = (float)FUN_00338f60((int)(short)(*(short *)(iVar9 + -0x14f4) + -0x8000));
  *(float *)(param_2 + 8) = fVar22 * fRam004503b4 * *(float *)(pcVar4 + 0x1c);
  fVar22 = (float)FUN_00338f60((int)(short)(*(short *)(iVar9 + -0x14f4) + -0x8000));
  *(float *)(param_2 + 0xc) = fVar22 * fRam004503b8 * *(float *)(pcVar4 + 0x1c);
  *(undefined2 *)(param_2 + 0x90) = 0x50;
  *(undefined2 *)(param_2 + 0x92) = 0x50;
  *(undefined2 *)(param_2 + 0x94) = 0x50;
  *(undefined1 *)(param_2 + 0xa4) = 0;
  *(undefined1 *)(param_2 + 0xa7) = 0xff;
  *(undefined2 *)(param_2 + 0xc4) = 0xffff;
  *(undefined2 *)(param_2 + 2) = 0;
  pcVar4[10] = '\0';
  pcVar4[0xb] = '\0';
  *(undefined1 *)((int)param_1 + 0x326e) = 0;
  *(undefined1 *)((int)param_1 + 0x326f) = 0;
  *(undefined1 *)(param_1 + 0xc9c) = 0;
  *(undefined1 *)((int)param_1 + 0x3271) = 0;
  *(undefined1 *)((int)param_1 + 0x3272) = 0;
  if (*(char *)(iVar12 + 0x54d) == '\0') {
    *pcVar4 = '\0';
  }
  else if (*(int *)(iVar12 + 0x4e8) < 4) {
    cVar1 = *pcVar4;
    switch(cVar1) {
    case '\x01':
      *(undefined1 *)(param_2 + 0x18) = 4;
      *(undefined1 *)(param_2 + 0x19) = 4;
      *(undefined1 *)(param_2 + 0x21) = 3;
      *(undefined1 *)(param_2 + 0x22) = 3;
      break;
    case '\x02':
    case '\x03':
    case '\x04':
      *(undefined1 *)(param_2 + 0x18) = 1;
      *(undefined1 *)(param_2 + 0x19) = 1;
      *(undefined1 *)(param_2 + 0x21) = 2;
      *(undefined1 *)(param_2 + 0x22) = 2;
      break;
    case '\x05':
      uVar21 = 2;
      iVar9 = param_1[0x41];
      *(undefined1 *)(param_2 + 0x18) = 1;
      *(undefined1 *)(param_2 + 0x19) = 1;
      if ((short)iVar9 == 0x53) {
        uVar21 = 0;
      }
      *(undefined1 *)(param_2 + 0x21) = uVar21;
      *(undefined1 *)(param_2 + 0x22) = uVar21;
    }
    iVar9 = iRam004503bc;
    *(undefined1 *)(param_1 + 0xc9c) = 0;
    *(undefined1 *)((int)param_1 + 0x3271) = 0;
    if (*(char *)(iVar9 + (int)param_1) == '\x01') {
      if (cVar1 == '\x03') {
        *(undefined1 *)((int)param_1 + 0x3271) = 0x40;
        *(undefined1 *)(param_1 + 0xc9c) = 0x40;
      }
      else if (cVar1 == '\x04') {
        *(undefined1 *)((int)param_1 + 0x326e) = 0x14;
        *(undefined1 *)((int)param_1 + 0x326f) = 0x14;
      }
      else if (cVar1 == '\x05') {
        *(undefined1 *)((int)param_1 + 0x326e) = 0x1e;
        *(undefined1 *)((int)param_1 + 0x326f) = 0x1e;
      }
    }
  }
  puVar5 = puRam004503c0;
  pcVar4[2] = '\0';
  pcVar4[1] = '\0';
  pcVar4[3] = '\x01';
  iVar9 = iRam004503c4;
  *(undefined1 *)(iVar12 + 0x54d) = 0;
  *puVar5 = 1;
  uVar20 = 0;
  do {
    *(undefined1 *)(iVar9 + uVar20 * 0x20) = 0xff;
    uVar20 = uVar20 + 1 & 0xff;
  } while (uVar20 < 0xc);
  *(undefined2 *)(param_1 + 0x14fc) = 0;
  *(undefined2 *)((int)param_1 + 0x53f2) = 0;
  uVar20 = 0;
  do {
    uVar8 = uVar20 + 1 & 0xff;
    param_1[uVar20 + 0x8b7] = 0;
    uVar20 = uVar8;
  } while (uVar8 < 0x10);
  piStack_38 = param_1 + 0xe96;
  iVar9 = FUN_00363c10(piStack_38,2);
  if ((iVar9 < 0) && (*(char *)((int)param_1 + 0x31a6) == '\0')) {
    *(undefined1 *)((int)param_1 + 0x31a6) = 1;
  }
  pcVar4[6] = '\0';
  FUN_00371738(auStack_7c,uRam004503c8,0x44);
  uStack_80 = FUN_002de6b8(param_1,auStack_7c);
  *(undefined4 *)(param_2 + 0x264) = uStack_80;
  puVar10 = (undefined4 *)FUN_0035010c(0x70);
  if (puVar10 == (undefined4 *)0x0) {
    puVar10 = (undefined4 *)0x0;
  }
  else {
    FUN_00343280(puVar10,0x70);
    *puVar10 = 0;
    puVar10[1] = 0;
    puVar10[2] = 0;
    puVar10[3] = 0;
    puVar10[4] = 0;
    puVar10[5] = 0;
  }
  *(undefined4 **)(param_2 + 0x268) = puVar10;
  if (piStack_3c == (int *)0x0) {
    piStack_3c = (int *)FUN_00324fd0(auStack_7c);
  }
  FUN_0031b124(*(undefined4 *)(param_2 + 0x268),uStack_80,piStack_3c,0);
  uVar11 = FUN_00328ddc(*(undefined4 *)(param_2 + 0x268),0);
  *(undefined4 *)(param_2 + 0x26c) = uVar11;
  uVar11 = FUN_00328ddc(*(undefined4 *)(param_2 + 0x268),1);
  *(undefined4 *)(param_2 + 0x27c) = uVar11;
  uVar20 = FUN_00363c10(piStack_38,1);
  uVar20 = uVar20 & 0xff;
  if ((uVar20 < 0x13) && (*(int *)((int)param_1 + iRam00450990 + uVar20 * 0x80) != 0)) {
    piStack_3c = param_1 + uVar20 * 0x20 + 0xe97;
  }
  else {
    piStack_3c = (int *)0x0;
  }
  piStack_3c = piStack_3c + 4;
  FUN_00371738(auStack_454,uRam00450994,0x118);
  puStack_444 = auStack_33c;
  uStack_484 = *puRam00450998;
  uStack_480 = puRam00450998[1];
  uStack_47c = puRam00450998[2];
  uStack_478 = puRam00450998[3];
  uStack_474 = puRam00450998[4];
  uStack_470 = puRam00450998[5];
  uStack_46c = puRam00450998[6];
  uStack_468 = puRam00450998[7];
  uStack_464 = puRam00450998[8];
  uStack_460 = puRam00450998[9];
  uStack_45c = puRam00450998[10];
  uStack_458 = puRam00450998[0xb];
  uStack_4a4 = *puRam0045099c;
  uStack_4a0 = puRam0045099c[1];
  uStack_49c = puRam0045099c[2];
  uStack_498 = puRam0045099c[3];
  uStack_494 = puRam0045099c[4];
  uStack_490 = puRam0045099c[5];
  uStack_48c = puRam0045099c[6];
  uStack_488 = puRam0045099c[7];
  iVar9 = 0;
  do {
    puStack_444[iVar9 * 6] = (ushort)uRam004509a0 & (ushort)(iVar9 << 2);
    sVar3 = (short)iVar9;
    auStack_33c[iVar9 * 6 + 1] = sVar3 * 4 + 2;
    uVar2 = sVar3 * 4 + 1;
    auStack_33c[iVar9 * 6 + 2] = uVar2;
    auStack_33c[iVar9 * 6 + 3] = uVar2;
    auStack_33c[iVar9 * 6 + 4] = uVar2;
    iVar12 = iVar9 + 1;
    auStack_33c[iVar9 * 6 + 5] = sVar3 * 4 + 4;
    iVar9 = iVar12;
  } while (iVar12 < 0x40);
  uVar13 = FUN_00372c90(piStack_3c,0x44);
  puVar10 = puRam004509a4;
  iVar9 = (**(code **)(*(int *)*puRam004509a4 + 8))((int *)*puRam004509a4,0x1b8);
  uVar11 = 0;
  if (iVar9 != 0) {
    uVar11 = FUN_00348f34(iVar9,auStack_454);
  }
  uVar7 = uRam004509ac;
  uVar6 = uRam004509a8;
  *(undefined4 *)(param_2 + 0x1e4) = uVar11;
  FUN_00348a64(uVar11,0,uVar13,uVar7,uVar7,uVar6,uVar6);
  if (((*puRam004509b0 & 1) == 0) && (iVar9 = FUN_003679b4(puRam004509b0), iVar9 != 0)) {
    FUN_0036788c(uRam004509b4);
  }
  iVar9 = iRam004509c0;
  uVar11 = FUN_00340d00(*(undefined4 *)(iRam004509c0 + 0x47c),*(undefined4 *)(param_2 + 0x1e4),0);
  *(undefined4 *)(param_2 + 0x1e8) = uVar11;
  FUN_0034ea6c(uVar11,&uStack_484);
  FUN_0034ea48(*(undefined4 *)(param_2 + 0x1e8),&uStack_4a4);
  FUN_00371738(auStack_5c0,uRam004509c4,0x118);
  FUN_0034338c(auStack_598,uRam004509c8,0x28);
  FUN_0034338c(auStack_570,uRam004509cc,0x28);
  FUN_0034338c(auStack_548,uRam004509d0,0x28);
  fVar22 = fRam004509dc;
  afStack_5f0[1] = 0.0;
  uStack_5e0 = 0;
  uStack_5d4 = 0;
  uStack_5c8 = 0;
  afStack_5f0[0] = *pfRam004509d4 * fRam004509d8;
  fStack_5e4 = *pfRam004509d4 * fRam004509dc;
  uStack_610 = *puRam004509e0;
  uStack_60c = puRam004509e0[1];
  uStack_608 = puRam004509e0[2];
  uStack_604 = puRam004509e0[3];
  uStack_600 = puRam004509e0[4];
  uStack_5fc = puRam004509e0[5];
  uStack_5f8 = puRam004509e0[6];
  uStack_5f4 = puRam004509e0[7];
  afStack_5f0[2] = afStack_5f0[0];
  fStack_5dc = afStack_5f0[0];
  fStack_5d8 = afStack_5f0[0];
  fStack_5d0 = fStack_5e4;
  fStack_5cc = fStack_5e4;
  fStack_5c4 = fStack_5e4;
  uStack_4a8 = FUN_00372c90(piStack_3c,0x45);
  iVar12 = (**(code **)(*(int *)*puVar10 + 8))((int *)*puVar10,0x1b8);
  uVar11 = 0;
  if (iVar12 != 0) {
    uVar11 = FUN_00348f34(iVar12,auStack_5c0);
  }
  uVar6 = uRam004509e4;
  uVar13 = uRam004509ac;
  *(undefined4 *)(param_2 + 0x1ec) = uVar11;
  FUN_00348a64(uVar11,0,uStack_4a8,uVar13,uVar13,uVar6,uVar6);
  if (((*puRam004509b0 & 1) == 0) && (iVar12 = FUN_003679b4(puRam004509b0), iVar12 != 0)) {
    FUN_0036788c(uRam004509b4);
  }
  uVar11 = FUN_00340d00(*(undefined4 *)(iVar9 + 0x47c),*(undefined4 *)(param_2 + 0x1ec),0);
  *(undefined4 *)(param_2 + 0x1f0) = uVar11;
  FUN_0034ea6c(uVar11,afStack_5f0);
  FUN_0034ea48(*(undefined4 *)(param_2 + 0x1f0),&uStack_610);
  uStack_640 = *puRam004509e8;
  uStack_63c = puRam004509e8[1];
  uStack_638 = puRam004509e8[2];
  uStack_634 = puRam004509e8[3];
  uStack_630 = puRam004509e8[4];
  uStack_62c = puRam004509e8[5];
  uStack_628 = puRam004509e8[6];
  uStack_624 = puRam004509e8[7];
  uStack_620 = puRam004509e8[8];
  uStack_61c = puRam004509e8[9];
  uStack_618 = puRam004509e8[10];
  uStack_614 = puRam004509e8[0xb];
  uStack_660 = *puRam004509ec;
  uStack_65c = puRam004509ec[1];
  uStack_658 = puRam004509ec[2];
  uStack_654 = puRam004509ec[3];
  uStack_650 = puRam004509ec[4];
  uStack_64c = puRam004509ec[5];
  uStack_648 = puRam004509ec[6];
  uStack_644 = puRam004509ec[7];
  FUN_00371738(&puStack_778,uRam004509f0,0x118);
  puStack_774 = &uStack_660;
  iVar12 = 0;
  puStack_778 = &uStack_640;
  do {
    uVar11 = FUN_00372c90(piStack_3c,iVar12 + 0x46);
    iVar14 = iVar12 * 4;
    iVar12 = iVar12 + 1;
    *(undefined4 *)(param_2 + iVar14 + 0x254) = uVar11;
    uVar11 = uRam004509ac;
  } while (iVar12 < 4);
  uStack_788 = uVar19;
  iVar12 = 0;
  uStack_784 = uVar15;
  uStack_780 = uVar15;
  fStack_77c = fVar22;
  do {
    iVar14 = (**(code **)(*(int *)*puVar10 + 8))((int *)*puVar10,0x1b8);
    uVar15 = 0;
    if (iVar14 != 0) {
      uVar15 = FUN_00348f34(iVar14,&puStack_778);
    }
    uVar19 = uRam004509a8;
    iVar14 = param_2 + iVar12 * 4;
    *(undefined4 *)(iVar14 + 500) = uVar15;
    FUN_00348a64(uVar15,0,*(undefined4 *)(param_2 + 0x254),uVar11,uVar11,uVar19,uVar19);
    FUN_00348be4(*(undefined4 *)(iVar14 + 500));
    if (((*puRam004509b0 & 1) == 0) && (iVar16 = FUN_003679b4(puRam004509b0), iVar16 != 0)) {
      FUN_0036788c(uRam004509b4);
    }
    iVar16 = FUN_0034897c(*(undefined4 *)(iVar9 + 0x47c),*(undefined4 *)(iVar14 + 500),0);
    *(int *)(iVar14 + 0x224) = iVar16;
    iVar12 = iVar12 + 1;
    *(undefined4 *)(iVar16 + 0xf0) = uStack_788;
    *(undefined4 *)(iVar16 + 0xf4) = uStack_784;
    *(undefined4 *)(iVar16 + 0xf8) = uStack_780;
    *(float *)(iVar16 + 0xfc) = fStack_77c;
  } while (iVar12 < 0xc);
  piVar17 = (int *)0x0;
  if (param_1[0xe99] != 0) {
    piVar17 = param_1 + 0xe97;
  }
  puVar18 = (undefined4 *)FUN_003373b8(*(undefined4 *)(param_2 + 0x27c),1);
  uStack_7b8 = *puRam004509f4;
  uStack_7b4 = puRam004509f4[1];
  uStack_7ac = puRam004509f4[3];
  uStack_7a8 = puRam004509f4[4];
  uStack_7a0 = puRam004509f4[6];
  uStack_79c = puRam004509f4[7];
  uStack_794 = puRam004509f4[9];
  uStack_790 = puRam004509f4[10];
  uStack_7b0 = *puVar18;
  uStack_7a4 = *puVar18;
  uStack_798 = puVar18[1];
  uStack_78c = puVar18[1];
  uStack_7d8 = *puRam004509f8;
  uStack_7d4 = puRam004509f8[1];
  uStack_7d0 = puRam004509f8[2];
  uStack_7cc = puRam004509f8[3];
  uStack_7c8 = puRam004509f8[4];
  uStack_7c4 = puRam004509f8[5];
  uStack_7c0 = puRam004509f8[6];
  uStack_7bc = puRam004509f8[7];
  FUN_00371738(&puStack_8f8,uRam004509fc,0x120);
  puStack_8f8 = &uStack_7b8;
  puStack_8f4 = &uStack_7d8;
  puStack_7e0 = &uStack_7d8;
  iVar12 = (**(code **)(*(int *)*puVar10 + 0xc))((int *)*puVar10,0x1b8,0x450a00,uRam00450a38);
  uVar15 = 0;
  if (iVar12 != 0) {
    uVar15 = FUN_003432d4(iVar12,&puStack_8f8);
  }
  *(undefined4 *)(param_2 + 0x270) = uVar15;
  FUN_00348be4();
  uVar19 = FUN_00372c90(piVar17 + 4,0x4a);
  uVar13 = FUN_00372c90(piVar17 + 4,0x4b);
  uVar15 = uRam00450a3c;
  FUN_00348a64(*(undefined4 *)(param_2 + 0x270),0,uVar19,uVar11,uVar11,uRam00450a3c,uRam004509a8);
  FUN_00348a64(*(undefined4 *)(param_2 + 0x270),1,uVar13,uVar11,uVar11,uVar15,uVar15);
  if (((*puRam004509b0 & 1) == 0) && (iVar12 = FUN_003679b4(puRam004509b0), iVar12 != 0)) {
    FUN_0036788c(uRam004509b4);
  }
  iVar9 = FUN_0034897c(*(undefined4 *)(iVar9 + 0x47c),*(undefined4 *)(param_2 + 0x270),0);
  *(int *)(param_2 + 0x274) = iVar9;
  *(uint *)(iVar9 + 0x178) = *(uint *)(iVar9 + 0x178) | 0x10;
  *(undefined4 *)(param_2 + 0x278) = 0;
  return;
}

