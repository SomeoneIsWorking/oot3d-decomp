// OoT3D decomp @ 004a0780  name=FUN_004a0780  size=488

uint * FUN_004a0780(uint *param_1)

{
  bool bVar1;
  uint uVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  bool bVar7;

  if (*(char *)((int)param_1 + 0xd) != '\0') {
    return param_1;
  }
  puVar5 = param_1 + 0x20;
  uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar7 = false;
  if (uVar2 != param_1[0x21]) {
    do {
      if ((int)*puVar5 < 1) {
        ClearExclusiveLocal();
        goto LAB_004a3a24;
      }
      bVar1 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar1);
    *puVar5 = -*puVar5;
    bVar7 = true;
LAB_004a3a24:
    coproc_moveto_Data_Synchronization(0);
    if (bVar7) {
      uVar2 = coproc_movefrom_User_R_Thread_and_Process_ID();
      param_1[0x21] = uVar2;
    }
    else {
      FUN_0030e288(puVar5);
    }
  }
  param_1[0x22] = param_1[0x22] + 1;
  uVar6 = param_1[0xb];
  uVar2 = param_1[0x10];
  for (uVar4 = uVar2; uVar4 != 0 && uVar6 != 0; uVar4 = uVar4 - 1) {
    uVar6 = *(uint *)(uVar6 + 0x14);
  }
  for (; (int)uVar2 < 5; uVar2 = uVar2 + 1) {
    uVar4 = 0;
    if (uVar6 != 0) {
      if (param_1[0x10] == 0) {
        *(undefined1 *)(uVar6 + 0x11) = 2;
        if (((uint)*(ushort *)((int)param_1 + 0x1e) << 0x1c) >> 0x1e == 2) {
          uVar4 = (uint)*(byte *)((int)param_1 + 0x7e);
          bVar7 = uVar4 == 0;
          if (bVar7) {
            uVar4 = *(uint *)(uVar6 + 8);
          }
          if (!bVar7 || uVar4 != 0) {
            *(undefined1 *)((int)param_1 + 0x7e) = 1;
          }
        }
        FUN_004bae24(DAT_004a3bac,*param_1 & 0xff,uVar6,*(undefined4 *)(uVar6 + 4),
                     (uint)*(ushort *)((int)param_1 + 0x1e),*(undefined2 *)(uVar6 + 0x12));
      }
      else {
        FUN_004bacc4(DAT_004a3bac,*param_1 & 0xff,uVar6,*(undefined4 *)(uVar6 + 4),param_1[0x11],
                     *(undefined2 *)(uVar6 + 0x12));
        param_1[param_1[0x11] + 0xc] = uVar6;
        param_1[0x11] = param_1[0x11] + 1 & 3;
      }
      uVar4 = *(uint *)(uVar6 + 0x14);
      param_1[0x10] = param_1[0x10] + 1;
    }
    uVar6 = uVar4;
  }
  puVar3 = (uint *)(param_1[0x22] - 1);
  param_1[0x22] = (uint)puVar3;
  if (puVar3 == (uint *)0x0) {
    param_1[0x21] = 0;
    do {
      uVar2 = *puVar5;
      puVar3 = (uint *)-uVar2;
      bVar7 = (bool)hasExclusiveAccess(puVar5);
    } while (!bVar7);
    *puVar5 = (uint)puVar3;
    coproc_moveto_Data_Synchronization(0);
    if (uVar2 != 0xffffffff && 0 < (int)puVar3) {
      software_interrupt(0x22);
      return (uint *)*DAT_004a3bb0;
    }
  }
  return puVar3;
}
