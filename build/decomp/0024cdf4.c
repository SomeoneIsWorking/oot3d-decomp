// OoT3D decomp @ 0024cdf4  name=FUN_0024cdf4  size=140

void FUN_0024cdf4(int param_1,int param_2)

{
  short *psVar1;
  bool bVar2;
  undefined8 uVar3;

  uVar3 = FUN_0037571c(param_2);
  psVar1 = (short *)((ulonglong)uVar3 >> 0x20);
  bVar2 = (int)uVar3 != 0;
  if (bVar2) {
    psVar1 = *(short **)(&DAT_000022e0 + param_2);
  }
  if ((bVar2 && psVar1 != (short *)0x0) && (*psVar1 == 2)) {
    *(undefined4 *)(param_1 + 0xce8) = 2;
    *(undefined4 *)(param_1 + 0xcec) = 1;
    FUN_0036aa20(*(undefined4 *)(param_1 + 0x28),*(undefined4 *)(param_1 + 0x2c),
                 *(undefined4 *)(param_1 + 0x30),param_2 + 0x208c,param_1,param_2,0x5d,0,0,0,2);
  }
  return;
}
