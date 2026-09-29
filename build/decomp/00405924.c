// OoT3D decomp @ 00405924  name=FUN_00405924  size=44

void FUN_00405924(int param_1)

{
  if (*(char *)(param_1 + 0x1e8) != '\0') {
    *(undefined1 *)(param_1 + 0x1eb) = 1;
    FUN_0030e0b4();
    *(undefined1 *)(param_1 + 0x1e8) = 0;
  }
  return;
}
