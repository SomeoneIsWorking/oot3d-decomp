// OoT3D decomp @ 00407de4  name=FUN_00407de4  size=80

void FUN_00407de4(int param_1)

{
  if (*(char *)(param_1 + 0xca) == '\0') {
    if (*(char *)(param_1 + 0x90) != '\x04') {
      if ((*(int *)(param_1 + 0x134) != 0) && (*(char *)(param_1 + 0xc9) == '\0')) {
        FUN_00308b80(*(int *)(param_1 + 0x134),1);
      }
      *(undefined1 *)(param_1 + 0x90) = 4;
    }
    *(undefined1 *)(param_1 + 0xc5) = 0;
  }
  return;
}
