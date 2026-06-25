// OoT3D decomp @ 0037172c  name=FUN_0037172c  size=12

/* WARNING: Removing unreachable block (ram,0x003717a0) */
/* WARNING: Removing unreachable block (ram,0x00371798) */
/* WARNING: Removing unreachable block (ram,0x00371794) */
/* WARNING: Removing unreachable block (ram,0x0037179c) */
/* WARNING: Removing unreachable block (ram,0x003717a4) */
/* WARNING: Removing unreachable block (ram,0x003717a8) */

undefined8 FUN_0037172c(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  uint uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  uVar6 = *param_2;
  uVar7 = param_2[1];
  uVar8 = param_2[2];
  uVar9 = param_2[3];
  HintPreloadData(param_2 + 0x14);
  uVar10 = param_2[4];
  uVar11 = param_2[5];
  uVar12 = param_2[6];
  uVar13 = param_2[7];
  param_2 = param_2 + 8;
  puVar1 = (undefined4 *)(param_1 + 4);
  uVar4 = 0xac;
  while( true ) {
    *puVar1 = uVar6;
    puVar1[1] = uVar7;
    puVar1[2] = uVar8;
    puVar1[3] = uVar9;
    uVar5 = uVar4 - 0x20;
    puVar1[4] = uVar10;
    puVar1[5] = uVar11;
    puVar1[6] = uVar12;
    puVar1[7] = uVar13;
    puVar2 = puVar1 + 8;
    if (0x1f < uVar4) {
      uVar6 = *param_2;
      uVar7 = param_2[1];
      uVar8 = param_2[2];
      uVar9 = param_2[3];
      param_2 = param_2 + 4;
    }
    HintPreloadData(param_2 + 0x10);
    if (0x1f >= uVar4) break;
    uVar10 = *param_2;
    uVar11 = param_2[1];
    uVar12 = param_2[2];
    uVar13 = param_2[3];
    param_2 = param_2 + 4;
    puVar1 = puVar2;
    uVar4 = uVar5;
  }
  if ((bool)((byte)(uVar5 >> 4) & 1)) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    uVar8 = param_2[2];
    uVar9 = param_2[3];
    param_2 = param_2 + 4;
    *puVar2 = uVar6;
    puVar1[9] = uVar7;
    puVar1[10] = uVar8;
    puVar1[0xb] = uVar9;
    puVar2 = puVar1 + 0xc;
  }
  if ((int)(uVar4 << 0x1c) < 0) {
    uVar6 = *param_2;
    uVar7 = param_2[1];
    param_2 = param_2 + 2;
    *puVar2 = uVar6;
    puVar2[1] = uVar7;
    puVar2 = puVar2 + 2;
  }
  puVar3 = puVar2;
  puVar1 = param_2;
  if ((bool)((byte)(uVar5 >> 2) & 1)) {
    puVar1 = param_2 + 1;
    puVar3 = puVar2 + 1;
    *puVar2 = *param_2;
  }
  return CONCAT44(puVar1,puVar3);
}

