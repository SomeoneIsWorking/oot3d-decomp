// OoT3D decomp @ 00307c94  name=FUN_00307c94  size=240

void FUN_00307c94(int param_1,uint param_2,int param_3,uint *param_4)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  uint *puVar4;
  uint *puVar5;

  if (param_3 < 1) {
    return;
  }
  puVar5 = *(uint **)(param_1 + 8);
  *puVar5 = param_2 | 0x80000000;
  puVar5[1] = DAT_00307d84;
  puVar5[2] = param_4[3];
  puVar5[3] = param_3 * 0x400000 - 0x100000U | DAT_00307d88;
  puVar5[4] = param_4[2];
  iVar1 = -3 - (param_3 * 4 + -4);
  puVar5[5] = param_4[1];
  iVar1 = (int)(iVar1 + ((uint)(iVar1 >> 0x1f) >> 0x1e)) >> 2;
  iVar3 = -iVar1;
  puVar4 = puVar5 + 7;
  puVar5[6] = *param_4;
  if (iVar1 != 0 && -1 < iVar3) {
    puVar5 = param_4 + 7;
    puVar2 = puVar4;
    do {
      *puVar2 = *puVar5;
      iVar3 = iVar3 + -1;
      puVar2[1] = puVar5[-1];
      puVar2[2] = puVar5[-2];
      puVar2[3] = puVar5[-3];
      puVar5 = puVar5 + 4;
      puVar2 = puVar2 + 4;
    } while (iVar3 != 0);
    puVar4 = puVar4 + iVar1 * -4;
  }
  *puVar4 = 0;
  *(uint **)(param_1 + 8) = puVar4 + 1;
  return;
}
