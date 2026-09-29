// OoT3D decomp @ 004552a0  name=FUN_004552a0  size=444

undefined4 FUN_004552a0(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  uint extraout_r1;
  uint uVar5;
  uint extraout_r1_00;
  int iVar6;
  int iVar7;
  bool bVar8;

  FUN_002ded74();
  iVar6 = DAT_0045545c;
  iVar7 = 0;
  uVar5 = extraout_r1;
  while( true ) {
    iVar1 = param_1 + iVar7 * 0x10;
    bVar8 = *(int *)(iVar1 + 0x14) != 0;
    if (bVar8) {
      uVar5 = (uint)*(byte *)(iVar1 + 0x1c);
    }
    if (bVar8 && uVar5 != 0) {
      FUN_0034fc68();
    }
    *(undefined4 *)(iVar1 + 0x14) = 0;
    *(undefined4 *)(iVar1 + 0x18) = 0;
    *(undefined1 *)(iVar1 + 0x1c) = 0;
    iVar2 = FUN_00301300(iVar6 + iVar7 * 0x80,0,0);
    FUN_0031b9c0(iVar2,1);
    iVar3 = *(int *)(iVar2 + 4);
    *(int *)(iVar1 + 0x18) = iVar3;
    if (iVar3 == 0) break;
    iVar3 = thunk_FUN_0035010c(*(undefined4 *)(iVar1 + 0x18),0x9c00000);
    *(int *)(iVar1 + 0x14) = iVar3;
    if (iVar3 == 0) break;
    uVar4 = FUN_00303ea8(iVar2);
    FUN_0034338c(*(undefined4 *)(iVar1 + 0x14),uVar4,*(undefined4 *)(iVar1 + 0x18));
    FUN_00301260(iVar2);
    FUN_0031b99c(iVar2);
    iVar7 = iVar7 + 1;
    *(undefined1 *)(iVar1 + 0x1c) = 1;
    uVar5 = extraout_r1_00;
    if (0x11 < iVar7) {
      iVar6 = 0;
      do {
        iVar1 = param_1 + iVar6 * 0x54;
        FUN_002ff8e0(iVar1 + 0x130,*(undefined4 *)(param_1 + iVar6 * 0x10 + 0x54),0);
        iVar7 = iVar6 * 4;
        iVar6 = iVar6 + 1;
        *(int *)(param_1 + iVar7 + 0x5c8) = iVar1 + 0x130;
      } while (iVar6 < 0xe);
      FUN_002db998(param_1 + 0x600,param_1 + 0x5c8,0xe,*(undefined4 *)(param_1 + 0x14),
                   *(undefined4 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x24),
                   *(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x34),
                   *(undefined4 *)(param_1 + 0x38),*(undefined4 *)(param_1 + 0x44),
                   *(undefined4 *)(param_1 + 0x48),0,0,param_1 + 8);
      *(undefined1 *)(param_1 + 0xc) = 1;
      return 1;
    }
  }
  FUN_00301260(iVar2);
  FUN_0031b99c(iVar2);
  FUN_002ded74(param_1);
  return 0;
}
