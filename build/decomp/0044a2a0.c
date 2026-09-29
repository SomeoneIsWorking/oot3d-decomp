// OoT3D decomp @ 0044a2a0  name=FUN_0044a2a0  size=484

int FUN_0044a2a0(int *param_1,int param_2,int param_3,int param_4,uint param_5)

{
  ushort uVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  undefined4 *puVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined2 *puVar9;
  undefined2 *puVar10;
  undefined4 *puVar11;
  bool bVar12;

  puVar9 = (undefined2 *)(param_3 + param_4);
  puVar6 = *(undefined4 **)(param_2 + 8);
  puVar11 = (undefined4 *)(param_2 - (((uint)*(ushort *)(param_2 + 2) << 0x11) >> 0x19));
  iVar3 = *(int *)(param_2 + 0xc);
  puVar10 = (undefined2 *)(param_2 + 0x10 + *(int *)(param_2 + 4));
  puVar8 = (undefined4 *)(param_3 + -0x10);
  if (puVar6 == (undefined4 *)0x0) {
    *param_1 = iVar3;
  }
  else {
    puVar6[3] = iVar3;
  }
  uVar2 = DAT_0044a484;
  if (iVar3 == 0) {
    param_1[1] = (int)puVar6;
    uVar2 = DAT_0044a484;
  }
  else {
    *(undefined4 **)(iVar3 + 8) = puVar6;
  }
  uVar4 = (int)puVar8 - (int)puVar11;
  if (0x13 < uVar4) {
    if (param_5 == 0) {
      uVar4 = (uint)*(byte *)(param_1 + 5);
    }
    if (param_5 != 0 || uVar4 != 0) {
      *(short *)puVar11 = (short)uVar2;
      *(undefined2 *)((int)puVar11 + 2) = 0;
      puVar11[1] = (int)puVar8 - (int)(puVar11 + 4);
      puVar11[3] = 0;
      puVar11[2] = puVar6;
      if (puVar6 == (undefined4 *)0x0) {
        iVar3 = *param_1;
        *param_1 = (int)puVar11;
      }
      else {
        iVar3 = puVar6[3];
        puVar6[3] = puVar11;
      }
      puVar11[3] = iVar3;
      puVar6 = puVar11;
      if (iVar3 == 0) {
        param_1[1] = (int)puVar11;
        puVar11 = puVar8;
      }
      else {
        *(undefined4 **)(iVar3 + 8) = puVar11;
        puVar11 = puVar8;
      }
    }
  }
  uVar4 = (int)puVar10 - (int)puVar9;
  if (0x13 < uVar4) {
    if (param_5 == 1) {
      uVar4 = (uint)*(byte *)(param_1 + 5);
    }
    if (param_5 != 1 || uVar4 != 0) {
      *puVar9 = (short)uVar2;
      puVar9[1] = 0;
      *(int *)(puVar9 + 2) = (int)puVar10 - (int)(puVar9 + 8);
      *(undefined4 **)(puVar9 + 4) = puVar6;
      *(undefined4 *)(puVar9 + 6) = 0;
      if (puVar6 == (undefined4 *)0x0) {
        iVar3 = *param_1;
        *param_1 = (int)puVar9;
      }
      else {
        iVar3 = puVar6[3];
        puVar6[3] = puVar9;
      }
      *(int *)(puVar9 + 6) = iVar3;
      puVar10 = puVar9;
      if (iVar3 == 0) {
        param_1[1] = (int)puVar9;
      }
      else {
        *(undefined2 **)(iVar3 + 8) = puVar9;
      }
    }
  }
  uVar4 = (int)puVar10 - (int)puVar11;
  bVar12 = (param_1[-1] & 1U) != 0;
  puVar6 = (undefined4 *)0x0;
  if (bVar12) {
    puVar6 = puVar11;
  }
  if (bVar12 && 3 < uVar4) {
    puVar5 = puVar6 + -1;
    if ((int)(uVar4 * 0x20000000) < 0) {
      *puVar6 = 0;
      puVar5 = puVar6;
    }
    for (uVar4 = uVar4 >> 3; uVar4 != 0; uVar4 = uVar4 - 1) {
      puVar5[1] = 0;
      puVar5 = puVar5 + 2;
      *puVar5 = 0;
    }
  }
  *(short *)puVar8 = (short)DAT_0044a488;
  *(int *)(param_3 + -0xc) = (int)puVar10 - param_3;
  *(undefined4 *)(param_3 + -8) = 0;
  *(undefined4 *)(param_3 + -4) = 0;
  uVar1 = (ushort)((param_5 & 1) << 0xf) | (ushort)(((int)puVar8 - (int)puVar11 & 0x7fU) << 8);
  *(ushort *)(param_3 + -0xe) = uVar1;
  *(ushort *)(param_3 + -0xe) = uVar1 | *(ushort *)(param_1 + 4) & 0xff;
  iVar3 = param_1[3];
  *(int *)(param_3 + -8) = iVar3;
  if (iVar3 == 0) {
    iVar7 = param_1[2];
    param_1[2] = (int)puVar8;
  }
  else {
    iVar7 = *(int *)(iVar3 + 0xc);
    *(undefined4 **)(iVar3 + 0xc) = puVar8;
  }
  *(int *)(param_3 + -4) = iVar7;
  if (iVar7 == 0) {
    param_1[3] = (int)puVar8;
  }
  else {
    *(undefined4 **)(iVar7 + 8) = puVar8;
  }
  return param_3;
}
