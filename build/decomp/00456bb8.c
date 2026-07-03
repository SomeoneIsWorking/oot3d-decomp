// OoT3D decomp @ 00456bb8  name=FUN_00456bb8  size=616

void FUN_00456bb8(undefined4 param_1,int *param_2)

{
  bool bVar1;
  longlong lVar2;
  uint *puVar3;
  uint uVar4;
  undefined1 *puVar5;
  bool bVar6;
  int iVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  int iVar11;
  undefined8 uVar12;
  ulonglong uVar13;
  undefined8 uVar14;
  
  puVar5 = DAT_00456e28;
  uVar4 = DAT_00456e24;
  puVar3 = DAT_00456e20;
  bVar6 = false;
  if (((*DAT_00456e20 & 1) == 0) &&
     (uVar12 = FUN_003679b4(DAT_00456e20), param_2 = (int *)((ulonglong)uVar12 >> 0x20),
     (int)uVar12 != 0)) {
    FUN_0036788c(DAT_00456e2c);
    param_2 = DAT_00456e34;
  }
  uVar13 = FUN_00303ddc(DAT_00456e2c,param_2);
  uVar10 = DAT_00456e38;
  uVar8 = (uint)(uVar13 >> 0x20);
  software_interrupt(0x28);
  lVar2 = (uVar13 & 0xffffffff) * 3 +
          CONCAT44(((int)uVar8 >> 0x1f) * DAT_00456e38 +
                   (int)((ulonglong)DAT_00456e38 * (ulonglong)uVar8 >> 0x20),
                   (int)((ulonglong)DAT_00456e38 * (ulonglong)uVar8)) +
          CONCAT44(uVar8 * 3,(int)((ulonglong)DAT_00456e38 * (uVar13 & 0xffffffff) >> 0x20));
  uVar12 = FUN_00332754((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),uVar4,0);
  uVar13 = FUN_00465d54(8,0,1);
  uVar8 = (uint)(uVar13 >> 0x20);
  *(int *)(puVar5 + 8) = (int)uVar13;
  software_interrupt(0x28);
  lVar2 = (uVar13 & 0xffffffff) * 3 +
          CONCAT44(((int)uVar8 >> 0x1f) * uVar10 +
                   (int)((ulonglong)uVar10 * (ulonglong)uVar8 >> 0x20),
                   (int)((ulonglong)uVar10 * (ulonglong)uVar8)) +
          CONCAT44(uVar8 * 3,(int)((ulonglong)uVar10 * (uVar13 & 0xffffffff) >> 0x20));
  uVar14 = FUN_00332754((int)lVar2,(int)((ulonglong)lVar2 >> 0x20),uVar4,0);
  uVar10 = (uint)uVar14 - (uint)uVar12;
  iVar11 = (int)((ulonglong)uVar14 >> 0x20) -
           ((int)((ulonglong)uVar12 >> 0x20) + (uint)((uint)uVar14 < (uint)uVar12));
  if (iVar11 < (int)(uint)(uVar10 < 1000)) {
    lVar2 = (ulonglong)(1000 - uVar10) * (ulonglong)uVar4;
    FUN_0030e604((int)lVar2,
                 uVar4 * -(iVar11 + (uint)(1000 < uVar10)) + (int)((ulonglong)lVar2 >> 0x20));
  }
  piVar9 = DAT_00456e3c;
  iVar11 = coproc_movefrom_User_R_Thread_and_Process_ID();
  if (iVar11 != DAT_00456e3c[1]) {
    do {
      if (*DAT_00456e3c < 1) {
        ClearExclusiveLocal();
        goto LAB_00456d4c;
      }
      bVar1 = (bool)hasExclusiveAccess(DAT_00456e3c);
    } while (!bVar1);
    *DAT_00456e3c = -*DAT_00456e3c;
    bVar6 = true;
LAB_00456d4c:
    if (bVar6) {
      iVar11 = coproc_movefrom_User_R_Thread_and_Process_ID();
      piVar9[1] = iVar11;
    }
    else {
      FUN_003351e8(piVar9);
    }
  }
  piVar9[2] = piVar9[2] + 1;
  *puVar5 = 1;
  iVar11 = piVar9[2];
  piVar9[2] = iVar11 + -1;
  if (iVar11 + -1 == 0) {
    piVar9[1] = 0;
    do {
      iVar7 = *piVar9;
      iVar11 = -iVar7;
      bVar6 = (bool)hasExclusiveAccess(piVar9);
    } while (!bVar6);
    *piVar9 = iVar11;
    if (iVar7 != -1 && 0 < iVar11) {
      software_interrupt(0x22);
    }
  }
  if (((*puVar3 & 1) == 0) &&
     (uVar12 = FUN_003679b4(DAT_00456e20), piVar9 = (int *)((ulonglong)uVar12 >> 0x20),
     (int)uVar12 != 0)) {
    FUN_0036788c(DAT_00456e2c);
    piVar9 = DAT_00456e34;
  }
  FUN_00303e50(DAT_00456e2c,piVar9);
  return;
}

