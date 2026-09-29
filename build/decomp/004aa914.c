// OoT3D decomp @ 004aa914  name=FUN_004aa914  size=408

void FUN_004aa914(int param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;
  uint uVar10;

  uVar1 = DAT_004ab0b4;
  uVar3 = DAT_004ab0b4 & *(uint *)(param_1 + -1) >> 1;
  uVar4 = DAT_004ab0b4 & *(uint *)(param_1 + 3) >> 1;
  uVar5 = DAT_004ab0b4 & *(uint *)(param_1 + 7) >> 1;
  uVar6 = DAT_004ab0b4 & *(uint *)(param_1 + 0xb) >> 1;
  uVar3 = DAT_004ab0b4 & (uVar3 >> 0x10) + uVar4 * 0x1010000 + (uVar3 >> 8) >> 1;
  uVar4 = DAT_004ab0b4 & (uVar4 >> 0x10) + uVar5 * 0x1010000 + (uVar4 >> 8) >> 1;
  uVar5 = DAT_004ab0b4 & (uVar5 >> 0x10) + uVar6 * 0x1010000 + (uVar5 >> 8) >> 1;
  uVar6 = DAT_004ab0b4 &
          (uVar6 >> 0x10) + (DAT_004ab0b4 & *(ushort *)(param_1 + 0xf) >> 1) * 0x1010000 +
          (uVar6 >> 8) >> 1;
  puVar2 = (uint *)(param_1 + -1);
  do {
    uVar7 = uVar1 & puVar2[0x100] >> 1;
    uVar8 = uVar1 & puVar2[0x101] >> 1;
    uVar9 = uVar1 & puVar2[0x102] >> 1;
    uVar10 = uVar1 & puVar2[0x103] >> 1;
    uVar7 = uVar1 & (uVar7 >> 0x10) + uVar8 * 0x1010000 + (uVar7 >> 8) >> 1;
    uVar8 = uVar1 & (uVar8 >> 0x10) + uVar9 * 0x1010000 + (uVar8 >> 8) >> 1;
    uVar9 = uVar1 & (uVar9 >> 0x10) + uVar10 * 0x1010000 + (uVar9 >> 8) >> 1;
    uVar10 = uVar1 & (uVar10 >> 0x10) + (uVar1 & (ushort)((ushort)puVar2[0x104] >> 1)) * 0x1010000 +
                     (uVar10 >> 8) >> 1;
    *param_2 = uVar3 + uVar7;
    param_2[1] = uVar4 + uVar8;
    param_2[2] = uVar5 + uVar9;
    param_2[3] = uVar6 + uVar10;
    uVar3 = uVar1 & puVar2[0x200] >> 1;
    uVar4 = uVar1 & puVar2[0x201] >> 1;
    uVar5 = uVar1 & puVar2[0x202] >> 1;
    uVar6 = uVar1 & puVar2[0x203] >> 1;
    uVar3 = uVar1 & (uVar3 >> 0x10) + uVar4 * 0x1010000 + (uVar3 >> 8) >> 1;
    uVar4 = uVar1 & (uVar4 >> 0x10) + uVar5 * 0x1010000 + (uVar4 >> 8) >> 1;
    uVar5 = uVar1 & (uVar5 >> 0x10) + uVar6 * 0x1010000 + (uVar5 >> 8) >> 1;
    uVar6 = uVar1 & (uVar6 >> 0x10) + (uVar1 & (ushort)((ushort)puVar2[0x204] >> 1)) * 0x1010000 +
                    (uVar6 >> 8) >> 1;
    param_2[0x100] = uVar7 + uVar3;
    param_2[0x101] = uVar8 + uVar4;
    param_2[0x102] = uVar9 + uVar5;
    param_2[0x103] = uVar10 + uVar6;
    param_2 = param_2 + 0x200;
    param_3 = param_3 + -2;
    puVar2 = puVar2 + 0x200;
  } while (param_3 != 0);
  return;
}
