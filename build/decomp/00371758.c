// OoT3D decomp @ 00371758  name=FUN_00371758  size=92

undefined8 FUN_00371758(undefined4 *param_1,byte *param_2,uint param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  byte *pbVar3;
  byte *pbVar4;
  undefined2 uVar5;
  undefined4 unaff_r4;
  undefined4 uVar6;
  undefined4 unaff_r5;
  undefined4 unaff_r6;
  undefined4 unaff_r7;
  undefined4 unaff_r8;
  undefined4 unaff_r9;
  undefined4 unaff_r10;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined1 in_CY;
  bool bVar9;
  bool bVar10;

  while( true ) {
    *param_1 = unaff_r7;
    param_1[1] = unaff_r8;
    param_1[2] = unaff_r9;
    param_1[3] = unaff_r10;
    puVar1 = param_1 + 4;
    if ((bool)in_CY) {
      param_4 = *(undefined4 *)param_2;
      unaff_r4 = *(undefined4 *)(param_2 + 4);
      unaff_r5 = *(undefined4 *)(param_2 + 8);
      unaff_r6 = *(undefined4 *)(param_2 + 0xc);
      param_2 = param_2 + 0x10;
    }
    HintPreloadData(param_2 + 0x40);
    if (!(bool)in_CY) break;
    unaff_r7 = *(undefined4 *)param_2;
    unaff_r8 = *(undefined4 *)(param_2 + 4);
    unaff_r9 = *(undefined4 *)(param_2 + 8);
    unaff_r10 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *puVar1 = param_4;
    param_1[5] = unaff_r4;
    param_1[6] = unaff_r5;
    param_1[7] = unaff_r6;
    param_1 = param_1 + 8;
    in_CY = 0x1f < param_3;
    param_3 = param_3 - 0x20;
  }
  if ((bool)((byte)(param_3 >> 4) & 1)) {
    param_4 = *(undefined4 *)param_2;
    uVar6 = *(undefined4 *)(param_2 + 4);
    uVar7 = *(undefined4 *)(param_2 + 8);
    uVar8 = *(undefined4 *)(param_2 + 0xc);
    param_2 = param_2 + 0x10;
    *puVar1 = param_4;
    param_1[5] = uVar6;
    param_1[6] = uVar7;
    param_1[7] = uVar8;
    puVar1 = param_1 + 8;
  }
  if ((int)(param_3 << 0x1c) < 0) {
    param_4 = *(undefined4 *)param_2;
    uVar6 = *(undefined4 *)(param_2 + 4);
    param_2 = param_2 + 8;
    *puVar1 = param_4;
    puVar1[1] = uVar6;
    puVar1 = puVar1 + 2;
  }
  puVar2 = puVar1;
  pbVar3 = param_2;
  if ((bool)((byte)(param_3 >> 2) & 1)) {
    pbVar3 = param_2 + 4;
    param_4 = *(undefined4 *)param_2;
    puVar2 = puVar1 + 1;
    *puVar1 = param_4;
  }
  uVar5 = (undefined2)param_4;
  if ((param_3 & 3) != 0) {
    bVar10 = (bool)((byte)(param_3 >> 1) & 1);
    param_3 = param_3 << 0x1f;
    bVar9 = (int)param_3 < 0;
    pbVar4 = pbVar3;
    if (bVar10) {
      pbVar4 = pbVar3 + 2;
      uVar5 = *(undefined2 *)pbVar3;
    }
    pbVar3 = pbVar4;
    if (bVar9) {
      pbVar3 = pbVar4 + 1;
      param_3 = (uint)*pbVar4;
    }
    puVar1 = puVar2;
    if (bVar10) {
      puVar1 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = uVar5;
    }
    puVar2 = puVar1;
    if (bVar9) {
      puVar2 = (undefined4 *)((int)puVar1 + 1);
      *(char *)puVar1 = (char)param_3;
    }
    return CONCAT44(pbVar3,puVar2);
  }
  return CONCAT44(pbVar3,puVar2);
}
