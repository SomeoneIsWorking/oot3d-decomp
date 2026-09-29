// OoT3D decomp @ 00306cc0  name=FUN_00306cc0  size=352

undefined4 FUN_00306cc0(int param_1)

{
  uint uVar1;
  char cVar2;
  uint *puVar3;
  int *piVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint local_28;
  uint local_24;
  char local_20 [8];

  iVar5 = 0;
  do {
    cVar2 = *(char *)(param_1 + iVar5);
    if (cVar2 == '\0' || cVar2 == ':') {
      local_20[iVar5] = ':';
      local_28 = 0;
      local_24 = 0;
      iVar5 = 0;
      goto LAB_00306d04;
    }
    local_20[iVar5] = cVar2;
    iVar5 = iVar5 + 1;
  } while (iVar5 < 8);
  FUN_003123c0();
  local_28 = 0;
  local_24 = 0;
  iVar5 = 0;
  do {
    uVar7 = (uint)(char)(&DAT_00306e20)[iVar5];
    if (uVar7 == 0x3a) goto LAB_00306dac;
    uVar1 = local_28 >> 0x18;
    iVar5 = iVar5 + 1;
    local_28 = uVar7 | local_28 << 8;
    local_24 = local_24 << 8 | uVar1 | (int)uVar7 >> 0x1f;
  } while (iVar5 < 8);
  local_28 = 0;
  local_24 = 0;
LAB_00306dac:
  uVar7 = 0;
  do {
    puVar3 = (uint *)(DAT_00306e24 + uVar7 * 0x10);
    if (puVar3[1] == local_24 && *puVar3 == local_28) {
      puVar6 = (undefined4 *)(DAT_00306e24 + uVar7 * 0x10);
      piVar4 = (int *)puVar6[2];
      *puVar6 = 0;
      puVar6[1] = 0;
      puVar6[2] = 0;
      goto LAB_00306df4;
    }
    uVar7 = uVar7 + 1;
  } while (uVar7 < 0x20);
  piVar4 = (int *)0x0;
LAB_00306df4:
  if (piVar4 == (int *)0x0) {
    return DAT_00306e28;
  }
  (**(code **)(*piVar4 + 0x28))();
  return 0;
  while( true ) {
    uVar1 = local_28 >> 0x18;
    local_28 = uVar7 | local_28 << 8;
    local_24 = local_24 << 8 | uVar1 | (int)uVar7 >> 0x1f;
    iVar5 = iVar5 + 1;
    if (7 < iVar5) break;
LAB_00306d04:
    uVar7 = (uint)local_20[iVar5];
    if (uVar7 == 0x3a) goto LAB_00306dac;
  }
  local_28 = 0;
  local_24 = 0;
  goto LAB_00306dac;
}
