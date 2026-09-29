// OoT3D decomp @ 00419bb0  name=FUN_00419bb0  size=496

undefined4 FUN_00419bb0(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int *piVar4;
  undefined4 *puVar5;
  uint extraout_r1;
  uint uVar6;
  uint uVar7;
  bool bVar8;

  FUN_00307538();
  bVar8 = *(int *)(param_1 + 0x20) != 0;
  uVar6 = extraout_r1;
  if (bVar8) {
    uVar6 = (uint)*(byte *)(param_1 + 0x28);
  }
  if (bVar8 && uVar6 != 0) {
    FUN_0034fc68();
  }
  *(undefined4 *)(param_1 + 0x20) = 0;
  *(undefined4 *)(param_1 + 0x24) = 0;
  *(undefined1 *)(param_1 + 0x28) = 0;
  iVar1 = FUN_00301300(u_rom__misc_hint_list_qhm_00419da0,0,0,0);
  FUN_0031b9c0(iVar1,1);
  iVar2 = *(int *)(iVar1 + 4);
  *(int *)(param_1 + 0x24) = iVar2;
  if (iVar2 != 0) {
    iVar2 = thunk_FUN_0035010c(*(undefined4 *)(param_1 + 0x24),0x9c00000);
    *(int *)(param_1 + 0x20) = iVar2;
    if (iVar2 != 0) {
      uVar3 = FUN_00303ea8(iVar1);
      FUN_0034338c(*(undefined4 *)(param_1 + 0x20),uVar3,*(undefined4 *)(param_1 + 0x24));
      FUN_00301260(iVar1);
      FUN_0031b99c(iVar1);
      *(undefined1 *)(param_1 + 0x28) = 1;
      goto LAB_00419c98;
    }
  }
  FUN_00301260(iVar1);
  FUN_0031b99c(iVar1);
LAB_00419c98:
  uVar6 = DAT_00419dd0;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_1 + 0x20);
  uVar6 = (uint)((ulonglong)*(uint *)(param_1 + 0x24) * (ulonglong)uVar6 >> 0x25);
  *(uint *)(param_1 + 0x30) = uVar6;
  uVar7 = 0;
  if (uVar6 != 0) {
    do {
      uVar6 = uVar7 + 1;
      piVar4 = (int *)(*(int *)(param_1 + 0x2c) + uVar7 * 0x28);
      *(undefined1 *)(param_1 + *piVar4 * 0x10 + 0x34) = 1;
      *(char *)(param_1 + *piVar4 * 0x10 + 0x35) = (char)piVar4[1];
      *(int *)(param_1 + *piVar4 * 0x10 + 0x38) = piVar4[2];
      *(int *)(param_1 + *piVar4 * 0x10 + 0x3c) = piVar4[3];
      uVar7 = uVar6;
    } while (uVar6 < *(uint *)(param_1 + 0x30));
  }
  puVar5 = (undefined4 *)(param_1 + 0x30);
  iVar1 = 0x80;
  *(undefined1 *)(param_1 + 4) = 1;
  do {
    puVar5[4] = 8;
    iVar1 = iVar1 + -1;
    puVar5 = puVar5 + 8;
    *puVar5 = 8;
  } while (iVar1 != 0);
  FUN_0030661c(param_1);
  FUN_00343280(param_1 + 0x1038,DAT_00419dd4);
  iVar1 = 0;
  do {
    iVar2 = param_1 + iVar1 * 0x10;
    if (*(char *)(iVar2 + 0x34) != '\0') {
      piVar4 = (int *)(param_1 + (uint)*(byte *)(iVar2 + 0x35) * 0x84 + 0x1038);
      piVar4[*piVar4 + 1] = iVar1;
      *piVar4 = *piVar4 + 1;
    }
    iVar1 = iVar1 + 1;
  } while (iVar1 < 0x100);
  return 1;
}
