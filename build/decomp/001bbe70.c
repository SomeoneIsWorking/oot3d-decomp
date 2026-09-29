// OoT3D decomp @ 001bbe70  name=FUN_001bbe70  size=504

void FUN_001bbe70(int param_1,undefined4 param_2)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  char *pcVar6;
  short sVar7;
  short sVar8;
  uint in_fpscr;
  float fVar9;
  float fVar10;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [12];
  float local_44;
  float local_40;
  float local_3c;
  float local_38;

  pcVar6 = (char *)(param_1 + 0xbcc);
  FUN_0035619c(param_2,auStack_50,auStack_60,0xaa,0x82,0x5a,0xff,100,0x3c,0x14);
  FUN_00342988(*(undefined4 *)(param_1 + 0x11fc),auStack_60,0xffffffff);
  fVar5 = DAT_001bc078;
  fVar4 = DAT_001bc074;
  fVar3 = DAT_001bc070;
  fVar2 = DAT_001bc06c;
  fVar1 = DAT_001bc068;
  sVar8 = 0;
  sVar7 = 0;
  do {
    if (*pcVar6 != '\0') {
      sVar8 = sVar8 + 1;
      fVar9 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[2],(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[1],(byte)(in_fpscr >> 0x15) & 3);
      local_44 = (float)VectorSignedToFloat((int)(short)(int)((fVar1 / fVar9) * fVar10),
                                            (byte)(in_fpscr >> 0x15) & 3);
      local_44 = local_44 * fVar2;
      local_38 = *(float *)(pcVar6 + 4);
      local_40 = local_38 * fVar3;
      local_3c = local_38 * fVar3;
      local_38 = local_38 * fVar3;
      fVar9 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[2],(byte)(in_fpscr >> 0x15) & 3);
      fVar10 = (float)VectorUnsignedToFloat((uint)(byte)pcVar6[1],(byte)(in_fpscr >> 0x15) & 3);
      FUN_003693b4(*(undefined4 *)(param_1 + 0x11fc),pcVar6 + 0x14,0,&local_40,auStack_50,
                   (int)(short)(int)(fVar5 - fVar10 * (fVar4 / fVar9)));
    }
    sVar7 = sVar7 + 1;
    pcVar6 = pcVar6 + 0x38;
  } while (sVar7 < 0x14);
  if (sVar8 != 0) {
    FUN_00371eac(*(undefined4 *)(*(int *)(param_1 + 0x11fc) + 8),0);
  }
  FUN_0035e3a4(param_1 + 0x1030,0,(int)*(short *)(DAT_001bc07c + param_1));
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),2);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),3);
  FUN_0036932c(*(undefined4 *)(param_1 + 0x1cc),0);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,DAT_001bc084,DAT_001bc080,param_1,0);
  FUN_0035e330(param_1 + 0x1030);
  return;
}
