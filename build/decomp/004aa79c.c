// OoT3D decomp @ 004aa79c  name=FUN_004aa79c  size=252

void FUN_004aa79c(int param_1,int *param_2,int param_3)

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
  uVar3 = DAT_004ab0b4 & (*(uint *)(param_1 + -1) >> 8) + *(uint *)(param_1 + 3) * 0x1000000 >> 1;
  uVar4 = DAT_004ab0b4 & (*(uint *)(param_1 + 3) >> 8) + *(uint *)(param_1 + 7) * 0x1000000 >> 1;
  uVar5 = DAT_004ab0b4 & (*(uint *)(param_1 + 7) >> 8) + *(uint *)(param_1 + 0xb) * 0x1000000 >> 1;
  uVar6 = DAT_004ab0b4 &
          (*(uint *)(param_1 + 0xb) >> 8) + (uint)*(byte *)(param_1 + 0xf) * 0x1000000 >> 1;
  puVar2 = (uint *)(param_1 + -1);
  do {
    uVar7 = uVar1 & (puVar2[0x100] >> 8) + puVar2[0x101] * 0x1000000 >> 1;
    uVar8 = uVar1 & (puVar2[0x101] >> 8) + puVar2[0x102] * 0x1000000 >> 1;
    uVar9 = uVar1 & (puVar2[0x102] >> 8) + puVar2[0x103] * 0x1000000 >> 1;
    uVar10 = uVar1 & (puVar2[0x103] >> 8) + (uint)(byte)puVar2[0x104] * 0x1000000 >> 1;
    *param_2 = uVar3 + uVar7;
    param_2[1] = uVar4 + uVar8;
    param_2[2] = uVar5 + uVar9;
    param_2[3] = uVar6 + uVar10;
    uVar3 = uVar1 & (puVar2[0x200] >> 8) + puVar2[0x201] * 0x1000000 >> 1;
    uVar4 = uVar1 & (puVar2[0x201] >> 8) + puVar2[0x202] * 0x1000000 >> 1;
    uVar5 = uVar1 & (puVar2[0x202] >> 8) + puVar2[0x203] * 0x1000000 >> 1;
    uVar6 = uVar1 & (puVar2[0x203] >> 8) + (uint)(byte)puVar2[0x204] * 0x1000000 >> 1;
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
