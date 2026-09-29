// OoT3D decomp @ 002e75d0  name=FUN_002e75d0  size=212

void FUN_002e75d0(int param_1)

{
  int iVar1;

  if (*(int *)(param_1 + 8) == 7) {
    if (*(char *)(param_1 + 7) == '\x01') {
      *(undefined4 *)(param_1 + 8) = 8;
      *(undefined1 *)(param_1 + 5) = 4;
                    /* WARNING: Could not recover jumptable at 0x002e7614. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(**(int **)(param_1 + 0x9a8) + 0x10))();
      return;
    }
  }
  else {
    if (*(int *)(param_1 + 8) != 8) {
      return;
    }
    if (*(char *)(param_1 + 7) == '\0') {
      *(undefined4 *)(param_1 + 8) = 3;
      *(undefined1 *)(param_1 + 5) = 5;
      *(undefined4 *)(param_1 + 0xc) = 0;
      FUN_002e74e4();
      if (((*DAT_002e76a4 & 1) == 0) && (iVar1 = FUN_003679b4(DAT_002e76a4), iVar1 != 0)) {
        FUN_0036788c(DAT_002e76a8);
      }
      *(undefined1 *)(DAT_002e76b4 + 0x21) = 1;
      return;
    }
  }
  *(undefined4 *)(param_1 + 8) = 10;
  *(undefined4 *)(param_1 + 0x10) = 10;
  return;
}
