// OoT3D decomp @ 0034775c  name=FUN_0034775c  size=24

void FUN_0034775c(int param_1,undefined4 param_2)

{
  *(undefined4 *)(param_1 + 0x20) = param_2;
  if (*(int *)(param_1 + 0x28) != 0) {
    FUN_00347774();
    return;
  }
  return;
}
