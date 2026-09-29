// OoT3D decomp @ 0036cae4  name=FUN_0036cae4  size=144

void FUN_0036cae4(float param_1,int param_2,undefined2 param_3)

{
  undefined4 *puVar1;
  float fVar2;
  char *pcVar3;
  short sVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;

  puVar1 = DAT_0036cb74;
  pcVar3 = *(char **)(param_2 + 0x5c28);
  sVar4 = 0;
  do {
    if (*pcVar3 == '\0') {
      *pcVar3 = '\x03';
      uVar6 = DAT_0036cb78;
      uVar5 = puVar1[1];
      uVar7 = puVar1[2];
      *(undefined4 *)(pcVar3 + 4) = *puVar1;
      *(undefined4 *)(pcVar3 + 8) = uVar5;
      *(undefined4 *)(pcVar3 + 0xc) = uVar7;
      *(undefined4 *)(pcVar3 + 8) = uVar6;
      fVar2 = DAT_0036cb7c;
      uVar6 = puVar1[1];
      uVar5 = puVar1[2];
      *(undefined4 *)(pcVar3 + 0x10) = *puVar1;
      *(undefined4 *)(pcVar3 + 0x14) = uVar6;
      *(undefined4 *)(pcVar3 + 0x18) = uVar5;
      uVar6 = puVar1[1];
      uVar5 = puVar1[2];
      *(undefined4 *)(pcVar3 + 0x1c) = *puVar1;
      *(undefined4 *)(pcVar3 + 0x20) = uVar6;
      *(undefined4 *)(pcVar3 + 0x24) = uVar5;
      *(float *)(pcVar3 + 0x34) = param_1 * fVar2;
      *(undefined2 *)(pcVar3 + 0x2e) = param_3;
      pcVar3[2] = '\0';
      pcVar3[3] = '\0';
      return;
    }
    sVar4 = sVar4 + 1;
    pcVar3 = pcVar3 + 0x4c;
  } while (sVar4 < 0x4b);
  return;
}
