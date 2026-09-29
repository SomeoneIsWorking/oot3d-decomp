// OoT3D decomp @ 0027cf14  name=FUN_0027cf14  size=136

void FUN_0027cf14(int param_1,int param_2)

{
  uint uVar1;
  ushort *puVar2;
  bool bVar3;
  undefined8 uVar4;

  uVar4 = FUN_0037571c(param_2);
  puVar2 = (ushort *)((ulonglong)uVar4 >> 0x20);
  uVar1 = (uint)uVar4;
  bVar3 = uVar1 != 0;
  if (bVar3) {
    puVar2 = *(ushort **)(&DAT_000022e4 + param_2);
  }
  if (bVar3 && puVar2 != (ushort *)0x0) {
    uVar1 = (uint)*puVar2;
  }
  if ((bVar3 && puVar2 != (ushort *)0x0) && uVar1 != 1) {
    *(undefined4 *)(param_1 + 0x3fc) = 2;
    *(undefined4 *)(param_1 + 0x400) = 1;
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x5d,0,0,0,2);
  }
  return;
}
