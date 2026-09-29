// OoT3D decomp @ 00481a84  name=FUN_00481a84  size=60

uint FUN_00481a84(int param_1,uint param_2)

{
  uint uVar1;

  uVar1 = 0;
  if (param_1 != 0 || (param_2 & 0xfffff) != 0) {
    uVar1 = 4;
  }
  if ((param_2 << 1) >> 0x15 != 0) {
    uVar1 = uVar1 | 1;
  }
  if (DAT_00481ac0 == (param_2 << 1) >> 0x15) {
    uVar1 = uVar1 | 2;
  }
  if (uVar1 == 1) {
    uVar1 = 5;
  }
  return uVar1;
}
