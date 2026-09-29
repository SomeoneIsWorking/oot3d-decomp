// OoT3D decomp @ 004b7a30  name=FUN_004b7a30  size=240

void FUN_004b7a30(byte *param_1,int *param_2,int param_3)

{
  byte *pbVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint *puVar13;
  uint *puVar14;
  uint *puVar15;

  uVar2 = DAT_004b7cb4;
  puVar3 = (uint *)(param_1 + 0x201);
  uVar5 = DAT_004b7cb4 & (uint)*param_1 + *(uint *)(param_1 + 1) * 0x100 >> 1;
  uVar6 = DAT_004b7cb4 & (*(uint *)(param_1 + 1) >> 0x18) + *(uint *)(param_1 + 5) * 0x100 >> 1;
  uVar7 = DAT_004b7cb4 & (*(uint *)(param_1 + 5) >> 0x18) + *(uint *)(param_1 + 9) * 0x100 >> 1;
  uVar8 = DAT_004b7cb4 & (*(uint *)(param_1 + 9) >> 0x18) + *(int *)(param_1 + 0xd) * 0x100 >> 1;
  do {
    puVar4 = puVar3 + 0x80;
    uVar9 = uVar2 & (uint)*(byte *)((int)puVar3 + -1) + *puVar3 * 0x100 >> 1;
    uVar10 = uVar2 & (*puVar3 >> 0x18) + puVar3[1] * 0x100 >> 1;
    uVar11 = uVar2 & (puVar3[1] >> 0x18) + puVar3[2] * 0x100 >> 1;
    uVar12 = uVar2 & (puVar3[2] >> 0x18) + puVar3[3] * 0x100 >> 1;
    *param_2 = uVar5 + uVar9;
    param_2[1] = uVar6 + uVar10;
    param_2[2] = uVar7 + uVar11;
    param_2[3] = uVar8 + uVar12;
    pbVar1 = (byte *)((int)puVar3 + 0x1ff);
    puVar13 = puVar3 + 0x81;
    puVar14 = puVar3 + 0x82;
    puVar15 = puVar3 + 0x83;
    puVar3 = puVar3 + 0x100;
    uVar5 = uVar2 & (uint)*pbVar1 + *puVar4 * 0x100 >> 1;
    uVar6 = uVar2 & (*puVar4 >> 0x18) + *puVar13 * 0x100 >> 1;
    uVar7 = uVar2 & (*puVar13 >> 0x18) + *puVar14 * 0x100 >> 1;
    uVar8 = uVar2 & (*puVar14 >> 0x18) + *puVar15 * 0x100 >> 1;
    param_2[0x80] = uVar9 + uVar5;
    param_2[0x81] = uVar10 + uVar6;
    param_2[0x82] = uVar11 + uVar7;
    param_2[0x83] = uVar12 + uVar8;
    param_2 = param_2 + 0x100;
    param_3 = param_3 + -2;
  } while (param_3 != 0);
  return;
}
