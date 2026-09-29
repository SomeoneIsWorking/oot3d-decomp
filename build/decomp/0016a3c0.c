// OoT3D decomp @ 0016a3c0  name=FUN_0016a3c0  size=60

void FUN_0016a3c0(int param_1,undefined4 param_2)

{
  FUN_00350b88(param_2,param_1 + 0x4c0);
  FUN_003508b8(param_1,*(undefined4 *)(param_1 + 0x534),0);
  FUN_003685a0(param_1 + 0x53c);
  if (*(int *)(param_1 + 0x1d8) != 0) {
    *(undefined4 *)(param_1 + 0x1d0) = 0;
  }
  if (*(char *)(param_1 + 0x232) != '\0') {
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x228));
    FUN_0034fc6c(*(undefined4 *)(param_1 + 0x22c));
  }
  *(undefined4 *)(param_1 + 0x228) = 0;
  *(undefined4 *)(param_1 + 0x22c) = 0;
  *(undefined1 *)(param_1 + 0x232) = 0;
  if (*(int **)(param_1 + 0x1d8) != (int *)0x0) {
    (**(code **)(**(int **)(param_1 + 0x1d8) + 4))();
    *(undefined4 *)(param_1 + 0x1d8) = 0;
  }
  if (*(char *)(param_1 + 0x227) == '\x01') {
    *(int *)(DAT_00350c64 + 8) = *(int *)(DAT_00350c64 + 8) + -1;
  }
  *(undefined1 *)(param_1 + 0x227) = 0;
  return;
}
