// OoT3D decomp @ 00485610  name=FUN_00485610  size=736

void FUN_00485610(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  int *piVar7;
  uint unaff_r11;
  undefined8 uVar8;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  uint local_38;
  uint local_34;
  uint local_30;
  int local_2c;

  *(undefined1 *)((int)param_1 + 0xd) = 1;
  do {
    local_30 = 0;
    local_2c = 0;
    uVar8 = 0;
    if ((char)param_1[2] == '\0') {
      FUN_00489ab0();
    }
    else {
      uVar8 = FUN_004899d0(&local_30);
      software_interrupt(0x28);
    }
    cVar1 = *(char *)((int)param_1 + 0xe);
    iVar3 = param_1[10];
    if ((int)cVar1 != 0) {
      FUN_002e240c(DAT_004858f4,0,&local_34,auStack_3c);
      FUN_002e240c(DAT_004858f4,1,&local_38,auStack_40);
      unaff_r11 = local_34 | local_38;
      if (unaff_r11 != 0) {
        unaff_r11 = 1;
      }
    }
    uVar6 = (int)cVar1 & (iVar3 != 0 | unaff_r11);
    if (uVar6 != 0) {
      coproc_moveto_Data_Synchronization(0);
      FUN_00310148(param_1 + 0x10);
    }
    if (((char)param_1[0xc] == '\0') && ((code *)param_1[10] != (code *)0x0)) {
      (*(code *)param_1[10])(param_1[0xb]);
    }
    if (param_1[8] == 0) {
      if (((char)param_1[0xc] == '\x01') && ((code *)param_1[10] != (code *)0x0)) {
        (*(code *)param_1[10])(param_1[0xb]);
      }
    }
    else {
      piVar7 = param_1 + 0xd;
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      if (iVar3 != param_1[0xe]) {
        do {
          if (*piVar7 < 1) {
            ClearExclusiveLocal();
            bVar2 = false;
            goto LAB_00485730;
          }
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = -*piVar7;
        bVar2 = true;
LAB_00485730:
        coproc_moveto_Data_Synchronization(0);
        if (bVar2) {
          iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
          param_1[0xe] = iVar3;
        }
        else {
          FUN_0030e288(piVar7);
        }
      }
      param_1[0xf] = param_1[0xf] + 1;
      (*(code *)param_1[8])(param_1[9]);
      iVar3 = param_1[0xf];
      piVar7 = param_1 + 0xd;
      param_1[0xf] = iVar3 + -1;
      if (iVar3 + -1 == 0) {
        param_1[0xe] = 0;
        do {
          iVar4 = *piVar7;
          iVar3 = -iVar4;
          bVar2 = (bool)hasExclusiveAccess(piVar7);
        } while (!bVar2);
        *piVar7 = iVar3;
        coproc_moveto_Data_Synchronization(0);
        if (iVar4 != -1 && 0 < iVar3) {
          software_interrupt(0x22);
        }
      }
    }
    if (uVar6 != 0) {
      FUN_0030b304(param_1 + 0x11);
    }
    piVar7 = param_1 + 0xd;
    iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (iVar3 != param_1[0xe]) {
      do {
        if (*piVar7 < 1) {
          ClearExclusiveLocal();
          bVar2 = false;
          goto LAB_00485828;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = -*piVar7;
      bVar2 = true;
LAB_00485828:
      coproc_moveto_Data_Synchronization(0);
      if (bVar2) {
        iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
        param_1[0xe] = iVar3;
      }
      else {
        FUN_0030e288(piVar7);
      }
    }
    param_1[0xf] = param_1[0xf] + 1;
    FUN_00489b84((int)*(char *)((int)param_1 + 0x31));
    iVar3 = param_1[0xf];
    piVar7 = param_1 + 0xd;
    param_1[0xf] = iVar3 + -1;
    if (iVar3 + -1 == 0) {
      param_1[0xe] = 0;
      do {
        iVar4 = *piVar7;
        iVar3 = -iVar4;
        bVar2 = (bool)hasExclusiveAccess(piVar7);
      } while (!bVar2);
      *piVar7 = iVar3;
      coproc_moveto_Data_Synchronization(0);
      if (iVar4 != -1 && 0 < iVar3) {
        software_interrupt(0x22);
      }
    }
    uVar6 = (uint)*(byte *)(param_1 + 2);
    if (uVar6 != 0) {
      software_interrupt(0x28);
      uVar5 = uVar6 - (uint)uVar8;
      *param_1 = local_30 + uVar5;
      param_1[1] = (int)piVar7 +
                   (uint)CARRY4(local_30,uVar5) +
                   (local_2c - ((int)((ulonglong)uVar8 >> 0x20) + (uint)(uVar6 < (uint)uVar8)));
    }
    if (*(char *)((int)param_1 + 0xd) == '\0') {
      return;
    }
  } while( true );
}
