// OoT3D decomp @ 0030de88  name=FUN_0030de88  size=308

uint FUN_0030de88(void)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  bool bVar9;
  int *local_18;

  piVar2 = DAT_0030dfbc;
  local_18 = DAT_0030dfbc;
  iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar9 = true;
  if (iVar6 != DAT_0030dfbc[1]) {
    do {
      if (*DAT_0030dfbc < 1) {
        ClearExclusiveLocal();
        bVar9 = false;
        goto LAB_0030ded8;
      }
      bVar1 = (bool)hasExclusiveAccess(DAT_0030dfbc);
    } while (!bVar1);
    *DAT_0030dfbc = -*DAT_0030dfbc;
LAB_0030ded8:
    if (bVar9) {
      iVar6 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar2[1] = iVar6;
    }
    else {
      FUN_003351e8(piVar2);
    }
  }
  piVar3 = DAT_0030dfc0;
  piVar2[2] = piVar2[2] + 1;
  uVar5 = DAT_0030dfc8;
  uVar4 = DAT_0030dfc4;
  if (0 < *piVar3) {
    *piVar3 = *piVar3 + 1;
    uVar4 = DAT_0030dfcc;
    FUN_0030aedc(&local_18);
    return uVar4;
  }
  while( true ) {
    uVar7 = FUN_002fa7b8(DAT_0030dfd4,DAT_0030dfd0);
    if ((uVar7 & 0x80000000) == 0) {
      uVar8 = uVar7 >> 0x1b;
    }
    else {
      uVar8 = (uVar7 >> 0x1b) - 0x20;
    }
    if (uVar8 != 0xfffffffb) break;
    uVar8 = (uVar7 & 0x7e00000) >> 0x15;
    bVar9 = uVar8 != 4;
    if (!bVar9) {
      uVar8 = uVar7 & 0x3ff;
    }
    if (bVar9 || uVar8 != uVar4) break;
    FUN_0030e604(uVar5,0);
  }
  if (-1 < (int)uVar7) {
    uVar7 = FUN_0041bc98();
    *piVar3 = *piVar3 + 1;
  }
  FUN_0030aedc(&local_18);
  return uVar7;
}
