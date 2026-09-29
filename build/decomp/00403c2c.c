// OoT3D decomp @ 00403c2c  name=FUN_00403c2c  size=156

undefined4 FUN_00403c2c(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  undefined1 auStack_1c [4];

  if ((*(int *)(*(int *)(param_1 + 4) + 4) != 0) && (iVar1 = FUN_0030b780(), iVar1 != 0)) {
    uVar2 = FUN_0040e1f0(auStack_1c,*(undefined4 *)(param_2 + param_3 * 4 + 0xe8),param_4,
                         *(undefined4 *)(*(int *)(param_1 + 4) + 4),*(undefined4 *)(param_1 + 4),
                         *(undefined4 *)(param_2 + 0x38));
    iVar1 = FUN_0030c7cc();
    *(int *)(iVar1 + 0x1f0) = *(int *)(iVar1 + 0x1f0) + 1;
    return uVar2;
  }
  return 0;
}
