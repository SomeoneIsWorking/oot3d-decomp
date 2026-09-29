// OoT3D decomp @ 002c341c  name=FUN_002c341c  size=348

bool FUN_002c341c(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  bool bVar5;
  uint local_24;
  undefined1 auStack_20 [4];

  puVar4 = param_1 + 2;
  uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar5 = true;
  if (uVar2 != param_1[3]) {
    do {
      if ((int)*puVar4 < 1) {
        ClearExclusiveLocal();
        bVar5 = false;
        goto LAB_002c3478;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = -*puVar4;
LAB_002c3478:
    coproc_moveto_Data_Synchronization(0);
    if (bVar5) {
      uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      param_1[3] = uVar2;
    }
    else {
      FUN_0030e288(puVar4);
    }
  }
  param_1[4] = param_1[4] + 1;
  local_24 = *param_1;
  uVar3 = FUN_0030dbd4(auStack_20,&local_24,1,0,param_3,param_4);
  uVar2 = uVar3 >> 0x1b;
  if ((uVar3 & 0x80000000) != 0) {
    uVar2 = uVar2 - 0x20;
  }
  if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
    FUN_003351b4();
  }
  bVar5 = DAT_002c3578 != uVar3 * 0x400000;
  if (bVar5) {
    software_interrupt(0x19);
    uVar2 = *param_1 >> 0x1b;
    if ((*param_1 & 0x80000000) != 0) {
      uVar2 = uVar2 - 0x20;
    }
    if ((uVar2 != 0xfffffff9 && uVar2 != 0) && uVar2 != 1) {
      FUN_003351b4();
    }
  }
  uVar2 = param_1[4];
  param_1[4] = uVar2 - 1;
  if (uVar2 - 1 == 0) {
    param_1[3] = 0;
    do {
      uVar3 = *puVar4;
      uVar2 = -uVar3;
      bVar1 = (bool)hasExclusiveAccess(puVar4);
    } while (!bVar1);
    *puVar4 = uVar2;
    coproc_moveto_Data_Synchronization(0);
    if (uVar3 != 0xffffffff && 0 < (int)uVar2) {
      software_interrupt(0x22);
    }
  }
  return bVar5;
}
