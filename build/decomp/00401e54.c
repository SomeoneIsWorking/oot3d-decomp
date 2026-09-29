// OoT3D decomp @ 00401e54  name=FUN_00401e54  size=128

int FUN_00401e54(int param_1)

{
  if (*(char *)(param_1 + 0x70) == '\0') {
    FUN_003123c0();
  }
  if (*(int *)(param_1 + 0x6c) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x6c) = 0;
  }
  FUN_0030e324(param_1 + 0x38);
  if (*(int *)(param_1 + 0x4c) != 0) {
    software_interrupt(0x23);
    *(undefined4 *)(param_1 + 0x4c) = 0;
  }
  if (*(int *)(param_1 + 0x30) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x30) = 0;
  }
  if (*(int *)(param_1 + 0x2c) != 0) {
    software_interrupt(0x23);
    *(int *)(param_1 + 0x2c) = 0;
  }
  return param_1;
}
