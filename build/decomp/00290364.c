// OoT3D decomp @ 00290364  name=FUN_00290364  size=40

void FUN_00290364(undefined4 param_1,undefined4 param_2,int param_3)

{
  short sVar1;

  if ((int)*(short *)(param_3 + 0x60) - 0x11U < 4) {
    sVar1 = 0x14 - *(short *)(param_3 + 0x60);
  }
  else {
    sVar1 = 3;
  }
  *(short *)(param_3 + 0x46) = sVar1;
                    /* WARNING: Subroutine does not return */
  FUN_003759d0();
}
