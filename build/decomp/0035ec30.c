// OoT3D decomp @ 0035ec30  name=FUN_0035ec30  size=192

void FUN_0035ec30(float param_1,int param_2,undefined4 *param_3,undefined4 *param_4,
                 undefined4 *param_5,undefined2 param_6,int param_7)

{
  int iVar1;
  undefined4 uVar2;
  char *pcVar3;
  undefined4 uVar4;
  float fVar5;

  pcVar3 = *(char **)(param_2 + 0x5c28);
  iVar1 = 0;
  if (0 < param_7) {
    while (*pcVar3 != '\0') {
      pcVar3 = pcVar3 + 0x48;
      iVar1 = (int)(short)((short)iVar1 + 1);
      if (param_7 <= iVar1) {
        return;
      }
    }
    *pcVar3 = '\x01';
    fVar5 = DAT_0035ecf0;
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
    uVar2 = DAT_0035ecf4;
    pcVar3[2] = -1;
    pcVar3[3] = '\0';
    fVar5 = (float)FUN_00371e50(uVar2);
    pcVar3[1] = (char)(int)fVar5;
    iVar1 = DAT_0035ecf8;
    *(undefined2 *)(pcVar3 + 0x2c) = param_6;
    uVar2 = FUN_00371178(*(undefined4 *)(iVar1 + 0x20),0,0xd);
    *(undefined4 *)(pcVar3 + 0x44) = uVar2;
  }
  return;
}
