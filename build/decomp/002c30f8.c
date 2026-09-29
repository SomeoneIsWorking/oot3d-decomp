// OoT3D decomp @ 002c30f8  name=FUN_002c30f8  size=52

undefined4 * FUN_002c30f8(int param_1,undefined4 *param_2,uint param_3)

{
  uint uVar1;
  undefined4 *puVar2;
  undefined1 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  bool bVar6;

  puVar2 = *(undefined4 **)(param_1 + 0x24);
  if (((uint)puVar2 & 1) == 0) {
    if (((uint)puVar2 & 2) != 0) {
      puVar2 = (undefined4 *)FUN_00303b14(param_2,param_3,*(undefined4 *)(DAT_002c312c + 4));
      return puVar2;
    }
    return puVar2;
  }
  if (3 < param_3) {
    if (((uint)param_2 & 3) != 0) {
      iVar5 = 4 - ((uint)param_2 & 3);
      puVar2 = param_2;
      if (iVar5 != 2) {
        puVar2 = (undefined4 *)((int)param_2 + 1);
        *(undefined1 *)param_2 = 0;
      }
      param_3 = param_3 - iVar5;
      param_2 = puVar2;
      if (1 < iVar5) {
        param_2 = (undefined4 *)((int)puVar2 + 2);
        *(undefined2 *)puVar2 = 0;
      }
    }
    bVar6 = 0x1f < param_3;
    param_3 = param_3 - 0x20;
    do {
      if (bVar6) {
        *param_2 = 0;
        param_2[1] = 0;
        param_2[2] = 0;
        param_2[3] = 0;
        param_2[4] = 0;
        param_2[5] = 0;
        param_2[6] = 0;
        param_2[7] = 0;
        param_2 = param_2 + 8;
        bVar6 = 0x1f < param_3;
        param_3 = param_3 - 0x20;
      }
    } while (bVar6);
    if ((bool)((byte)(param_3 >> 4) & 1)) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2[2] = 0;
      param_2[3] = 0;
      param_2 = param_2 + 4;
    }
    if ((int)(param_3 << 0x1c) < 0) {
      *param_2 = 0;
      param_2[1] = 0;
      param_2 = param_2 + 2;
    }
    uVar1 = param_3 << 0x1e;
    puVar2 = param_2;
    if ((bool)((byte)((param_3 << 0x1c) >> 0x1e) & 1)) {
      puVar2 = param_2 + 1;
      *param_2 = 0;
    }
    if (uVar1 == 0) {
      return puVar2;
    }
    puVar4 = puVar2;
    if ((int)uVar1 < 0) {
      puVar4 = (undefined4 *)((int)puVar2 + 2);
      *(undefined2 *)puVar2 = 0;
    }
    puVar2 = puVar4;
    if ((uVar1 & 0x40000000) != 0) {
      puVar2 = (undefined4 *)((int)puVar4 + 1);
      *(undefined1 *)puVar4 = 0;
    }
    return puVar2;
  }
  if ((bool)((byte)(param_3 >> 1) & 1)) {
    puVar3 = (undefined1 *)((int)param_2 + 1);
    *(undefined1 *)param_2 = 0;
    param_2 = (undefined4 *)((int)param_2 + 2);
    *puVar3 = 0;
  }
  puVar2 = param_2;
  if ((int)(param_3 << 0x1f) < 0) {
    puVar2 = (undefined4 *)((int)param_2 + 1);
    *(undefined1 *)param_2 = 0;
  }
  return puVar2;
}
