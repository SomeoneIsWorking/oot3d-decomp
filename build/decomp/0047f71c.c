// OoT3D decomp @ 0047f71c  name=FUN_0047f71c  size=556

void FUN_0047f71c(int param_1,undefined4 param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  undefined4 extraout_r1;
  uint extraout_r2;
  uint extraout_r2_00;
  bool bVar4;
  float fVar5;
  undefined4 uVar6;
  float fVar7;
  undefined8 uVar8;

  if (*(char *)(param_1 + 0x14) == '\0') {
    return;
  }
  uVar3 = *(ushort *)(param_1 + 0x20);
  iVar1 = 0;
  bVar4 = (uVar3 & 1) == 0;
  if (!bVar4) {
    uVar3 = (ushort)*(byte *)(param_1 + 0x15);
  }
  if (bVar4 || uVar3 == 0) {
    if (*(char *)(param_1 + 0x16) == '\0') goto LAB_0047f884;
  }
  else if (*(char *)(param_1 + 0x16) == '\0') {
    uVar6 = *(undefined4 *)(param_1 + 0x28);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + iVar1 * 4) != 0) {
          FUN_002ce018(uVar6);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
    }
    FUN_002cdee4(param_1);
    fVar7 = *(float *)(param_1 + 0x24);
    uVar6 = extraout_r1;
    if ((*DAT_0047f948 & 1) == 0) {
      uVar8 = FUN_003679b4(DAT_0047f948);
      uVar6 = (int)((ulonglong)uVar8 >> 0x20);
      if ((int)uVar8 != 0) {
        FUN_0030c5b8(DAT_0047f94c);
        uVar6 = DAT_0047f954;
      }
    }
    fVar5 = (float)FUN_002cdfa0(DAT_0047f94c,uVar6);
    iVar1 = 0;
    param_3 = extraout_r2;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        if (*(int *)(param_1 + iVar1 * 4) != 0) {
          FUN_00489c7c(fVar5 * fVar7);
          param_3 = extraout_r2_00;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
    }
    *(undefined1 *)(param_1 + 0x16) = 1;
    iVar1 = 1;
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfff2;
  }
  bVar4 = (*(ushort *)(param_1 + 0x20) & 2) != 0;
  if (bVar4) {
    param_3 = (uint)*(byte *)(param_1 + 0x15);
  }
  if (bVar4 && param_3 != 0) {
    if (*(char *)(param_1 + 0x17) == '\0') {
      *(undefined1 *)(param_1 + 0x18) = 0;
      iVar1 = 1;
    }
    else {
      *(undefined1 *)(param_1 + 0x18) = 1;
      iVar1 = 3;
    }
    *(ushort *)(param_1 + 0x20) = *(ushort *)(param_1 + 0x20) & 0xfffd;
  }
LAB_0047f884:
  if (iVar1 == 1) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar2 = *(int *)(param_1 + iVar1 * 4);
        if (iVar2 != 0) {
          FUN_002c016c(iVar2,0);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
    }
  }
  else if (iVar1 == 2) {
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 8)) {
      do {
        iVar2 = *(int *)(param_1 + iVar1 * 4);
        if (iVar2 != 0) {
          FUN_002c016c(iVar2,1);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 8));
      return;
    }
  }
  else if ((iVar1 == 3) && (iVar1 = 0, 0 < *(int *)(param_1 + 8))) {
    do {
      iVar2 = *(int *)(param_1 + iVar1 * 4);
      if (iVar2 != 0) {
        FUN_002c016c(iVar2,2);
      }
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)(param_1 + 8));
    return;
  }
  return;
}
