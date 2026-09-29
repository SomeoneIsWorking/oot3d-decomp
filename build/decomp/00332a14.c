// OoT3D decomp @ 00332a14  name=FUN_00332a14  size=628

undefined4
FUN_00332a14(int param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
            undefined4 *param_5,undefined4 *param_6)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;

  uVar7 = DAT_00332c88;
  iVar1 = *(int *)(param_1 + 0x1fc);
  if (*(int *)(param_1 + 0x1f8) <= iVar1) {
    return 0;
  }
  if (param_2 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1e4) + iVar1 * 0xc);
    *puVar2 = DAT_00332c88;
    puVar2[1] = uVar7;
    puVar2[2] = uVar7;
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1e4) + iVar1 * 0xc);
    uVar5 = param_2[1];
    uVar8 = param_2[2];
    *puVar2 = *param_2;
    puVar2[1] = uVar5;
    puVar2[2] = uVar8;
  }
  uVar5 = DAT_00332c8c;
  iVar1 = *(int *)(param_1 + 0x1fc);
  iVar4 = *(int *)(param_1 + 0x1e8);
  if (param_3 == (undefined4 *)0x0) {
    if (((*DAT_00332c90 & 1) == 0) &&
       (iVar3 = FUN_003679b4(DAT_00332c90), puVar2 = DAT_00332c94, iVar3 != 0)) {
      *DAT_00332c94 = uVar5;
      puVar2[1] = uVar7;
      puVar2[2] = uVar7;
      puVar2[3] = uVar7;
      puVar2[4] = uVar7;
      puVar2[5] = uVar5;
      puVar2[6] = uVar7;
      puVar2[7] = uVar7;
      puVar2[8] = uVar7;
      puVar2[9] = uVar7;
      puVar2[10] = uVar5;
      puVar2[0xb] = uVar7;
    }
    FUN_00372224(iVar4 + iVar1 * 0x30,DAT_00332c94);
  }
  else {
    puVar2 = (undefined4 *)(iVar4 + iVar1 * 0x30);
    uVar8 = param_3[1];
    uVar6 = param_3[2];
    uVar9 = param_3[3];
    uVar10 = param_3[4];
    *puVar2 = *param_3;
    puVar2[1] = uVar8;
    puVar2[2] = uVar6;
    puVar2[3] = uVar9;
    puVar2[4] = uVar10;
    uVar8 = param_3[6];
    uVar6 = param_3[7];
    uVar9 = param_3[8];
    uVar10 = param_3[9];
    puVar2[5] = param_3[5];
    puVar2[6] = uVar8;
    puVar2[7] = uVar6;
    puVar2[8] = uVar9;
    puVar2[9] = uVar10;
    uVar8 = param_3[0xb];
    puVar2[10] = param_3[10];
    puVar2[0xb] = uVar8;
  }
  if (param_4 == (undefined4 *)0x0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1ec) + *(int *)(param_1 + 0x1fc) * 0xc);
    *puVar2 = uVar5;
    puVar2[1] = uVar5;
    puVar2[2] = uVar5;
  }
  else {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1ec) + *(int *)(param_1 + 0x1fc) * 0xc);
    uVar5 = param_4[1];
    uVar8 = param_4[2];
    *puVar2 = *param_4;
    puVar2[1] = uVar5;
    puVar2[2] = uVar8;
  }
  if (*(int *)(param_1 + 0x1f0) != 0) {
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1f0) + *(int *)(param_1 + 0x1fc) * 0x40);
    uVar5 = param_5[1];
    uVar8 = param_5[2];
    uVar6 = param_5[3];
    *puVar2 = *param_5;
    puVar2[1] = uVar5;
    puVar2[2] = uVar8;
    puVar2[3] = uVar6;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1f0) + (*(int *)(param_1 + 0x1fc) * 4 + 1) * 0x10);
    uVar5 = param_5[5];
    uVar8 = param_5[6];
    uVar6 = param_5[7];
    *puVar2 = param_5[4];
    puVar2[1] = uVar5;
    puVar2[2] = uVar8;
    puVar2[3] = uVar6;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1f0) + (*(int *)(param_1 + 0x1fc) * 4 + 2) * 0x10);
    uVar5 = param_5[9];
    uVar8 = param_5[10];
    uVar6 = param_5[0xb];
    *puVar2 = param_5[8];
    puVar2[1] = uVar5;
    puVar2[2] = uVar8;
    puVar2[3] = uVar6;
    puVar2 = (undefined4 *)(*(int *)(param_1 + 0x1f0) + (*(int *)(param_1 + 0x1fc) * 4 + 3) * 0x10);
    uVar5 = param_5[0xd];
    uVar8 = param_5[0xe];
    uVar6 = param_5[0xf];
    *puVar2 = param_5[0xc];
    puVar2[1] = uVar5;
    puVar2[2] = uVar8;
    puVar2[3] = uVar6;
  }
  iVar1 = *(int *)(param_1 + 500);
  if (iVar1 != 0) {
    if (param_6 == (undefined4 *)0x0) {
      puVar2 = (undefined4 *)(iVar1 + *(int *)(param_1 + 0x1fc) * 8);
      *puVar2 = uVar7;
      puVar2[1] = uVar7;
    }
    else {
      uVar7 = param_6[1];
      puVar2 = (undefined4 *)(iVar1 + *(int *)(param_1 + 0x1fc) * 8);
      *puVar2 = *param_6;
      puVar2[1] = uVar7;
    }
  }
  *(int *)(param_1 + 0x1fc) = *(int *)(param_1 + 0x1fc) + 1;
  return 1;
}
