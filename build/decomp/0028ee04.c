// OoT3D decomp @ 0028ee04  name=FUN_0028ee04  size=96

void FUN_0028ee04(int param_1,int param_2)

{
  int iVar1;
  short *psVar2;

  FUN_0032a5d0();
  FUN_0032a998(param_1,2);
  FUN_00329d0c(param_1,param_2);
  psVar2 = (short *)0x0;
  iVar1 = FUN_0037571c(param_2);
  if (iVar1 != 0) {
    psVar2 = *(short **)(&DAT_000022e4 + param_2);
  }
  if ((psVar2 != (short *)0x0) && (*psVar2 == 2)) {
    *(undefined4 *)(param_1 + 0x1bc) = 9;
  }
  return;
}
