// OoT3D decomp @ 00408aac  name=FUN_00408aac  size=132

void FUN_00408aac(int param_1)

{
  if (*(int *)(param_1 + 0x38) != 0) {
    *(undefined4 *)(param_1 + 0x30) = 0;
  }
  if (*(char *)(param_1 + 0x92) != '\0') {
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x88));
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x8c));
  }
  *(undefined4 *)(param_1 + 0x88) = 0;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x92) = 0;
  if (*(int **)(param_1 + 0x38) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x38) + 4))();
    *(undefined4 *)(param_1 + 0x38) = 0;
  }
  if (*(char *)(param_1 + 0x87) == '\x01') {
    *(int *)(DAT_00408b30 + 8) = *(int *)(DAT_00408b30 + 8) + -1;
  }
  *(undefined1 *)(param_1 + 0x87) = 0;
  return;
}
