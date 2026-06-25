// OoT3D decomp @ 004c65ec  name=FUN_004c65ec  size=324

void FUN_004c65ec(int param_1)

{
  undefined *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  bool bVar7;
  undefined8 uVar8;
  undefined4 local_130;
  int local_12c;
  undefined *local_128;
  int local_124;
  undefined local_120 [4];
  int local_11c [63];
  
  if (*(char *)(param_1 + 0xf) != '\0') {
    local_12c = *DAT_004c6730;
    local_128 = (undefined *)DAT_004c6730[1];
    local_124 = DAT_004c6730[2];
    if (*(char *)((int)&local_12c + *(int *)(param_1 + 0xf3c)) == '\0') {
      iVar6 = 1;
      goto LAB_004c662c;
    }
  }
  iVar6 = 0;
LAB_004c662c:
  FUN_003445a8();
  puVar1 = (undefined *)FUN_002ccf30(param_1 + 0xac4,param_1 + 0xee4,0);
  iVar5 = *(int *)(param_1 + 0xe84);
  iVar3 = 0;
  if (0 < iVar5) {
    do {
      FUN_004c8118(param_1 + 0xac4,iVar3,&local_130);
      puVar1 = local_120 + iVar3 * 0x10;
      iVar4 = iVar3 + 1;
      *puVar1 = (undefined)local_130;
      local_11c[iVar3 * 4] = local_12c + 8;
      iVar2 = iVar6;
      if (iVar6 != 0) {
        iVar2 = 8;
      }
      local_11c[iVar3 * 4 + 1] = iVar2 + 8 + (int)local_128;
      local_11c[iVar3 * 4 + 2] = local_124;
      iVar3 = iVar4;
    } while (iVar4 < iVar5);
  }
  uVar8 = CONCAT44(*(int *)(param_1 + 0xe88),puVar1);
  if (-1 < *(int *)(param_1 + 0xe88)) {
    uVar8 = FUN_003056e0();
  }
  local_12c = (int)((ulonglong)uVar8 >> 0x20);
  iVar6 = (int)uVar8;
  iVar3 = *(int *)(param_1 + 0xc6c);
  bVar7 = iVar3 != 0;
  if (bVar7) {
    iVar6 = iVar3 * 3;
  }
  if (bVar7) {
    local_12c = iVar6 * 2 + -2;
  }
  local_130 = *(undefined4 *)(param_1 + 0xe9c);
  if (!bVar7) {
    local_12c = 0;
  }
  local_128 = local_120;
  local_124 = iVar5;
  FUN_004c7f58(param_1 + 0x44,param_1 + 0xee4,*(undefined4 *)(param_1 + 0xe90),
               *(undefined4 *)(param_1 + 0xe94),*(undefined4 *)(param_1 + 0xe98),iVar3 << 2);
  return;
}

