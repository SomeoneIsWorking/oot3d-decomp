// OoT3D decomp @ 002e6998  name=FUN_002e6998  size=56

void FUN_002e6998(int param_1)

{
  FUN_00306994();
  if (*(char *)(param_1 + 4) != '\0') {
    FUN_002e69d0();
    *(undefined4 *)(param_1 + 8) = 0xffffffff;
    *(undefined4 *)(param_1 + 0xc) = 0xffffffff;
    *(undefined1 *)(param_1 + 4) = 0;
    *(undefined4 *)(param_1 + 0x10) = 0;
  }
  return;
}
