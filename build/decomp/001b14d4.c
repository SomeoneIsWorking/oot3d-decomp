// OoT3D decomp @ 001b14d4  name=FUN_001b14d4  size=420

void FUN_001b14d4(int param_1,undefined4 param_2)

{
  char cVar1;
  float fVar2;
  undefined4 uVar3;
  float fVar4;
  char *pcVar5;
  short sVar6;
  uint in_fpscr;
  float fVar7;
  float fVar8;
  undefined1 auStack_64 [16];
  undefined1 auStack_54 [16];
  float local_44;
  float local_40;
  undefined4 local_3c;
  undefined4 local_38;
  undefined4 local_34;
  undefined4 local_30;

  sVar6 = 0;
  pcVar5 = (char *)(param_1 + 0x6d0);
  do {
    if (*pcVar5 != '\0') {
      cVar1 = pcVar5[1];
      pcVar5[1] = cVar1 + -1;
      if ((char)(cVar1 + -1) == '\0') {
        *pcVar5 = '\0';
      }
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
    sVar6 = sVar6 + 1;
    pcVar5 = pcVar5 + 0x38;
  } while (sVar6 < 0x14);
  pcVar5 = (char *)(param_1 + 0x6d0);
  FUN_0035619c(param_2,auStack_54,auStack_64,0xaa,0x82,0x5a,0xff,100,0x3c,0x14);
  FUN_00342988(*(undefined4 *)(param_1 + 0xb30),auStack_64,0xffffffff);
  fVar4 = DAT_001b1784;
  uVar3 = DAT_001b1780;
  fVar2 = DAT_001b177c;
  sVar6 = 0;
  do {
    if (*pcVar5 != '\0') {
      local_38 = *(undefined4 *)(pcVar5 + 0x14);
      local_34 = *(undefined4 *)(pcVar5 + 0x18);
      local_30 = *(undefined4 *)(pcVar5 + 0x1c);
      local_44 = *(float *)(pcVar5 + 4) * fVar2;
      fVar7 = (float)VectorUnsignedToFloat((uint)(byte)pcVar5[2],(byte)(in_fpscr >> 0x15) & 3);
      fVar8 = (float)VectorUnsignedToFloat((uint)(byte)pcVar5[1],(byte)(in_fpscr >> 0x15) & 3);
      local_40 = local_44;
      local_3c = uVar3;
      FUN_003693b4(*(undefined4 *)(param_1 + 0xb30),&local_38,0,&local_44,auStack_54,
                   (int)(short)(0x10 - (short)(int)((fVar4 / fVar7) * fVar8)));
    }
    sVar6 = sVar6 + 1;
    pcVar5 = pcVar5 + 0x38;
  } while (sVar6 < 0x14);
  FUN_00371eac(*(undefined4 *)(*(int *)(param_1 + 0xb30) + 8),0);
  FUN_0035e240(param_1 + 0x1a4,param_1 + 0x148,0,DAT_001b1788,param_1,0);
  return;
}
