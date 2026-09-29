// OoT3D decomp @ 00313d6c  name=FUN_00313d6c  size=328

void FUN_00313d6c(int *param_1)

{
  char cVar1;
  uint uVar2;
  undefined4 *puVar3;
  ushort uVar4;
  bool bVar5;
  bool bVar6;
  undefined4 local_18;
  undefined4 local_14;
  undefined4 local_10;
  undefined4 local_c;

  local_18 = 0;
  local_14 = 0;
  local_10 = 0;
  local_c = 0;
  uVar2 = (uint)*(ushort *)(param_1 + 3);
  if (uVar2 == DAT_00313eb4) {
    uVar4 = *(ushort *)((int)param_1 + 0xe);
    if ((uVar4 & 0xf) != 0) {
      bVar5 = false;
      if ((char)param_1[4] == '\0') {
        uVar4 = ~uVar4 & 0xf;
        bVar5 = uVar4 == 0;
      }
      bVar6 = false;
      if (bVar5) {
        uVar4 = (ushort)*(byte *)((int)param_1 + 0x11);
        bVar6 = uVar4 == 0;
      }
      if (!bVar6) goto LAB_00313dc8;
    }
  }
  else {
LAB_00313dc8:
    uVar4 = 0xf;
    local_18 = 0xf;
  }
  if (uVar2 == DAT_00313eb4) {
    uVar4 = *(ushort *)((int)param_1 + 0xe);
  }
  if (uVar2 != DAT_00313eb4 || (uVar4 & 0xf) != 0) {
    local_14 = 0xf;
  }
  if (uVar2 != 0x6051) {
    if (uVar2 == DAT_00313eb4) {
      bVar5 = *(char *)((int)param_1 + 0x12) != '\0';
      cVar1 = '\0';
      if (bVar5) {
        cVar1 = *(char *)((int)param_1 + 0x13);
      }
      if (bVar5 && cVar1 != '\0') goto LAB_00313e34;
    }
    if (uVar2 != DAT_00313eb4) goto LAB_00313e40;
    bVar5 = *(char *)((int)param_1 + 0x12) == '\0';
    uVar4 = 0;
    if (!bVar5) {
      uVar4 = *(ushort *)((int)param_1 + 0xe);
    }
    if (bVar5 || (uVar4 & 0xf) == 0) goto LAB_00313e40;
  }
LAB_00313e34:
  local_10 = 2;
LAB_00313e40:
  if (uVar2 == DAT_00313eb4) {
    bVar5 = *(char *)((int)param_1 + 0x12) != '\0';
    cVar1 = '\0';
    if (bVar5) {
      cVar1 = *(char *)((int)param_1 + 0x13);
    }
    if (bVar5 && cVar1 != '\0') {
      local_c = 2;
    }
  }
  puVar3 = *(undefined4 **)(*param_1 + 8);
  *puVar3 = local_18;
  puVar3[1] = DAT_00313eb8;
  puVar3[2] = local_14;
  puVar3[3] = local_10;
  puVar3[4] = local_c;
  puVar3[5] = 0;
  *(undefined4 **)(*param_1 + 8) = puVar3 + 6;
  return;
}
