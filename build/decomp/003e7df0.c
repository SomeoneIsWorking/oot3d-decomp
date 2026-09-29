// OoT3D decomp @ 003e7df0  name=FUN_003e7df0  size=84

void FUN_003e7df0(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;

  iVar1 = FUN_0036e864(param_2,(int)*(short *)(param_1 + 0x1c),param_3,param_4,param_4);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x1a4) = DAT_003e7e44;
    FUN_00371808(param_2,DAT_003e7e48,0xffffff9d,param_1,0);
    *(undefined2 *)(DAT_003e7e4c + param_1) = 0x35;
  }
  return;
}
