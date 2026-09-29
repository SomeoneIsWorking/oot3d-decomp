// OoT3D decomp @ 002d78d0  name=FUN_002d78d0  size=92

void FUN_002d78d0(int param_1,int param_2)

{
  if (*(char *)(param_1 + 0xf38) == '\0') {
    if (param_2 < 0) {
      FUN_003445a8(param_1 + 0xee4);
      return;
    }
  }
  else {
    *(int *)(param_1 + 0xfa4) = param_2 + 1;
    *(undefined1 *)(param_1 + 0xf38) = 0xe;
    if (param_2 < 0) {
      FUN_002cd030(DAT_002d792c);
      FUN_003445a8(param_1 + 0xee4);
      return;
    }
  }
  return;
}
