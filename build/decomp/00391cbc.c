// OoT3D decomp @ 00391cbc  name=FUN_00391cbc  size=140

void FUN_00391cbc(int param_1,int param_2)

{
  undefined2 uVar1;
  uint uVar2;
  int iVar3;
  ushort *puVar4;
  uint in_fpscr;
  undefined4 uVar5;

  puVar4 = (ushort *)0x0;
  uVar2 = FUN_0037571c(param_2);
  if (uVar2 != 0) {
    puVar4 = *(ushort **)(param_2 + 0x22e8);
  }
  if (puVar4 != (ushort *)0x0) {
    uVar2 = (uint)*puVar4;
  }
  if (puVar4 != (ushort *)0x0 && uVar2 != 1) {
    iVar3 = *(int *)(param_2 + 0x22e8);
    uVar5 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x28) = uVar5;
    uVar5 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar5;
    uVar5 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar5;
    uVar1 = *(undefined2 *)(iVar3 + 8);
    *(undefined2 *)(param_1 + 0xbe) = uVar1;
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    *(undefined4 *)(param_1 + 0xbbc) = 9;
    *(undefined4 *)(param_1 + 0xbc0) = 1;
  }
  return;
}
