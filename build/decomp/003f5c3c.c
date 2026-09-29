// OoT3D decomp @ 003f5c3c  name=FUN_003f5c3c  size=244

void FUN_003f5c3c(int param_1,int param_2)

{
  short sVar1;

  if (((*(byte *)(param_1 + 0x1b9) & 2) == 0) && (*(short *)(param_1 + 0x21c) < 1)) {
    FUN_00376168(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
    FUN_003762a4(param_2,param_2 + 0x5c78,param_1 + 0x1a8);
  }
  else if ((**(uint **)(param_1 + 0x1ec) & 8) == 0) {
    *(byte *)(param_1 + 0x1b9) = *(byte *)(param_1 + 0x1b9) & 0xfd;
  }
  else {
    if (*(short *)(param_1 + 0x21c) == 0) {
      FUN_00371808(param_2,DAT_003f5ec0,0xffffff9d,param_1,0);
    }
    sVar1 = *(short *)(param_1 + 0x21c) + 1;
    *(short *)(param_1 + 0x21c) = sVar1;
    if (10 < sVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  return;
}
