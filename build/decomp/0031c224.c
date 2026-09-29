// OoT3D decomp @ 0031c224  name=FUN_0031c224  size=788

void FUN_0031c224(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  int iVar5;
  ushort *puVar6;
  undefined4 uVar7;
  uint uVar8;
  int iVar9;
  uint in_fpscr;
  undefined4 uVar10;

  iVar5 = FUN_0037571c(param_2);
  uVar4 = DAT_0031c57c;
  uVar3 = DAT_0031c578;
  uVar7 = DAT_0031c56c;
  uVar2 = DAT_0031c55c;
  uVar10 = DAT_0031c558;
  puVar6 = (ushort *)0x0;
  if (iVar5 != 0) {
    puVar6 = *(ushort **)(param_2 + 0x22ec);
  }
  iVar9 = 0;
  if (iVar5 == 0) {
    puVar6 = (ushort *)0x0;
  }
  if (puVar6 == (ushort *)0x0) {
    return;
  }
  uVar8 = (uint)*puVar6;
  if (uVar8 == *(uint *)(param_1 + 0xff0)) {
    return;
  }
  switch(uVar8) {
  case 1:
    *(undefined4 *)(param_1 + 0xfe8) = 0;
    *(undefined4 *)(param_1 + 0xfec) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
    break;
  case 2:
    uVar7 = FUN_0036ae14(param_1 + 0x1a4,10);
    uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,uVar10,uVar7,uVar10,param_1 + 0x1a4,10,2);
    iVar5 = FUN_0037571c(param_2);
    if (iVar5 != 0) {
      iVar9 = *(int *)(param_2 + 0x22ec);
    }
    if (iVar9 != 0) {
      uVar10 = VectorSignedToFloat(*(undefined4 *)(iVar9 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x28) = uVar10;
      uVar10 = VectorSignedToFloat(*(undefined4 *)(iVar9 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x2c) = uVar10;
      uVar10 = VectorSignedToFloat(*(undefined4 *)(iVar9 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x30) = uVar10;
      uVar1 = *(undefined2 *)(iVar9 + 8);
      *(undefined2 *)(param_1 + 0xbe) = uVar1;
      *(undefined2 *)(param_1 + 0x36) = uVar1;
    }
    *(undefined4 *)(param_1 + 0xfe8) = 1;
    *(undefined4 *)(param_1 + 0xfec) = 1;
    goto LAB_0031c4f8;
  case 3:
    uVar7 = FUN_0036ae14(param_1 + 0x1a4,10);
    uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,uVar10,uVar7,uVar10,param_1 + 0x1a4,10,2);
    *(undefined4 *)(param_1 + 0xfe8) = 2;
    *(undefined4 *)(param_1 + 0xfec) = 1;
    *(undefined4 *)(param_1 + 0xff4) = 0;
    goto LAB_0031c530;
  case 4:
    *(undefined4 *)(param_1 + 0x13c) = DAT_0031c560;
    *(undefined4 *)(param_1 + 0x140) = DAT_0031c564;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 5;
    *(ushort *)(DAT_0031c568 + 0xf2) = *(ushort *)(DAT_0031c568 + 0xf2) | 0x800;
    FUN_0037572c(uVar7,param_1);
    uVar7 = FUN_0036ae14(param_1 + 0x1a4,0xc);
    uVar2 = DAT_0031c570;
    *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 5;
    uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x6c) = uVar10;
    *(undefined1 *)(param_1 + 0xe0c) = 4;
    FUN_00375c08(uVar10,uVar10,uVar7,uVar2,param_1 + 0x1a4,0xc,0);
    *(undefined4 *)(param_1 + 0xe1c) = DAT_0031c574;
    break;
  case 5:
    uVar7 = FUN_0036ae14(param_1 + 0x1a4,0x10);
    uVar7 = VectorSignedToFloat(uVar7,(byte)(in_fpscr >> 0x15) & 3);
    FUN_00375c08(uVar2,uVar10,uVar7,uVar10,param_1 + 0x1a4,0x10,2);
    *(undefined4 *)(param_1 + 0xfe8) = 3;
    *(undefined4 *)(param_1 + 0xfec) = 2;
    iVar5 = FUN_0037571c(param_2);
    if (iVar5 != 0) {
      iVar9 = *(int *)(param_2 + 0x22ec);
    }
    if (iVar9 != 0) {
      uVar10 = VectorSignedToFloat(*(undefined4 *)(iVar9 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x28) = uVar10;
      uVar10 = VectorSignedToFloat(*(undefined4 *)(iVar9 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x2c) = uVar10;
      uVar10 = VectorSignedToFloat(*(undefined4 *)(iVar9 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
      *(undefined4 *)(param_1 + 0x30) = uVar10;
      uVar1 = *(undefined2 *)(iVar9 + 8);
      *(undefined2 *)(param_1 + 0xbe) = uVar1;
      *(undefined2 *)(param_1 + 0x36) = uVar1;
    }
    FUN_0037547c(DAT_0031c580,param_1 + 0x28,4,DAT_0031c57c,DAT_0031c57c,DAT_0031c578);
LAB_0031c4f8:
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    break;
  case 6:
    *(undefined4 *)(param_1 + 0xfec) = 2;
    *(undefined4 *)(param_1 + 0xfe8) = 4;
    FUN_0037547c(DAT_0031c584,param_1 + 0x28,4,uVar4,uVar4,uVar3);
LAB_0031c530:
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
    break;
  case 7:
    *(undefined4 *)(param_1 + 0xfe8) = 5;
    *(undefined4 *)(param_1 + 0xfec) = 0;
    *(undefined1 *)(param_1 + 0xd0) = 0;
  }
  *(uint *)(param_1 + 0xff0) = uVar8;
  return;
}
