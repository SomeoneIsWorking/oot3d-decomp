// OoT3D decomp @ 003239a4  name=FUN_003239a4  size=148

void FUN_003239a4(int param_1,int param_2,int param_3)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  uint in_fpscr;
  undefined4 uVar4;

  iVar3 = 0;
  iVar2 = FUN_0037571c(param_2);
  if (iVar2 != 0) {
    iVar3 = *(int *)(&DAT_000022dc + param_2 + param_3 * 4);
  }
  if (iVar3 != 0) {
    uVar4 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 0xc),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x28) = uVar4;
    uVar4 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x10),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x2c) = uVar4;
    uVar4 = VectorSignedToFloat(*(undefined4 *)(iVar3 + 0x14),(byte)(in_fpscr >> 0x15) & 3);
    *(undefined4 *)(param_1 + 0x30) = uVar4;
    uVar1 = *(undefined2 *)(iVar3 + 6);
    *(undefined2 *)(param_1 + 0xbc) = uVar1;
    *(undefined2 *)(param_1 + 0x34) = uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 8);
    *(undefined2 *)(param_1 + 0xbe) = uVar1;
    *(undefined2 *)(param_1 + 0x36) = uVar1;
    uVar1 = *(undefined2 *)(iVar3 + 10);
    *(undefined2 *)(param_1 + 0xc0) = uVar1;
    *(undefined2 *)(param_1 + 0x38) = uVar1;
  }
  return;
}
