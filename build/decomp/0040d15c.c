// OoT3D decomp @ 0040d15c  name=FUN_0040d15c  size=76

void FUN_0040d15c(int param_1,undefined4 param_2)

{
  uint uVar1;

  uVar1 = 0;
  do {
    if (*(char *)(param_1 + uVar1 + 0x164) != '\0') {
      param_2 = func_0x0040d1a8(param_1 + uVar1 * 0x2c + 4,param_2);
    }
    uVar1 = uVar1 + 1;
  } while (uVar1 < 8);
  return;
}
