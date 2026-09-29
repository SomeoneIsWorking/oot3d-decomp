// OoT3D decomp @ 00307ac0  name=FUN_00307ac0  size=52

uint FUN_00307ac0(uint param_1)

{
  uint uVar1;
  bool bVar2;

  bVar2 = (param_1 & 0x7fffffff) != 0;
  uVar1 = 0;
  if (bVar2) {
    uVar1 = param_1 << 1;
  }
  if (bVar2) {
    uVar1 = (uVar1 >> 0x18) - 0x40;
  }
  if ((int)uVar1 < 0) {
    uVar1 = (param_1 >> 0x1f) << 0x17;
  }
  else {
    uVar1 = (param_1 << 9) >> 0x10 | uVar1 << 0x10 | (param_1 >> 0x1f) << 0x17;
  }
  return uVar1;
}
