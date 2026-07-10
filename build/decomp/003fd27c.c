// OoT3D decomp @ 003fd27c  name=FUN_003fd27c  size=408

void FUN_003fd27c(int param_1,int param_2,int param_3)

{
  char cVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  
  if (*(char *)(param_1 + 4) == '\0') {
    return;
  }
  if ('\0' < *(char *)(param_1 + 0x76)) {
    *(char *)(param_1 + 0x76) = *(char *)(param_1 + 0x76) + -1;
  }
  iVar6 = FUN_003102a0();
  if (iVar6 != *(char *)(param_1 + 0x75)) {
    iVar6 = FUN_003102a0();
    *(char *)(param_1 + 0x75) = (char)iVar6;
    if (iVar6 != 0) {
      *(undefined1 *)(param_1 + 0x76) = 2;
    }
  }
  iVar6 = UNK_003fd414;
  if (param_2 == 0x400 || param_2 == UNK_003fd414) {
    FUN_00311ee0(0x400);
    iVar7 = 1 - *(int *)(param_1 + 0x1c);
    *(int *)(param_1 + 0x1c) = iVar7;
    FUN_00311c70(*(undefined4 *)(param_1 + iVar7 * 4 + 0xc));
    FUN_00311ee0(0x410);
    iVar7 = 1 - *(int *)(param_1 + 0x68);
    *(int *)(param_1 + 0x68) = iVar7;
    if ((*(char *)(param_1 + 0x75) == '\0') || ('\0' < *(char *)(param_1 + 0x76))) {
      uVar8 = *(undefined4 *)(param_1 + *(int *)(param_1 + 0x1c) * 4 + 0xc);
    }
    else {
      uVar8 = *(undefined4 *)(param_1 + iVar7 * 4 + 0x60);
    }
    FUN_00311c70(uVar8);
  }
  if (param_2 == UNK_003fd418 || param_2 == iVar6) {
    FUN_00311ee0();
    iVar6 = 1 - *(int *)(param_1 + 0x20);
    *(int *)(param_1 + 0x20) = iVar6;
    FUN_00311c70(*(undefined4 *)(param_1 + iVar6 * 4 + 0x14));
  }
  FUN_00310264(param_1 + 0x50);
  uVar9 = FUN_00415908(param_2);
  iVar6 = UNK_003fd41c;
  if (param_3 == 0) {
    uVar9 = (uint)*(byte *)(param_1 + 5);
  }
  if (param_3 != 0 || uVar9 != 0) {
    do {
      FUN_003101dc(param_2);
    } while (*(int *)(iVar6 + 8) < *(int *)(param_1 + 0x8c));
  }
  iVar6 = *(int *)(param_1 + 0x88) + (*(int *)(iVar6 + 8) - *(int *)(param_1 + 0x8c)) + 2;
  *(int *)(param_1 + 0x88) = iVar6;
  if (*(int *)(param_1 + 0x84) < iVar6) {
    iVar6 = *(int *)(param_1 + 0x84);
  }
  *(int *)(param_1 + 0x88) = iVar6;
  cVar1 = *(char *)(param_1 + 5);
  if ((cVar1 != '\0') && (*(char *)(param_1 + 5) = cVar1 + -1, cVar1 == '\x01')) {
    FUN_00401924();
  }
  FUN_0040c678(param_1 + 0x50);
  iVar6 = FUN_0046650c();
  if (iVar6 == 1) {
    piVar10 = (int *)(param_1 + 0x90);
    iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
    bVar4 = true;
    bVar3 = false;
    if (iVar6 != *(int *)(param_1 + 0x94)) {
      do {
        if (*piVar10 < 1) {
          ClearExclusiveLocal();
          goto LAB_0031bbd8;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar2);
      *piVar10 = -*piVar10;
      bVar3 = true;
LAB_0031bbd8:
      if (!bVar3) {
        return;
      }
      uVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(param_1 + 0x94) = uVar8;
    }
    *(int *)(param_1 + 0x98) = *(int *)(param_1 + 0x98) + 1;
    FUN_004663f4(1);
    iVar6 = iRam0031bd28;
    puVar5 = puRam0031bd24;
    piVar10 = (int *)(iRam0031bd28 + 8);
    *puRam0031bd24 = 1;
    iVar7 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (iVar7 != *(int *)(iVar6 + 0xc)) {
      do {
        if (*piVar10 < 1) {
          ClearExclusiveLocal();
          bVar4 = false;
          goto LAB_0031bc54;
        }
        bVar3 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar3);
      *piVar10 = -*piVar10;
LAB_0031bc54:
      if (bVar4) {
        uVar8 = coproc_movefrom_User_R_Thread_and_Process_ID();
        *(undefined4 *)(iVar6 + 0xc) = uVar8;
      }
      else {
        FUN_003351e8(piVar10);
      }
    }
    *(int *)(iVar6 + 0x10) = *(int *)(iVar6 + 0x10) + 1;
    FUN_0030b304(param_1 + 0x9c);
    piVar10 = (int *)(iVar6 + 8);
    iVar7 = *(int *)(iVar6 + 0x10) + -1;
    *(int *)(iVar6 + 0x10) = iVar7;
    if (iVar7 == 0) {
      *(undefined4 *)(iVar6 + 0xc) = 0;
      do {
        iVar7 = *piVar10;
        iVar6 = -iVar7;
        bVar4 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar4);
      *piVar10 = iVar6;
      if (iVar7 != -1 && 0 < iVar6) {
        software_interrupt(0x22);
      }
    }
    *puVar5 = 0;
    piVar10 = (int *)(param_1 + 0x90);
    iVar6 = *(int *)(param_1 + 0x98) + -1;
    *(int *)(param_1 + 0x98) = iVar6;
    if (iVar6 == 0) {
      *(undefined4 *)(param_1 + 0x94) = 0;
      do {
        iVar7 = *piVar10;
        iVar6 = -iVar7;
        bVar4 = (bool)hasExclusiveAccess(piVar10);
      } while (!bVar4);
      *piVar10 = iVar6;
      if (iVar7 != -1 && 0 < iVar6) {
        software_interrupt(0x22);
      }
    }
    *(undefined1 *)(param_1 + 5) = 2;
  }
  return;
}

