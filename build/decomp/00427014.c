// OoT3D decomp @ 00427014  name=FUN_00427014  size=716

void FUN_00427014(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  int iVar5;

  iVar5 = 0;
  do {
    iVar4 = param_1 + iVar5 * 0x1c;
    iVar4 = FUN_002fde08(*(int *)(iVar4 + 0x1124) + 0x2e0,1,*(int *)(iVar4 + 0x112c) + 3);
    if (iVar4 == 0) {
      return;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 < 4);
  FUN_002fda08();
  FUN_002fda08();
  FUN_002fda08(param_1 + 0x1158);
  uVar2 = DAT_004272e4;
  uVar1 = DAT_004272e0;
  if (*(char *)(param_1 + 9) == '\x03') {
    if (*(char *)(*(int *)(param_1 + 4) + 0x100) == '\x03') {
      *(undefined1 *)(*(int *)(param_1 + 0xee0) + 0x6c) = 1;
      *(undefined1 *)(*(int *)(param_1 + 0xae0) + 0x6c) = 1;
      FUN_00307840(param_1 + 0x2e0,0,1,0x13,1);
      FUN_00307840(param_1 + 0x2e0,1,0xfa,0x10,1);
      FUN_00307840(param_1 + 0x2e0,0,0xfa,0x10,1);
      uVar3 = 0x10;
    }
    else {
      uVar3 = 0x11;
    }
  }
  else if (*(char *)(param_1 + 0xc) == '\0') {
    FUN_002f4fac(param_1,0xcc);
    iVar5 = 0;
    do {
      FUN_00307840(*(int *)(param_1 + 0x1124) + 0x2e0,1,*(int *)(param_1 + 0x112c) + iVar5,5,1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    FUN_00307770(param_1 + 0x1120);
    iVar5 = 0;
    *(undefined1 *)(param_1 + 0x1139) = 0;
    do {
      FUN_00307840(*(int *)(param_1 + 0x1140) + 0x2e0,1,*(int *)(param_1 + 0x1148) + iVar5,5,1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 4);
    FUN_00307770(param_1 + 0x113c);
    *(undefined1 *)(param_1 + 0x1155) = 0;
    FUN_00344670(*(undefined4 *)(param_1 + 0xb68),0x26);
    FUN_00344670(*(undefined4 *)(param_1 + 0xb7c),0x27);
    FUN_002fda08(param_1 + 0x1158);
    if (*(int *)(param_1 + 0x10) != -1) {
      *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
    }
    uVar3 = 9;
  }
  else {
    iVar5 = 0;
    do {
      iVar4 = *(int *)(param_1 + (iVar5 + 0xf) * 4 + 0xaf8);
      *(undefined1 *)(iVar4 + 0x6c) = 1;
      FUN_00344670(iVar4,iVar5 + 0xf);
      *(undefined4 *)(iVar4 + 0x80) = uVar1;
      *(undefined4 *)(iVar4 + 0x84) = uVar2;
      FUN_00307840(param_1 + 0x2e0,1,iVar5 + 0xf,0x14,1);
      iVar5 = iVar5 + 1;
    } while (iVar5 < 9);
    FUN_00344670(*(undefined4 *)(param_1 + 0xc64),0xca);
    *(undefined1 *)(*(int *)(param_1 + 0xc64) + 0x6c) = 0;
    if (((*DAT_004272e8 & 1) == 0) && (iVar5 = FUN_003679b4(DAT_004272e8), iVar5 != 0)) {
      FUN_0036788c(DAT_004272ec);
    }
    *(undefined1 *)(DAT_004272f8 + 0x21) = 1;
    uVar3 = 6;
  }
  *(undefined1 *)(param_1 + 8) = uVar3;
  return;
}
