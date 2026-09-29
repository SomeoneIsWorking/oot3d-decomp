// OoT3D decomp @ 00426870  name=FUN_00426870  size=744

void FUN_00426870(int param_1)

{
  undefined4 uVar1;
  uint *puVar2;
  undefined4 extraout_r1;
  undefined4 extraout_r1_00;
  undefined4 extraout_r1_01;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined8 uVar6;

  uVar3 = DAT_00426b5c;
  uVar1 = DAT_00426b58;
  iVar4 = 0;
  do {
    iVar5 = *(int *)(param_1 + (iVar4 + 5) * 4 + 0xaf8);
    if (iVar4 - 3U < 3) {
      *(undefined1 *)(iVar5 + 0x6c) = 0;
    }
    else {
      *(undefined1 *)(iVar5 + 0x6c) = 1;
      FUN_00344670(iVar5,iVar4 + 5);
      *(undefined4 *)(iVar5 + 0x80) = uVar1;
      *(undefined4 *)(iVar5 + 0x84) = uVar3;
      FUN_00307840(param_1 + 0x2e0,1,iVar4 + 5,0x14,1);
    }
    iVar4 = iVar4 + 1;
  } while (iVar4 < 9);
  FUN_00344670(*(undefined4 *)(param_1 + 0xc60),200);
  iVar4 = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc60) + 0x6c) = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1124) + 0x2e0,1,*(int *)(param_1 + 0x112c) + iVar4,5,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_00307770(param_1 + 0x1120);
  *(undefined1 *)(param_1 + 0x1139) = 0;
  iVar4 = 0;
  do {
    FUN_00307840(*(int *)(param_1 + 0x1140) + 0x2e0,1,*(int *)(param_1 + 0x1148) + iVar4,5,1);
    iVar4 = iVar4 + 1;
  } while (iVar4 < 4);
  FUN_00307770(param_1 + 0x113c);
  *(undefined1 *)(param_1 + 0x1155) = 0;
  FUN_00344670(*(undefined4 *)(param_1 + 0xb68),0x23);
  FUN_00344670(*(undefined4 *)(param_1 + 0xb7c),0x24);
  uVar1 = DAT_00426b64;
  puVar2 = DAT_00426b60;
  if (*(char *)(*(int *)(param_1 + 4) + 0x100) == '\x03') {
    if (((*DAT_00426b60 & 1) == 0) && (iVar4 = FUN_003679b4(DAT_00426b60), iVar4 != 0)) {
      FUN_0036788c(DAT_00426b68);
    }
    FUN_002f5094(uVar1,*(undefined4 *)(param_1 + 4));
    uVar3 = extraout_r1_00;
  }
  else {
    uVar3 = extraout_r1;
    if (((*DAT_00426b60 & 1) == 0) &&
       (uVar6 = FUN_003679b4(DAT_00426b60), uVar3 = (int)((ulonglong)uVar6 >> 0x20), (int)uVar6 != 0
       )) {
      FUN_0036788c(DAT_00426b68);
      uVar3 = DAT_00426b70;
    }
    FUN_002f508c(uVar1,uVar3);
    uVar3 = extraout_r1_01;
  }
  if (((*puVar2 & 1) == 0) &&
     (uVar6 = FUN_003679b4(DAT_00426b60), uVar3 = (int)((ulonglong)uVar6 >> 0x20), (int)uVar6 != 0))
  {
    FUN_0036788c(DAT_00426b68);
    uVar3 = DAT_00426b70;
  }
  iVar4 = FUN_0031572c(uVar1,uVar3);
  if (iVar4 < 1) {
    FUN_002fda08(param_1 + 0x1158);
    *(undefined1 *)(param_1 + 0x1172) = 0;
    FUN_002fda08(param_1 + 0x1158);
  }
  else {
    iVar4 = 0;
    do {
      FUN_00307840(*(int *)(param_1 + 0x115c) + 0x2e0,1,*(int *)(param_1 + 0x1164) + iVar4,3,1);
      iVar4 = iVar4 + 1;
    } while (iVar4 < 4);
    FUN_00307770(param_1 + 0x1158);
    *(undefined1 *)(param_1 + 0x1171) = 0;
  }
  if (*(int *)(param_1 + 0x10) != -1) {
    *(undefined4 *)(param_1 + 0x10) = 0xffffffff;
  }
  *(undefined1 *)(param_1 + 8) = 3;
  return;
}
