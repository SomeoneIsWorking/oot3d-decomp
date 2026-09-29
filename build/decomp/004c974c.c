// OoT3D decomp @ 004c974c  name=FUN_004c974c  size=604

/* WARNING: Removing unreachable block (ram,0x0048857c) */

undefined4 FUN_004c974c(uint *param_1,uint param_2,int *param_3)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  uint *puVar4;
  int iVar5;
  undefined1 *puVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;

  if (param_2 != 100) {
    if ((bool)((byte)(*param_1 >> 6) & 1)) {
      param_2 = param_2 | 0x80;
    }
    if (param_2 == 0x73) {
      if (param_1[5] == 0) {
        FUN_004838f0(param_1,*param_3,0xffffffff);
      }
      return 1;
    }
    if (param_2 == 0xf3) {
      if (param_1[5] != 0) {
        FUN_00483984(param_1,*param_3,0xffffffff);
      }
      return 1;
    }
    return 0;
  }
  iVar8 = 0;
  iVar3 = *param_3;
  puVar6 = (undefined1 *)0x4885c0;
  if (iVar3 < 0) {
    iVar3 = -iVar3;
    puVar6 = (undefined1 *)0x4885c4;
    puVar4 = param_1;
  }
  else {
    puVar4 = (uint *)*param_1;
    if (((uint)puVar4 & 2) == 0) {
      if (((uint)puVar4 & 4) == 0) goto LAB_00488580;
      puVar6 = &DAT_004885cc;
    }
    else {
      puVar6 = (undefined1 *)0x4885c8;
    }
  }
  iVar8 = 1;
LAB_00488580:
  iVar5 = 0;
  while (iVar3 != 0) {
    uVar9 = FUN_0044dc24(iVar3,puVar4);
    puVar4 = (uint *)((int)((ulonglong)uVar9 >> 0x20) + 0x30);
    *(char *)((int)param_1 + iVar5 + 0x24) = (char)puVar4;
    iVar5 = iVar5 + 1;
    iVar3 = (int)uVar9;
  }
  if ((*param_1 & 0x20) == 0) {
    uVar1 = 1;
  }
  else {
    uVar1 = param_1[7];
    *param_1 = *param_1 & 0xffffffef;
  }
  if (iVar5 < (int)uVar1) {
    iVar3 = uVar1 - iVar5;
  }
  else {
    iVar3 = 0;
  }
  param_1[6] = param_1[6] - (iVar3 + iVar5 + iVar8);
  if ((*param_1 & 0x10) == 0) {
    FUN_002df1c8(param_1);
  }
  for (iVar7 = 0; iVar7 < iVar8; iVar7 = iVar7 + 1) {
    (*(code *)param_1[1])(puVar6[iVar7],param_1[2]);
    param_1[8] = param_1[8] + 1;
  }
  if ((*param_1 & 0x10) != 0) {
    FUN_002df1c8(param_1);
  }
  while (0 < iVar3) {
    (*(code *)param_1[1])(0x30,param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar3 = iVar3 + -1;
  }
  while (0 < iVar5) {
    (*(code *)param_1[1])(*(undefined1 *)((int)param_1 + iVar5 + 0x23),param_1[2]);
    param_1[8] = param_1[8] + 1;
    iVar5 = iVar5 + -1;
  }
  FUN_002df21c(param_1);
  if ((*param_1 & 0x80) == 0) {
    uVar2 = 1;
  }
  else {
    uVar2 = 2;
  }
  return uVar2;
}
