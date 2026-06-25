// OoT3D decomp @ 004706ac  name=FUN_004706ac  size=172

int FUN_004706ac(uint *param_1,uint *param_2,uint param_3)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint uVar5;
  bool bVar6;
  
  if ((((uint)param_1 | (uint)param_2) & 3) == 0) {
    while (3 < param_3) {
      uVar4 = *param_1;
      uVar5 = *param_2;
      param_3 = param_3 - 4;
      param_1 = param_1 + 1;
      param_2 = param_2 + 1;
      if (uVar4 != uVar5) {
        iVar1 = (uVar4 & 0xff) - (uVar5 & 0xff);
        bVar6 = iVar1 == 0;
        if (bVar6) {
          iVar1 = (uVar4 & 0xffff) - (uVar5 & 0xffff);
          bVar6 = iVar1 == 0;
        }
        if (bVar6) {
          iVar1 = (uVar4 & 0xffffff) - (uVar5 & 0xffffff);
          bVar6 = iVar1 == 0;
        }
        if (!bVar6) {
          return iVar1;
        }
        return (uVar4 >> 0x18) - (uVar5 >> 0x18);
      }
    }
  }
  if (param_3 == 0) {
    return 0;
  }
  if ((param_3 & 1) == 0) {
    while( true ) {
      puVar2 = (uint *)((int)param_1 + 1);
      puVar3 = (uint *)((int)param_2 + 1);
      if ((uint)*(byte *)param_1 - (uint)*(byte *)param_2 != 0) {
        return (uint)*(byte *)param_1 - (uint)*(byte *)param_2;
      }
LAB_00470738:
      param_1 = (uint *)((int)puVar2 + 1);
      param_2 = (uint *)((int)puVar3 + 1);
      if ((uint)*(byte *)puVar2 - (uint)*(byte *)puVar3 != 0) break;
      param_3 = param_3 - 2;
      if (param_3 == 0) {
        return 0;
      }
    }
    return (uint)*(byte *)puVar2 - (uint)*(byte *)puVar3;
  }
  param_3 = param_3 + 1;
  puVar2 = param_1;
  puVar3 = param_2;
  goto LAB_00470738;
}

