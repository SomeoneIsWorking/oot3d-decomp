// OoT3D decomp @ 0040c9e0  name=Skeleton_0040c9e0  size=448

int * Skeleton_0040c9e0(int *param_1,int param_2)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s0_01;
  undefined4 uVar9;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s1_01;
  undefined4 uVar10;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 extraout_s2_01;
  undefined4 uVar11;
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  undefined4 extraout_s3_01;
  undefined4 uVar12;
  undefined4 extraout_s4;
  undefined4 extraout_s4_00;
  undefined4 extraout_s4_01;
  undefined4 uVar13;
  undefined4 extraout_s5;
  undefined4 extraout_s5_00;
  undefined4 extraout_s5_01;
  undefined4 uVar14;
  undefined4 extraout_s6;
  undefined4 extraout_s6_00;
  undefined4 extraout_s6_01;
  undefined4 uVar15;
  undefined4 extraout_s7;
  undefined4 extraout_s7_00;
  undefined4 extraout_s7_01;
  undefined4 uVar16;
  int local_44;
  undefined1 auStack_40 [48];

  *param_1 = param_2;
  uVar9 = DAT_0040cba4;
  piVar4 = *(int **)(param_2 + 0x18);
  param_1[1] = (int)piVar4;
  param_1[9] = 0;
  param_1[10] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  iVar8 = *(int *)(*piVar4 + 8);
  iVar5 = (**(code **)(*(int *)*DAT_0040cba0 + 0xc))((int *)*DAT_0040cba0,iVar8 * 0xb4,uVar9,0x1f);
  param_1[8] = iVar5;
  param_1[10] = iVar5;
  iVar6 = iVar5 + iVar8 * 0x24;
  param_1[3] = iVar5;
  param_1[2] = iVar6;
  iVar5 = iVar8 * 0x30;
  iVar6 = iVar6 + iVar5;
  iVar7 = iVar6 + iVar5;
  param_1[9] = iVar8 * 0xb4;
  param_1[0xb] = iVar5 + iVar7;
  param_1[5] = iVar7;
  iVar5 = 0;
  param_1[4] = iVar6;
  uVar9 = extraout_s0;
  uVar10 = extraout_s1;
  uVar11 = extraout_s2;
  uVar12 = extraout_s3;
  uVar13 = extraout_s4;
  uVar14 = extraout_s5;
  uVar15 = extraout_s6;
  uVar16 = extraout_s7;
  if (0 < iVar8) {
    do {
      local_44 = *(int *)(param_1[1] + 4) + iVar5 * 0x28;
      FUN_0040f758(&local_44,param_1[4] + iVar5 * 0x30);
      iVar5 = iVar5 + 1;
      uVar9 = extraout_s0_00;
      uVar10 = extraout_s1_00;
      uVar11 = extraout_s2_00;
      uVar12 = extraout_s3_00;
      uVar13 = extraout_s4_00;
      uVar14 = extraout_s5_00;
      uVar15 = extraout_s6_00;
      uVar16 = extraout_s7_00;
    } while (iVar5 < iVar8);
  }
  if (((*DAT_0040cba8 & 1) == 0) &&
     (iVar5 = FUN_003679b4(DAT_0040cba8), puVar3 = DAT_0040cbb4, uVar2 = DAT_0040cbb0,
     uVar1 = DAT_0040cbac, uVar9 = extraout_s0_01, uVar10 = extraout_s1_01, uVar11 = extraout_s2_01,
     uVar12 = extraout_s3_01, uVar13 = extraout_s4_01, uVar14 = extraout_s5_01,
     uVar15 = extraout_s6_01, uVar16 = extraout_s7_01, iVar5 != 0)) {
    *DAT_0040cbb4 = DAT_0040cbac;
    puVar3[1] = uVar2;
    puVar3[2] = uVar2;
    puVar3[3] = uVar2;
    puVar3[4] = uVar2;
    puVar3[5] = uVar1;
    puVar3[6] = uVar2;
    puVar3[7] = uVar2;
    puVar3[8] = uVar2;
    puVar3[9] = uVar2;
    puVar3[10] = uVar1;
    puVar3[0xb] = uVar2;
    uVar9 = uVar2;
    uVar10 = uVar2;
    uVar11 = uVar2;
    uVar12 = uVar2;
    uVar13 = uVar2;
    uVar14 = uVar1;
    uVar15 = uVar2;
    uVar16 = uVar2;
  }
  FUN_00372224(uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,uVar15,uVar16,auStack_40,DAT_0040cbb4);
  FUN_0030478c(param_1,auStack_40);
  iVar5 = 0;
  if (0 < iVar8) {
    do {
      FUN_0034a80c(param_1[2] + iVar5 * 0x30,param_1[5] + iVar5 * 0x30);
      iVar5 = iVar5 + 1;
    } while (iVar5 < iVar8);
  }
  return param_1;
}
