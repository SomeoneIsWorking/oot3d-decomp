// OoT3D decomp @ 002ea278  name=FUN_002ea278  size=28

void FUN_002ea278(int param_1,undefined4 param_2)

{
  undefined4 uVar1;

  *(undefined4 *)(param_1 + 4) = param_2;
  uVar1 = FUN_003046b8(param_2);
  *(undefined4 *)(param_1 + 0x108) = uVar1;
  return;
}
