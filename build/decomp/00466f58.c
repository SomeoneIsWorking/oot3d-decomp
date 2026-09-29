// OoT3D decomp @ 00466f58  name=FUN_00466f58  size=268

void FUN_00466f58(undefined4 *param_1,undefined4 *param_2,int param_3,int param_4)

{
  int iVar1;
  uint uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  uint uVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;

  puVar3 = (undefined4 *)FUN_002dbc48(*param_1,param_4 + 8);
  uVar2 = DAT_00467064;
  param_3 = param_3 * 4;
  while (0 < param_3) {
    uVar5 = puVar3[1] & 0xffff;
    if (uVar5 == 0x2c0) {
      puVar3 = puVar3 + 2;
    }
    else if (uVar5 == uVar2) {
      *puVar3 = param_2[3];
      puVar9 = puVar3 + 2;
      uVar5 = (uint)(puVar3[1] << 4) >> 0x18;
      *puVar9 = param_2[2];
      puVar4 = puVar3 + 4;
      puVar3[3] = param_2[1];
      puVar8 = param_2 + 4;
      puVar3 = puVar3 + 5;
      *puVar4 = *param_2;
      if (3 < uVar5) {
        iVar1 = (int)uVar5 >> 2;
        puVar4 = puVar3;
        puVar6 = param_2 + 7;
        iVar7 = iVar1;
        do {
          *puVar4 = *puVar6;
          iVar7 = iVar7 + -1;
          puVar4[1] = puVar6[-1];
          puVar4[2] = puVar6[-2];
          puVar4[3] = puVar6[-3];
          puVar4 = puVar4 + 4;
          puVar6 = puVar6 + 4;
        } while (iVar7 != 0);
        puVar8 = puVar8 + iVar1 * 4;
        puVar3 = puVar3 + iVar1 * 4;
      }
      if (((int)puVar3 - (int)puVar9 & 7U) != 0) {
        puVar3 = puVar3 + 1;
      }
      param_3 = param_3 - (uVar5 + 1);
      param_2 = puVar8;
    }
  }
  return;
}
