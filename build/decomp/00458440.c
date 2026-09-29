// OoT3D decomp @ 00458440  name=FUN_00458440  size=1036

void FUN_00458440(void)

{
  int iVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 extraout_r1;
  uint uVar5;
  int iVar6;
  undefined8 uVar7;

  FUN_00473ed8();
  uVar3 = extraout_r1;
  if ((*DAT_00458494 & 1) == 0) {
    uVar7 = FUN_003679b4(DAT_00458494);
    uVar3 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      FUN_0036788c(DAT_00458498);
      uVar3 = DAT_004584a0;
    }
  }
  piVar2 = DAT_00480ba4;
  iVar1 = DAT_004584a4;
  if (*(char *)(DAT_004584a4 + 0xc) == '\0') {
    return;
  }
  switch(*(undefined1 *)(DAT_004584a4 + 0xf38)) {
  default:
    goto switchD_00480818_caseD_0;
  case 1:
    iVar4 = *(int *)(DAT_004584a4 + 0xfa4) + 1;
    *(int *)(DAT_004584a4 + 0xfa4) = iVar4;
    if ((((*(short *)(*piVar2 + 0x4b2) != 0) || (*(int *)(iVar1 + 4000) == 0)) &&
        (*(short *)(*piVar2 + 0x4b2) != 0x40)) || (3 < iVar4)) {
      FUN_002cd974(iVar1,1);
      goto switchD_00480818_caseD_0;
    }
    break;
  case 2:
    *(undefined4 *)(DAT_004584a4 + 0xfa4) = 0;
    iVar4 = FUN_00488458(iVar1 + 0x44);
    if (iVar4 == 0) goto switchD_00480818_caseD_0;
    FUN_00305940(iVar1 + 0x44);
    *(undefined1 *)(iVar1 + 0xf38) = 3;
    break;
  case 3:
    FUN_002cd744(DAT_004584a4);
    goto switchD_00480818_caseD_0;
  case 5:
    uVar5 = *(uint *)(*(int *)(DAT_004584a4 + 8) + 0x18);
    if (((~uVar5 & 1) == 0) || ((~uVar5 & 2) == 0)) {
      FUN_0037547c(DAT_00480bb0,0,4,DAT_00480bac,DAT_00480bac,DAT_00480ba8);
      if ((*(char *)(iVar1 + 0xfc8) == '\0') && (iVar4 = FUN_002cd710(iVar1 + 0x44), iVar4 != 0)) {
        FUN_002cd6c0(iVar1 + 0x44);
        *(undefined1 *)(iVar1 + 0xfc8) = 1;
        *(undefined4 *)(iVar1 + 0xfcc) = 2;
      }
      *(undefined1 *)(iVar1 + 0xf38) = 3;
      *(undefined4 *)(iVar1 + 0xfa4) = 0;
    }
    break;
  case 6:
    FUN_004881b0(DAT_004584a4);
    goto switchD_00480818_caseD_0;
  case 7:
    FUN_003053fc(DAT_004584a4);
    goto switchD_00480818_caseD_0;
  case 8:
    if (*(char *)(DAT_004584a4 + 0xeb4) != '\x04') {
      if ((*(char *)(DAT_004584a4 + 0xfc8) == '\0') &&
         (iVar4 = FUN_002cd710(DAT_004584a4 + 0x44), iVar4 != 0)) {
        FUN_002cd6c0(iVar1 + 0x44);
        *(undefined1 *)(iVar1 + 0xfc8) = 1;
        *(undefined4 *)(iVar1 + 0xfcc) = 2;
      }
      *(undefined4 *)(iVar1 + 0xfa4) = 0;
      *(undefined1 *)(iVar1 + 0xf38) = 3;
    }
    break;
  case 9:
    if ((*(short *)(*DAT_00480ba4 + 0x4d2) == 0) && (*(char *)(DAT_004584a4 + 0xeb4) != '\x04')) {
      FUN_00305754(DAT_004584a4 + 0x44);
      *(undefined4 *)(iVar1 + 0xfa4) = 0;
      if ((~*(uint *)(iVar1 + 0xfac) & 0xffff) == 0) {
        if (*(char *)(iVar1 + 0xf38) != '\0') {
          *(undefined4 *)(iVar1 + 0xfa4) = 3;
          *(undefined1 *)(iVar1 + 0xf38) = 0xe;
        }
        goto LAB_00480b60;
      }
      iVar4 = FUN_002cd2b4(iVar1);
      if (iVar4 != 0) {
        *(undefined1 *)(iVar1 + 0xf38) = 0xd;
        uVar3 = 3;
        goto LAB_00480b08;
      }
      goto switchD_00480818_caseD_0;
    }
    break;
  case 0xd:
    iVar4 = *(int *)(DAT_004584a4 + 0xfa4) + -1;
    *(int *)(DAT_004584a4 + 0xfa4) = iVar4;
    if (iVar4 < 1) {
      if ((*(char *)(iVar1 + 0xfc8) == '\0') && (iVar4 = FUN_002cd710(iVar1 + 0x44), iVar4 != 0)) {
        FUN_002cd6c0(iVar1 + 0x44);
        *(undefined1 *)(iVar1 + 0xfc8) = 1;
        *(undefined4 *)(iVar1 + 0xfcc) = 2;
      }
      *(undefined1 *)(iVar1 + 0xf38) = 3;
      uVar3 = 0;
LAB_00480b08:
      *(undefined4 *)(iVar1 + 0xfa4) = uVar3;
    }
    break;
  case 0xe:
    FUN_002cd030(DAT_004584a8,DAT_004584a4,uVar3);
switchD_00480818_caseD_0:
    if (*(byte *)(iVar1 + 0xf38) == 0 || 0xd < *(byte *)(iVar1 + 0xf38)) goto LAB_00480b60;
  }
  FUN_00487a8c(DAT_00480bb4);
  uVar3 = FUN_00488428(iVar1 + 0xeac);
  FUN_00487d38(iVar1 + 0x44);
  FUN_00487d00(iVar1 + 0x44,uVar3);
LAB_00480b60:
  if ((*(char *)(iVar1 + 0xfc8) != '\0') &&
     (iVar4 = *(int *)(iVar1 + 0xfcc) + -1, *(int *)(iVar1 + 0xfcc) = iVar4, iVar4 < 1)) {
    *(undefined1 *)(iVar1 + 0xfc8) = 0;
    *(undefined4 *)(iVar1 + 0xfcc) = 0;
    FUN_00305224(*(undefined4 *)(iVar1 + 0x964));
    FUN_002df800(*(undefined4 *)(iVar1 + 0x564));
    iVar4 = 0;
    *(undefined4 *)(iVar1 + 0x160) = 0;
    do {
      iVar6 = iVar1 + 0x44 + iVar4 * 4;
      iVar4 = iVar4 + 2;
      *(undefined1 *)(*(int *)(iVar6 + 0x6b4) + 0x6c) = 0;
      *(undefined1 *)(*(int *)(iVar6 + 0x6b8) + 0x6c) = 0;
    } while (iVar4 < 0x10);
    return;
  }
  return;
}
