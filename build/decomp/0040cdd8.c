// OoT3D decomp @ 0040cdd8  name=FUN_0040cdd8  size=592

uint * FUN_0040cdd8(byte *param_1,uint *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  uint uVar7;
  byte *pbVar8;
  byte *pbVar9;
  byte *pbVar10;
  byte *pbVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;

  uVar7 = uRam0040d028;
  pbVar9 = param_1 + 0x17c;
  pbVar10 = param_1 + 0x16c;
  uVar13 = 0;
  pbVar11 = param_1 + 0x174;
  iVar1 = 1 - (uint)param_1[399];
  if (1 < param_1[399]) {
    iVar1 = 0;
  }
  iVar12 = 8;
  iVar2 = 1 - (uint)param_1[400];
  if (1 < param_1[400]) {
    iVar2 = 0;
  }
  iVar3 = 1 - (uint)param_1[0x185];
  if (1 < param_1[0x185]) {
    iVar3 = 0;
  }
  if (param_1[0x191] == 0) {
    iVar4 = 7;
  }
  else {
    iVar4 = 0;
  }
  uVar5 = iVar1 << 0x10 | iVar2 << 0x11 | iVar3 << 0x13 | iVar4 << 0x14 | 0xff04ffff;
  uVar6 = 0;
  pbVar8 = param_1 + 0x164;
  uVar14 = 0;
  do {
    uVar15 = uVar14;
    if (*pbVar8 != 0) {
      if (*pbVar9 != 0) {
        uVar5 = uVar5 & ~(1 << (uVar6 & 0xff));
      }
      if (*pbVar10 != 0) {
        uVar5 = uVar5 & ~(1 << (uVar6 + 8 & 0xff));
      }
      if (*pbVar11 != 0) {
        uVar5 = uVar5 & ~(1 << (uVar6 + 0x18 & 0xff));
      }
      uVar15 = uVar14 + 1;
      uVar13 = uVar13 | uVar6 << ((uVar14 & 0x3f) << 2);
    }
    iVar12 = iVar12 + -1;
    pbVar9 = pbVar9 + 1;
    pbVar10 = pbVar10 + 1;
    pbVar11 = pbVar11 + 1;
    uVar6 = uVar6 + 1;
    pbVar8 = pbVar8 + 1;
    uVar14 = uVar15;
  } while (iVar12 != 0);
  if (param_3 != 0) {
    *param_2 = 0;
    param_2[2] = 0;
    param_2[1] = uVar7;
    param_2[3] = 0;
    param_2 = param_2 + 4;
  }
  *param_2 = (uint)(uVar15 != 0);
  uVar7 = uRam0040d02c;
  param_2[1] = uRam0040d02c;
  uVar14 = uRam0040d030;
  param_2[2] = (uint)param_1[2] | (uint)param_1[1] << 10 | (uint)*param_1 << 0x14;
  if ((int)uVar15 < 1) {
    uVar7 = 0;
  }
  param_2[3] = uVar14;
  if (0 < (int)uVar15) {
    uVar7 = uVar15 - 1;
  }
  param_2[4] = uVar7;
  param_2[5] = uRam0040d034;
  param_2[6] = (uint)((param_1[0x189] != 0 || param_1[0x18a] != 0) || param_1[0x18b] != 0) |
               (uint)param_1[0x185] << 2 | (uint)param_1[0x184] << 4 |
               (uint)(param_1[0x189] != 0) << 0x10 | (uint)(param_1[0x18a] != 0) << 0x11 |
               (uint)(param_1[0x18c] != 0) << 0x12 | (uint)(param_1[0x18b] != 0) << 0x13 |
               (uint)param_1[0x188] << 0x16 | (uint)param_1[0x186] << 0x18 |
               (uint)(param_1[0x18e] != 0) << 0x1b | (uint)param_1[0x187] << 0x1c |
               (uint)(param_1[0x187] != 0 && param_1[0x18d] == 0) << 0x1e | 0x80000400;
  uVar7 = uRam0040d038;
  param_2[7] = uRam0040d038;
  param_2[8] = uVar5;
  param_2[9] = uVar7 + 1;
  uVar7 = 1 - uVar15;
  if (1 < uVar15) {
    uVar7 = 0;
  }
  param_2[10] = uVar7;
  uVar7 = uRam0040d03c;
  param_2[0xb] = uRam0040d03c;
  param_2[0xc] = uVar13;
  param_2[0xd] = uVar7 + 0x13;
  return param_2 + 0xe;
}
