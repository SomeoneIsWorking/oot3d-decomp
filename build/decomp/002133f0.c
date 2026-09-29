// OoT3D decomp @ 002133f0  name=FUN_002133f0  size=156

undefined4 FUN_002133f0(int param_1,undefined4 param_2,undefined1 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;

  iVar3 = *(int *)(param_1 + 0x20ac);
  iVar2 = FUN_0035db20(param_1,iVar3);
  if (iVar2 == 0) {
    FUN_0036b0fc(param_1,iVar3);
    FUN_0036b02c(param_1,iVar3);
    FUN_0036055c(param_1,iVar3,DAT_0021348c,0);
    uVar1 = DAT_00213490;
    *(undefined1 *)(iVar3 + 0x12bc) = param_3;
    *(undefined4 *)(iVar3 + 0x12c0) = param_2;
    *(undefined4 *)(iVar3 + 0x6c) = uVar1;
    *(undefined4 *)(iVar3 + 0x221c) = uVar1;
    *(undefined1 *)(iVar3 + 0x1749) = 0;
    iVar2 = DAT_00213498;
    *(undefined4 *)(DAT_00213498 + 0xcc) = DAT_00213494;
    *(undefined1 *)(iVar2 + 0xd4) = 0;
    return 1;
  }
  return 0;
}
