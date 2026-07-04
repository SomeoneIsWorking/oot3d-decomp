// OoT3D decomp @ 001000ec  name=FUN_001000ec  size=212

int FUN_001000ec(uint *param_1,uint *param_2,uint param_3)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  uint uVar6;
  bool bVar7;
  bool bVar8;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while (3 < param_3) {
      uVar4 = *param_1;
      uVar6 = *param_2;
      param_3 = param_3 - 4;
      uVar5 = uVar4 - DAT_001001c0 & ~uVar4 & DAT_001001c0 << 7;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (uVar5 != 0 || uVar4 != uVar6) {
        iVar3 = (uVar4 & 0xff) - (uVar6 & 0xff);
        bVar8 = (uVar5 & 0xff) == 0;
        bVar7 = iVar3 == 0 && bVar8;
        if (iVar3 == 0 && bVar8) {
          iVar3 = (uVar4 & 0xffff) - (uVar6 & 0xffff);
          bVar7 = iVar3 == 0 && (uVar5 & 0xffff) == 0;
        }
        bVar8 = false;
        if (bVar7) {
          iVar3 = (uVar4 & 0xffffff) - (uVar6 & 0xffffff);
          bVar8 = iVar3 == 0 && (uVar5 & 0xffffff) == 0;
        }
        if (bVar8) {
          return (uVar4 >> 0x18) - (uVar6 >> 0x18);
        }
        return iVar3;
      }
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  while( true ) {
    uVar5 = (uint)(byte)*param_1;
    uVar4 = (uint)(byte)*param_2;
    if ((uVar5 == 0) || (uVar5 != uVar4)) break;
    puVar1 = (uint *)((int)param_2 + 1);
    puVar2 = (uint *)((int)param_1 + 1);
    if (param_3 != 1) {
      uVar5 = (uint)*(byte *)((int)param_1 + 1);
      uVar4 = (uint)*(byte *)((int)param_2 + 1);
      puVar1 = (uint *)((int)param_2 + 2);
      puVar2 = (uint *)((int)param_1 + 2);
    }
    param_1 = puVar2;
    param_2 = puVar1;
    if (((param_3 == 1 || uVar5 == 0) || (uVar5 != uVar4)) || (param_3 = param_3 - 2, param_3 == 0))
    break;
  }
  return uVar5 - uVar4;
}

