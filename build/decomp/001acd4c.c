// OoT3D decomp @ 001acd4c  name=FUN_001acd4c  size=320

void FUN_001acd4c(int param_1,int param_2)

{
  short sVar1;
  float fVar2;
  float fVar3;
  int iVar4;
  float *pfVar5;
  uint in_fpscr;
  float fVar6;
  float local_18;
  float local_14;
  float local_10;

  FUN_00357fd0(*(undefined4 *)(DAT_001ace8c + param_2),*(undefined4 *)(param_1 + 0x178),
               param_1 + 0x28);
  fVar3 = DAT_001ace94;
  fVar2 = DAT_001ace90;
  iVar4 = *(int *)(param_1 + 0x178);
  *(undefined1 *)(iVar4 + 0x1b7) = *(undefined1 *)(iVar4 + 0x1b6);
  *(undefined1 *)(iVar4 + 0x1b6) = 0;
  fVar6 = (float)VectorUnsignedToFloat
                           ((uint)*(byte *)(param_1 + 0x464),(byte)(in_fpscr >> 0x15) & 3);
  FUN_00342be0(DAT_001ace98,DAT_001ace98,DAT_001ace98,fVar3 - fVar6 * fVar2,param_1,4,2);
  FUN_0035e240(param_1 + 0x1bc,param_1 + 0x148,0,DAT_001ace9c,param_1,0);
  if (*(short *)(param_1 + 0x458) != 0) {
    *(short *)(param_1 + 0x11a) = *(short *)(param_1 + 0x11a) + 1;
    sVar1 = *(short *)(param_1 + 0x458) + -1;
    *(short *)(param_1 + 0x458) = sVar1;
    if (((int)sVar1 & 5U) == 0) {
      pfVar5 = (float *)(DAT_001acea0 + ((int)sVar1 >> 2) * 0xc);
      local_18 = *(float *)(param_1 + 0x28) + *pfVar5;
      local_14 = *(float *)(param_1 + 0x2c) + pfVar5[1];
      local_10 = *(float *)(param_1 + 0x30) + pfVar5[2];
      FUN_0035e710(DAT_001acea4,param_2,param_1,&local_18,0x96,0x96,0x96,0xfa,0xeb,0xf5,0xff);
    }
  }
  return;
}
