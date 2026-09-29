// OoT3D decomp @ 00350bc0  name=FUN_00350bc0  size=32

void FUN_00350bc0(int param_1)

{
  FUN_003508b8(param_1,*(undefined4 *)(param_1 + 0x448),0);
  if (*(int *)(param_1 + 0x1cc) != 0) {
    *(undefined4 *)(param_1 + 0x1c4) = 0;
  }
  if (*(char *)(param_1 + 0x226) != '\0') {
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x21c));
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x220));
  }
  *(undefined4 *)(param_1 + 0x21c) = 0;
  *(undefined4 *)(param_1 + 0x220) = 0;
  *(undefined1 *)(param_1 + 0x226) = 0;
  if (*(int **)(param_1 + 0x1cc) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1cc) + 4))();
    *(undefined4 *)(param_1 + 0x1cc) = 0;
  }
  if (*(char *)(param_1 + 0x21b) == '\x01') {
    *(int *)(DAT_00350c64 + 8) = *(int *)(DAT_00350c64 + 8) + -1;
  }
  *(undefined1 *)(param_1 + 0x21b) = 0;
  return;
}
