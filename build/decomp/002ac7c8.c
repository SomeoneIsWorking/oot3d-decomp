// OoT3D decomp @ 002ac7c8  name=FUN_002ac7c8  size=168

void FUN_002ac7c8(int param_1,int param_2)

{
  undefined4 uVar1;

  FUN_003532e8(param_1,1);
  FUN_003510b0(param_1,DAT_002ac870);
  FUN_00372f38(param_1,param_2,param_1 + 0x1c0,2,0);
  uVar1 = FUN_00353fd4(param_1,param_2,1);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  if (*(int *)(DAT_002ac874 + 4) == 0) {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_002ac878;
  }
  else {
    FUN_00374428(param_1);
  }
  return;
}
