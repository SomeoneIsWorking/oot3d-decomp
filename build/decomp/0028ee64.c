// OoT3D decomp @ 0028ee64  name=FUN_0028ee64  size=88

void FUN_0028ee64(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;

  FUN_0032a998(param_1,3);
  FUN_003291f4(param_1,param_2);
  psVar2 = (short *)0x0;
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    psVar2 = *(short **)(param_2 + 0x22e8);
  }
  if ((psVar2 != (short *)0x0) && (*psVar2 == 2)) {
    *(undefined4 *)(param_1 + 0x1bc) = 10;
  }
  return;
}
