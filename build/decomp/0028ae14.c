// OoT3D decomp @ 0028ae14  name=FUN_0028ae14  size=232

void FUN_0028ae14(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;

  FUN_003510b0(param_1,DAT_0028aefc);
  FUN_003532e8(param_1,1);
  FUN_00372f38(param_1,param_2,param_1 + 0x1c4,0xc,0);
  uVar1 = FUN_00353fd4(param_1,param_2,8);
  uVar1 = FUN_00353ec8(param_2,param_2 + 0xae8,param_1,uVar1);
  *(undefined4 *)(param_1 + 0x1a4) = uVar1;
  iVar2 = FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(float *)(param_1 + 0x2c) + DAT_0028af04,
                       *(float *)(param_1 + 0x30) + DAT_0028af00,param_2 + 0x208c,param_1,param_2,
                       DAT_0028af08,0,0,0,2);
  if (iVar2 == 0) {
    FUN_00374428(param_1);
  }
  else {
    *(undefined4 *)(param_1 + 0x1bc) = DAT_0028af0c;
  }
  return;
}
