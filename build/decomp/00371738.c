// OoT3D decomp @ 00371738  name=FUN_00371738  size=116

undefined8 FUN_00371738(undefined4 *param_1,undefined4 *param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined2 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  bool bVar13;
  bool bVar14;
  
  uVar4 = param_3 - 0x20;
  if (0x1f < param_3) {
    param_4 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    HintPreloadData(param_2 + 0x14);
    uVar9 = param_2[4];
    uVar10 = param_2[5];
    uVar11 = param_2[6];
    uVar12 = param_2[7];
    param_2 = param_2 + 8;
    while( true ) {
      *param_1 = param_4;
      param_1[1] = uVar6;
      param_1[2] = uVar7;
      param_1[3] = uVar8;
      bVar13 = 0x1f < uVar4;
      uVar4 = uVar4 - 0x20;
      param_1[4] = uVar9;
      param_1[5] = uVar10;
      param_1[6] = uVar11;
      param_1[7] = uVar12;
      param_1 = param_1 + 8;
      if (bVar13) {
        param_4 = *param_2;
        uVar6 = param_2[1];
        uVar7 = param_2[2];
        uVar8 = param_2[3];
        param_2 = param_2 + 4;
      }
      HintPreloadData(param_2 + 0x10);
      if (!bVar13) break;
      uVar9 = *param_2;
      uVar10 = param_2[1];
      uVar11 = param_2[2];
      uVar12 = param_2[3];
      param_2 = param_2 + 4;
    }
  }
  if ((bool)((byte)(uVar4 >> 4) & 1)) {
    param_4 = *param_2;
    uVar6 = param_2[1];
    uVar7 = param_2[2];
    uVar8 = param_2[3];
    param_2 = param_2 + 4;
    *param_1 = param_4;
    param_1[1] = uVar6;
    param_1[2] = uVar7;
    param_1[3] = uVar8;
    param_1 = param_1 + 4;
  }
  if ((int)(uVar4 << 0x1c) < 0) {
    param_4 = *param_2;
    uVar6 = param_2[1];
    param_2 = param_2 + 2;
    *param_1 = param_4;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  puVar1 = param_1;
  puVar3 = param_2;
  if ((bool)((byte)(uVar4 >> 2) & 1)) {
    puVar3 = param_2 + 1;
    param_4 = *param_2;
    puVar1 = param_1 + 1;
    *param_1 = param_4;
  }
  uVar5 = (undefined2)param_4;
  if ((uVar4 & 3) != 0) {
    bVar14 = (bool)((byte)(uVar4 >> 1) & 1);
    uVar4 = uVar4 << 0x1f;
    bVar13 = (int)uVar4 < 0;
    puVar2 = puVar3;
    if (bVar14) {
      puVar2 = (undefined4 *)((int)puVar3 + 2);
      uVar5 = *(undefined2 *)puVar3;
    }
    puVar3 = puVar2;
    if (bVar13) {
      puVar3 = (undefined4 *)((int)puVar2 + 1);
      uVar4 = (uint)*(byte *)puVar2;
    }
    puVar2 = puVar1;
    if (bVar14) {
      puVar2 = (undefined4 *)((int)puVar1 + 2);
      *(undefined2 *)puVar1 = uVar5;
    }
    puVar1 = puVar2;
    if (bVar13) {
      puVar1 = (undefined4 *)((int)puVar2 + 1);
      *(char *)puVar2 = (char)uVar4;
    }
    return CONCAT44(puVar3,puVar1);
  }
  return CONCAT44(puVar3,puVar1);
}

