// OoT3D decomp @ 004b7224  name=FUN_004b7224  size=308

void FUN_004b7224(uint *param_1,int *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  uint uVar9;

  uVar1 = DAT_004b7cb4;
  uVar2 = DAT_004b7cb4 & *param_1 >> 1;
  uVar3 = DAT_004b7cb4 & param_1[1] >> 1;
  uVar4 = DAT_004b7cb4 & param_1[2] >> 1;
  uVar5 = DAT_004b7cb4 & param_1[3] >> 1;
  uVar2 = DAT_004b7cb4 & uVar2 + (uVar2 >> 8) + uVar3 * 0x1000000 >> 1;
  uVar3 = DAT_004b7cb4 & uVar3 + (uVar3 >> 8) + uVar4 * 0x1000000 >> 1;
  uVar4 = DAT_004b7cb4 & uVar4 + (uVar4 >> 8) + uVar5 * 0x1000000 >> 1;
  uVar5 = DAT_004b7cb4 &
          uVar5 + (uVar5 >> 8) + (DAT_004b7cb4 & (byte)((byte)param_1[4] >> 1)) * 0x1000000 >> 1;
  do {
    uVar6 = uVar1 & param_1[0x80] >> 1;
    uVar7 = uVar1 & param_1[0x81] >> 1;
    uVar8 = uVar1 & param_1[0x82] >> 1;
    uVar9 = uVar1 & param_1[0x83] >> 1;
    uVar6 = uVar1 & uVar6 + (uVar6 >> 8) + uVar7 * 0x1000000 >> 1;
    uVar7 = uVar1 & uVar7 + (uVar7 >> 8) + uVar8 * 0x1000000 >> 1;
    uVar8 = uVar1 & uVar8 + (uVar8 >> 8) + uVar9 * 0x1000000 >> 1;
    uVar9 = uVar1 & uVar9 + (uVar9 >> 8) + (uVar1 & (byte)((byte)param_1[0x84] >> 1)) * 0x1000000 >>
                    1;
    *param_2 = uVar2 + uVar6;
    param_2[1] = uVar3 + uVar7;
    param_2[2] = uVar4 + uVar8;
    param_2[3] = uVar5 + uVar9;
    uVar2 = uVar1 & param_1[0x100] >> 1;
    uVar3 = uVar1 & param_1[0x101] >> 1;
    uVar4 = uVar1 & param_1[0x102] >> 1;
    uVar5 = uVar1 & param_1[0x103] >> 1;
    uVar2 = uVar1 & uVar2 + (uVar2 >> 8) + uVar3 * 0x1000000 >> 1;
    uVar3 = uVar1 & uVar3 + (uVar3 >> 8) + uVar4 * 0x1000000 >> 1;
    uVar4 = uVar1 & uVar4 + (uVar4 >> 8) + uVar5 * 0x1000000 >> 1;
    uVar5 = uVar1 & uVar5 + (uVar5 >> 8) + (uVar1 & (byte)((byte)param_1[0x104] >> 1)) * 0x1000000
                    >> 1;
    param_2[0x80] = uVar6 + uVar2;
    param_2[0x81] = uVar7 + uVar3;
    param_2[0x82] = uVar8 + uVar4;
    param_2[0x83] = uVar9 + uVar5;
    param_2 = param_2 + 0x100;
    param_3 = param_3 + -2;
    param_1 = param_1 + 0x100;
  } while (param_3 != 0);
  return;
}
