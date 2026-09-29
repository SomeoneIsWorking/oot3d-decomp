// OoT3D decomp @ 004855f8  name=FUN_004855f8  size=24

void FUN_004855f8(int *param_1)

{
  char cVar1;
  bool bVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int *piVar8;
  uint unaff_r11;
  undefined8 uVar9;
  undefined1 auStack_40 [4];
  undefined1 auStack_3c [4];
  uint uStack_38;
  uint uStack_34;
  uint uStack_30;
  int iStack_2c;

  piVar3 = (int *)FUN_0030e1e4();
  *(undefined1 *)((int)piVar3 + 0xd) = 1;
  do {
    uStack_30 = 0;
    iStack_2c = 0;
    uVar9 = 0;
    if ((char)piVar3[2] == '\0') {
      FUN_00489ab0(0,param_1);
    }
    else {
      uVar9 = FUN_004899d0(&uStack_30);
      software_interrupt(0x28);
    }
    cVar1 = *(char *)((int)piVar3 + 0xe);
    iVar4 = piVar3[10];
    if ((int)cVar1 != 0) {
      FUN_002e240c(DAT_004858f4,0,&uStack_34,auStack_3c);
      FUN_002e240c(DAT_004858f4,1,&uStack_38,auStack_40);
      unaff_r11 = uStack_34 | uStack_38;
      if (unaff_r11 != 0) {
        unaff_r11 = 1;
      }
    }
    uVar7 = (int)cVar1 & (iVar4 != 0 | unaff_r11);
    if (uVar7 != 0) {
      coproc_moveto_Data_Synchronization(0);
      FUN_00310148(piVar3 + 0x10);
    }
    if (((char)piVar3[0xc] == '\0') && ((code *)piVar3[10] != (code *)0x0)) {
      (*(code *)piVar3[10])(piVar3[0xb]);
    }
    if (piVar3[8] == 0) {
      if (((char)piVar3[0xc] == '\x01') && ((code *)piVar3[10] != (code *)0x0)) {
        (*(code *)piVar3[10])(piVar3[0xb]);
      }
    }
    else {
      piVar8 = piVar3 + 0xd;
      iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      if (iVar4 != piVar3[0xe]) {
        do {
          if (*piVar8 < 1) {
            ClearExclusiveLocal();
            bVar2 = false;
            goto LAB_00485730;
          }
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = -*piVar8;
        bVar2 = true;
LAB_00485730:
        coproc_moveto_Data_Synchronization(0);
        if (bVar2) {
          iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
          piVar3[0xe] = iVar4;
        }
        else {
          FUN_0030e288(piVar8);
        }
      }
      piVar3[0xf] = piVar3[0xf] + 1;
      (*(code *)piVar3[8])(piVar3[9]);
      iVar4 = piVar3[0xf];
      piVar8 = piVar3 + 0xd;
      piVar3[0xf] = iVar4 + -1;
      if (iVar4 + -1 == 0) {
        piVar3[0xe] = 0;
        do {
          iVar5 = *piVar8;
          iVar4 = -iVar5;
          bVar2 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar2);
        *piVar8 = iVar4;
        coproc_moveto_Data_Synchronization(0);
        if (iVar5 != -1 && 0 < iVar4) {
          software_interrupt(0x22);
        }
      }
    }
    if (uVar7 != 0) {
      FUN_0030b304(piVar3 + 0x11);
    }
    piVar8 = piVar3 + 0xd;
    iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
    if (iVar4 != piVar3[0xe]) {
      do {
        if (*piVar8 < 1) {
          ClearExclusiveLocal();
          bVar2 = false;
          goto LAB_00485828;
        }
        bVar2 = (bool)hasExclusiveAccess(piVar8);
      } while (!bVar2);
      *piVar8 = -*piVar8;
      bVar2 = true;
LAB_00485828:
      coproc_moveto_Data_Synchronization(0);
      if (bVar2) {
        iVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
        piVar3[0xe] = iVar4;
      }
      else {
        FUN_0030e288(piVar8);
      }
    }
    piVar3[0xf] = piVar3[0xf] + 1;
    FUN_00489b84((int)*(char *)((int)piVar3 + 0x31));
    iVar4 = piVar3[0xf];
    param_1 = piVar3 + 0xd;
    piVar3[0xf] = iVar4 + -1;
    if (iVar4 + -1 == 0) {
      piVar3[0xe] = 0;
      do {
        iVar5 = *param_1;
        iVar4 = -iVar5;
        bVar2 = (bool)hasExclusiveAccess(param_1);
      } while (!bVar2);
      *param_1 = iVar4;
      coproc_moveto_Data_Synchronization(0);
      if (iVar5 != -1 && 0 < iVar4) {
        software_interrupt(0x22);
      }
    }
    uVar7 = (uint)*(byte *)(piVar3 + 2);
    if (uVar7 != 0) {
      software_interrupt(0x28);
      uVar6 = uVar7 - (uint)uVar9;
      param_1 = (int *)((int)param_1 +
                       (uint)CARRY4(uStack_30,uVar6) +
                       (iStack_2c - ((int)((ulonglong)uVar9 >> 0x20) + (uint)(uVar7 < (uint)uVar9)))
                       );
      *piVar3 = uStack_30 + uVar6;
      piVar3[1] = (int)param_1;
    }
    if (*(char *)((int)piVar3 + 0xd) == '\0') {
      return;
    }
  } while( true );
}
