// OoT3D decomp @ 00366f60  name=FUN_00366f60  size=240

void FUN_00366f60(float param_1,undefined4 param_2,int param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined4 *param_6,undefined2 param_7)

{
  short sVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  float fVar5;

  pcVar3 = *(char **)(param_3 + 0x5c28);
  sVar1 = 0;
  do {
    if (*pcVar3 == '\0') {
      *pcVar3 = '\x02';
      fVar5 = DAT_00367050;
      uVar2 = param_4[1];
      uVar4 = param_4[2];
      *(undefined4 *)(pcVar3 + 4) = *param_4;
      *(undefined4 *)(pcVar3 + 8) = uVar2;
      *(undefined4 *)(pcVar3 + 0xc) = uVar4;
      uVar2 = param_5[1];
      uVar4 = param_5[2];
      *(undefined4 *)(pcVar3 + 0x10) = *param_5;
      *(undefined4 *)(pcVar3 + 0x14) = uVar2;
      *(undefined4 *)(pcVar3 + 0x18) = uVar4;
      uVar2 = param_6[1];
      uVar4 = param_6[2];
      *(undefined4 *)(pcVar3 + 0x1c) = *param_6;
      *(undefined4 *)(pcVar3 + 0x20) = uVar2;
      *(undefined4 *)(pcVar3 + 0x24) = uVar4;
      *(float *)(pcVar3 + 0x34) = param_1 * fVar5;
      *(undefined4 *)(pcVar3 + 0x38) = DAT_00367054;
      *(undefined4 *)(pcVar3 + 0x40) = param_2;
      fVar5 = (float)FUN_00371e50(DAT_00367058);
      uVar2 = DAT_0036705c;
      *(short *)(pcVar3 + 0x2e) = (short)(int)fVar5 + 200;
      *(undefined2 *)(pcVar3 + 0x30) = param_7;
      fVar5 = (float)FUN_00371e50(uVar2);
      *(short *)(pcVar3 + 2) = (short)(int)fVar5;
      uVar2 = FUN_003675f8(*(undefined4 *)(pcVar3 + 0x18),*(undefined4 *)(pcVar3 + 0x10));
      *(undefined4 *)(pcVar3 + 0x48) = uVar2;
      fVar5 = (float)FUN_003675f8(SQRT(*(float *)(pcVar3 + 0x10) * *(float *)(pcVar3 + 0x10) +
                                       *(float *)(pcVar3 + 0x18) * *(float *)(pcVar3 + 0x18)),
                                  *(undefined4 *)(pcVar3 + 0x14));
      *(float *)(pcVar3 + 0x44) = -fVar5;
      return;
    }
    sVar1 = sVar1 + 1;
    pcVar3 = pcVar3 + 0x4c;
  } while (sVar1 < 0x96);
  return;
}
