// OoT3D decomp @ 002e4fd8  name=FUN_002e4fd8  size=1072

undefined4 FUN_002e4fd8(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 extraout_r1;
  uint uVar6;
  uint extraout_r1_00;
  uint extraout_r1_01;
  uint extraout_r1_02;
  int iVar7;
  int iVar8;
  bool bVar9;
  undefined8 uVar10;

  FUN_003076f4();
  puVar1 = DAT_002e5408;
  uVar5 = extraout_r1;
  if (((*DAT_002e5408 & 1) == 0) &&
     (uVar10 = FUN_003679b4(DAT_002e5408), uVar5 = (int)((ulonglong)uVar10 >> 0x20),
     (int)uVar10 != 0)) {
    FUN_0036788c(DAT_002e540c);
    uVar5 = DAT_002e5414;
  }
  iVar7 = *(int *)(DAT_002e5418 + 0xf3c);
  FUN_002e2424(DAT_002e5418,uVar5);
  iVar8 = 0;
  iVar7 = DAT_002e541c + iVar7 * 0x280;
  uVar6 = DAT_002e541c;
  while( true ) {
    iVar2 = param_1 + iVar8 * 0x10;
    bVar9 = *(int *)(iVar2 + 0x2c) != 0;
    if (bVar9) {
      uVar6 = (uint)*(byte *)(iVar2 + 0x34);
    }
    if (bVar9 && uVar6 != 0) {
      FUN_0034fc68();
    }
    *(undefined4 *)(iVar2 + 0x2c) = 0;
    *(undefined4 *)(iVar2 + 0x30) = 0;
    *(undefined1 *)(iVar2 + 0x34) = 0;
    iVar3 = FUN_00301300(iVar7 + iVar8 * 0x80,0,0);
    FUN_0031b9c0(iVar3,1);
    iVar4 = *(int *)(iVar3 + 4);
    *(int *)(iVar2 + 0x30) = iVar4;
    if (iVar4 == 0) break;
    iVar4 = thunk_FUN_0035010c(*(undefined4 *)(iVar2 + 0x30),0x9c00000);
    *(int *)(iVar2 + 0x2c) = iVar4;
    if (iVar4 == 0) break;
    uVar5 = FUN_00303ea8(iVar3);
    FUN_0034338c(*(undefined4 *)(iVar2 + 0x2c),uVar5,*(undefined4 *)(iVar2 + 0x30));
    FUN_00301260(iVar3);
    FUN_0031b99c(iVar3);
    iVar8 = iVar8 + 1;
    *(undefined1 *)(iVar2 + 0x34) = 1;
    uVar6 = extraout_r1_01;
    if (4 < iVar8) {
      FUN_002ff8e0(param_1 + 0xcc,*(undefined4 *)(param_1 + 0x2c),0);
      uVar5 = FUN_002e11d0(0xc);
      *(undefined4 *)(param_1 + 0x2c4) = uVar5;
      *(int *)(param_1 + 0x2c8) = param_1 + 0xcc;
      uVar5 = FUN_002e11d0(0);
      *(undefined4 *)(param_1 + 0x2cc) = uVar5;
      uVar5 = FUN_002e11d0(0xd);
      *(undefined4 *)(param_1 + 0x2d0) = uVar5;
      uVar5 = FUN_002e11d0(1);
      *(undefined4 *)(param_1 + 0x2d4) = uVar5;
      uVar5 = FUN_002e11d0(4);
      *(undefined4 *)(param_1 + 0x2d8) = uVar5;
      if (((*puVar1 & 1) == 0) && (iVar7 = FUN_003679b4(DAT_002e5408), iVar7 != 0)) {
        FUN_0036788c(DAT_002e540c);
      }
      *(undefined4 *)(param_1 + 0x2dc) = DAT_002e5420;
      FUN_002db998(param_1 + 0x2e0,param_1 + 0x2c4,7,*(undefined4 *)(param_1 + 0x3c),
                   *(undefined4 *)(param_1 + 0x40),*(undefined4 *)(param_1 + 0x4c),
                   *(undefined4 *)(param_1 + 0x50),*(undefined4 *)(param_1 + 0x5c),
                   *(undefined4 *)(param_1 + 0x60),*(undefined4 *)(param_1 + 0x6c),
                   *(undefined4 *)(param_1 + 0x70),0,0,0);
      *(undefined4 *)(param_1 + 0x112c) = 0x19;
      uVar5 = DAT_002e5424;
      *(int *)(param_1 + 0x1124) = param_1;
      *(undefined4 *)(param_1 + 0x1128) = 0;
      *(undefined4 *)(param_1 + 0x1134) = uVar5;
      *(undefined4 *)(param_1 + 0x1130) = 0x2d;
      *(undefined1 *)(param_1 + 0x113a) = 1;
      *(undefined1 *)(param_1 + 0x1138) = 1;
      FUN_002f4d98(param_1 + 0x1120,0);
      *(undefined1 *)(param_1 + 0x1139) = 1;
      *(undefined1 *)(param_1 + 0x113a) = 1;
      *(undefined4 *)(param_1 + 0x1148) = 0x1e;
      *(undefined4 *)(param_1 + 0x114c) = 0x2d;
      *(int *)(param_1 + 0x1140) = param_1;
      *(undefined4 *)(param_1 + 0x1144) = 1;
      *(undefined4 *)(param_1 + 0x1150) = uVar5;
      *(undefined1 *)(param_1 + 0x1156) = 1;
      *(undefined1 *)(param_1 + 0x1154) = 1;
      FUN_002f4d98(param_1 + 0x113c,0);
      *(undefined1 *)(param_1 + 0x1155) = 1;
      *(undefined1 *)(param_1 + 0x1156) = 1;
      *(undefined4 *)(param_1 + 0x1160) = 2;
      *(undefined4 *)(param_1 + 0x1164) = 0x23;
      *(undefined4 *)(param_1 + 0x1168) = 0x32;
      *(undefined4 *)(param_1 + 0x116c) = uVar5;
      *(int *)(param_1 + 0x115c) = param_1;
      *(undefined1 *)(param_1 + 0x1172) = 1;
      *(undefined1 *)(param_1 + 0x1170) = 1;
      FUN_002f4d98(param_1 + 0x1158,0);
      *(undefined1 *)(param_1 + 0x1171) = 1;
      *(undefined1 *)(param_1 + 0x1172) = 1;
      *(undefined4 *)(param_1 + 0x117c) = 3;
      *(undefined4 *)(param_1 + 0x1180) = 0x28;
      *(undefined4 *)(param_1 + 0x1184) = 0x37;
      *(undefined4 *)(param_1 + 0x1188) = 0xffffffff;
      *(int *)(param_1 + 0x1178) = param_1;
      *(undefined1 *)(param_1 + 0x118e) = 1;
      *(undefined1 *)(param_1 + 0x118c) = 1;
      FUN_002f4d98(param_1 + 0x1174,0);
      *(undefined1 *)(param_1 + 0x118d) = 1;
      iVar7 = 0;
      *(undefined1 *)(param_1 + 0x118e) = 1;
      do {
        iVar2 = param_1 + 0x2e0 + iVar7 * 4;
        iVar7 = iVar7 + 1;
        iVar8 = *(int *)(iVar2 + 0x418);
        if (iVar8 != 0) {
          *(undefined1 *)(iVar8 + 0x6c) = 0;
        }
        iVar8 = *(int *)(iVar2 + 0x818);
        if (iVar8 != 0) {
          *(undefined1 *)(iVar8 + 0x6c) = 0;
        }
      } while (iVar7 < 0x100);
      *(undefined4 *)(param_1 + 4) = 0;
      *(undefined1 *)(param_1 + 8) = 0;
      *(undefined1 *)(param_1 + 9) = 0;
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
      *(undefined1 *)(param_1 + 0xb) = 0;
      *(undefined1 *)(param_1 + 0xc) = 0;
      *(undefined1 *)(param_1 + 0xd) = 0;
      *(undefined1 *)(param_1 + 10) = 1;
      return 1;
    }
  }
  FUN_00301260(iVar3);
  FUN_0031b99c(iVar3);
  FUN_002e68ac(param_1 + 0x2e0);
  FUN_003445a8(param_1 + 0xcc);
  iVar7 = 0;
  uVar6 = extraout_r1_00;
  do {
    iVar8 = param_1 + iVar7 * 0x10;
    bVar9 = *(int *)(iVar8 + 0x2c) != 0;
    if (bVar9) {
      uVar6 = (uint)*(byte *)(iVar8 + 0x34);
    }
    if (bVar9 && uVar6 != 0) {
      FUN_0034fc68();
      uVar6 = extraout_r1_02;
    }
    *(undefined4 *)(iVar8 + 0x2c) = 0;
    iVar7 = iVar7 + 1;
    *(undefined4 *)(iVar8 + 0x30) = 0;
    *(undefined1 *)(iVar8 + 0x34) = 0;
  } while (iVar7 < 5);
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0;
  *(undefined1 *)(param_1 + 9) = 0;
  *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  *(undefined1 *)(param_1 + 0xb) = 0;
  *(undefined1 *)(param_1 + 0xc) = 0;
  *(undefined1 *)(param_1 + 0xd) = 0;
  *(undefined1 *)(param_1 + 10) = 0;
  return 0;
}
