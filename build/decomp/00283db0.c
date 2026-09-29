// OoT3D decomp @ 00283db0  name=FUN_00283db0  size=204

void FUN_00283db0(int param_1,int param_2)

{
  *(short *)(param_1 + 0x204) = *(short *)(param_1 + 0x204) + 1;
  if (*(short *)(param_1 + 0x206) != 0) {
    *(short *)(param_1 + 0x206) = *(short *)(param_1 + 0x206) + -1;
  }
  if ((*(byte *)(param_1 + 0x1bc) & 2) == 0) {
    if (*(short *)(param_1 + 0x206) != 0) {
      FUN_0037572c(DAT_00283e7c,param_1);
      FUN_0037632c(param_1,param_1 + 0x1ac);
      FUN_003761f0(param_2,param_2 + 0x5c78,param_1 + 0x1ac);
      FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1ac);
      FUN_00376864(param_1);
      FUN_00376340(DAT_00283e80,DAT_00283e80,DAT_00283e80,param_2,param_1,7);
      return;
    }
  }
  else {
    *(byte *)(param_1 + 0x1bd) = *(byte *)(param_1 + 0x1bd) & 0xfd;
  }
  FUN_00374428(param_1);
  return;
}
