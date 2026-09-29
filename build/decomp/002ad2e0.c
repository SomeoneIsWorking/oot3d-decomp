// OoT3D decomp @ 002ad2e0  name=FUN_002ad2e0  size=212

void FUN_002ad2e0(int param_1,int param_2)

{
  (**(code **)(param_1 + 0x1a4))();
  if (*(int *)(param_1 + 0x1a4) == DAT_002ad40c) {
    *(undefined4 *)(param_1 + 0x140) = 0;
  }
  else {
    *(undefined4 *)(param_1 + 0x140) = DAT_002ad410;
    if (((*(char *)(param_1 + 0x1a8) == '\0') || (DAT_002ad414 <= (int)*(uint *)(param_1 + 0xf4)))
       || (DAT_002ad418 <= *(uint *)(param_1 + 0xf4))) {
      *(undefined1 *)(param_1 + 0x1a8) = 1;
      return;
    }
    if ((*(uint *)(DAT_002ad41c + param_2) & 4) != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_003759d0();
    }
  }
  return;
}
