// OoT3D decomp @ 003a7ae4  name=FUN_003a7ae4  size=132

void FUN_003a7ae4(int param_1,int param_2)

{
  int iVar1;
  ushort *puVar2;
  uint uVar3;

  puVar2 = (ushort *)0x0;
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    puVar2 = *(ushort **)(&DAT_000022e4 + param_2);
  }
  if ((puVar2 != (ushort *)0x0) && (uVar3 = (uint)*puVar2, uVar3 != *(uint *)(param_1 + 0x1c4))) {
    if (uVar3 == 1) {
      *(undefined4 *)(param_1 + 0x1bc) = 1;
      *(undefined4 *)(param_1 + 0x1c0) = 0;
    }
    else if (uVar3 == 2) {
      *(undefined4 *)(param_1 + 0x1bc) = 2;
      *(undefined4 *)(param_1 + 0x1c0) = 0;
      *(undefined4 *)(param_1 + 0x1c8) = 1;
    }
    else if (uVar3 == 3) {
      FUN_00374428(param_1);
    }
    *(uint *)(param_1 + 0x1c4) = uVar3;
  }
  return;
}
