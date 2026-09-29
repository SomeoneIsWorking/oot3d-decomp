// OoT3D decomp @ 002c17d8  name=FUN_002c17d8  size=652

int FUN_002c17d8(int param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  int iVar9;
  code *pcVar10;
  bool bVar11;

  iVar2 = DAT_002c17f0;
  piVar8 = (int *)(DAT_002c17f0 + 0x274);
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar11 = false;
  if (iVar3 != *(int *)(DAT_002c17f0 + 0x278)) {
    do {
      if (*piVar8 < 1) {
        ClearExclusiveLocal();
        goto LAB_0049fee4;
      }
      bVar1 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar1);
    *piVar8 = -*piVar8;
    bVar11 = true;
LAB_0049fee4:
    coproc_moveto_Data_Synchronization(0);
    if (bVar11) {
      uVar4 = coproc_movefrom_User_R_Thread_and_Process_ID();
      *(undefined4 *)(iVar2 + 0x278) = uVar4;
    }
    else {
      FUN_0030e288(piVar8);
    }
  }
  *(int *)(iVar2 + 0x27c) = *(int *)(iVar2 + 0x27c) + 1;
  if (*(int *)(iVar2 + 0x270) == 0x18) {
    iVar3 = *(int *)(iVar2 + 0xc);
    if ((*(int *)(iVar3 + 0x20) == 0x7fff) || (param_1 < *(int *)(iVar3 + 0x20))) {
      piVar8 = (int *)(iVar2 + 0x274);
      iVar3 = *(int *)(iVar2 + 0x27c) + -1;
      *(int *)(iVar2 + 0x27c) = iVar3;
      if (iVar3 == 0) {
        *(undefined4 *)(iVar2 + 0x278) = 0;
        do {
          iVar3 = *piVar8;
          iVar2 = -iVar3;
          bVar11 = (bool)hasExclusiveAccess(piVar8);
        } while (!bVar11);
        *piVar8 = iVar2;
        coproc_moveto_Data_Synchronization(0);
        if (iVar3 != -1 && 0 < iVar2) {
          software_interrupt(0x22);
        }
      }
      return 0;
    }
    uVar4 = *(undefined4 *)(iVar3 + 0x30);
    pcVar10 = *(code **)(iVar3 + 0x2c);
    FUN_002c021c(iVar2);
    if (pcVar10 != (code *)0x0) {
      (*pcVar10)(iVar3,uVar4);
    }
  }
  uVar7 = *(uint *)(iVar2 + 4);
  iVar9 = 0;
  iVar6 = -LZCOUNT(uVar7 + 1 & ~uVar7);
  uVar5 = iVar6 + 0x1f;
  bVar11 = SCARRY4(uVar5,1);
  iVar3 = iVar6 + 0x20;
  if (iVar6 != -0x20) {
    bVar11 = SBORROW4(uVar5,0x18);
    iVar3 = iVar6 + 7;
  }
  if (iVar3 < 0 != bVar11) {
    *(uint *)(iVar2 + 4) = uVar7 | 1 << (uVar5 & 0xff);
    iVar9 = *(int *)(iVar2 + uVar5 * 4 + 0x19c0);
    FUN_004a385c(iVar9);
  }
  *(int *)(iVar9 + 0x20) = param_1;
  iVar3 = *(int *)(iVar2 + 8);
  if (*(int *)(iVar2 + 8) == 0) {
    *(undefined4 *)(iVar9 + 0x24) = 0;
    *(int *)(iVar2 + 8) = iVar9;
    *(undefined4 *)(iVar9 + 0x28) = 0;
    *(int *)(iVar2 + 0xc) = iVar9;
  }
  else {
    do {
      iVar6 = iVar3;
      if (*(int *)(iVar6 + 0x20) <= param_1) {
        iVar3 = *(int *)(iVar6 + 0x24);
        *(int *)(iVar9 + 0x24) = iVar3;
        *(int *)(iVar9 + 0x28) = iVar6;
        if (iVar3 == 0) {
          *(undefined4 *)(iVar9 + 0x24) = 0;
          *(int *)(iVar2 + 8) = iVar9;
        }
        else {
          *(int *)(iVar3 + 0x28) = iVar9;
        }
        *(int *)(iVar6 + 0x24) = iVar9;
        goto LAB_004a007c;
      }
      iVar3 = *(int *)(iVar6 + 0x28);
    } while (*(int *)(iVar6 + 0x28) != 0);
    *(int *)(iVar6 + 0x28) = iVar9;
    *(int *)(iVar9 + 0x24) = iVar6;
    *(undefined4 *)(iVar9 + 0x28) = 0;
    *(int *)(iVar2 + 0xc) = iVar9;
  }
LAB_004a007c:
  piVar8 = (int *)(iVar2 + 0x274);
  *(int *)(iVar2 + 0x270) = *(int *)(iVar2 + 0x270) + 1;
  iVar3 = *(int *)(iVar2 + 0x27c) + -1;
  *(int *)(iVar2 + 0x27c) = iVar3;
  if (iVar3 == 0) {
    *(undefined4 *)(iVar2 + 0x278) = 0;
    do {
      iVar3 = *piVar8;
      iVar2 = -iVar3;
      bVar11 = (bool)hasExclusiveAccess(piVar8);
    } while (!bVar11);
    *piVar8 = iVar2;
    coproc_moveto_Data_Synchronization(0);
    if (iVar3 != -1 && 0 < iVar2) {
      software_interrupt(0x22);
    }
  }
  FUN_002c0198(*(undefined4 *)(iVar9 + 0x68),2);
  *(short *)(*(int *)(iVar9 + 0x68) + 4) = *(short *)(*(int *)(iVar9 + 0x68) + 4) + 1;
  *(undefined4 *)(iVar9 + 0x2c) = param_2;
  *(undefined4 *)(iVar9 + 0x30) = param_3;
  return iVar9;
}
