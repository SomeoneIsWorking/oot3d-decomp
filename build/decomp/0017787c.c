// OoT3D decomp @ 0017787c  name=FUN_0017787c  size=140

void FUN_0017787c(int param_1,int param_2)

{
  short *psVar1;

  if (*(short *)(param_1 + 0xd28) != 0) {
    return;
  }
  FUN_0036e980(param_2,param_1,7);
  *(undefined1 *)(DAT_00177908 + param_2) = 0;
  psVar1 = *(short **)(DAT_0017790c + param_2);
  do {
    if (psVar1 == (short *)0x0) {
LAB_001778ec:
      FUN_0036beac(param_2,0x38);
      FUN_00374428(param_1);
      return;
    }
    if (*psVar1 == DAT_00177910) {
      FUN_00374428();
      goto LAB_001778ec;
    }
    psVar1 = *(short **)(psVar1 + 0x98);
  } while( true );
}
