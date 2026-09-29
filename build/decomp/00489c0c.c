// OoT3D decomp @ 00489c0c  name=FUN_00489c0c  size=72

void FUN_00489c0c(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;

  FUN_0034338c(param_1 + 0xc,param_2,10);
  iVar1 = *(int *)(param_1 + 0x68);
  FUN_0034338c(iVar1 + 0x14,param_1 + 0xc,10,extraout_r3,unaff_r4,unaff_lr);
  *(ushort *)(iVar1 + 0x7c) = *(ushort *)(iVar1 + 0x7c) | 0x10;
  return;
}
