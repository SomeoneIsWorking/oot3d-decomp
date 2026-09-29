// OoT3D decomp @ 0018f5f4  name=FUN_0018f5f4  size=228

void FUN_0018f5f4(int param_1,int param_2)

{
  short sVar1;

  if ((*(short *)(param_1 + 0x1c) < 4) || (*(int *)(param_1 + 0x128) == 0)) {
    FUN_00357fd0(*(undefined4 *)(DAT_0018f6d8 + param_2),*(undefined4 *)(param_1 + 0x178),
                 param_1 + 0x28);
    FUN_0035e240(param_1 + 0x1e0,param_1 + 0x148,DAT_0018f6e0,DAT_0018f6dc,param_1,0);
  }
  if (*(short *)(param_1 + 0x1c64) != 0) {
    sVar1 = *(short *)(param_1 + 0x1c64) + -1;
    *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
    *(short *)(param_1 + 0x1c64) = sVar1;
    if (((int)sVar1 & 3U) == 0) {
      FUN_00347d24(DAT_0018f6e4,param_2,param_1,param_1 + ((int)sVar1 >> 2) * 6 + 0x1a4,0x96,0x96,
                   0x96,0xfa,0xeb,0xf5,0xff);
    }
  }
  return;
}
