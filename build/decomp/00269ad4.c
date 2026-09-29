// OoT3D decomp @ 00269ad4  name=FUN_00269ad4  size=112

void FUN_00269ad4(int param_1)

{
  if (*(short *)(param_1 + 0x1c) == 10) {
    *(undefined1 *)(*(int *)(param_1 + 0x634) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x634),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x634),0);
    return;
  }
  FUN_0035e240(param_1 + 0x5b0,param_1 + 0x148,DAT_00269b48,DAT_00269b44,param_1,0);
  return;
}
