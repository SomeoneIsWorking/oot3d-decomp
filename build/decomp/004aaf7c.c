// OoT3D decomp @ 004aaf7c  name=FUN_004aaf7c  size=312

void FUN_004aaf7c(byte *param_1,int *param_2,int param_3)

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

  uVar2 = DAT_004ab0b4;
  puVar3 = (uint *)(param_1 + 0x401);
  uVar6 = DAT_004ab0b4 & *(uint *)(param_1 + 1) >> 1;
  uVar7 = DAT_004ab0b4 & *(uint *)(param_1 + 5) >> 1;
  uVar8 = DAT_004ab0b4 & *(uint *)(param_1 + 9) >> 1;
  uVar5 = DAT_004ab0b4 & (DAT_004ab0b4 & *param_1 >> 1) + uVar6 * 0x101 >> 1;
  uVar6 = DAT_004ab0b4 & uVar7 * 0x101 + (uVar6 >> 0x18) >> 1;
  uVar7 = DAT_004ab0b4 & uVar8 * 0x101 + (uVar7 >> 0x18) >> 1;
  uVar8 = DAT_004ab0b4 &
          (DAT_004ab0b4 & *(uint *)(param_1 + 0xd) >> 1) * 0x101 + (uVar8 >> 0x18) >> 1;
  do {
    puVar4 = puVar3 + 0x100;
    uVar10 = uVar2 & *puVar3 >> 1;
    uVar11 = uVar2 & puVar3[1] >> 1;
    uVar12 = uVar2 & puVar3[2] >> 1;
    uVar9 = uVar2 & (uVar2 & *(byte *)((int)puVar3 + -1) >> 1) + uVar10 * 0x101 >> 1;
    uVar10 = uVar2 & uVar11 * 0x101 + (uVar10 >> 0x18) >> 1;
    uVar11 = uVar2 & uVar12 * 0x101 + (uVar11 >> 0x18) >> 1;
    uVar12 = uVar2 & (uVar2 & puVar3[3] >> 1) * 0x101 + (uVar12 >> 0x18) >> 1;
    *param_2 = uVar5 + uVar9;
    param_2[1] = uVar6 + uVar10;
    param_2[2] = uVar7 + uVar11;
    param_2[3] = uVar8 + uVar12;
    pbVar1 = (byte *)((int)puVar3 + 0x3ff);
    puVar13 = puVar3 + 0x101;
    puVar14 = puVar3 + 0x102;
    puVar15 = puVar3 + 0x103;
    puVar3 = puVar3 + 0x200;
    uVar6 = uVar2 & *puVar4 >> 1;
    uVar7 = uVar2 & *puVar13 >> 1;
    uVar8 = uVar2 & *puVar14 >> 1;
    uVar5 = uVar2 & (uVar2 & *pbVar1 >> 1) + uVar6 * 0x101 >> 1;
    uVar6 = uVar2 & uVar7 * 0x101 + (uVar6 >> 0x18) >> 1;
    uVar7 = uVar2 & uVar8 * 0x101 + (uVar7 >> 0x18) >> 1;
    uVar8 = uVar2 & (uVar2 & *puVar15 >> 1) * 0x101 + (uVar8 >> 0x18) >> 1;
    param_2[0x100] = uVar9 + uVar5;
    param_2[0x101] = uVar10 + uVar6;
    param_2[0x102] = uVar11 + uVar7;
    param_2[0x103] = uVar12 + uVar8;
    param_2 = param_2 + 0x200;
    param_3 = param_3 + -2;
  } while (param_3 != 0);
  return;
}
