// OoT3D decomp @ 0026db7c  name=FUN_0026db7c  size=140

void FUN_0026db7c(int param_1,int param_2)

{
  short *psVar1;
  bool bVar2;
  undefined8 uVar3;

  uVar3 = FUN_0037571c(param_2);
  psVar1 = (short *)((ulonglong)uVar3 >> 0x20);
  bVar2 = (int)uVar3 != 0;
  if (bVar2) {
    psVar1 = *(short **)(param_2 + 0x22e8);
  }
  if ((bVar2 && psVar1 != (short *)0x0) && (*psVar1 == 2)) {
    *(undefined4 *)(param_1 + 0xdb8) = 2;
    *(undefined4 *)(param_1 + 0xdbc) = 1;
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x5d,0,0,0,2);
  }
  return;
}
