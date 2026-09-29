// OoT3D decomp @ 002e1ba0  name=FUN_002e1ba0  size=324

uint FUN_002e1ba0(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  uint *puVar5;
  uint local_18;
  undefined1 auStack_14 [4];

  puVar5 = param_1 + 2;
  uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar4 = true;
  if (uVar2 != param_1[3]) {
    do {
      if ((int)*puVar5 < 1) {
        ClearExclusiveLocal();
        bVar4 = false;
        goto LAB_002e1bf4;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = -*puVar5;
LAB_002e1bf4:
    coproc_moveto_Data_Synchronization(0);
    if (bVar4) {
      uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      param_1[3] = uVar2;
    }
    else {
      FUN_0030e288(puVar5);
    }
  }
  param_1[4] = param_1[4] + 1;
  local_18 = *param_1;
  uVar3 = FUN_0030dbd4(auStack_14,&local_18,1,0,0xffffffff,0xffffffff);
  uVar2 = uVar3 >> 0x1b;
  if ((uVar3 & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
  }
  software_interrupt(0x19);
  uVar2 = *param_1 >> 0x1b;
  if ((*param_1 & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
  }
  uVar2 = param_1[4] - 1;
  param_1[4] = uVar2;
  if (uVar2 == 0) {
    param_1[3] = 0;
    do {
      uVar3 = *puVar5;
      uVar2 = -uVar3;
      bVar4 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar4);
    *puVar5 = uVar2;
    coproc_moveto_Data_Synchronization(0);
    if (uVar3 != 0xffffffff && 0 < (int)uVar2) {
      software_interrupt(0x22);
      return *DAT_002e1ce4;
    }
  }
  return uVar2;
}
