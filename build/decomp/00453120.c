// OoT3D decomp @ 00453120  name=FUN_00453120  size=600

undefined4 FUN_00453120(int param_1)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined4 extraout_s0;
  undefined4 extraout_s0_00;
  undefined4 extraout_s1;
  undefined4 extraout_s1_00;
  undefined4 extraout_s2;
  undefined4 extraout_s2_00;
  undefined4 uVar9;
  undefined4 extraout_s3;
  undefined4 extraout_s3_00;
  undefined4 uVar10;
  undefined4 extraout_s4;
  undefined4 extraout_s4_00;
  undefined4 uVar11;
  undefined4 extraout_s5;
  undefined4 extraout_s5_00;
  undefined4 uVar12;
  undefined4 extraout_s6;
  undefined4 extraout_s6_00;
  undefined4 uVar13;
  undefined4 extraout_s7;
  undefined4 extraout_s7_00;
  undefined4 uVar14;

  FUN_00466720(param_1 + 0x40,*(undefined4 *)(param_1 + 0x30));
  uVar4 = FUN_002fac84(param_1 + 0x194,param_1 + 0x40);
  uVar5 = FUN_003222dc(*(undefined4 *)(param_1 + 4),uVar4,4,0,0,0);
  *(undefined4 *)(param_1 + 0x34) = uVar5;
  FUN_002fab78(param_1 + 0x194,param_1 + 0x40,uVar5,uVar4);
  iVar6 = FUN_002faa24(param_1 + 0x3b0,param_1 + 0x40);
  uVar7 = iVar6 + 0x1fU & 0xffffffe0;
  uVar4 = FUN_003222dc(*(undefined4 *)(param_1 + 4),uVar7,0x20,0,0,0);
  *(undefined4 *)(param_1 + 0x38) = uVar4;
  iVar6 = FUN_002fa9f4(param_1 + 0x3b0,param_1 + 0x40);
  uVar8 = iVar6 + 0x1fU & 0xffffffe0;
  uVar4 = FUN_003222dc(*(undefined4 *)(param_1 + 4),uVar8,0x20,0,0,0);
  *(undefined4 *)(param_1 + 0x3c) = uVar4;
  FUN_002fa904(param_1 + 0x3b0,param_1 + 0x40,param_1 + 0x194,*(undefined4 *)(param_1 + 0x38),uVar7,
               uVar4,uVar8);
  uVar4 = extraout_s0;
  uVar5 = extraout_s1;
  uVar9 = extraout_s2;
  uVar10 = extraout_s3;
  uVar11 = extraout_s4;
  uVar12 = extraout_s5;
  uVar13 = extraout_s6;
  uVar14 = extraout_s7;
  if (((*DAT_00453378 & 1) == 0) &&
     (iVar6 = FUN_003679b4(DAT_00453378), puVar3 = DAT_00453384, uVar2 = DAT_00453380,
     uVar1 = DAT_0045337c, uVar4 = extraout_s0_00, uVar5 = extraout_s1_00, uVar9 = extraout_s2_00,
     uVar10 = extraout_s3_00, uVar11 = extraout_s4_00, uVar12 = extraout_s5_00,
     uVar13 = extraout_s6_00, uVar14 = extraout_s7_00, iVar6 != 0)) {
    *DAT_00453384 = DAT_0045337c;
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
    uVar4 = uVar2;
    uVar5 = uVar2;
    uVar9 = uVar2;
    uVar10 = uVar2;
    uVar11 = uVar2;
    uVar12 = uVar1;
    uVar13 = uVar2;
    uVar14 = uVar2;
  }
  FUN_00372224(uVar4,uVar5,uVar9,uVar10,uVar11,uVar12,uVar13,uVar14,param_1 + 0x458,DAT_00453384);
  uVar4 = FUN_003222dc(*(undefined4 *)(param_1 + 4),0x4000,0x20,0,0,0);
  *(undefined4 *)(param_1 + 0x2c) = uVar4;
  FUN_00466cf8(param_1 + 8,uVar4,0x4000);
  FUN_004651f4(param_1 + 0x3b0,param_1 + 0x40,param_1 + 8);
  uVar4 = FUN_00465a80();
  uVar5 = FUN_003222dc(*(undefined4 *)(param_1 + 4),uVar4,0x20,0,0,0);
  FUN_00465b34(uVar5,uVar4);
  iVar6 = FUN_004651e8();
  uVar4 = DAT_0045338c;
  *(undefined4 *)(iVar6 + 0x24) = DAT_00453388;
  iVar6 = FUN_0046ba74(param_1 + 0x1a0,uVar4,0xffffffff);
  if (iVar6 == 0) {
    FUN_0030acc0(param_1 + 0x1a0,uVar4,param_1 + 8,0xffffffff,0);
  }
  return 1;
}
