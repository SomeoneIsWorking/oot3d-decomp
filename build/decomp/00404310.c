// OoT3D decomp @ 00404310  name=FUN_00404310  size=44

void FUN_00404310(int param_1)

{
  if (*(int *)(param_1 + 0x70) < *(int *)(param_1 + 0x6c)) {
    *(int *)(param_1 + 0x70) = *(int *)(param_1 + 0x70) + 1;
  }
  if (*(int *)(param_1 + 0xac) < *(int *)(param_1 + 0xa8)) {
    *(int *)(param_1 + 0xac) = *(int *)(param_1 + 0xac) + 1;
  }
  return;
}
