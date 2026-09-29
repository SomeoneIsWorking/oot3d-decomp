// OoT3D decomp @ 00168018  name=FUN_00168018  size=268

void FUN_00168018(int param_1,undefined4 param_2)

{
  FUN_00372d4c(DAT_0016812c,DAT_00168124,param_1 + 0xbc,DAT_00168128);
  if (*(short *)(param_1 + 0x1c) == 2) {
    FUN_00372f38(param_1,param_2,param_1 + 0xb9c,0,0);
    FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x6d4,0x17);
    FUN_0035c358(param_1 + 0xba0,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
    *(undefined4 *)(param_1 + 0xb84) = 4;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    return;
  }
  FUN_00372f38(param_1,param_2,param_1 + 0xb9c,0,0);
  FUN_00353c9c(param_1,param_2,param_1 + 0x1a4,0,0,param_1 + 0x228,param_1 + 0x6d4,0x17);
  FUN_0035c358(param_1 + 0xba0,param_1 + 0x1a4,0,0xffffffff,0xffffffff);
  return;
}
