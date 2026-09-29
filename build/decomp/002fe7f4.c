// OoT3D decomp @ 002fe7f4  name=FUN_002fe7f4  size=360

undefined4 FUN_002fe7f4(int param_1,uint param_2)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  uint local_28;
  uint local_24;
  char local_20 [8];

  iVar4 = 0;
  do {
    cVar2 = *(char *)(param_1 + iVar4);
    if (cVar2 == '\0' || cVar2 == ':') {
      local_20[iVar4] = ':';
      local_28 = 0;
      local_24 = 0;
      iVar4 = 0;
      goto LAB_002fe838;
    }
    local_20[iVar4] = cVar2;
    iVar4 = iVar4 + 1;
  } while (iVar4 < 8);
  FUN_003123c0();
  local_28 = 0;
  local_24 = 0;
  iVar4 = 0;
  do {
    uVar5 = (uint)(char)(&DAT_002fe95c)[iVar4];
    if (uVar5 == 0x3a) goto LAB_002fe8d0;
    uVar1 = local_28 >> 0x18;
    iVar4 = iVar4 + 1;
    local_28 = uVar5 | local_28 << 8;
    local_24 = local_24 << 8 | uVar1 | (int)uVar5 >> 0x1f;
  } while (iVar4 < 8);
  local_28 = 0;
  local_24 = 0;
LAB_002fe8d0:
  if (local_24 == 0 && local_28 == 0) {
    return DAT_002fe960;
  }
  iVar4 = 0;
  while( true ) {
    puVar3 = (uint *)(DAT_002fe964 + iVar4 * 0x10);
    if (puVar3[2] == 0) {
      puVar6 = (uint *)(DAT_002fe964 + iVar4 * 0x10);
      *puVar6 = local_28;
      puVar6[1] = local_24;
      puVar3[2] = param_2;
      return 0;
    }
    if (puVar3[1] == local_24 && *puVar3 == local_28) break;
    iVar4 = iVar4 + 1;
    if (0x1f < iVar4) {
      return DAT_002fe96c;
    }
  }
  return DAT_002fe968;
  while( true ) {
    uVar1 = local_28 >> 0x18;
    iVar4 = iVar4 + 1;
    local_28 = uVar5 | local_28 << 8;
    local_24 = local_24 << 8 | uVar1 | (int)uVar5 >> 0x1f;
    if (7 < iVar4) break;
LAB_002fe838:
    uVar5 = (uint)local_20[iVar4];
    if (uVar5 == 0x3a) goto LAB_002fe8d0;
  }
  local_28 = 0;
  local_24 = 0;
  goto LAB_002fe8d0;
}
