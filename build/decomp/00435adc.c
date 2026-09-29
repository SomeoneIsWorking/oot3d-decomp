// OoT3D decomp @ 00435adc  name=FUN_00435adc  size=312

undefined4 FUN_00435adc(void)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  undefined8 uVar7;

  piVar2 = DAT_00435c14;
  iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
  bVar6 = true;
  if (iVar3 != DAT_00435c14[1]) {
    do {
      if (*DAT_00435c14 < 1) {
        ClearExclusiveLocal();
        bVar6 = false;
        goto LAB_00435b2c;
      }
      bVar1 = (bool)hasExclusiveAccess(DAT_00435c14);
    } while (!bVar1);
    *DAT_00435c14 = -*DAT_00435c14;
LAB_00435b2c:
    if (bVar6) {
      iVar3 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar2[1] = iVar3;
    }
    else {
      FUN_003351e8(piVar2);
    }
  }
  iVar3 = DAT_00435c18;
  iVar4 = piVar2[2];
  piVar2[2] = iVar4 + 1;
  iVar4 = iVar4 + 1;
  if ((*(uint *)(iVar3 + 8) & 1) == 0) {
    uVar7 = FUN_003679b4(iVar3 + 8);
    iVar4 = (int)((ulonglong)uVar7 >> 0x20);
    if ((int)uVar7 != 0) {
      FUN_00303a00(DAT_00435c20,0x118,DAT_00435c1c,0x1180,4,0);
      iVar4 = DAT_00435c28;
    }
  }
  uVar5 = DAT_00435c20;
  *(undefined4 *)(iVar3 + 4) = DAT_00435c20;
  uVar5 = FUN_0030e6a8(uVar5,iVar4);
  iVar3 = piVar2[2];
  piVar2[2] = iVar3 + -1;
  if (iVar3 + -1 == 0) {
    piVar2[1] = 0;
    do {
      iVar4 = *piVar2;
      iVar3 = -iVar4;
      bVar6 = (bool)hasExclusiveAccess(piVar2);
    } while (!bVar6);
    *piVar2 = iVar3;
    if (iVar4 != -1 && 0 < iVar3) {
      software_interrupt(0x22);
    }
  }
  return uVar5;
}
