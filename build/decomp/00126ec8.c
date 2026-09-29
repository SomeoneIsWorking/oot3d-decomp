// OoT3D decomp @ 00126ec8  name=FUN_00126ec8  size=116

void FUN_00126ec8(int param_1)

{
  if (*(short *)(*(int *)(param_1 + 0x1dc) + DAT_00126f3c + *(short *)(param_1 + 0x1c) * 2) != 2) {
    FUN_00373500(*(undefined4 *)(param_1 + 0x1c4),DAT_00126f44,DAT_00126f40,param_1 + 0x2c);
    if ((int)ABS(*(float *)(param_1 + 0x2c) - *(float *)(param_1 + 0x1c4)) <= DAT_00126f48) {
      *(float *)(param_1 + 0x2c) = *(float *)(param_1 + 0x1c4);
      *(undefined2 *)(param_1 + 0x1d8) = 0;
      *(undefined4 *)(param_1 + 0x1bc) = DAT_00126f4c;
    }
  }
  return;
}
