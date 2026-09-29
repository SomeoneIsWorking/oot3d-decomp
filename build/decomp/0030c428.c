// OoT3D decomp @ 0030c428  name=FUN_0030c428  size=72

void FUN_0030c428(int param_1)

{
  if (*(char *)(param_1 + 0x168) != '\0') {
    if ((*(uint *)(param_1 + 0x154) & 0xfffffffe) != 0) {
      FUN_0030d614(*(uint *)(param_1 + 0x154) & 0xfffffffe);
      *(undefined4 *)(param_1 + 0x154) = 0;
    }
    FUN_0030c488(param_1 + 0x10c);
    *(undefined1 *)(param_1 + 0x168) = 0;
  }
  *(undefined4 *)(param_1 + 4) = 0;
  *(undefined1 *)(param_1 + 8) = 0x2f;
  *(undefined1 *)(param_1 + 9) = 0;
  return;
}
