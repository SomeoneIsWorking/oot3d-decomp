// OoT3D decomp @ 00307e34  name=FUN_00307e34  size=28

void FUN_00307e34(int param_1,int *param_2,int param_3)

{
  undefined4 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint *puVar7;
  int iVar8;
  bool bVar9;
  bool bVar10;
  uint auStack_20 [3];

  uVar1 = DAT_00308074;
  param_1 = param_1 + param_3 * 0x30;
  puVar2 = *(undefined4 **)(*param_2 + 8);
  auStack_20[0] = *DAT_00308070;
  auStack_20[1] = DAT_00308070[1];
  auStack_20[2] = DAT_00308070[2];
  if (param_3 < 1) {
    puVar7 = puVar2 + 2;
    *puVar2 = *(undefined4 *)(param_1 + 0x168);
    puVar2[1] = uVar1;
    *puVar7 = (int)*(short *)(param_1 + 0x15e) | (uint)*(ushort *)(param_1 + 0x15c) << 0x10;
    iVar3 = *(int *)(param_1 + 0x140);
    if ((iVar3 == 3 || iVar3 == 4) || iVar3 == 5) {
      puVar7 = (uint *)0x1;
    }
    if ((iVar3 != 3 && iVar3 != 4) && iVar3 != 5) {
      puVar7 = (uint *)0x0;
    }
    if (*(int *)(param_1 + 0x164) == 0xc) {
      iVar8 = 2;
    }
    else {
      iVar8 = 0;
    }
    bVar9 = iVar3 != 2;
    bVar10 = iVar3 != 5;
    if (!bVar9 || !bVar10) {
      iVar3 = 1;
    }
    if (bVar9 && bVar10) {
      iVar3 = 0;
    }
    if (param_3 == 0) {
      iVar4 = *(int *)(param_1 + 0x160);
    }
    else {
      iVar4 = 0;
    }
    puVar2[3] = (int)puVar7 << 2 | *(int *)(param_1 + 0x13c) << 1 | iVar8 << 4 |
                *(int *)(param_1 + 0x148) << 8 | *(int *)(param_1 + 0x144) << 0xc | iVar3 << 0x18 |
                iVar4 << 0x1c;
    puVar2[4] = *(int *)(param_1 + 0x14c) << 0x18 | *(int *)(param_1 + 0x150) << 0x10 |
                *(uint *)(param_1 + 0x154);
    uVar5 = thunk_FUN_002c83fc(*(undefined4 *)(param_1 + 0x158));
    puVar2[5] = uVar5 >> 3;
    puVar2[6] = 0;
    puVar2[7] = 0;
    puVar2[8] = 0;
    puVar2[9] = 0;
    puVar2[10] = 0;
    puVar2[0xb] = 0;
    puVar2[0xc] = *(undefined4 *)(param_1 + 0x164);
    puVar6 = puVar2 + 0xd;
    *puVar6 = DAT_00308078;
  }
  else {
    *puVar2 = *(undefined4 *)(param_1 + 0x168);
    puVar2[1] = auStack_20[param_3] | 0x805f0000;
    uVar5 = (int)*(short *)(param_1 + 0x15e) | (uint)*(ushort *)(param_1 + 0x15c) << 0x10;
    puVar2[2] = uVar5;
    iVar3 = *(int *)(param_1 + 0x140);
    if ((iVar3 == 3 || iVar3 == 4) || iVar3 == 5) {
      uVar5 = 1;
    }
    if ((iVar3 != 3 && iVar3 != 4) && iVar3 != 5) {
      uVar5 = 0;
    }
    if (*(int *)(param_1 + 0x164) == 0xc) {
      iVar8 = 2;
    }
    else {
      iVar8 = 0;
    }
    bVar9 = iVar3 != 2;
    bVar10 = iVar3 != 5;
    if (!bVar9 || !bVar10) {
      iVar3 = 1;
    }
    if (bVar9 && bVar10) {
      iVar3 = 0;
    }
    puVar2[3] = uVar5 << 2 | *(int *)(param_1 + 0x13c) << 1 | iVar8 << 4 |
                *(int *)(param_1 + 0x148) << 8 | *(int *)(param_1 + 0x144) << 0xc | iVar3 << 0x18;
    puVar2[4] = *(int *)(param_1 + 0x14c) << 0x18 | *(int *)(param_1 + 0x150) << 0x10 |
                *(uint *)(param_1 + 0x154);
    uVar5 = thunk_FUN_002c83fc(*(undefined4 *)(param_1 + 0x158));
    puVar2[5] = uVar5 >> 3;
    puVar6 = puVar2 + 7;
    puVar2[6] = *(undefined4 *)(param_1 + 0x164);
    puVar2[7] = 0;
  }
  *(undefined4 **)(*param_2 + 8) = puVar6 + 1;
  return;
}
