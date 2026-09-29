// OoT3D decomp @ 0031e1b0  name=FUN_0031e1b0  size=96

void FUN_0031e1b0(int param_1)

{
  int iVar1;
  undefined4 extraout_r2;
  undefined4 extraout_r3;
  undefined4 unaff_r4;
  undefined4 unaff_lr;

  FUN_00404008(param_1 + 0x388);
  FUN_00313b00(param_1 + 0x16c);
  FUN_0030c428(param_1);
  FUN_0031e210(*(undefined4 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x440));
  FUN_0031e210(*(undefined4 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x43c));
  FUN_0031e210(*(undefined4 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x438));
  FUN_0031e210(*(undefined4 *)(param_1 + 0x448),*(undefined4 *)(param_1 + 0x434));
  iVar1 = *(int *)(param_1 + 0x448);
  FUN_0047d99c(iVar1 + 0x18,*(undefined4 *)(param_1 + 0x444),extraout_r2,extraout_r3,unaff_r4,
               unaff_lr);
  *(int *)(iVar1 + 0x54) = *(int *)(iVar1 + 0x54) + -1;
  return;
}
