// OoT3D decomp @ 0018f6e8  name=FUN_0018f6e8  size=248

void FUN_0018f6e8(int param_1,undefined4 param_2)

{
  byte bVar1;
  float *pfVar2;
  float local_18;
  float local_14;
  float local_10;

  FUN_00357750(0,param_1 + 0x660,param_1 + 0x148);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_0018f7e0,param_1,0);
  if (*(char *)(param_1 + 0x65b) != '\0') {
    bVar1 = *(char *)(param_1 + 0x65b) - 1;
    *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
    *(byte *)(param_1 + 0x65b) = bVar1;
    if ((bVar1 & 3) == 0) {
      pfVar2 = (float *)(DAT_0018f7e4 + (uint)(bVar1 >> 2) * 0xc);
      local_18 = *(float *)(param_1 + 0x28) + *pfVar2;
      local_14 = *(float *)(param_1 + 0x2c) + pfVar2[1];
      local_10 = *(float *)(param_1 + 0x30) + pfVar2[2];
      FUN_0035e710(DAT_0018f7e8,param_2,param_1,&local_18,0x96,0x96,0x96,0xfa,0xeb,0xf5,0xff);
    }
  }
  return;
}
