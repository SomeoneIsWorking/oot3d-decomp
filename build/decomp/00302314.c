// OoT3D decomp @ 00302314  name=FUN_00302314  size=268

undefined4 FUN_00302314(int *param_1,uint *param_2,ushort *param_3)

{
  uint uVar1;
  uint uVar2;
  ushort *puVar3;
  ushort *puVar4;
  ushort *puVar5;
  ushort *puVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;

  uVar1 = *param_2;
  puVar4 = (ushort *)param_2[1];
  iVar7 = 1;
  bVar8 = uVar1 == 2;
  uVar2 = uVar1;
  if (bVar8) {
    uVar2 = (uint)*puVar4;
  }
  puVar6 = puVar4 + (uVar1 - 1);
  bVar9 = bVar8 && uVar2 == 0x2e;
  if (bVar8 && uVar2 == 0x2e) {
    bVar9 = puVar4[1] == 0x2e;
  }
  if (bVar9) {
    iVar7 = 2;
  }
  puVar5 = puVar4;
  if (param_3 < puVar4) {
    uVar2 = 0;
    while (puVar3 = puVar5 + -1, param_3 <= puVar3) {
      if (*puVar3 == 0x2f) {
        if (uVar2 == 1) {
          if (*puVar5 == 0x2e) {
            iVar7 = iVar7 + 1;
          }
        }
        else {
          bVar8 = uVar2 == 2;
          if (bVar8) {
            uVar2 = (uint)*puVar5;
          }
          bVar9 = bVar8 && uVar2 == 0x2e;
          if (bVar8 && uVar2 == 0x2e) {
            bVar9 = puVar5[1] == 0x2e;
          }
          if (bVar9) {
            iVar7 = iVar7 + 2;
          }
        }
        if (iVar7 == 0) goto LAB_003023e8;
        do {
          puVar3 = puVar3 + -1;
        } while (*puVar3 == 0x2f);
        uVar2 = 0;
        iVar7 = iVar7 + -1;
        puVar6 = puVar3;
      }
      uVar2 = uVar2 + 1;
      puVar5 = puVar3;
    }
    puVar5 = puVar4;
    if (iVar7 != 0) {
      return DAT_00302420;
    }
LAB_003023e8:
    if (puVar3 == param_3) {
      puVar5 = param_3 + 1;
    }
  }
  if (param_3 < puVar6) {
    param_1[1] = (int)puVar5;
    *param_1 = ((int)puVar6 - (int)puVar5 >> 1) + 1;
  }
  else {
    *param_1 = 0;
    param_1[1] = (int)param_3;
  }
  return 0;
}
