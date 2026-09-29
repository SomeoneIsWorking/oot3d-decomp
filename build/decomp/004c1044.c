// OoT3D decomp @ 004c1044  name=FUN_004c1044  size=72

void FUN_004c1044(int param_1,int param_2,int param_3)

{
  param_3 = param_3 + DAT_004c108c;
  if (*(char *)((uint)*(byte *)(param_3 + 0x84) + DAT_004c1090) == '\x1a' && param_2 == 0x14) {
    param_2 = 0x1f;
  }
  *(char *)((uint)*(byte *)(param_3 + 0x84) + DAT_004c1090) = (char)param_2;
  *(char *)(param_3 + 0x80) = (char)param_2;
  *(short *)(param_1 + 0x3106) = (short)param_2;
  *(undefined1 *)(DAT_004c1094 + param_3) = 0;
  return;
}
