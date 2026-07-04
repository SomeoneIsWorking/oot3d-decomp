// OoT3D decomp @ 002ac1f8  name=FUN_002ac1f8  size=120

void FUN_002ac1f8(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  FUN_00350b88(param_2,param_1 + 0x1a8,param_3,param_4,param_4);
  FUN_00350f34(param_1,param_1 + 0x220,0);
  FUN_00350f34(param_1,param_1 + 0x224,param_1 + 0x228,param_1 + 0x22c,0);
  if (*(int *)(param_1 + 0x230) != 0) {
    (**(code **)(*(int *)*UNK_002ac270 + 0x10))((int *)*UNK_002ac270,*(int *)(param_1 + 0x230));
  }
  *(undefined4 *)(param_1 + 0x230) = 0;
  return;
}

