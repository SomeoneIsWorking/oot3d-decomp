// OoT3D decomp @ 00368498  name=FUN_00368498  size=192

void FUN_00368498(float param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,int param_6)

{
  short sVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  float fVar5;

  pcVar3 = *(char **)(param_2 + 0x5c28);
  sVar1 = 0;
  do {
    if (*pcVar3 == '\0') {
      *pcVar3 = '\x06';
      fVar5 = DAT_00368558;
      uVar2 = param_3[1];
      uVar4 = param_3[2];
      *(undefined4 *)(pcVar3 + 4) = *param_3;
      *(undefined4 *)(pcVar3 + 8) = uVar2;
      *(undefined4 *)(pcVar3 + 0xc) = uVar4;
      uVar2 = param_4[1];
      uVar4 = param_4[2];
      *(undefined4 *)(pcVar3 + 0x10) = *param_4;
      *(undefined4 *)(pcVar3 + 0x14) = uVar2;
      *(undefined4 *)(pcVar3 + 0x18) = uVar4;
      uVar2 = param_5[1];
      uVar4 = param_5[2];
      *(undefined4 *)(pcVar3 + 0x1c) = *param_5;
      *(undefined4 *)(pcVar3 + 0x20) = uVar2;
      *(undefined4 *)(pcVar3 + 0x24) = uVar4;
      *(float *)(pcVar3 + 0x30) = param_1 * fVar5;
      *(short *)(pcVar3 + 0x2c) = (short)param_6;
      pcVar3[0x2e] = '\0';
      uVar2 = DAT_0036855c;
      pcVar3[0x2f] = '\0';
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      fVar5 = (float)FUN_00371e50(uVar2);
      uVar2 = 6;
      if (param_6 == 0) {
        uVar2 = 4;
      }
      pcVar3[1] = (char)(int)fVar5;
      uVar2 = FUN_00371178(*(undefined4 *)(DAT_00368560 + 0x20),0,uVar2);
      *(undefined4 *)(pcVar3 + 0x44) = uVar2;
      return;
    }
    sVar1 = sVar1 + 1;
    pcVar3 = pcVar3 + 0x48;
  } while (sVar1 < 0x96);
  return;
}
