// OoT3D decomp @ 003446e8  name=FUN_003446e8  size=464

undefined4
FUN_003446e8(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5
            ,undefined4 param_6,undefined4 param_7,undefined4 param_8,int param_9)

{
  int *piVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  int local_f4;
  int iStack_f0;
  int iStack_ec;
  undefined1 auStack_e8 [68];
  undefined1 auStack_a4 [16];
  undefined4 auStack_94 [20];

  if (((*DAT_003448b8 & 1) == 0) && (iVar3 = FUN_003679b4(DAT_003448b8), iVar3 != 0)) {
    FUN_0036788c(DAT_003448bc);
  }
  piVar1 = DAT_003448cc;
  iVar3 = DAT_003448c8;
  *(undefined4 *)(*(int *)(param_2 + 0xf0) + 0xf4) = 0;
  iVar5 = *(int *)(iVar3 + 0xf3c);
  local_f4 = *piVar1;
  iStack_f0 = piVar1[1];
  iStack_ec = piVar1[2];
  uVar2 = *(undefined1 *)((int)&local_f4 + iVar5);
  iVar4 = FUN_0044d548(iVar3,param_3,auStack_a4);
  uVar6 = 0;
  if (iVar4 != 0) {
    uVar6 = auStack_94[iVar5 * 2];
    uVar7 = auStack_94[iVar5 * 2 + 1];
    FUN_002ccfdc(param_2 + 8);
    FUN_0037172c(param_2 + 8,param_2 + 0xf4);
    *(int *)(param_2 + 0xec) = iVar5;
    FUN_002ccf74(auStack_e8);
    FUN_0044c9bc(auStack_e8,uVar6,uVar7,uVar2,param_2 + 8);
    if (param_9 == 0) {
      iVar4 = *(int *)(param_2 + 0xf0);
      if ((*(char *)(iVar3 + 0xf) == '\0') || (iVar3 = FUN_002e2424(iVar3), iVar3 != 0)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      *(undefined1 *)(iVar4 + 0x18) = uVar2;
    }
    else if (param_9 == 1) {
      *(undefined1 *)(*(int *)(param_2 + 0xf0) + 0x18) = 1;
    }
    else if (param_9 == 2) {
      *(undefined1 *)(*(int *)(param_2 + 0xf0) + 0x18) = 0;
    }
    FUN_0044caec(*(undefined4 *)(param_2 + 0xf0),*(undefined4 *)(param_2 + 0xdc),
                 *(undefined4 *)(param_2 + 0xe0));
    local_f4 = 1 - (uint)*(byte *)(param_2 + 0x1c0);
    if (1 < *(byte *)(param_2 + 0x1c0)) {
      local_f4 = 0;
    }
    iVar3 = FUN_002daaf0(param_1,*(undefined4 *)(param_2 + 0xf0),param_4,param_5,param_6,param_7);
    if (iVar3 == 0) {
      uVar6 = 0;
    }
    else {
      *(undefined1 *)(param_2 + 0x1c0) = 0;
      uVar6 = FUN_002da99c(*(undefined4 *)(param_2 + 0xf0),param_8);
    }
  }
  return uVar6;
}
