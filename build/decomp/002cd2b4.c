// OoT3D decomp @ 002cd2b4  name=FUN_002cd2b4  size=964

undefined4 FUN_002cd2b4(int param_1,int param_2)

{
  char cVar1;
  undefined4 *puVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  int iVar7;
  bool bVar8;
  undefined4 local_140;
  undefined4 uStack_13c;
  undefined4 uStack_138;
  undefined auStack_134 [204];
  undefined auStack_68 [64];
  int local_28;
  
  if (*(int *)(param_1 + 8) == 0) {
    return 0;
  }
  if (param_2 == 0xc2 || param_2 == 0xfa) {
    param_2 = param_2 + (*(uint *)(DAT_002cd6a0 + 0xbc) >> 0x1c);
  }
  else if (param_2 == 0xc) {
    if (((uint)*(ushort *)(DAT_002cd6a0 + 0xb6) & *(int *)(DAT_002cd6a4 + 8) << (uint)*DAT_002cd6a8)
        != 0) {
      param_2 = 0xb;
    }
  }
  else if ((param_2 == 0xb4) && ((*(ushort *)(DAT_002cd6ac + 0xfe) & 0x40) != 0)) {
    param_2 = 0xb5;
  }
  bVar8 = param_2 == 0x4077 || param_2 == 0x407a;
  if (param_2 != 0x4077 && param_2 != 0x407a) {
    bVar8 = param_2 == 0x2061;
  }
  if (!bVar8) {
    bVar8 = param_2 == 0x5035;
  }
  if ((bVar8) || (param_2 == 0x40ac)) {
    FUN_0034be04(1);
  }
  iVar7 = DAT_002cd6b0;
  if (param_2 == 0x2030) {
    *(undefined2 *)(DAT_002cd6b0 + 0x90) = 0;
    *(undefined2 *)(iVar7 + 0x8e) = 0;
    *(undefined2 *)(iVar7 + 0x8c) = 0;
    *(undefined2 *)(iVar7 + 0x8a) = 0;
  }
  iVar7 = *(int *)(param_1 + 0xf3c);
  puVar6 = (undefined4 *)(param_1 + 0xf40);
  if ((*(int *)(param_1 + 0x20) == 0) ||
     (puVar2 = (undefined4 *)FUN_002df4c4(param_1 + 0x1c,param_2), puVar2 == (undefined4 *)0x0)) {
LAB_002cd42c:
    puVar6 = (undefined4 *)(param_1 + 0xf40);
    if (*(int *)(param_1 + 0x20) == 0) {
      return 0;
    }
    puVar2 = (undefined4 *)FUN_002df4c4(param_1 + 0x1c,0x600);
    if (puVar2 == (undefined4 *)0x0) {
      return 0;
    }
    local_28 = param_1 + 0x1c;
    *puVar6 = *puVar2;
    *(undefined4 *)(param_1 + 0xf44) = puVar2[1];
    *(undefined4 *)(param_1 + 0xf48) = puVar2[2];
    *(undefined4 *)(param_1 + 0xf4c) = puVar2[3];
    iVar4 = 0;
    do {
      uVar3 = FUN_002df4b0(local_28,puVar2[iVar4 * 2 + 4]);
      iVar5 = iVar4 + 1;
      puVar6[iVar4 * 2 + 4] = uVar3;
      puVar6[iVar4 * 2 + 5] = puVar2[iVar4 * 2 + 5];
      iVar4 = iVar5;
    } while (iVar5 < 10);
    if (6 < *(int *)(param_1 + 0xf48)) {
      *(undefined4 *)(param_1 + 0xf48) = 4;
    }
    if (*(int *)(param_1 + iVar7 * 8 + 0xf50) == 0) {
      return 0;
    }
  }
  else {
    local_28 = param_1 + 0x1c;
    *puVar6 = *puVar2;
    *(undefined4 *)(param_1 + 0xf44) = puVar2[1];
    *(undefined4 *)(param_1 + 0xf48) = puVar2[2];
    *(undefined4 *)(param_1 + 0xf4c) = puVar2[3];
    iVar4 = 0;
    do {
      uVar3 = FUN_002df4b0(local_28,puVar2[iVar4 * 2 + 4]);
      iVar5 = iVar4 + 1;
      puVar6[iVar4 * 2 + 4] = uVar3;
      puVar6[iVar4 * 2 + 5] = puVar2[iVar4 * 2 + 5];
      iVar4 = iVar5;
    } while (iVar5 < 10);
    if (6 < *(int *)(param_1 + 0xf48)) {
      *(undefined4 *)(param_1 + 0xf48) = 4;
    }
    if (*(int *)(param_1 + iVar7 * 8 + 0xf50) == 0) goto LAB_002cd42c;
  }
  FUN_002ccf74(auStack_68);
  FUN_00344410(auStack_134,*(undefined4 *)(param_1 + 0xf3c));
  iVar4 = param_1 + 0x9dc;
  FUN_002ccfdc();
  FUN_0037172c(iVar4,auStack_134);
  puVar6 = DAT_002cd6b4;
  *(int *)(param_1 + 0xac0) = *(int *)(param_1 + 0xf3c);
  local_140 = *puVar6;
  uStack_13c = puVar6[1];
  uStack_138 = puVar6[2];
  cVar1 = *(char *)((int)&local_140 + *(int *)(param_1 + 0xf3c));
  if (cVar1 == '\0') {
    iVar7 = param_1 + iVar7 * 8;
    iVar5 = *(int *)(iVar7 + 0xf50);
    if (iVar5 == 0) {
      return 0;
    }
    iVar7 = FUN_004bdfd4(auStack_68,iVar5,*(undefined4 *)(iVar7 + 0xf54),iVar4);
LAB_002cd58c:
    if (iVar7 != 0) {
      bVar8 = true;
      goto LAB_002cd59c;
    }
  }
  else if (cVar1 == '\x01') {
    iVar7 = param_1 + iVar7 * 8;
    iVar5 = *(int *)(iVar7 + 0xf50);
    if (iVar5 == 0) {
      return 0;
    }
    iVar7 = FUN_004bdf54(auStack_68,iVar5,*(undefined4 *)(iVar7 + 0xf54),iVar4);
    goto LAB_002cd58c;
  }
  bVar8 = false;
LAB_002cd59c:
  if (!bVar8) {
    return 0;
  }
  FUN_002fbb20();
  uVar3 = DAT_002cd6bc;
  switch(*(undefined4 *)(param_1 + 0xf3c)) {
  case 1:
  case 2:
  case 3:
  case 4:
  case 5:
  case 6:
  case 7:
  case 8:
  case 9:
    uVar3 = DAT_002cd6b8;
  }
  *(undefined4 *)(param_1 + 0xebc) = uVar3;
  FUN_00305754(param_1 + 0x44);
  FUN_002c453c(param_1 + 0x44);
  FUN_00305790(param_1 + 0x44);
  FUN_002bf26c(param_1 + 0x44);
  if ((*(char *)(param_1 + 0xfc8) == '\0') && (iVar7 = FUN_002cd710(param_1 + 0x44), iVar7 != 0)) {
    FUN_002cd6c0(param_1 + 0x44);
    *(undefined *)(param_1 + 0xfc8) = 1;
    *(undefined4 *)(param_1 + 0xfcc) = 2;
  }
  *(undefined2 *)(*(int *)(param_1 + 8) + 0x2b7e) = 0;
  if (*(int *)(param_1 + 0xf48) != 3) {
    FUN_002c0cac(param_1 + 0x44);
  }
  return 1;
}

