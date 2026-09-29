// OoT3D decomp @ 003040ac  name=FUN_003040ac  size=312

uint FUN_003040ac(undefined4 param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4,
                 undefined4 param_5)

{
  byte bVar1;
  byte bVar2;
  ushort uVar3;
  short *psVar4;
  int iVar5;
  uint uVar6;
  uint uVar7;
  int iVar8;
  byte *pbVar9;

  uVar6 = DAT_003041fc;
  uVar7 = 0;
  switch(param_5) {
  case 1:
    pbVar9 = (byte *)*param_2;
    *param_2 = pbVar9 + 1;
    uVar7 = (uint)*pbVar9;
    break;
  case 2:
    pbVar9 = (byte *)*param_2;
    *param_2 = pbVar9 + 1;
    bVar1 = *pbVar9;
    *param_2 = pbVar9 + 2;
    uVar7 = (uint)pbVar9[1] | uVar6 & (uint)bVar1 << 8;
    break;
  case 3:
    uVar7 = 0;
    do {
      pbVar9 = (byte *)*param_2;
      *param_2 = pbVar9 + 1;
      bVar1 = *pbVar9;
      uVar7 = bVar1 & 0x7f | uVar7 << 7;
    } while ((bVar1 & 0x80) != 0);
    break;
  case 4:
    pbVar9 = (byte *)*param_2;
    *param_2 = pbVar9 + 1;
    bVar1 = *pbVar9;
    uVar3 = (ushort)uVar6;
    *param_2 = pbVar9 + 2;
    iVar8 = (int)(short)((ushort)pbVar9[1] | uVar3 & (ushort)bVar1 << 8);
    *param_2 = pbVar9 + 3;
    bVar1 = pbVar9[2];
    *param_2 = pbVar9 + 4;
    bVar2 = pbVar9[3];
    iVar5 = FUN_00304200();
    uVar7 = iVar8 + ((((short)(uVar3 & (ushort)bVar1 << 8 | (ushort)bVar2) - iVar8) + 1) * iVar5 >>
                    0x10);
    break;
  case 5:
    pbVar9 = (byte *)*param_2;
    *param_2 = pbVar9 + 1;
    uVar6 = (uint)*pbVar9;
    if (uVar6 < 0x20) {
      psVar4 = (short *)FUN_00304270();
    }
    else if (uVar6 < 0x30) {
      psVar4 = (short *)FUN_00308f80(param_4,uVar6 - 0x20);
    }
    else {
      psVar4 = (short *)0x0;
    }
    if (psVar4 != (short *)0x0) {
      uVar7 = (uint)*psVar4;
    }
  }
  return uVar7;
}
