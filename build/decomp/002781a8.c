// OoT3D decomp @ 002781a8  name=FUN_002781a8  size=160

void FUN_002781a8(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_003510b0(param_1,DAT_00278248);
  FUN_003532e8(param_1,1);
  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0xd,0);
  uVar1 = FUN_00353fd4(param_1,param_2,0xc);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  uVar1 = DAT_00278250;
  *(float *)(param_1 + 0xc) = *(float *)(param_1 + 0xc) + DAT_0027824c;
  *(undefined4 *)(param_1 + 0x1bc) = uVar1;
  return;
}
