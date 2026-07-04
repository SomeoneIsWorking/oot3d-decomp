// OoT3D decomp @ 00465b34  name=FUN_00465b34  size=460

void FUN_00465b34(int param_1,int param_2)

{
  undefined1 *puVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint *puVar7;
  uint *puVar8;
  uint *puVar9;
  uint *puVar10;
  uint uVar11;
  int iVar12;
  uint uVar13;
  
  FUN_002d3a3c(DAT_00465d00 + -0x104);
  iVar6 = FUN_002d399c(DAT_00465d04);
  FUN_0047dd44(DAT_00465d04,param_1,iVar6);
  FUN_00485a34(0,DAT_00465d04);
  FUN_00309d64(0,DAT_00465d08);
  puVar7 = DAT_00465d10;
  puVar1 = DAT_00465d0c;
  DAT_00465d0c[1] = 1;
  uVar2 = DAT_00465d14;
  *puVar7 = 0x10;
  uVar3 = DAT_00465d18;
  puVar7[1] = uVar2;
  puVar7[2] = uVar3;
  uVar11 = DAT_00465d1c;
  puVar7[4] = 0x18;
  puVar7[5] = uVar11;
  uVar13 = DAT_00465d20;
  puVar7[8] = 0x1c;
  puVar7[9] = uVar13;
  uVar4 = DAT_00465d24;
  puVar7[0xc] = 0x40;
  puVar7[0xd] = uVar4;
  uVar5 = DAT_00465d28;
  puVar7[0x10] = 0x40;
  puVar7[0x11] = uVar5;
  uVar5 = DAT_00465d2c;
  puVar7[0x14] = 0x18;
  puVar7[0x15] = uVar5;
  uVar5 = DAT_00465d30;
  puVar7[0x18] = 0x18;
  puVar7[0x19] = uVar5;
  puVar7[0x1c] = 0x50;
  puVar7[0x1d] = uVar4;
  uVar4 = DAT_00465d34;
  puVar7[0x20] = 0x15;
  puVar7[0x21] = uVar4;
  uVar5 = DAT_00465d38;
  puVar7[0x24] = 0x50;
  puVar7[0x25] = uVar5;
  puVar7[0x28] = 0x20;
  puVar7[0x29] = uVar11;
  puVar7[0x2c] = 0x20;
  puVar7[0x2d] = uVar4;
  puVar7[0x30] = 0x20;
  puVar7[0x31] = uVar4;
  puVar7[0x34] = 0x15;
  puVar7[0x35] = uVar2;
  uVar11 = DAT_00465d3c;
  puVar7[0x38] = 0x50;
  puVar7[0x39] = uVar11;
  puVar7[0x3c] = 0x15;
  puVar7[0x3d] = uVar2;
  puVar7[0x40] = 0x15;
  puVar7[0x41] = uVar2;
  puVar7[0x44] = 0x25;
  uVar2 = DAT_00465d40;
  puVar7[0x45] = uVar13;
  uVar11 = 0;
  puVar8 = puVar7 + 1;
  puVar9 = puVar7 + 2;
  iVar12 = 0x12;
  puVar10 = puVar7 + 3;
  do {
    uVar13 = *puVar7 * 4;
    *puVar7 = uVar13;
    if (0x140 < uVar13) {
      uVar13 = 0x140;
    }
    *puVar7 = uVar13;
    uVar13 = *puVar8;
    if (0x3f800000 < (int)*puVar8) {
      uVar13 = uVar2;
    }
    *puVar8 = uVar13;
    uVar13 = *puVar7;
    *puVar9 = uVar3;
    puVar7 = puVar7 + 4;
    if (uVar11 < uVar13) {
      uVar11 = uVar13;
    }
    iVar12 = iVar12 + -1;
    puVar8 = puVar8 + 4;
    puVar9 = puVar9 + 4;
    *(undefined1 *)puVar10 = 1;
    puVar10 = puVar10 + 4;
  } while (iVar12 != 0);
  FUN_0047dd10(DAT_00465d44,param_1 + iVar6,param_2 - iVar6);
  *puVar1 = 0;
  return;
}

