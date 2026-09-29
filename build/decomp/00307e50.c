// OoT3D decomp @ 00307e50  name=FUN_00307e50  size=544

void FUN_00307e50(int *param_1,int param_2,int *param_3)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  uint *puVar6;
  int iVar7;
  bool bVar8;
  bool bVar9;
  uint local_20 [3];

  iVar2 = DAT_00308074;
  piVar1 = *(int **)(*param_1 + 8);
  local_20[0] = *DAT_00308070;
  local_20[1] = DAT_00308070[1];
  local_20[2] = DAT_00308070[2];
  if (param_2 < 1) {
    puVar6 = (uint *)(piVar1 + 2);
    *piVar1 = param_3[0xb];
    piVar1[1] = iVar2;
    *puVar6 = (int)*(short *)((int)param_3 + 0x22) | (uint)*(ushort *)(param_3 + 8) << 0x10;
    iVar2 = param_3[1];
    if ((iVar2 == 3 || iVar2 == 4) || iVar2 == 5) {
      puVar6 = (uint *)0x1;
    }
    if ((iVar2 != 3 && iVar2 != 4) && iVar2 != 5) {
      puVar6 = (uint *)0x0;
    }
    if (param_3[10] == 0xc) {
      iVar7 = 2;
    }
    else {
      iVar7 = 0;
    }
    bVar8 = iVar2 != 2;
    bVar9 = iVar2 != 5;
    if (!bVar8 || !bVar9) {
      iVar2 = 1;
    }
    if (bVar8 && bVar9) {
      iVar2 = 0;
    }
    if (param_2 == 0) {
      iVar3 = param_3[9];
    }
    else {
      iVar3 = 0;
    }
    piVar1[3] = (int)puVar6 << 2 | *param_3 << 1 | iVar7 << 4 | param_3[3] << 8 | param_3[2] << 0xc
                | iVar2 << 0x18 | iVar3 << 0x1c;
    piVar1[4] = param_3[4] << 0x18 | param_3[5] << 0x10 | param_3[6];
    uVar4 = thunk_FUN_002c83fc(param_3[7]);
    piVar1[5] = uVar4 >> 3;
    piVar1[6] = 0;
    piVar1[7] = 0;
    piVar1[8] = 0;
    piVar1[9] = 0;
    piVar1[10] = 0;
    piVar1[0xb] = 0;
    piVar1[0xc] = param_3[10];
    piVar5 = piVar1 + 0xd;
    *piVar5 = DAT_00308078;
  }
  else {
    *piVar1 = param_3[0xb];
    piVar1[1] = local_20[param_2] | 0x805f0000;
    uVar4 = (int)*(short *)((int)param_3 + 0x22) | (uint)*(ushort *)(param_3 + 8) << 0x10;
    piVar1[2] = uVar4;
    iVar2 = param_3[1];
    if ((iVar2 == 3 || iVar2 == 4) || iVar2 == 5) {
      uVar4 = 1;
    }
    if ((iVar2 != 3 && iVar2 != 4) && iVar2 != 5) {
      uVar4 = 0;
    }
    if (param_3[10] == 0xc) {
      iVar7 = 2;
    }
    else {
      iVar7 = 0;
    }
    bVar8 = iVar2 != 2;
    bVar9 = iVar2 != 5;
    if (!bVar8 || !bVar9) {
      iVar2 = 1;
    }
    if (bVar8 && bVar9) {
      iVar2 = 0;
    }
    piVar1[3] = uVar4 << 2 | *param_3 << 1 | iVar7 << 4 | param_3[3] << 8 | param_3[2] << 0xc |
                iVar2 << 0x18;
    piVar1[4] = param_3[4] << 0x18 | param_3[5] << 0x10 | param_3[6];
    uVar4 = thunk_FUN_002c83fc(param_3[7]);
    piVar1[5] = uVar4 >> 3;
    piVar5 = piVar1 + 7;
    piVar1[6] = param_3[10];
    piVar1[7] = 0;
  }
  *(int **)(*param_1 + 8) = piVar5 + 1;
  return;
}
