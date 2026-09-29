// OoT3D decomp @ 0034f6b8  name=thunk_FUN_00350be0  size=4

void thunk_FUN_00350be0(int param_1)

{
  if (*(int *)(param_1 + 0x28) != 0) {
    *(undefined4 *)(param_1 + 0x20) = 0;
  }
  if (*(char *)(param_1 + 0x82) != '\0') {
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x78));
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x7c));
  }
  *(undefined4 *)(param_1 + 0x78) = 0;
  *(undefined4 *)(param_1 + 0x7c) = 0;
  *(undefined1 *)(param_1 + 0x82) = 0;
  if (*(int **)(param_1 + 0x28) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x28) + 4))();
    *(undefined4 *)(param_1 + 0x28) = 0;
  }
  if (*(char *)(param_1 + 0x77) == '\x01') {
    *(int *)(DAT_00350c64 + 8) = *(int *)(DAT_00350c64 + 8) + -1;
  }
  *(undefined1 *)(param_1 + 0x77) = 0;
  return;
}
