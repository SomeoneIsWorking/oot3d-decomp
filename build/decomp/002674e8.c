// OoT3D decomp @ 002674e8  name=FUN_002674e8  size=112

void FUN_002674e8(int param_1)

{
  if (*(short *)(param_1 + 0x1c) == 10) {
    *(undefined1 *)(*(int *)(param_1 + 0x69c) + 0xac) = 1;
    FUN_003721e0(*(undefined4 *)(param_1 + 0x69c),param_1 + 0x148);
    FUN_00372170(*(undefined4 *)(param_1 + 0x69c),0);
    return;
  }
  FUN_0035e240(param_1 + 0x208,param_1 + 0x148,DAT_0026755c,DAT_00267558,param_1,0);
  return;
}
