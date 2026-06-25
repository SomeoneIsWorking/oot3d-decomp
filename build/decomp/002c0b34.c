// OoT3D decomp @ 002c0b34  name=FUN_002c0b34  size=52

uint FUN_002c0b34(int param_1)

{
  uint uVar1;
  
  uVar1 = param_1 << 9;
  if (uVar1 != 0) {
    uVar1 = 4;
  }
  if ((uint)(param_1 << 1) >> 0x18 != 0) {
    uVar1 = uVar1 | 1;
  }
  if ((~(param_1 << 1) & 0xff000000U) == 0) {
    uVar1 = uVar1 | 2;
  }
  if (uVar1 == 1) {
    uVar1 = 5;
  }
  return uVar1;
}

