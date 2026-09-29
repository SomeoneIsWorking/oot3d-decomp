// OoT3D decomp @ 00367f34  name=FUN_00367f34  size=200

void FUN_00367f34(float param_1,int param_2,int param_3,undefined4 *param_4,undefined4 *param_5,
                 undefined4 *param_6,undefined2 param_7,undefined2 param_8,int param_9)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  float fVar5;

  pcVar2 = *(char **)(param_2 + 0x5c28);
  iVar1 = 0;
  if (0 < param_9) {
    while (*pcVar2 != '\0') {
      pcVar2 = pcVar2 + 0x48;
      iVar1 = (int)(short)((short)iVar1 + 1);
      if (param_9 <= iVar1) {
        return;
      }
    }
    *pcVar2 = (char)param_3;
    fVar5 = DAT_00367ffc;
    uVar3 = param_4[1];
    uVar4 = param_4[2];
    *(undefined4 *)(pcVar2 + 4) = *param_4;
    *(undefined4 *)(pcVar2 + 8) = uVar3;
    *(undefined4 *)(pcVar2 + 0xc) = uVar4;
    uVar3 = param_5[1];
    uVar4 = param_5[2];
    *(undefined4 *)(pcVar2 + 0x10) = *param_5;
    *(undefined4 *)(pcVar2 + 0x14) = uVar3;
    *(undefined4 *)(pcVar2 + 0x18) = uVar4;
    uVar3 = param_6[1];
    uVar4 = param_6[2];
    *(undefined4 *)(pcVar2 + 0x1c) = *param_6;
    *(undefined4 *)(pcVar2 + 0x20) = uVar3;
    *(undefined4 *)(pcVar2 + 0x24) = uVar4;
    *(float *)(pcVar2 + 0x30) = param_1 * fVar5;
    *(undefined2 *)(pcVar2 + 0x2c) = param_8;
    uVar3 = DAT_00368000;
    *(undefined2 *)(pcVar2 + 2) = param_7;
    fVar5 = (float)FUN_00371e50(uVar3);
    if (param_3 == 3) {
      uVar3 = 4;
    }
    else {
      uVar3 = 6;
    }
    pcVar2[1] = (char)(int)fVar5;
    uVar3 = FUN_00371178(*(undefined4 *)(DAT_00368004 + 0x20),0,uVar3);
    *(undefined4 *)(pcVar2 + 0x44) = uVar3;
  }
  return;
}
