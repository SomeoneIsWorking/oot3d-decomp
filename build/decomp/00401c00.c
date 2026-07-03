// OoT3D decomp @ 00401c00  name=FUN_00401c00  size=576

void FUN_00401c00(int *param_1)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  bool bVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  int iVar10;
  int iVar11;
  uint extraout_r12;
  uint extraout_r12_00;
  uint extraout_r12_01;
  uint uVar12;
  uint extraout_r12_02;
  uint extraout_r12_03;
  uint extraout_r12_04;
  int local_2c;
  undefined1 auStack_28 [4];
  
  iVar5 = DAT_00401e4c;
  iVar4 = DAT_00401e48;
  uVar3 = DAT_00401e44;
  iVar2 = DAT_00401e40;
  do {
    local_2c = param_1[0xb];
    uVar7 = FUN_0030dbd4(auStack_28,&local_2c,1,0,0xffffffff,0xffffffff);
    uVar8 = uVar7 >> 0x1b;
    if ((uVar7 & 0x80000000) != 0) {
      uVar8 = uVar8 - 0x20;
    }
    uVar12 = extraout_r12;
    if ((uVar8 != 0xfffffff9 && uVar8 != 0) && uVar8 != 1) {
      FUN_003351b4(uVar7);
      uVar12 = extraout_r12_00;
    }
    uVar7 = param_1[0xb];
    software_interrupt(0x19);
    uVar8 = uVar7 >> 0x1b;
    if ((uVar7 & 0x80000000) != 0) {
      uVar8 = uVar8 - 0x20;
    }
    if ((uVar8 != 0xfffffff9 && uVar8 != 0) && uVar8 != 1) {
      FUN_003351b4(uVar7);
      uVar12 = extraout_r12_01;
    }
    if (*(char *)((int)param_1 + 0x77) != '\0') {
      return;
    }
    while( true ) {
      pbVar9 = (byte *)param_1[0xd];
      iVar10 = iVar2;
      if ((pbVar9 != (byte *)0x0) && (iVar10 = iVar5, pbVar9[1] != 0)) {
        uVar12 = (uint)pbVar9[*pbVar9 + 0xc];
        do {
          uVar7 = *(uint *)param_1[0xd];
          uVar8 = (uVar7 & 0xff) + 1;
          bVar6 = (bool)hasExclusiveAccess((uint *)param_1[0xd]);
        } while (!bVar6);
        *(uint *)param_1[0xd] =
             ((((uVar7 & 0xffffff00) << 0x10) >> 0x18) - 1) * 0x100 & 0xff00 |
             uVar8 + (uint)((ulonglong)uVar8 * (ulonglong)uVar3 >> 0x24) * -0x34 & 0xff |
             uVar7 & 0xffff0000;
        iVar10 = 0;
        if (*(char *)(param_1[0xd] + 2) == '\x01') {
          iVar10 = iVar4;
        }
      }
      if (iVar10 == iVar5) break;
      uVar8 = uVar12 & 0xff;
      iVar10 = coproc_movefrom_User_R_Thread_and_Process_ID();
      if (iVar10 != param_1[1]) {
        do {
          if (*param_1 < 1) {
            ClearExclusiveLocal();
            bVar6 = false;
            goto LAB_00401d88;
          }
          bVar6 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar6);
        *param_1 = -*param_1;
        bVar6 = true;
LAB_00401d88:
        if (bVar6) {
          iVar10 = coproc_movefrom_User_R_Thread_and_Process_ID();
          param_1[1] = iVar10;
        }
        else {
          FUN_003351e8(param_1);
          uVar12 = extraout_r12_02;
        }
      }
      param_1[2] = param_1[2] + 1;
      if ((code *)param_1[uVar8 + 4] != (code *)0x0) {
        (*(code *)param_1[uVar8 + 4])();
        uVar12 = extraout_r12_03;
      }
      cVar1 = *(char *)((int)param_1 + 0x76);
      *(undefined1 *)((int)param_1 + 0x76) = 2;
      if (cVar1 == '\x01') {
        FUN_00310148(param_1 + 0x1a);
        uVar12 = extraout_r12_04;
      }
      iVar10 = param_1[2];
      param_1[2] = iVar10 + -1;
      if (iVar10 + -1 == 0) {
        param_1[1] = 0;
        do {
          iVar11 = *param_1;
          iVar10 = -iVar11;
          bVar6 = (bool)hasExclusiveAccess(param_1);
        } while (!bVar6);
        *param_1 = iVar10;
        if (iVar11 != -1 && 0 < iVar10) {
          software_interrupt(0x22);
        }
      }
    }
  } while( true );
}

