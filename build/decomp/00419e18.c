// OoT3D decomp @ 00419e18  name=FUN_00419e18  size=468

void FUN_00419e18(int param_1)

{
  char cVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 local_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;

  if (*(int *)(param_1 + 0x10) != 0) {
    FUN_00301260();
    FUN_0031b99c(*(undefined4 *)(param_1 + 0x10));
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  if (*(int *)(param_1 + 0x14) != 0) {
    FUN_00301260();
    FUN_0031b99c(*(undefined4 *)(param_1 + 0x14));
    *(undefined4 *)(param_1 + 0x14) = 0;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_00301260();
    FUN_0031b99c(*(undefined4 *)(param_1 + 0x18));
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  FUN_002ffacc(param_1 + 0x44);
  *(undefined4 *)(param_1 + 0xf3c) = 0;
  FUN_0041ef94(param_1 + 0x44);
  FUN_0044a04c();
  iVar3 = FUN_00422d00();
  iVar4 = FUN_0041b4dc();
  if ((iVar3 == 1) && (iVar4 != 1)) {
    if (iVar4 == 2) {
      iVar3 = 5;
      goto code_r0x00419ef0;
    }
    if (iVar4 == 5) {
      iVar3 = 7;
      goto code_r0x00419ef0;
    }
  }
  iVar3 = 1;
code_r0x00419ef0:
  FUN_0044a114();
  puVar2 = DAT_00419fec;
  *(int *)(param_1 + 0xf3c) = iVar3;
  local_1c = *puVar2;
  uStack_14 = puVar2[2];
  uStack_18 = puVar2[1];
  cVar1 = *(char *)((int)&local_1c + iVar3);
  if (cVar1 == '\0') {
    uVar5 = FUN_00301300(u_rom__message_jp_jp_qm_0041a050,0,0);
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    uVar5 = FUN_00301300(u_rom__message_jp_std16_qbf_0041a07c,0,0);
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    uVar5 = FUN_00301300(u_rom__message_jp_ruby8_qbf_0041a0b0,0,0);
    *(undefined4 *)(param_1 + 0x18) = uVar5;
    return;
  }
  if (cVar1 == '\x01') {
    uVar5 = FUN_00301300(u_rom__message_us_us_qm_0041a0e4,0,0);
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    uVar5 = FUN_00301300(u_rom__message_us_ltn16_qbf_0041a110,0,0);
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 0x18) = 0;
    return;
  }
  if (cVar1 == '\x02') {
    uVar5 = FUN_00301300(u_rom__message_eu_eu_qm_00419ff0,0,0);
    *(undefined4 *)(param_1 + 0x10) = uVar5;
    uVar5 = FUN_00301300(u_rom__message_eu_ltn16_qbf_0041a01c,0,0);
    *(undefined4 *)(param_1 + 0x14) = uVar5;
    *(undefined4 *)(param_1 + 0x18) = 0;
  }
  return;
}
