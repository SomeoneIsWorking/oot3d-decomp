// OoT3D decomp @ 004b7864  name=FUN_004b7864  size=396

void FUN_004b7864(ushort *param_1,int *param_2,int param_3)

{
  ushort *puVar1;
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
  puVar3 = (uint *)(param_1 + 0x101);
  uVar5 = DAT_004b7cb4 & *param_1 >> 1;
  uVar6 = DAT_004b7cb4 & *(uint *)(param_1 + 1) >> 1;
  uVar7 = DAT_004b7cb4 & *(uint *)(param_1 + 3) >> 1;
  uVar8 = DAT_004b7cb4 & *(uint *)(param_1 + 5) >> 1;
  uVar5 = DAT_004b7cb4 & uVar5 + uVar6 * 0x10100 + (uVar5 >> 8) >> 1;
  uVar6 = DAT_004b7cb4 & (uVar6 >> 0x10) + uVar7 * 0x10100 + (uVar6 >> 0x18) >> 1;
  uVar7 = DAT_004b7cb4 & (uVar7 >> 0x10) + uVar8 * 0x10100 + (uVar7 >> 0x18) >> 1;
  uVar8 = DAT_004b7cb4 &
          (uVar8 >> 0x10) + (DAT_004b7cb4 & *(uint *)(param_1 + 7) >> 1) * 0x10100 + (uVar8 >> 0x18)
          >> 1;
  do {
    puVar4 = puVar3 + 0x80;
    uVar9 = uVar2 & *(ushort *)((int)puVar3 + -2) >> 1;
    uVar10 = uVar2 & *puVar3 >> 1;
    uVar11 = uVar2 & puVar3[1] >> 1;
    uVar12 = uVar2 & puVar3[2] >> 1;
    uVar9 = uVar2 & uVar9 + uVar10 * 0x10100 + (uVar9 >> 8) >> 1;
    uVar10 = uVar2 & (uVar10 >> 0x10) + uVar11 * 0x10100 + (uVar10 >> 0x18) >> 1;
    uVar11 = uVar2 & (uVar11 >> 0x10) + uVar12 * 0x10100 + (uVar11 >> 0x18) >> 1;
    uVar12 = uVar2 & (uVar12 >> 0x10) + (uVar2 & puVar3[3] >> 1) * 0x10100 + (uVar12 >> 0x18) >> 1;
    *param_2 = uVar5 + uVar9;
    param_2[1] = uVar6 + uVar10;
    param_2[2] = uVar7 + uVar11;
    param_2[3] = uVar8 + uVar12;
    puVar1 = (ushort *)((int)puVar3 + 0x1fe);
    puVar13 = puVar3 + 0x81;
    puVar14 = puVar3 + 0x82;
    puVar15 = puVar3 + 0x83;
    puVar3 = puVar3 + 0x100;
    uVar5 = uVar2 & *puVar1 >> 1;
    uVar6 = uVar2 & *puVar4 >> 1;
    uVar7 = uVar2 & *puVar13 >> 1;
    uVar8 = uVar2 & *puVar14 >> 1;
    uVar5 = uVar2 & uVar5 + uVar6 * 0x10100 + (uVar5 >> 8) >> 1;
    uVar6 = uVar2 & (uVar6 >> 0x10) + uVar7 * 0x10100 + (uVar6 >> 0x18) >> 1;
    uVar7 = uVar2 & (uVar7 >> 0x10) + uVar8 * 0x10100 + (uVar7 >> 0x18) >> 1;
    uVar8 = uVar2 & (uVar8 >> 0x10) + (uVar2 & *puVar15 >> 1) * 0x10100 + (uVar8 >> 0x18) >> 1;
    param_2[0x80] = uVar9 + uVar5;
    param_2[0x81] = uVar10 + uVar6;
    param_2[0x82] = uVar11 + uVar7;
    param_2[0x83] = uVar12 + uVar8;
    param_2 = param_2 + 0x100;
    param_3 = param_3 + -2;
  } while (param_3 != 0);
  return;
}
