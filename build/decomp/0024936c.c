// OoT3D decomp @ 0024936c  name=FUN_0024936c  size=176

void FUN_0024936c(int param_1,undefined4 param_2)

{
  short sVar1;

  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_00249420,DAT_0024941c,param_1,0);
  if (*(short *)(param_1 + 0x986) != 0) {
    sVar1 = *(short *)(param_1 + 0x986) + -1;
    *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
    *(short *)(param_1 + 0x986) = sVar1;
    if (((int)sVar1 & 3U) == 0) {
      FUN_0035e710(DAT_00249424,param_2,param_1,param_1 + ((int)sVar1 >> 2) * 0xc + 0x9cc,0x96,0x96,
                   0x96,0xfa,0xeb,0xf5,0xff);
    }
  }
  return;
}
