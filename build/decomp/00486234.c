// OoT3D decomp @ 00486234  name=FUN_00486234  size=996

void FUN_00486234(int *param_1)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  int iStack_48;
  int iStack_44;
  int iStack_40;
  int iStack_3c;
  int iStack_38;
  int iStack_34;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;

  if (*(char *)((int)param_1 + 0x87) != '\0') {
    if (param_1[0x24] == 0) {
      if (*(char *)((int)param_1 + 0x8b) == '\0' || *(char *)((int)param_1 + 0x8b) == '\x03')
      goto LAB_004862fc;
    }
    else {
      param_1[0x24] = param_1[0x24] + -1;
    }
  }
  bVar2 = false;
  if (*(char *)((int)param_1 + 0x86) == '\0') {
    if (*(char *)((int)param_1 + 0x85) == '\0') {
      return;
    }
    iVar3 = (**(code **)(*param_1 + 0x14))(param_1);
    if (iVar3 == 0) {
      return;
    }
    bVar2 = true;
    *(undefined1 *)((int)param_1 + 0x8a) = 2;
LAB_004862c4:
    if (param_1[0x25] != -1) {
      param_1[0x25] = param_1[0x25] + 1;
    }
  }
  else if (*(char *)((int)param_1 + 0x8a) == '\x02') goto LAB_004862c4;
  if ((*(char *)((int)param_1 + 0x89) != '\0') &&
     (iVar3 = (**(code **)(*param_1 + 0x20))(param_1), *(char *)(iVar3 + 0xb) != '\0'))
  goto LAB_004862fc;
  cVar1 = *(char *)((int)param_1 + 0x8b);
  if (cVar1 == '\0') {
LAB_00486344:
    (**(code **)(*param_1 + 0x28))(param_1);
  }
  else if (cVar1 == '\x01') {
    if (param_1[0x20] < param_1[0x1f]) {
      param_1[0x20] = param_1[0x20] + 1;
    }
  }
  else if (cVar1 == '\x03') {
    if (param_1[0x20] < param_1[0x1f]) {
      param_1[0x20] = param_1[0x20] + 1;
    }
    goto LAB_00486344;
  }
  piVar4 = (int *)param_1[8];
  if (piVar4 != (int *)0x0) {
    (**(code **)(*piVar4 + 8))(piVar4,param_1[10],param_1);
  }
  if (param_1[7] != 0) {
    iStack_48 = iRam00486618;
    iStack_44 = iRam00486618;
    iStack_40 = iRam0048661c;
    iStack_3c = iRam0048661c;
    iStack_38 = iRam0048661c;
    iStack_34 = iRam0048661c;
    iStack_30 = iRam0048661c;
    iStack_2c = 0;
    iStack_28 = 0;
    iStack_24 = 0;
    if (param_1[0x25] != 0) {
      iStack_48 = param_1[0xc];
      iStack_44 = param_1[0xd];
      iStack_40 = param_1[0xe];
      iStack_3c = param_1[0xf];
      iStack_38 = param_1[0x10];
      iStack_34 = param_1[0x11];
      iStack_30 = param_1[0x12];
      iStack_2c = param_1[0x13];
      iStack_28 = param_1[0x14];
      iStack_24 = param_1[0x15];
    }
    (**(code **)(*(int *)param_1[7] + 8))((int *)param_1[7],param_1[10],param_1[0x27],&iStack_48);
    param_1[0xc] = iStack_48;
    param_1[0xd] = iStack_44;
    param_1[0xe] = iStack_40;
    param_1[0xf] = iStack_3c;
    param_1[0x10] = iStack_38;
    param_1[0x11] = iStack_34;
    param_1[0x12] = iStack_30;
    param_1[0x13] = iStack_2c;
    param_1[0x14] = iStack_28;
    param_1[0x15] = iStack_24;
  }
  iVar3 = param_1[5];
  if (iVar3 != 0) {
    iVar6 = *(int *)(iVar3 + 0x4c);
    iVar7 = *(int *)(iVar3 + 0x50);
    param_1[0x16] = *(int *)(iVar3 + 0x48);
    param_1[0x17] = iVar6;
    param_1[0x18] = iVar7;
  }
  (**(code **)(*param_1 + 0x2c))(param_1);
  if (((char)param_1[0x22] == '\0') || (param_1[0x1c] < param_1[0x1b])) {
    iVar3 = func_0x0030c550();
    if (bVar2) {
      iVar6 = func_0x0030c20c(iVar3,6);
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar3 + 0x180);
      *(undefined1 *)(iVar6 + 4) = 5;
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
      *(undefined4 *)(iVar6 + 0x10) = uVar5;
      func_0x0030c1e8(iVar3,iVar6);
      *(undefined1 *)((int)param_1 + 0x86) = 1;
      *(undefined1 *)((int)param_1 + 0x85) = 0;
    }
    if (*(char *)((int)param_1 + 0x8b) == '\x01') {
      if (param_1[0x1f] <= param_1[0x20]) {
        iVar6 = func_0x0030c20c(iVar3,6);
        *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar3 + 0x180);
        *(undefined1 *)(iVar6 + 4) = 7;
        uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
        *(undefined4 *)(iVar6 + 0x10) = uVar5;
        *(undefined1 *)(iVar6 + 0x14) = 1;
        func_0x0030c1e8(iVar3,iVar6);
        *(undefined1 *)((int)param_1 + 0x8b) = 2;
      }
    }
    else if ((*(char *)((int)param_1 + 0x8b) == '\x03') && (param_1[0x1f] <= param_1[0x20])) {
      *(undefined1 *)((int)param_1 + 0x8b) = 0;
    }
    if ((char)param_1[0x23] != '\0') {
      iVar6 = func_0x0030c20c(iVar3,6);
      *(undefined4 *)(iVar6 + 0xc) = *(undefined4 *)(iVar3 + 0x180);
      *(undefined1 *)(iVar6 + 4) = 7;
      uVar5 = (**(code **)(*param_1 + 0x20))(param_1);
      *(undefined4 *)(iVar6 + 0x10) = uVar5;
      *(undefined1 *)(iVar6 + 0x14) = 0;
      func_0x0030c1e8(iVar3,iVar6);
      *(undefined1 *)(param_1 + 0x23) = 0;
    }
    return;
  }
  *(undefined1 *)(param_1 + 0x22) = 0;
LAB_004862fc:
                    /* WARNING: Could not recover jumptable at 0x00486310. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}
