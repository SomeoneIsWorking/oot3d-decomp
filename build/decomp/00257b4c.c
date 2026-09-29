// OoT3D decomp @ 00257b4c  name=FUN_00257b4c  size=116

undefined4 FUN_00257b4c(int param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;

  iVar1 = DAT_00257bc0;
  if (-1 < *(int *)(DAT_00257bc0 + *(short *)(param_1 + 0x1c) * 4)) {
    FUN_003532e8(param_1,0,param_3,param_4,0);
    uVar2 = FUN_00353fd4(param_1,param_2,*(undefined4 *)(iVar1 + *(short *)(param_1 + 0x1c) * 4));
    uVar2 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar2);
    *(undefined4 *)(param_1 + 0x1a4) = uVar2;
  }
  return 1;
}
