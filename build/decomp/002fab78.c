// OoT3D decomp @ 002fab78  name=FUN_002fab78  size=268

undefined4 FUN_002fab78(int param_1,undefined4 param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;

  iVar1 = FUN_0048be30(param_2);
  if (0 < (int)((iVar1 * 4 + param_3 + 7U & 0xfffffffc) - (param_3 + param_4))) {
    return 0;
  }
  *(int *)(param_1 + 0x214) = param_3;
  uVar2 = FUN_0048be30(param_2);
  **(uint **)(param_1 + 0x214) = uVar2;
  if (uVar2 != 0) {
    uVar2 = uVar2 & 1;
    if (uVar2 == 1) {
      *(undefined4 *)(*(int *)(param_1 + 0x214) + 4) = 0;
    }
    uVar4 = (uint)(uVar2 == 1);
    if (uVar2 < **(uint **)(param_1 + 0x214)) {
      do {
        iVar1 = uVar4 + 1;
        uVar2 = uVar2 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x214) + uVar4 * 4 + 4) = 0;
        uVar4 = uVar4 + 2;
        *(undefined4 *)(*(int *)(param_1 + 0x214) + iVar1 * 4 + 4) = 0;
      } while (uVar2 < **(uint **)(param_1 + 0x214));
    }
  }
  *(undefined4 *)(param_1 + 0x10) = param_2;
  iVar1 = FUN_0030c550();
  iVar3 = FUN_0030c20c(iVar1,5);
  *(undefined4 *)(iVar3 + 0xc) = *(undefined4 *)(iVar1 + 0x180);
  *(undefined1 *)(iVar3 + 4) = 0x2f;
  *(int *)(iVar3 + 0x10) = param_1;
  FUN_0030c1e8(iVar1,iVar3);
  return 1;
}
