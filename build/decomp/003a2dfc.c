// OoT3D decomp @ 003a2dfc  name=FUN_003a2dfc  size=308

void FUN_003a2dfc(int param_1,int param_2)

{
  undefined2 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  uint uVar4;
  undefined4 uVar5;
  int iVar6;
  ushort *puVar7;
  uint in_fpscr;
  undefined4 uVar8;

  FUN_0031a3dc();
  FUN_00370734(param_1 + 0x1a4,*(undefined4 *)(param_1 + 0xbbc));
  FUN_003264c8(param_1);
  puVar7 = (ushort *)0x0;
  uVar4 = FUN_0037571c(param_2);
  if (uVar4 != 0) {
    puVar7 = *(ushort **)(param_2 + 0x22e8);
  }
  if (puVar7 != (ushort *)0x0) {
    uVar4 = (uint)*puVar7;
  }
  if (puVar7 != (ushort *)0x0 && uVar4 != 1) {
    uVar5 = FUN_0036ae14(param_1 + 0x1a4,9);
    uVar3 = DAT_003a2f34;
    uVar2 = DAT_003a2f30;
    iVar6 = *(int *)(param_2 + 0x22e8);
    uVar8 = VectorSignedToFloat(uVar5,(byte)(in_fpscr >> 0x15) & 3);
    uVar5 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    uVar5 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    uVar5 = VectorSignedToFloat(*(undefined4 *)(iVar6 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    uVar1 = *(undefined2 *)(iVar6 + 6);
    *(undefined2 *)(param_1 + 0xbc) = uVar1;
    *(undefined2 *)(param_1 + 0x34) = uVar1;
    uVar1 = *(undefined2 *)(iVar6 + 8);
    *(undefined2 *)(param_1 + 0xbe) = uVar1;
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    uVar5 = DAT_003a2f38;
    uVar1 = *(undefined2 *)(iVar6 + 10);
    *(undefined2 *)(param_1 + 0xc0) = uVar1;
    *(undefined2 *)(param_1 + 0x38) = uVar1;
    FUN_00353020(uVar3,uVar2,uVar8,uVar2,param_1 + 0x1a4,uVar5,2);
    *(byte *)(param_1 + 0x1f6) = *(byte *)(param_1 + 0x1f6) | 1;
    FUN_003fd1b8(uVar3,param_2,param_1,param_1 + 0x1a4);
    *(undefined4 *)(param_1 + 0xbbc) = 0x25;
    *(undefined4 *)(param_1 + 0xbc0) = 1;
    *(undefined1 *)(param_1 + 0xd0) = 0xff;
  }
  return;
}
