// OoT3D decomp @ 0033430c  name=FUN_0033430c  size=68

void FUN_0033430c(int param_1,int param_2)

{
  if (*(char *)(param_2 + 0x100) == '\x03') {
    FUN_0036c494(param_2,1,DAT_00334350);
    FUN_002e7248(0x1e);
    *(undefined1 *)(param_1 + 0x16ec) = 1;
    *(undefined4 *)(param_1 + 0x170c) = 0x1e;
  }
  return;
}
