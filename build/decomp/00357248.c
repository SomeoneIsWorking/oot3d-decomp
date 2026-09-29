// OoT3D decomp @ 00357248  name=FUN_00357248  size=76

void FUN_00357248(int *param_1)

{
  if (param_1 != (int *)0x0) {
    if (*param_1 != 0) {
      *(int *)(DAT_00357294 + 0xc) = *(int *)(DAT_00357294 + 0xc) + -1;
      if ((int *)*param_1 != (int *)0x0) {
        (**(code **)(*(int *)*param_1 + 4))();
      }
      *param_1 = 0;
    }
    return;
  }
  return;
}
