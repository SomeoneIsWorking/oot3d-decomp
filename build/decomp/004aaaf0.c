// OoT3D decomp @ 004aaaf0  name=FUN_004aaaf0  size=252

void FUN_004aaaf0(ushort *param_1,int *param_2,int param_3)

{
  uint *puVar1;
  ushort *puVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint uVar12;
  uint uVar13;
  uint *puVar14;
  uint *puVar15;

  uVar3 = DAT_004ab0b4;
  puVar4 = (uint *)(param_1 + 0x201);
  uVar6 = DAT_004ab0b4 & (uint)*param_1 + *(uint *)(param_1 + 1) * 0x10000 >> 1;
  uVar7 = DAT_004ab0b4 & (*(uint *)(param_1 + 1) >> 0x10) + *(uint *)(param_1 + 3) * 0x10000 >> 1;
  uVar8 = DAT_004ab0b4 & (*(uint *)(param_1 + 3) >> 0x10) + *(uint *)(param_1 + 5) * 0x10000 >> 1;
  uVar9 = DAT_004ab0b4 & (*(uint *)(param_1 + 5) >> 0x10) + (uint)param_1[7] * 0x10000 >> 1;
  do {
    puVar5 = puVar4 + 0x100;
    uVar10 = uVar3 & (uint)*(ushort *)((int)puVar4 + -2) + *puVar4 * 0x10000 >> 1;
    uVar11 = uVar3 & (*puVar4 >> 0x10) + puVar4[1] * 0x10000 >> 1;
    uVar12 = uVar3 & (puVar4[1] >> 0x10) + puVar4[2] * 0x10000 >> 1;
    uVar13 = uVar3 & (puVar4[2] >> 0x10) + (uint)(ushort)puVar4[3] * 0x10000 >> 1;
    *param_2 = uVar6 + uVar10;
    param_2[1] = uVar7 + uVar11;
    param_2[2] = uVar8 + uVar12;
    param_2[3] = uVar9 + uVar13;
    puVar2 = (ushort *)((int)puVar4 + 0x3fe);
    puVar14 = puVar4 + 0x101;
    puVar15 = puVar4 + 0x102;
    puVar1 = puVar4 + 0x103;
    puVar4 = puVar4 + 0x200;
    uVar6 = uVar3 & (uint)*puVar2 + *puVar5 * 0x10000 >> 1;
    uVar7 = uVar3 & (*puVar5 >> 0x10) + *puVar14 * 0x10000 >> 1;
    uVar8 = uVar3 & (*puVar14 >> 0x10) + *puVar15 * 0x10000 >> 1;
    uVar9 = uVar3 & (*puVar15 >> 0x10) + (uint)(ushort)*puVar1 * 0x10000 >> 1;
    param_2[0x100] = uVar10 + uVar6;
    param_2[0x101] = uVar11 + uVar7;
    param_2[0x102] = uVar12 + uVar8;
    param_2[0x103] = uVar13 + uVar9;
    param_2 = param_2 + 0x200;
    param_3 = param_3 + -2;
  } while (param_3 != 0);
  return;
}
