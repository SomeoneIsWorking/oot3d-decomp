// OoT3D decomp @ 002d3a3c  name=FUN_002d3a3c  size=284

undefined4 FUN_002d3a3c(int param_1,uint *param_2)

{
  uint *puVar1;
  uint uVar2;
  undefined4 *puVar3;
  uint uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  uint uVar7;
  bool bVar8;
  bool bVar9;

  if ((((((float)param_2[3] < DAT_002d3b58) || (0x3f800000 < (int)param_2[3])) ||
       ((float)param_2[4] < DAT_002d3b58)) ||
      ((0x3f800000 < (int)param_2[4] || ((float)param_2[6] < DAT_002d3b58)))) ||
     ((0x3f800000 < (int)param_2[6] ||
      (((float)param_2[7] < DAT_002d3b58 || (0x3f800000 < (int)param_2[7])))))) {
    return 0;
  }
  if (*(char *)(param_1 + 0x100) == '\x01') {
    bVar9 = *(uint *)(param_1 + 0xec) <= *param_2;
    bVar8 = *param_2 == *(uint *)(param_1 + 0xec);
    if (!bVar9 || bVar8) {
      bVar9 = *(uint *)(param_1 + 0xf0) <= param_2[2];
      bVar8 = param_2[2] == *(uint *)(param_1 + 0xf0);
    }
    if (bVar9 && !bVar8) {
      return 0;
    }
    puVar1 = (uint *)param_2[5];
    if (puVar1 != (uint *)0x0) {
      bVar9 = *(uint *)(param_1 + 0xf4) <= *puVar1;
      bVar8 = *puVar1 == *(uint *)(param_1 + 0xf4);
      if (!bVar9 || bVar8) {
        bVar9 = *(uint *)(param_1 + 0xf8) <= puVar1[1];
        bVar8 = puVar1[1] == *(uint *)(param_1 + 0xf8);
      }
      if (!bVar9 || bVar8) {
        bVar9 = *(uint *)(param_1 + 0xfc) <= puVar1[2];
        bVar8 = puVar1[2] == *(uint *)(param_1 + 0xfc);
      }
      if (bVar9 && !bVar8) {
        return 0;
      }
    }
  }
  uVar2 = param_2[1];
  uVar4 = param_2[2];
  uVar7 = param_2[3];
  *(uint *)(param_1 + 4) = *param_2;
  *(uint *)(param_1 + 8) = uVar2;
  *(uint *)(param_1 + 0xc) = uVar4;
  *(uint *)(param_1 + 0x10) = uVar7;
  uVar2 = param_2[5];
  uVar4 = param_2[6];
  uVar7 = param_2[7];
  *(uint *)(param_1 + 0x14) = param_2[4];
  *(uint *)(param_1 + 0x18) = uVar2;
  *(uint *)(param_1 + 0x1c) = uVar4;
  *(uint *)(param_1 + 0x20) = uVar7;
  puVar3 = *(undefined4 **)(param_1 + 0x18);
  if (puVar3 != (undefined4 *)0x0) {
    uVar5 = puVar3[1];
    uVar6 = puVar3[2];
    *(undefined4 *)(param_1 + 0x2c) = *puVar3;
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    *(undefined4 *)(param_1 + 0x34) = uVar6;
    *(undefined4 **)(param_1 + 0x18) = (undefined4 *)(param_1 + 0x2c);
  }
  return 1;
}
