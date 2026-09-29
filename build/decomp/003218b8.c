// OoT3D decomp @ 003218b8  name=FUN_003218b8  size=368

void FUN_003218b8(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  int iVar5;
  ushort *puVar6;
  uint uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  int iVar11;
  uint unaff_r6;
  uint in_fpscr;

  iVar5 = FUN_0037571c(param_2);
  puVar4 = DAT_00321a38;
  uVar8 = DAT_00321a34;
  puVar3 = DAT_00321a30;
  uVar2 = DAT_00321a2c;
  uVar9 = DAT_00321a28;
  puVar6 = (ushort *)0x0;
  if (iVar5 != 0) {
    puVar6 = *(ushort **)(&DAT_000022e4 + param_2);
  }
  iVar11 = 0;
  if (iVar5 == 0) {
    puVar6 = (ushort *)0x0;
  }
  uVar7 = 0;
  if (puVar6 != (ushort *)0x0) {
    unaff_r6 = (uint)*puVar6;
    uVar7 = *(uint *)(param_1 + 0x414);
  }
  if (puVar6 == (ushort *)0x0 || unaff_r6 == uVar7) {
    return;
  }
  if (unaff_r6 == 9) {
    iVar5 = FUN_0037571c(param_2);
    if (iVar5 != 0) {
      iVar11 = *(int *)(&DAT_000022e4 + param_2);
    }
    if (iVar11 != 0) {
      uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar11 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x28) = uVar9;
      uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x2c) = uVar9;
      uVar9 = VectorSignedToFloat(*(undefined4 *)(iVar11 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x30) = uVar9;
      uVar1 = *(undefined2 *)(iVar11 + 8);
      *(undefined2 *)(param_1 + 0xbe) = uVar1;
      *(undefined2 *)(param_1 + 0x36) = uVar1;
    }
    *(undefined4 *)(param_1 + 0x3fc) = 0x19;
    *(undefined4 *)(param_1 + 0x400) = 2;
  }
  else {
    if (unaff_r6 == 10) {
      uVar10 = FUN_0036ae14(param_1 + 0x1a4,*DAT_00321a38);
      uVar10 = VectorSignedToFloat(uVar10,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar9,uVar2,uVar10,uVar8,param_1 + 0x1a4,*puVar4,2);
      uVar9 = 0x1b;
    }
    else {
      if (unaff_r6 != 0xb) goto LAB_00321968;
      uVar8 = FUN_0036ae14(param_1 + 0x1a4,*DAT_00321a30);
      uVar8 = VectorSignedToFloat(uVar8,(byte)(in_fpscr >> 0x15) & 3);
      FUN_00375c08(uVar9,uVar2,uVar8,uVar2,param_1 + 0x1a4,*puVar3,2);
      uVar9 = 0x1c;
    }
    *(undefined4 *)(param_1 + 0x3fc) = uVar9;
  }
LAB_00321968:
  *(uint *)(param_1 + 0x414) = unaff_r6;
  return;
}
