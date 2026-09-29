// OoT3D decomp @ 004662b4  name=FUN_004662b4  size=92

int FUN_004662b4(int param_1)

{
  if (*(char *)(param_1 + 0x1c) == '\0') {
    FUN_003123c0();
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x18) = 0;
  }
  if (*(char *)(param_1 + 0x14) == '\0') {
    FUN_003123c0();
  }
  if (*(int *)(param_1 + 0x10) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x10) = 0;
  }
  return param_1;
}
