// OoT3D decomp @ 004181ac  name=FUN_004181ac  size=772

int FUN_004181ac(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  undefined4 local_34;
  undefined4 local_30;
  uint local_2c;
  uint local_28;
  uint local_24;

  iVar2 = DAT_004184b0;
  if (*(char *)(DAT_004184b0 + 1) != '\0') {
    return DAT_004184b4;
  }
  *(undefined1 *)(DAT_004184b0 + 1) = 1;
  FUN_0030dab0();
  local_24 = 0;
  iVar5 = FUN_0041c340(&local_24,param_2,&local_28,&local_2c);
  puVar3 = DAT_004184b8;
  if (-1 < iVar5) {
    *DAT_004184b8 = local_24;
    *(byte *)(iVar2 + 9) = (byte)local_2c & 1;
    *(char *)(iVar2 + 10) = (char)((local_2c & 2) >> 1);
    FUN_0030da40();
    *(uint *)(iVar2 + 0xa0) = local_28;
    *(undefined4 *)(iVar2 + 0x9c) = param_1;
    if ((local_28 & 7) != 6) {
      FUN_0030db4c();
      FUN_0030dab0();
      *(undefined1 *)(iVar2 + 3) = 1;
      local_24 = 0;
      local_28 = 0;
      iVar5 = FUN_0041c2ec(*(undefined4 *)(iVar2 + 0x9c),*(undefined4 *)(iVar2 + 0xa0),&local_28,
                           &local_24);
      if (iVar5 < 0) {
        FUN_0030e3ac(iVar5,&DAT_004184bc,0,&DAT_004184bc);
        FUN_002fb928(0);
      }
      local_2c = 0;
      uVar6 = FUN_0030dd64(&local_2c,0);
      puVar4 = DAT_004184c0;
      if (-1 < (int)uVar6) {
        uVar6 = 0;
        *DAT_004184c0 = local_2c;
      }
      uVar7 = uVar6 >> 0x1b;
      if ((uVar6 & 0x80000000) != 0) {
        uVar7 = uVar7 - 0x20;
      }
      if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) {
        FUN_003351b4(uVar6);
      }
      if (*puVar4 != 0) {
        software_interrupt(0x23);
        *puVar4 = 0;
      }
      *puVar4 = local_24;
      local_2c = 0;
      uVar6 = FUN_0030dd64(&local_2c,0);
      puVar4 = DAT_004184c4;
      if (-1 < (int)uVar6) {
        *DAT_004184c4 = local_2c;
        uVar6 = 0;
      }
      uVar7 = uVar6 >> 0x1b;
      if ((uVar6 & 0x80000000) != 0) {
        uVar7 = uVar7 - 0x20;
      }
      if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) {
        FUN_003351b4();
      }
      if (*puVar4 != 0) {
        software_interrupt(0x23);
        *puVar4 = 0;
      }
      *puVar4 = local_28;
      local_24 = 0;
      uVar6 = FUN_0030dd64(&local_24,0);
      if (-1 < (int)uVar6) {
        *DAT_004184c8 = local_24;
        uVar6 = 0;
      }
      uVar7 = uVar6 >> 0x1b;
      if ((uVar6 & 0x80000000) != 0) {
        uVar7 = uVar7 - 0x20;
      }
      if ((uVar7 != 0xfffffff9 && uVar7 != 0) && uVar7 != 1) {
        FUN_003351b4();
      }
      do {
        bVar1 = (bool)hasExclusiveAccess(DAT_004184cc);
      } while (!bVar1);
      *DAT_004184cc = 0xfffffffe;
      *(undefined1 *)(iVar2 + 0x1d) = 0;
      local_34 = 4;
      local_24 = 0;
      local_30 = DAT_004184d4;
      local_2c = DAT_004184d8;
      local_28 = DAT_004184dc;
      uVar7 = FUN_0030dbf8(DAT_004184e4,&local_34,DAT_004184d0,&local_24,DAT_004184e0,param_3,
                           0xfffffffe,0);
      uVar6 = uVar7 >> 0x1b;
      if ((uVar7 & 0x80000000) != 0) {
        uVar6 = uVar6 - 0x20;
      }
      if ((uVar6 != 0xfffffff9 && uVar6 != 0) && uVar6 != 1) {
        FUN_003351b4();
      }
      FUN_0041bd98();
      FUN_0030da40();
      software_interrupt(0x14);
      uVar6 = *puVar3 >> 0x1b;
      if ((*puVar3 & 0x80000000) != 0) {
        uVar6 = uVar6 - 0x20;
      }
      if ((uVar6 != 0xfffffff9 && uVar6 != 0) && uVar6 != 1) {
        FUN_003351b4();
      }
      if ((*(uint *)(iVar2 + 0xa0) & 7) != 0) {
        FUN_0041bd40();
      }
      return 0;
    }
    return 0;
  }
  FUN_0030da40();
  return iVar5;
}
