// OoT3D decomp @ 002dd4c0  name=FUN_002dd4c0  size=268

void FUN_002dd4c0(undefined4 *param_1,int param_2,undefined4 *param_3,int param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  bool bVar5;
  undefined4 local_54 [12];
  undefined4 local_24;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;

  puVar1 = (undefined4 *)FUN_002dbc48(*param_1,param_4 + 8);
  iVar4 = 0xc;
  if (param_2 == 0) {
    iVar4 = 0x10;
    FUN_00372224(local_54,param_3);
    param_3 = local_54;
    local_1c = DAT_002dd5cc;
    local_20 = DAT_002dd5cc;
    local_24 = DAT_002dd5cc;
    local_18 = DAT_002dd5d0;
  }
  if ((puVar1[1] & 0xffff) == 0x2c1) {
    bVar5 = param_2 == 0;
    iVar3 = param_2;
    if (0 < param_2) {
      puVar1 = puVar1 + 0x14;
      iVar3 = param_2 + -1;
      bVar5 = param_2 == 1;
    }
    if (!bVar5 && iVar3 < 0 == (0 < param_2 && SBORROW4(param_2,1))) {
      puVar1 = puVar1 + 0x10;
    }
    *puVar1 = param_3[3];
    iVar4 = -3 - (iVar4 + -4);
    puVar1[2] = param_3[2];
    puVar1[3] = param_3[1];
    iVar4 = (int)(iVar4 + ((uint)(iVar4 >> 0x1f) >> 0x1e)) >> 2;
    iVar3 = -iVar4;
    puVar1[4] = *param_3;
    if (iVar4 != 0 && -1 < iVar3) {
      puVar2 = param_3 + 7;
      puVar1 = puVar1 + 5;
      do {
        *puVar1 = *puVar2;
        iVar3 = iVar3 + -1;
        puVar1[1] = puVar2[-1];
        puVar1[2] = puVar2[-2];
        puVar1[3] = puVar2[-3];
        puVar2 = puVar2 + 4;
        puVar1 = puVar1 + 4;
      } while (iVar3 != 0);
    }
  }
  return;
}
