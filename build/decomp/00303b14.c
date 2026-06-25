// OoT3D decomp @ 00303b14  name=FUN_00303b14  size=16

undefined4 * FUN_00303b14(undefined4 *param_1,uint param_2,undefined param_3)

{
  uint uVar1;
  undefined2 uVar2;
  undefined4 *puVar3;
  undefined *puVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  int iVar7;
  bool bVar8;
  
  uVar2 = CONCAT11(param_3,param_3);
  uVar6 = CONCAT22(uVar2,uVar2);
  if (param_2 < 4) {
    if ((bool)((byte)(param_2 >> 1) & 1)) {
      puVar4 = (undefined *)((int)param_1 + 1);
      *(undefined *)param_1 = param_3;
      param_1 = (undefined4 *)((int)param_1 + 2);
      *puVar4 = param_3;
    }
    puVar3 = param_1;
    if ((int)(param_2 << 0x1f) < 0) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = param_3;
    }
    return puVar3;
  }
  if (((uint)param_1 & 3) != 0) {
    iVar7 = 4 - ((uint)param_1 & 3);
    puVar3 = param_1;
    if (iVar7 != 2) {
      puVar3 = (undefined4 *)((int)param_1 + 1);
      *(undefined *)param_1 = param_3;
    }
    param_2 = param_2 - iVar7;
    param_1 = puVar3;
    if (1 < iVar7) {
      param_1 = (undefined4 *)((int)puVar3 + 2);
      *(undefined2 *)puVar3 = uVar2;
    }
  }
  bVar8 = 0x1f < param_2;
  param_2 = param_2 - 0x20;
  do {
    if (bVar8) {
      *param_1 = uVar6;
      param_1[1] = uVar6;
      param_1[2] = uVar6;
      param_1[3] = uVar6;
      param_1[4] = uVar6;
      param_1[5] = uVar6;
      param_1[6] = uVar6;
      param_1[7] = uVar6;
      param_1 = param_1 + 8;
      bVar8 = 0x1f < param_2;
      param_2 = param_2 - 0x20;
    }
  } while (bVar8);
  if ((bool)((byte)(param_2 >> 4) & 1)) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1[2] = uVar6;
    param_1[3] = uVar6;
    param_1 = param_1 + 4;
  }
  if ((int)(param_2 << 0x1c) < 0) {
    *param_1 = uVar6;
    param_1[1] = uVar6;
    param_1 = param_1 + 2;
  }
  uVar1 = param_2 << 0x1e;
  puVar3 = param_1;
  if ((bool)((byte)((param_2 << 0x1c) >> 0x1e) & 1)) {
    puVar3 = param_1 + 1;
    *param_1 = uVar6;
  }
  if (uVar1 == 0) {
    return puVar3;
  }
  puVar5 = puVar3;
  if ((int)uVar1 < 0) {
    puVar5 = (undefined4 *)((int)puVar3 + 2);
    *(undefined2 *)puVar3 = uVar2;
  }
  puVar3 = puVar5;
  if ((uVar1 & 0x40000000) != 0) {
    puVar3 = (undefined4 *)((int)puVar5 + 1);
    *(undefined *)puVar5 = param_3;
  }
  return puVar3;
}

